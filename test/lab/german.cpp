/******************************
  Program "./lab/german.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Sep  1 2022"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Sep  1 2022"
#define PROTOCOL_NAME "./lab/german"
#define BITS_IN_WORLD 1640
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_NODE: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_NODE& val) { return mu__byte::operator=((int) val); };
  mu_1_NODE (const char *name, int os): mu__byte(1, 20, 5, name, os) {};
  mu_1_NODE (void): mu__byte(1, 20, 5) {};
  mu_1_NODE (int val): mu__byte(1, 20, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_NODE mu_1_NODE_undefined_var;

class mu_1_DATA: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_DATA& val) { return mu__byte::operator=((int) val); };
  mu_1_DATA (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_DATA (void): mu__byte(1, 2, 2) {};
  mu_1_DATA (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_DATA mu_1_DATA_undefined_var;

class mu_1_CACHE_STATE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_CACHE_STATE& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_CACHE_STATE& val)
  {
    if (val.defined())
      return ( s << mu_1_CACHE_STATE::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_CACHE_STATE (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_CACHE_STATE (void): mu__byte(1, 3, 2) {};
  mu_1_CACHE_STATE (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined()){
      cout << name << ":" << values[ value() -1] << '\n';
attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_CACHE_STATE::values[] = {"I","S","E",NULL };

/*** end of enum declaration ***/
mu_1_CACHE_STATE mu_1_CACHE_STATE_undefined_var;

class mu_1_CACHE
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_CACHE_STATE mu_State;
  mu_1_DATA mu_Data;
  mu_1_CACHE ( const char *n, int os ) { set_self(n,os); };
  mu_1_CACHE ( void ) {};

  virtual ~mu_1_CACHE(); 
friend int CompareWeight(mu_1_CACHE& a, mu_1_CACHE& b)
  {
    int w;
    w = CompareWeight(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_CACHE& a, mu_1_CACHE& b)
  {
    int w;
    w = Compare(a.mu_State, b.mu_State);
    if (w!=0) return w;
    w = Compare(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_State.MultisetSort();
    mu_Data.MultisetSort();
  }
  void print_statistic()
  {
    mu_State.print_statistic();
    mu_Data.print_statistic();
  }
  void clear() {
    mu_State.clear();
    mu_Data.clear();
 };
  void undefine() {
    mu_State.undefine();
    mu_Data.undefine();
 };
  void reset() {
    mu_State.reset();
    mu_Data.reset();
 };
  void print() {
    mu_State.print();
    mu_Data.print();
  };
  void print_diff(state *prevstate) {
    mu_State.print_diff(prevstate);
    mu_Data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_State.to_state(thestate);
    mu_Data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_CACHE& operator= (const mu_1_CACHE& from) {
    mu_State.value(from.mu_State.value());
    mu_Data.value(from.mu_Data.value());
    return *this;
  };
};

  void mu_1_CACHE::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_CACHE::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_CACHE::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_State.set_self_2(name, ".State", os + 0 ); else mu_State.set_self_2(NULL, NULL, 0);
  if (name) mu_Data.set_self_2(name, ".Data", os + 8 ); else mu_Data.set_self_2(NULL, NULL, 0);
}

mu_1_CACHE::~mu_1_CACHE()
{
}

/*** end record declaration ***/
mu_1_CACHE mu_1_CACHE_undefined_var;

class mu_1_MSG_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MSG_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MSG_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_MSG_CMD::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_MSG_CMD (const char *name, int os): mu__byte(4, 10, 3, name, os) {};
  mu_1_MSG_CMD (void): mu__byte(4, 10, 3) {};
  mu_1_MSG_CMD (int val): mu__byte(4, 10, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -4]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined()){
      cout << name << ":" << values[ value() -4] << '\n';
attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_MSG_CMD::values[] = {"Empty","ReqS","ReqE","Inv","InvAck","GntS","GntE",NULL };

/*** end of enum declaration ***/
mu_1_MSG_CMD mu_1_MSG_CMD_undefined_var;

class mu_1_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MSG_CMD mu_Cmd;
  mu_1_DATA mu_Data;
  mu_1_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_MSG ( void ) {};

  virtual ~mu_1_MSG(); 
friend int CompareWeight(mu_1_MSG& a, mu_1_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MSG& a, mu_1_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = Compare(a.mu_Data, b.mu_Data);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Cmd.MultisetSort();
    mu_Data.MultisetSort();
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
    mu_Data.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
    mu_Data.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
    mu_Data.undefine();
 };
  void reset() {
    mu_Cmd.reset();
    mu_Data.reset();
 };
  void print() {
    mu_Cmd.print();
    mu_Data.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
    mu_Data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
    mu_Data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MSG& operator= (const mu_1_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    mu_Data.value(from.mu_Data.value());
    return *this;
  };
};

  void mu_1_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
  if (name) mu_Data.set_self_2(name, ".Data", os + 8 ); else mu_Data.set_self_2(NULL, NULL, 0);
}

mu_1_MSG::~mu_1_MSG()
{
}

/*** end record declaration ***/
mu_1_MSG mu_1_MSG_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_CACHE array[ 20 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_CACHE& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 20 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 20; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<20; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<20; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 20; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 20; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 20; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 20; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 20; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 20; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 20; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_MSG array[ 20 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 20 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 20; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<20; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<20; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 20; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 20; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 20; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 20; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 20; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 20; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 20; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_MSG array[ 20 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 20 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 20; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<20; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<20; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 20; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 20; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 20; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 20; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 20; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 20; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 20; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_MSG array[ 20 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 20 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 20; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<20; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<20; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 20; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 20; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 20; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 20; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 20; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 20; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 20; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 16 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_0_boolean array[ 20 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 20 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 20; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<20; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<20; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 20; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 20; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 20; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 20; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 20; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 20; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 20; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_0_boolean array[ 20 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 20 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 20; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<20; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<20; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<20; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 20; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 20; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 20; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 20; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 20; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 20; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 20; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

const int mu_NODE_NUM = 20;
const int mu_DATA_NUM = 2;
const int mu_I = 1;
const int mu_S = 2;
const int mu_E = 3;
const int mu_Empty = 4;
const int mu_ReqS = 5;
const int mu_ReqE = 6;
const int mu_Inv = 7;
const int mu_InvAck = 8;
const int mu_GntS = 9;
const int mu_GntE = 10;
/*** Variable declaration ***/
mu_1__type_0 mu_Cache("Cache",0);

/*** Variable declaration ***/
mu_1__type_1 mu_Chan1("Chan1",320);

/*** Variable declaration ***/
mu_1__type_2 mu_Chan2("Chan2",640);

/*** Variable declaration ***/
mu_1__type_3 mu_Chan3("Chan3",960);

/*** Variable declaration ***/
mu_1__type_4 mu_InvSet("InvSet",1280);

/*** Variable declaration ***/
mu_1__type_5 mu_ShrSet("ShrSet",1440);

/*** Variable declaration ***/
mu_0_boolean mu_ExGntd("ExGntd",1600);

/*** Variable declaration ***/
mu_1_MSG_CMD mu_CurCmd("CurCmd",1608);

/*** Variable declaration ***/
mu_1_NODE mu_CurPtr("CurPtr",1616);

/*** Variable declaration ***/
mu_1_DATA mu_MemData("MemData",1624);

/*** Variable declaration ***/
mu_1_DATA mu_AuxData("AuxData",1632);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_Cache.clear();
  mu_Chan1.clear();
  mu_Chan2.clear();
  mu_Chan3.clear();
  mu_InvSet.clear();
  mu_ShrSet.clear();
  mu_ExGntd.clear();
  mu_CurCmd.clear();
  mu_CurPtr.clear();
  mu_MemData.clear();
  mu_AuxData.clear();
}
void world_class::undefine()
{
  mu_Cache.undefine();
  mu_Chan1.undefine();
  mu_Chan2.undefine();
  mu_Chan3.undefine();
  mu_InvSet.undefine();
  mu_ShrSet.undefine();
  mu_ExGntd.undefine();
  mu_CurCmd.undefine();
  mu_CurPtr.undefine();
  mu_MemData.undefine();
  mu_AuxData.undefine();
}
void world_class::reset()
{
  mu_Cache.reset();
  mu_Chan1.reset();
  mu_Chan2.reset();
  mu_Chan3.reset();
  mu_InvSet.reset();
  mu_ShrSet.reset();
  mu_ExGntd.reset();
  mu_CurCmd.reset();
  mu_CurPtr.reset();
  mu_MemData.reset();
  mu_AuxData.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Cache.print();
  mu_Chan1.print();
  mu_Chan2.print();
  mu_Chan3.print();
  mu_InvSet.print();
  mu_ShrSet.print();
  mu_ExGntd.print();
  mu_CurCmd.print();
  mu_CurPtr.print();
  mu_MemData.print();
  mu_AuxData.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Cache.print_statistic();
  mu_Chan1.print_statistic();
  mu_Chan2.print_statistic();
  mu_Chan3.print_statistic();
  mu_InvSet.print_statistic();
  mu_ShrSet.print_statistic();
  mu_ExGntd.print_statistic();
  mu_CurCmd.print_statistic();
  mu_CurPtr.print_statistic();
  mu_MemData.print_statistic();
  mu_AuxData.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_Cache.print_diff(prevstate);
    mu_Chan1.print_diff(prevstate);
    mu_Chan2.print_diff(prevstate);
    mu_Chan3.print_diff(prevstate);
    mu_InvSet.print_diff(prevstate);
    mu_ShrSet.print_diff(prevstate);
    mu_ExGntd.print_diff(prevstate);
    mu_CurCmd.print_diff(prevstate);
    mu_CurPtr.print_diff(prevstate);
    mu_MemData.print_diff(prevstate);
    mu_AuxData.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_Cache.to_state( newstate );
  mu_Chan1.to_state( newstate );
  mu_Chan2.to_state( newstate );
  mu_Chan3.to_state( newstate );
  mu_InvSet.to_state( newstate );
  mu_ShrSet.to_state( newstate );
  mu_ExGntd.to_state( newstate );
  mu_CurCmd.to_state( newstate );
  mu_CurPtr.to_state( newstate );
  mu_MemData.to_state( newstate );
  mu_AuxData.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("RecvInvAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr6;
  if (!((mu_Chan3[mu_i].mu_Cmd) == (mu_InvAck))) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = ((mu_CurCmd) != (mu_Empty)) ; 
}
    return mu__boolexpr6;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 20 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr7;
  if (!((mu_Chan3[mu_i].mu_Cmd) == (mu_InvAck))) mu__boolexpr7 = FALSE ;
  else {
  mu__boolexpr7 = ((mu_CurCmd) != (mu_Empty)) ; 
}
	      if (mu__boolexpr7) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Chan3[mu_i].mu_Cmd = mu_Empty;
mu_ShrSet[mu_i] = mu_false;
if ( (mu_ExGntd) == (mu_true) )
{
mu_ExGntd = mu_false;
mu_MemData = mu_Chan3[mu_i].mu_Data;
}
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("SendInvAck, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr8;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Inv))) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = ((mu_Chan3[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
    return mu__boolexpr8;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 20;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 40 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr9;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Inv))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_Chan3[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
	      if (mu__boolexpr9) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 20;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
mu_Chan3[mu_i].mu_Cmd = mu_InvAck;
if ( (mu_Cache[mu_i].mu_State) == (mu_E) )
{
mu_Chan3[mu_i].mu_Data = mu_Cache[mu_i].mu_Data;
}
mu_Cache[mu_i].mu_State = mu_I;
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("RecvGntE, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return (mu_Chan2[mu_i].mu_Cmd) == (mu_GntE);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 40;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 60 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Chan2[mu_i].mu_Cmd) == (mu_GntE)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 40;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Cache[mu_i].mu_State = mu_E;
mu_Cache[mu_i].mu_Data = mu_Chan2[mu_i].mu_Data;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("RecvGntS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return (mu_Chan2[mu_i].mu_Cmd) == (mu_GntS);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 60;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 80 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Chan2[mu_i].mu_Cmd) == (mu_GntS)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 60;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Cache[mu_i].mu_State = mu_S;
mu_Cache[mu_i].mu_Data = mu_Chan2[mu_i].mu_Data;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("SendGntE, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr10;
bool mu__boolexpr11;
bool mu__boolexpr12;
bool mu__boolexpr13;
  if (!((mu_CurCmd) == (mu_ReqE))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr12)) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_ExGntd) == (mu_false)) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
bool mu__quant14; 
mu__quant14 = TRUE;
{
for(int mu_j = 1; mu_j <= 20; mu_j++) {
if ( !((mu_ShrSet[mu_j]) == (mu_false)) )
  { mu__quant14 = FALSE; break; }
};
};
  mu__boolexpr10 = (mu__quant14) ; 
}
    return mu__boolexpr10;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 80;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 100 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
  if (!((mu_CurCmd) == (mu_ReqE))) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_ExGntd) == (mu_false)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
bool mu__quant19; 
mu__quant19 = TRUE;
{
for(int mu_j = 1; mu_j <= 20; mu_j++) {
if ( !((mu_ShrSet[mu_j]) == (mu_false)) )
  { mu__quant19 = FALSE; break; }
};
};
  mu__boolexpr15 = (mu__quant19) ; 
}
	      if (mu__boolexpr15) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 80;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Chan2[mu_i].mu_Cmd = mu_GntE;
if (mu_MemData.isundefined())
  mu_Chan2[mu_i].mu_Data.undefine();
else
  mu_Chan2[mu_i].mu_Data = mu_MemData;
mu_ShrSet[mu_i] = mu_true;
mu_ExGntd = mu_true;
mu_CurCmd = mu_Empty;
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("SendGntS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!((mu_CurCmd) == (mu_ReqS))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_ExGntd) == (mu_false)) ; 
}
    return mu__boolexpr20;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 100;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 120 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_CurCmd) == (mu_ReqS))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_CurPtr) == (mu_i)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_ExGntd) == (mu_false)) ; 
}
	      if (mu__boolexpr23) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 100;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Chan2[mu_i].mu_Cmd = mu_GntS;
if (mu_MemData.isundefined())
  mu_Chan2[mu_i].mu_Data.undefine();
else
  mu_Chan2[mu_i].mu_Data = mu_MemData;
mu_ShrSet[mu_i] = mu_true;
mu_CurCmd = mu_Empty;
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("SendInv, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_InvSet[mu_i]) == (mu_true)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
bool mu__boolexpr28;
  if ((mu_CurCmd) == (mu_ReqE)) mu__boolexpr28 = TRUE ;
  else {
bool mu__boolexpr29;
  if (!((mu_CurCmd) == (mu_ReqS))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_ExGntd) == (mu_true)) ; 
}
  mu__boolexpr28 = (mu__boolexpr29) ; 
}
  mu__boolexpr26 = (mu__boolexpr28) ; 
}
    return mu__boolexpr26;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 120;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 140 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr30;
bool mu__boolexpr31;
  if (!((mu_Chan2[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_InvSet[mu_i]) == (mu_true)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
bool mu__boolexpr32;
  if ((mu_CurCmd) == (mu_ReqE)) mu__boolexpr32 = TRUE ;
  else {
bool mu__boolexpr33;
  if (!((mu_CurCmd) == (mu_ReqS))) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_ExGntd) == (mu_true)) ; 
}
  mu__boolexpr32 = (mu__boolexpr33) ; 
}
  mu__boolexpr30 = (mu__boolexpr32) ; 
}
	      if (mu__boolexpr30) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 120;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Chan2[mu_i].mu_Cmd = mu_Inv;
mu_InvSet[mu_i] = mu_false;
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("RecvReqE, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr34;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqE)) ; 
}
    return mu__boolexpr34;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 140;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 160 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr35;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqE)) ; 
}
	      if (mu__boolexpr35) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 140;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_CurCmd = mu_ReqE;
mu_CurPtr = mu_i;
mu_Chan1[mu_i].mu_Cmd = mu_Empty;
{
for(int mu_j = 1; mu_j <= 20; mu_j++) {
mu_InvSet[mu_j] = mu_ShrSet[mu_j];
};
};
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("RecvReqS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr36;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqS)) ; 
}
    return mu__boolexpr36;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 160;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 180 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr37;
  if (!((mu_CurCmd) == (mu_Empty))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_Chan1[mu_i].mu_Cmd) == (mu_ReqS)) ; 
}
	      if (mu__boolexpr37) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 160;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_CurCmd = mu_ReqS;
mu_CurPtr = mu_i;
mu_Chan1[mu_i].mu_Cmd = mu_Empty;
{
for(int mu_j = 1; mu_j <= 20; mu_j++) {
mu_InvSet[mu_j] = mu_ShrSet[mu_j];
};
};
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("SendReqE, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr38;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr38 = FALSE ;
  else {
bool mu__boolexpr39;
  if ((mu_Cache[mu_i].mu_State) == (mu_I)) mu__boolexpr39 = TRUE ;
  else {
  mu__boolexpr39 = ((mu_Cache[mu_i].mu_State) == (mu_S)) ; 
}
  mu__boolexpr38 = (mu__boolexpr39) ; 
}
    return mu__boolexpr38;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 180;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 200 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr40;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr40 = FALSE ;
  else {
bool mu__boolexpr41;
  if ((mu_Cache[mu_i].mu_State) == (mu_I)) mu__boolexpr41 = TRUE ;
  else {
  mu__boolexpr41 = ((mu_Cache[mu_i].mu_State) == (mu_S)) ; 
}
  mu__boolexpr40 = (mu__boolexpr41) ; 
}
	      if (mu__boolexpr40) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 180;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Chan1[mu_i].mu_Cmd = mu_ReqE;
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("SendReqS, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
bool mu__boolexpr42;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_Cache[mu_i].mu_State) == (mu_I)) ; 
}
    return mu__boolexpr42;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 200;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 220 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr43;
  if (!((mu_Chan1[mu_i].mu_Cmd) == (mu_Empty))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_Cache[mu_i].mu_State) == (mu_I)) ; 
}
	      if (mu__boolexpr43) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 200;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Chan1[mu_i].mu_Cmd = mu_ReqS;
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return tsprintf("Store, d:%s, i:%s", mu_d.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    return (mu_Cache[mu_i].mu_State) == (mu_E);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 220;
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    while (what_rule < 260 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Cache[mu_i].mu_State) == (mu_E)) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 2;
	}
	else
	  what_rule += 2;
    r = what_rule - 220;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 20) + 1);
    r = r / 20;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_NODE mu_i;
    mu_i.value((r % 20) + 1);
    r = r / 20;
mu_Cache[mu_i].mu_Data = mu_d;
mu_AuxData = mu_d;
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<20)
    { R0.NextRule(what_rule);
      if (what_rule<20) return; }
  if (what_rule>=20 && what_rule<40)
    { R1.NextRule(what_rule);
      if (what_rule<40) return; }
  if (what_rule>=40 && what_rule<60)
    { R2.NextRule(what_rule);
      if (what_rule<60) return; }
  if (what_rule>=60 && what_rule<80)
    { R3.NextRule(what_rule);
      if (what_rule<80) return; }
  if (what_rule>=80 && what_rule<100)
    { R4.NextRule(what_rule);
      if (what_rule<100) return; }
  if (what_rule>=100 && what_rule<120)
    { R5.NextRule(what_rule);
      if (what_rule<120) return; }
  if (what_rule>=120 && what_rule<140)
    { R6.NextRule(what_rule);
      if (what_rule<140) return; }
  if (what_rule>=140 && what_rule<160)
    { R7.NextRule(what_rule);
      if (what_rule<160) return; }
  if (what_rule>=160 && what_rule<180)
    { R8.NextRule(what_rule);
      if (what_rule<180) return; }
  if (what_rule>=180 && what_rule<200)
    { R9.NextRule(what_rule);
      if (what_rule<200) return; }
  if (what_rule>=200 && what_rule<220)
    { R10.NextRule(what_rule);
      if (what_rule<220) return; }
  if (what_rule>=220 && what_rule<260)
    { R11.NextRule(what_rule);
      if (what_rule<260) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=19) return R0.Condition(r-0);
  if (r>=20 && r<=39) return R1.Condition(r-20);
  if (r>=40 && r<=59) return R2.Condition(r-40);
  if (r>=60 && r<=79) return R3.Condition(r-60);
  if (r>=80 && r<=99) return R4.Condition(r-80);
  if (r>=100 && r<=119) return R5.Condition(r-100);
  if (r>=120 && r<=139) return R6.Condition(r-120);
  if (r>=140 && r<=159) return R7.Condition(r-140);
  if (r>=160 && r<=179) return R8.Condition(r-160);
  if (r>=180 && r<=199) return R9.Condition(r-180);
  if (r>=200 && r<=219) return R10.Condition(r-200);
  if (r>=220 && r<=259) return R11.Condition(r-220);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=19) { R0.Code(r-0); return; } 
  if (r>=20 && r<=39) { R1.Code(r-20); return; } 
  if (r>=40 && r<=59) { R2.Code(r-40); return; } 
  if (r>=60 && r<=79) { R3.Code(r-60); return; } 
  if (r>=80 && r<=99) { R4.Code(r-80); return; } 
  if (r>=100 && r<=119) { R5.Code(r-100); return; } 
  if (r>=120 && r<=139) { R6.Code(r-120); return; } 
  if (r>=140 && r<=159) { R7.Code(r-140); return; } 
  if (r>=160 && r<=179) { R8.Code(r-160); return; } 
  if (r>=180 && r<=199) { R9.Code(r-180); return; } 
  if (r>=200 && r<=219) { R10.Code(r-200); return; } 
  if (r>=220 && r<=259) { R11.Code(r-220); return; } 
}
int Priority(unsigned short r)
{
  if (r<=19) { return R0.Priority(); } 
  if (r>=20 && r<=39) { return R1.Priority(); } 
  if (r>=40 && r<=59) { return R2.Priority(); } 
  if (r>=60 && r<=79) { return R3.Priority(); } 
  if (r>=80 && r<=99) { return R4.Priority(); } 
  if (r>=100 && r<=119) { return R5.Priority(); } 
  if (r>=120 && r<=139) { return R6.Priority(); } 
  if (r>=140 && r<=159) { return R7.Priority(); } 
  if (r>=160 && r<=179) { return R8.Priority(); } 
  if (r>=180 && r<=199) { return R9.Priority(); } 
  if (r>=200 && r<=219) { return R10.Priority(); } 
  if (r>=220 && r<=259) { return R11.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=19) return R0.Name(r-0);
  if (r>=20 && r<=39) return R1.Name(r-20);
  if (r>=40 && r<=59) return R2.Name(r-40);
  if (r>=60 && r<=79) return R3.Name(r-60);
  if (r>=80 && r<=99) return R4.Name(r-80);
  if (r>=100 && r<=119) return R5.Name(r-100);
  if (r>=120 && r<=139) return R6.Name(r-120);
  if (r>=140 && r<=159) return R7.Name(r-140);
  if (r>=160 && r<=179) return R8.Name(r-160);
  if (r>=180 && r<=199) return R9.Name(r-180);
  if (r>=200 && r<=219) return R10.Name(r-200);
  if (r>=220 && r<=259) return R11.Name(r-220);
  return NULL;
}
};
const unsigned numrules = 260;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 260


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("Init, d:%s", mu_d.Name());
  }
  void Code(unsigned short r)
  {
    static mu_1_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
{
for(int mu_i = 1; mu_i <= 20; mu_i++) {
mu_Chan1[mu_i].mu_Cmd = mu_Empty;
mu_Chan2[mu_i].mu_Cmd = mu_Empty;
mu_Chan3[mu_i].mu_Cmd = mu_Empty;
mu_Cache[mu_i].mu_State = mu_I;
mu_InvSet[mu_i] = mu_false;
mu_ShrSet[mu_i] = mu_false;
};
};
mu_ExGntd = mu_false;
mu_CurCmd = mu_Empty;
mu_MemData = mu_d;
mu_AuxData = mu_d;
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=1) { S0.Code(r-0); return; }
}
void Goal_value() {  // makun: set goalstate
    expr conjecture1 = implies(((mu_i) != (mu_j)), ((implies(((mu_Cache[mu_i].mu_State) == (mu_E)), ((mu_Cache[mu_j].mu_State) == (mu_I)))) & (implies(((mu_Cache[mu_i].mu_State) == (mu_S)), (((mu_Cache[mu_j].mu_State) == (mu_I)) | ((mu_Cache[mu_j].mu_State) == (mu_E)))))));
    // static mu_1_client mu_i;

    // r-value is int type: mu_i.goal_value(1);

    // r-value is other type: mu_n[1].goal_value(mu_E);

    // set carelist 
    // carelist.append("mu_i");
}
char * Name(unsigned short r)
{
  if (r<=1) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 2;

/********************
  Invariant records
 ********************/
int mu__invariant_44( const mu_1_NODE &mu_j, const mu_1_NODE &mu_i) // Invariant "CntrlProp"
{
bool mu__boolexpr45;
  if (!((mu_i) != (mu_j))) mu__boolexpr45 = TRUE ;
  else {
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!((mu_Cache[mu_i].mu_State) == (mu_E))) mu__boolexpr47 = TRUE ;
  else {
  mu__boolexpr47 = ((mu_Cache[mu_j].mu_State) == (mu_I)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
bool mu__boolexpr48;
  if (!((mu_Cache[mu_i].mu_State) == (mu_S))) mu__boolexpr48 = TRUE ;
  else {
bool mu__boolexpr49;
  if ((mu_Cache[mu_j].mu_State) == (mu_I)) mu__boolexpr49 = TRUE ;
  else {
  mu__boolexpr49 = ((mu_Cache[mu_j].mu_State) == (mu_E)) ; 
}
  mu__boolexpr48 = (mu__boolexpr49) ; 
}
  mu__boolexpr46 = (mu__boolexpr48) ; 
}
  mu__boolexpr45 = (mu__boolexpr46) ; 
}
return mu__boolexpr45;
};

bool mu__condition_52() // Condition for Rule "CntrlProp, j:1, i:1"
{
  return mu__invariant_44( 1, 1 );
}

bool mu__condition_53() // Condition for Rule "CntrlProp, j:1, i:2"
{
  return mu__invariant_44( 1, 2 );
}

bool mu__condition_54() // Condition for Rule "CntrlProp, j:1, i:3"
{
  return mu__invariant_44( 1, 3 );
}

bool mu__condition_55() // Condition for Rule "CntrlProp, j:1, i:4"
{
  return mu__invariant_44( 1, 4 );
}

bool mu__condition_56() // Condition for Rule "CntrlProp, j:1, i:5"
{
  return mu__invariant_44( 1, 5 );
}

bool mu__condition_57() // Condition for Rule "CntrlProp, j:1, i:6"
{
  return mu__invariant_44( 1, 6 );
}

bool mu__condition_58() // Condition for Rule "CntrlProp, j:1, i:7"
{
  return mu__invariant_44( 1, 7 );
}

bool mu__condition_59() // Condition for Rule "CntrlProp, j:1, i:8"
{
  return mu__invariant_44( 1, 8 );
}

bool mu__condition_60() // Condition for Rule "CntrlProp, j:1, i:9"
{
  return mu__invariant_44( 1, 9 );
}

bool mu__condition_61() // Condition for Rule "CntrlProp, j:1, i:10"
{
  return mu__invariant_44( 1, 10 );
}

bool mu__condition_62() // Condition for Rule "CntrlProp, j:1, i:11"
{
  return mu__invariant_44( 1, 11 );
}

bool mu__condition_63() // Condition for Rule "CntrlProp, j:1, i:12"
{
  return mu__invariant_44( 1, 12 );
}

bool mu__condition_64() // Condition for Rule "CntrlProp, j:1, i:13"
{
  return mu__invariant_44( 1, 13 );
}

bool mu__condition_65() // Condition for Rule "CntrlProp, j:1, i:14"
{
  return mu__invariant_44( 1, 14 );
}

bool mu__condition_66() // Condition for Rule "CntrlProp, j:1, i:15"
{
  return mu__invariant_44( 1, 15 );
}

bool mu__condition_67() // Condition for Rule "CntrlProp, j:1, i:16"
{
  return mu__invariant_44( 1, 16 );
}

bool mu__condition_68() // Condition for Rule "CntrlProp, j:1, i:17"
{
  return mu__invariant_44( 1, 17 );
}

bool mu__condition_69() // Condition for Rule "CntrlProp, j:1, i:18"
{
  return mu__invariant_44( 1, 18 );
}

bool mu__condition_70() // Condition for Rule "CntrlProp, j:1, i:19"
{
  return mu__invariant_44( 1, 19 );
}

bool mu__condition_71() // Condition for Rule "CntrlProp, j:1, i:20"
{
  return mu__invariant_44( 1, 20 );
}

bool mu__condition_73() // Condition for Rule "CntrlProp, j:2, i:1"
{
  return mu__invariant_44( 2, 1 );
}

bool mu__condition_74() // Condition for Rule "CntrlProp, j:2, i:2"
{
  return mu__invariant_44( 2, 2 );
}

bool mu__condition_75() // Condition for Rule "CntrlProp, j:2, i:3"
{
  return mu__invariant_44( 2, 3 );
}

bool mu__condition_76() // Condition for Rule "CntrlProp, j:2, i:4"
{
  return mu__invariant_44( 2, 4 );
}

bool mu__condition_77() // Condition for Rule "CntrlProp, j:2, i:5"
{
  return mu__invariant_44( 2, 5 );
}

bool mu__condition_78() // Condition for Rule "CntrlProp, j:2, i:6"
{
  return mu__invariant_44( 2, 6 );
}

bool mu__condition_79() // Condition for Rule "CntrlProp, j:2, i:7"
{
  return mu__invariant_44( 2, 7 );
}

bool mu__condition_80() // Condition for Rule "CntrlProp, j:2, i:8"
{
  return mu__invariant_44( 2, 8 );
}

bool mu__condition_81() // Condition for Rule "CntrlProp, j:2, i:9"
{
  return mu__invariant_44( 2, 9 );
}

bool mu__condition_82() // Condition for Rule "CntrlProp, j:2, i:10"
{
  return mu__invariant_44( 2, 10 );
}

bool mu__condition_83() // Condition for Rule "CntrlProp, j:2, i:11"
{
  return mu__invariant_44( 2, 11 );
}

bool mu__condition_84() // Condition for Rule "CntrlProp, j:2, i:12"
{
  return mu__invariant_44( 2, 12 );
}

bool mu__condition_85() // Condition for Rule "CntrlProp, j:2, i:13"
{
  return mu__invariant_44( 2, 13 );
}

bool mu__condition_86() // Condition for Rule "CntrlProp, j:2, i:14"
{
  return mu__invariant_44( 2, 14 );
}

bool mu__condition_87() // Condition for Rule "CntrlProp, j:2, i:15"
{
  return mu__invariant_44( 2, 15 );
}

bool mu__condition_88() // Condition for Rule "CntrlProp, j:2, i:16"
{
  return mu__invariant_44( 2, 16 );
}

bool mu__condition_89() // Condition for Rule "CntrlProp, j:2, i:17"
{
  return mu__invariant_44( 2, 17 );
}

bool mu__condition_90() // Condition for Rule "CntrlProp, j:2, i:18"
{
  return mu__invariant_44( 2, 18 );
}

bool mu__condition_91() // Condition for Rule "CntrlProp, j:2, i:19"
{
  return mu__invariant_44( 2, 19 );
}

bool mu__condition_92() // Condition for Rule "CntrlProp, j:2, i:20"
{
  return mu__invariant_44( 2, 20 );
}

bool mu__condition_94() // Condition for Rule "CntrlProp, j:3, i:1"
{
  return mu__invariant_44( 3, 1 );
}

bool mu__condition_95() // Condition for Rule "CntrlProp, j:3, i:2"
{
  return mu__invariant_44( 3, 2 );
}

bool mu__condition_96() // Condition for Rule "CntrlProp, j:3, i:3"
{
  return mu__invariant_44( 3, 3 );
}

bool mu__condition_97() // Condition for Rule "CntrlProp, j:3, i:4"
{
  return mu__invariant_44( 3, 4 );
}

bool mu__condition_98() // Condition for Rule "CntrlProp, j:3, i:5"
{
  return mu__invariant_44( 3, 5 );
}

bool mu__condition_99() // Condition for Rule "CntrlProp, j:3, i:6"
{
  return mu__invariant_44( 3, 6 );
}

bool mu__condition_100() // Condition for Rule "CntrlProp, j:3, i:7"
{
  return mu__invariant_44( 3, 7 );
}

bool mu__condition_101() // Condition for Rule "CntrlProp, j:3, i:8"
{
  return mu__invariant_44( 3, 8 );
}

bool mu__condition_102() // Condition for Rule "CntrlProp, j:3, i:9"
{
  return mu__invariant_44( 3, 9 );
}

bool mu__condition_103() // Condition for Rule "CntrlProp, j:3, i:10"
{
  return mu__invariant_44( 3, 10 );
}

bool mu__condition_104() // Condition for Rule "CntrlProp, j:3, i:11"
{
  return mu__invariant_44( 3, 11 );
}

bool mu__condition_105() // Condition for Rule "CntrlProp, j:3, i:12"
{
  return mu__invariant_44( 3, 12 );
}

bool mu__condition_106() // Condition for Rule "CntrlProp, j:3, i:13"
{
  return mu__invariant_44( 3, 13 );
}

bool mu__condition_107() // Condition for Rule "CntrlProp, j:3, i:14"
{
  return mu__invariant_44( 3, 14 );
}

bool mu__condition_108() // Condition for Rule "CntrlProp, j:3, i:15"
{
  return mu__invariant_44( 3, 15 );
}

bool mu__condition_109() // Condition for Rule "CntrlProp, j:3, i:16"
{
  return mu__invariant_44( 3, 16 );
}

bool mu__condition_110() // Condition for Rule "CntrlProp, j:3, i:17"
{
  return mu__invariant_44( 3, 17 );
}

bool mu__condition_111() // Condition for Rule "CntrlProp, j:3, i:18"
{
  return mu__invariant_44( 3, 18 );
}

bool mu__condition_112() // Condition for Rule "CntrlProp, j:3, i:19"
{
  return mu__invariant_44( 3, 19 );
}

bool mu__condition_113() // Condition for Rule "CntrlProp, j:3, i:20"
{
  return mu__invariant_44( 3, 20 );
}

bool mu__condition_115() // Condition for Rule "CntrlProp, j:4, i:1"
{
  return mu__invariant_44( 4, 1 );
}

bool mu__condition_116() // Condition for Rule "CntrlProp, j:4, i:2"
{
  return mu__invariant_44( 4, 2 );
}

bool mu__condition_117() // Condition for Rule "CntrlProp, j:4, i:3"
{
  return mu__invariant_44( 4, 3 );
}

bool mu__condition_118() // Condition for Rule "CntrlProp, j:4, i:4"
{
  return mu__invariant_44( 4, 4 );
}

bool mu__condition_119() // Condition for Rule "CntrlProp, j:4, i:5"
{
  return mu__invariant_44( 4, 5 );
}

bool mu__condition_120() // Condition for Rule "CntrlProp, j:4, i:6"
{
  return mu__invariant_44( 4, 6 );
}

bool mu__condition_121() // Condition for Rule "CntrlProp, j:4, i:7"
{
  return mu__invariant_44( 4, 7 );
}

bool mu__condition_122() // Condition for Rule "CntrlProp, j:4, i:8"
{
  return mu__invariant_44( 4, 8 );
}

bool mu__condition_123() // Condition for Rule "CntrlProp, j:4, i:9"
{
  return mu__invariant_44( 4, 9 );
}

bool mu__condition_124() // Condition for Rule "CntrlProp, j:4, i:10"
{
  return mu__invariant_44( 4, 10 );
}

bool mu__condition_125() // Condition for Rule "CntrlProp, j:4, i:11"
{
  return mu__invariant_44( 4, 11 );
}

bool mu__condition_126() // Condition for Rule "CntrlProp, j:4, i:12"
{
  return mu__invariant_44( 4, 12 );
}

bool mu__condition_127() // Condition for Rule "CntrlProp, j:4, i:13"
{
  return mu__invariant_44( 4, 13 );
}

bool mu__condition_128() // Condition for Rule "CntrlProp, j:4, i:14"
{
  return mu__invariant_44( 4, 14 );
}

bool mu__condition_129() // Condition for Rule "CntrlProp, j:4, i:15"
{
  return mu__invariant_44( 4, 15 );
}

bool mu__condition_130() // Condition for Rule "CntrlProp, j:4, i:16"
{
  return mu__invariant_44( 4, 16 );
}

bool mu__condition_131() // Condition for Rule "CntrlProp, j:4, i:17"
{
  return mu__invariant_44( 4, 17 );
}

bool mu__condition_132() // Condition for Rule "CntrlProp, j:4, i:18"
{
  return mu__invariant_44( 4, 18 );
}

bool mu__condition_133() // Condition for Rule "CntrlProp, j:4, i:19"
{
  return mu__invariant_44( 4, 19 );
}

bool mu__condition_134() // Condition for Rule "CntrlProp, j:4, i:20"
{
  return mu__invariant_44( 4, 20 );
}

bool mu__condition_136() // Condition for Rule "CntrlProp, j:5, i:1"
{
  return mu__invariant_44( 5, 1 );
}

bool mu__condition_137() // Condition for Rule "CntrlProp, j:5, i:2"
{
  return mu__invariant_44( 5, 2 );
}

bool mu__condition_138() // Condition for Rule "CntrlProp, j:5, i:3"
{
  return mu__invariant_44( 5, 3 );
}

bool mu__condition_139() // Condition for Rule "CntrlProp, j:5, i:4"
{
  return mu__invariant_44( 5, 4 );
}

bool mu__condition_140() // Condition for Rule "CntrlProp, j:5, i:5"
{
  return mu__invariant_44( 5, 5 );
}

bool mu__condition_141() // Condition for Rule "CntrlProp, j:5, i:6"
{
  return mu__invariant_44( 5, 6 );
}

bool mu__condition_142() // Condition for Rule "CntrlProp, j:5, i:7"
{
  return mu__invariant_44( 5, 7 );
}

bool mu__condition_143() // Condition for Rule "CntrlProp, j:5, i:8"
{
  return mu__invariant_44( 5, 8 );
}

bool mu__condition_144() // Condition for Rule "CntrlProp, j:5, i:9"
{
  return mu__invariant_44( 5, 9 );
}

bool mu__condition_145() // Condition for Rule "CntrlProp, j:5, i:10"
{
  return mu__invariant_44( 5, 10 );
}

bool mu__condition_146() // Condition for Rule "CntrlProp, j:5, i:11"
{
  return mu__invariant_44( 5, 11 );
}

bool mu__condition_147() // Condition for Rule "CntrlProp, j:5, i:12"
{
  return mu__invariant_44( 5, 12 );
}

bool mu__condition_148() // Condition for Rule "CntrlProp, j:5, i:13"
{
  return mu__invariant_44( 5, 13 );
}

bool mu__condition_149() // Condition for Rule "CntrlProp, j:5, i:14"
{
  return mu__invariant_44( 5, 14 );
}

bool mu__condition_150() // Condition for Rule "CntrlProp, j:5, i:15"
{
  return mu__invariant_44( 5, 15 );
}

bool mu__condition_151() // Condition for Rule "CntrlProp, j:5, i:16"
{
  return mu__invariant_44( 5, 16 );
}

bool mu__condition_152() // Condition for Rule "CntrlProp, j:5, i:17"
{
  return mu__invariant_44( 5, 17 );
}

bool mu__condition_153() // Condition for Rule "CntrlProp, j:5, i:18"
{
  return mu__invariant_44( 5, 18 );
}

bool mu__condition_154() // Condition for Rule "CntrlProp, j:5, i:19"
{
  return mu__invariant_44( 5, 19 );
}

bool mu__condition_155() // Condition for Rule "CntrlProp, j:5, i:20"
{
  return mu__invariant_44( 5, 20 );
}

bool mu__condition_157() // Condition for Rule "CntrlProp, j:6, i:1"
{
  return mu__invariant_44( 6, 1 );
}

bool mu__condition_158() // Condition for Rule "CntrlProp, j:6, i:2"
{
  return mu__invariant_44( 6, 2 );
}

bool mu__condition_159() // Condition for Rule "CntrlProp, j:6, i:3"
{
  return mu__invariant_44( 6, 3 );
}

bool mu__condition_160() // Condition for Rule "CntrlProp, j:6, i:4"
{
  return mu__invariant_44( 6, 4 );
}

bool mu__condition_161() // Condition for Rule "CntrlProp, j:6, i:5"
{
  return mu__invariant_44( 6, 5 );
}

bool mu__condition_162() // Condition for Rule "CntrlProp, j:6, i:6"
{
  return mu__invariant_44( 6, 6 );
}

bool mu__condition_163() // Condition for Rule "CntrlProp, j:6, i:7"
{
  return mu__invariant_44( 6, 7 );
}

bool mu__condition_164() // Condition for Rule "CntrlProp, j:6, i:8"
{
  return mu__invariant_44( 6, 8 );
}

bool mu__condition_165() // Condition for Rule "CntrlProp, j:6, i:9"
{
  return mu__invariant_44( 6, 9 );
}

bool mu__condition_166() // Condition for Rule "CntrlProp, j:6, i:10"
{
  return mu__invariant_44( 6, 10 );
}

bool mu__condition_167() // Condition for Rule "CntrlProp, j:6, i:11"
{
  return mu__invariant_44( 6, 11 );
}

bool mu__condition_168() // Condition for Rule "CntrlProp, j:6, i:12"
{
  return mu__invariant_44( 6, 12 );
}

bool mu__condition_169() // Condition for Rule "CntrlProp, j:6, i:13"
{
  return mu__invariant_44( 6, 13 );
}

bool mu__condition_170() // Condition for Rule "CntrlProp, j:6, i:14"
{
  return mu__invariant_44( 6, 14 );
}

bool mu__condition_171() // Condition for Rule "CntrlProp, j:6, i:15"
{
  return mu__invariant_44( 6, 15 );
}

bool mu__condition_172() // Condition for Rule "CntrlProp, j:6, i:16"
{
  return mu__invariant_44( 6, 16 );
}

bool mu__condition_173() // Condition for Rule "CntrlProp, j:6, i:17"
{
  return mu__invariant_44( 6, 17 );
}

bool mu__condition_174() // Condition for Rule "CntrlProp, j:6, i:18"
{
  return mu__invariant_44( 6, 18 );
}

bool mu__condition_175() // Condition for Rule "CntrlProp, j:6, i:19"
{
  return mu__invariant_44( 6, 19 );
}

bool mu__condition_176() // Condition for Rule "CntrlProp, j:6, i:20"
{
  return mu__invariant_44( 6, 20 );
}

bool mu__condition_178() // Condition for Rule "CntrlProp, j:7, i:1"
{
  return mu__invariant_44( 7, 1 );
}

bool mu__condition_179() // Condition for Rule "CntrlProp, j:7, i:2"
{
  return mu__invariant_44( 7, 2 );
}

bool mu__condition_180() // Condition for Rule "CntrlProp, j:7, i:3"
{
  return mu__invariant_44( 7, 3 );
}

bool mu__condition_181() // Condition for Rule "CntrlProp, j:7, i:4"
{
  return mu__invariant_44( 7, 4 );
}

bool mu__condition_182() // Condition for Rule "CntrlProp, j:7, i:5"
{
  return mu__invariant_44( 7, 5 );
}

bool mu__condition_183() // Condition for Rule "CntrlProp, j:7, i:6"
{
  return mu__invariant_44( 7, 6 );
}

bool mu__condition_184() // Condition for Rule "CntrlProp, j:7, i:7"
{
  return mu__invariant_44( 7, 7 );
}

bool mu__condition_185() // Condition for Rule "CntrlProp, j:7, i:8"
{
  return mu__invariant_44( 7, 8 );
}

bool mu__condition_186() // Condition for Rule "CntrlProp, j:7, i:9"
{
  return mu__invariant_44( 7, 9 );
}

bool mu__condition_187() // Condition for Rule "CntrlProp, j:7, i:10"
{
  return mu__invariant_44( 7, 10 );
}

bool mu__condition_188() // Condition for Rule "CntrlProp, j:7, i:11"
{
  return mu__invariant_44( 7, 11 );
}

bool mu__condition_189() // Condition for Rule "CntrlProp, j:7, i:12"
{
  return mu__invariant_44( 7, 12 );
}

bool mu__condition_190() // Condition for Rule "CntrlProp, j:7, i:13"
{
  return mu__invariant_44( 7, 13 );
}

bool mu__condition_191() // Condition for Rule "CntrlProp, j:7, i:14"
{
  return mu__invariant_44( 7, 14 );
}

bool mu__condition_192() // Condition for Rule "CntrlProp, j:7, i:15"
{
  return mu__invariant_44( 7, 15 );
}

bool mu__condition_193() // Condition for Rule "CntrlProp, j:7, i:16"
{
  return mu__invariant_44( 7, 16 );
}

bool mu__condition_194() // Condition for Rule "CntrlProp, j:7, i:17"
{
  return mu__invariant_44( 7, 17 );
}

bool mu__condition_195() // Condition for Rule "CntrlProp, j:7, i:18"
{
  return mu__invariant_44( 7, 18 );
}

bool mu__condition_196() // Condition for Rule "CntrlProp, j:7, i:19"
{
  return mu__invariant_44( 7, 19 );
}

bool mu__condition_197() // Condition for Rule "CntrlProp, j:7, i:20"
{
  return mu__invariant_44( 7, 20 );
}

bool mu__condition_199() // Condition for Rule "CntrlProp, j:8, i:1"
{
  return mu__invariant_44( 8, 1 );
}

bool mu__condition_200() // Condition for Rule "CntrlProp, j:8, i:2"
{
  return mu__invariant_44( 8, 2 );
}

bool mu__condition_201() // Condition for Rule "CntrlProp, j:8, i:3"
{
  return mu__invariant_44( 8, 3 );
}

bool mu__condition_202() // Condition for Rule "CntrlProp, j:8, i:4"
{
  return mu__invariant_44( 8, 4 );
}

bool mu__condition_203() // Condition for Rule "CntrlProp, j:8, i:5"
{
  return mu__invariant_44( 8, 5 );
}

bool mu__condition_204() // Condition for Rule "CntrlProp, j:8, i:6"
{
  return mu__invariant_44( 8, 6 );
}

bool mu__condition_205() // Condition for Rule "CntrlProp, j:8, i:7"
{
  return mu__invariant_44( 8, 7 );
}

bool mu__condition_206() // Condition for Rule "CntrlProp, j:8, i:8"
{
  return mu__invariant_44( 8, 8 );
}

bool mu__condition_207() // Condition for Rule "CntrlProp, j:8, i:9"
{
  return mu__invariant_44( 8, 9 );
}

bool mu__condition_208() // Condition for Rule "CntrlProp, j:8, i:10"
{
  return mu__invariant_44( 8, 10 );
}

bool mu__condition_209() // Condition for Rule "CntrlProp, j:8, i:11"
{
  return mu__invariant_44( 8, 11 );
}

bool mu__condition_210() // Condition for Rule "CntrlProp, j:8, i:12"
{
  return mu__invariant_44( 8, 12 );
}

bool mu__condition_211() // Condition for Rule "CntrlProp, j:8, i:13"
{
  return mu__invariant_44( 8, 13 );
}

bool mu__condition_212() // Condition for Rule "CntrlProp, j:8, i:14"
{
  return mu__invariant_44( 8, 14 );
}

bool mu__condition_213() // Condition for Rule "CntrlProp, j:8, i:15"
{
  return mu__invariant_44( 8, 15 );
}

bool mu__condition_214() // Condition for Rule "CntrlProp, j:8, i:16"
{
  return mu__invariant_44( 8, 16 );
}

bool mu__condition_215() // Condition for Rule "CntrlProp, j:8, i:17"
{
  return mu__invariant_44( 8, 17 );
}

bool mu__condition_216() // Condition for Rule "CntrlProp, j:8, i:18"
{
  return mu__invariant_44( 8, 18 );
}

bool mu__condition_217() // Condition for Rule "CntrlProp, j:8, i:19"
{
  return mu__invariant_44( 8, 19 );
}

bool mu__condition_218() // Condition for Rule "CntrlProp, j:8, i:20"
{
  return mu__invariant_44( 8, 20 );
}

bool mu__condition_220() // Condition for Rule "CntrlProp, j:9, i:1"
{
  return mu__invariant_44( 9, 1 );
}

bool mu__condition_221() // Condition for Rule "CntrlProp, j:9, i:2"
{
  return mu__invariant_44( 9, 2 );
}

bool mu__condition_222() // Condition for Rule "CntrlProp, j:9, i:3"
{
  return mu__invariant_44( 9, 3 );
}

bool mu__condition_223() // Condition for Rule "CntrlProp, j:9, i:4"
{
  return mu__invariant_44( 9, 4 );
}

bool mu__condition_224() // Condition for Rule "CntrlProp, j:9, i:5"
{
  return mu__invariant_44( 9, 5 );
}

bool mu__condition_225() // Condition for Rule "CntrlProp, j:9, i:6"
{
  return mu__invariant_44( 9, 6 );
}

bool mu__condition_226() // Condition for Rule "CntrlProp, j:9, i:7"
{
  return mu__invariant_44( 9, 7 );
}

bool mu__condition_227() // Condition for Rule "CntrlProp, j:9, i:8"
{
  return mu__invariant_44( 9, 8 );
}

bool mu__condition_228() // Condition for Rule "CntrlProp, j:9, i:9"
{
  return mu__invariant_44( 9, 9 );
}

bool mu__condition_229() // Condition for Rule "CntrlProp, j:9, i:10"
{
  return mu__invariant_44( 9, 10 );
}

bool mu__condition_230() // Condition for Rule "CntrlProp, j:9, i:11"
{
  return mu__invariant_44( 9, 11 );
}

bool mu__condition_231() // Condition for Rule "CntrlProp, j:9, i:12"
{
  return mu__invariant_44( 9, 12 );
}

bool mu__condition_232() // Condition for Rule "CntrlProp, j:9, i:13"
{
  return mu__invariant_44( 9, 13 );
}

bool mu__condition_233() // Condition for Rule "CntrlProp, j:9, i:14"
{
  return mu__invariant_44( 9, 14 );
}

bool mu__condition_234() // Condition for Rule "CntrlProp, j:9, i:15"
{
  return mu__invariant_44( 9, 15 );
}

bool mu__condition_235() // Condition for Rule "CntrlProp, j:9, i:16"
{
  return mu__invariant_44( 9, 16 );
}

bool mu__condition_236() // Condition for Rule "CntrlProp, j:9, i:17"
{
  return mu__invariant_44( 9, 17 );
}

bool mu__condition_237() // Condition for Rule "CntrlProp, j:9, i:18"
{
  return mu__invariant_44( 9, 18 );
}

bool mu__condition_238() // Condition for Rule "CntrlProp, j:9, i:19"
{
  return mu__invariant_44( 9, 19 );
}

bool mu__condition_239() // Condition for Rule "CntrlProp, j:9, i:20"
{
  return mu__invariant_44( 9, 20 );
}

bool mu__condition_241() // Condition for Rule "CntrlProp, j:10, i:1"
{
  return mu__invariant_44( 10, 1 );
}

bool mu__condition_242() // Condition for Rule "CntrlProp, j:10, i:2"
{
  return mu__invariant_44( 10, 2 );
}

bool mu__condition_243() // Condition for Rule "CntrlProp, j:10, i:3"
{
  return mu__invariant_44( 10, 3 );
}

bool mu__condition_244() // Condition for Rule "CntrlProp, j:10, i:4"
{
  return mu__invariant_44( 10, 4 );
}

bool mu__condition_245() // Condition for Rule "CntrlProp, j:10, i:5"
{
  return mu__invariant_44( 10, 5 );
}

bool mu__condition_246() // Condition for Rule "CntrlProp, j:10, i:6"
{
  return mu__invariant_44( 10, 6 );
}

bool mu__condition_247() // Condition for Rule "CntrlProp, j:10, i:7"
{
  return mu__invariant_44( 10, 7 );
}

bool mu__condition_248() // Condition for Rule "CntrlProp, j:10, i:8"
{
  return mu__invariant_44( 10, 8 );
}

bool mu__condition_249() // Condition for Rule "CntrlProp, j:10, i:9"
{
  return mu__invariant_44( 10, 9 );
}

bool mu__condition_250() // Condition for Rule "CntrlProp, j:10, i:10"
{
  return mu__invariant_44( 10, 10 );
}

bool mu__condition_251() // Condition for Rule "CntrlProp, j:10, i:11"
{
  return mu__invariant_44( 10, 11 );
}

bool mu__condition_252() // Condition for Rule "CntrlProp, j:10, i:12"
{
  return mu__invariant_44( 10, 12 );
}

bool mu__condition_253() // Condition for Rule "CntrlProp, j:10, i:13"
{
  return mu__invariant_44( 10, 13 );
}

bool mu__condition_254() // Condition for Rule "CntrlProp, j:10, i:14"
{
  return mu__invariant_44( 10, 14 );
}

bool mu__condition_255() // Condition for Rule "CntrlProp, j:10, i:15"
{
  return mu__invariant_44( 10, 15 );
}

bool mu__condition_256() // Condition for Rule "CntrlProp, j:10, i:16"
{
  return mu__invariant_44( 10, 16 );
}

bool mu__condition_257() // Condition for Rule "CntrlProp, j:10, i:17"
{
  return mu__invariant_44( 10, 17 );
}

bool mu__condition_258() // Condition for Rule "CntrlProp, j:10, i:18"
{
  return mu__invariant_44( 10, 18 );
}

bool mu__condition_259() // Condition for Rule "CntrlProp, j:10, i:19"
{
  return mu__invariant_44( 10, 19 );
}

bool mu__condition_260() // Condition for Rule "CntrlProp, j:10, i:20"
{
  return mu__invariant_44( 10, 20 );
}

bool mu__condition_262() // Condition for Rule "CntrlProp, j:11, i:1"
{
  return mu__invariant_44( 11, 1 );
}

bool mu__condition_263() // Condition for Rule "CntrlProp, j:11, i:2"
{
  return mu__invariant_44( 11, 2 );
}

bool mu__condition_264() // Condition for Rule "CntrlProp, j:11, i:3"
{
  return mu__invariant_44( 11, 3 );
}

bool mu__condition_265() // Condition for Rule "CntrlProp, j:11, i:4"
{
  return mu__invariant_44( 11, 4 );
}

bool mu__condition_266() // Condition for Rule "CntrlProp, j:11, i:5"
{
  return mu__invariant_44( 11, 5 );
}

bool mu__condition_267() // Condition for Rule "CntrlProp, j:11, i:6"
{
  return mu__invariant_44( 11, 6 );
}

bool mu__condition_268() // Condition for Rule "CntrlProp, j:11, i:7"
{
  return mu__invariant_44( 11, 7 );
}

bool mu__condition_269() // Condition for Rule "CntrlProp, j:11, i:8"
{
  return mu__invariant_44( 11, 8 );
}

bool mu__condition_270() // Condition for Rule "CntrlProp, j:11, i:9"
{
  return mu__invariant_44( 11, 9 );
}

bool mu__condition_271() // Condition for Rule "CntrlProp, j:11, i:10"
{
  return mu__invariant_44( 11, 10 );
}

bool mu__condition_272() // Condition for Rule "CntrlProp, j:11, i:11"
{
  return mu__invariant_44( 11, 11 );
}

bool mu__condition_273() // Condition for Rule "CntrlProp, j:11, i:12"
{
  return mu__invariant_44( 11, 12 );
}

bool mu__condition_274() // Condition for Rule "CntrlProp, j:11, i:13"
{
  return mu__invariant_44( 11, 13 );
}

bool mu__condition_275() // Condition for Rule "CntrlProp, j:11, i:14"
{
  return mu__invariant_44( 11, 14 );
}

bool mu__condition_276() // Condition for Rule "CntrlProp, j:11, i:15"
{
  return mu__invariant_44( 11, 15 );
}

bool mu__condition_277() // Condition for Rule "CntrlProp, j:11, i:16"
{
  return mu__invariant_44( 11, 16 );
}

bool mu__condition_278() // Condition for Rule "CntrlProp, j:11, i:17"
{
  return mu__invariant_44( 11, 17 );
}

bool mu__condition_279() // Condition for Rule "CntrlProp, j:11, i:18"
{
  return mu__invariant_44( 11, 18 );
}

bool mu__condition_280() // Condition for Rule "CntrlProp, j:11, i:19"
{
  return mu__invariant_44( 11, 19 );
}

bool mu__condition_281() // Condition for Rule "CntrlProp, j:11, i:20"
{
  return mu__invariant_44( 11, 20 );
}

bool mu__condition_283() // Condition for Rule "CntrlProp, j:12, i:1"
{
  return mu__invariant_44( 12, 1 );
}

bool mu__condition_284() // Condition for Rule "CntrlProp, j:12, i:2"
{
  return mu__invariant_44( 12, 2 );
}

bool mu__condition_285() // Condition for Rule "CntrlProp, j:12, i:3"
{
  return mu__invariant_44( 12, 3 );
}

bool mu__condition_286() // Condition for Rule "CntrlProp, j:12, i:4"
{
  return mu__invariant_44( 12, 4 );
}

bool mu__condition_287() // Condition for Rule "CntrlProp, j:12, i:5"
{
  return mu__invariant_44( 12, 5 );
}

bool mu__condition_288() // Condition for Rule "CntrlProp, j:12, i:6"
{
  return mu__invariant_44( 12, 6 );
}

bool mu__condition_289() // Condition for Rule "CntrlProp, j:12, i:7"
{
  return mu__invariant_44( 12, 7 );
}

bool mu__condition_290() // Condition for Rule "CntrlProp, j:12, i:8"
{
  return mu__invariant_44( 12, 8 );
}

bool mu__condition_291() // Condition for Rule "CntrlProp, j:12, i:9"
{
  return mu__invariant_44( 12, 9 );
}

bool mu__condition_292() // Condition for Rule "CntrlProp, j:12, i:10"
{
  return mu__invariant_44( 12, 10 );
}

bool mu__condition_293() // Condition for Rule "CntrlProp, j:12, i:11"
{
  return mu__invariant_44( 12, 11 );
}

bool mu__condition_294() // Condition for Rule "CntrlProp, j:12, i:12"
{
  return mu__invariant_44( 12, 12 );
}

bool mu__condition_295() // Condition for Rule "CntrlProp, j:12, i:13"
{
  return mu__invariant_44( 12, 13 );
}

bool mu__condition_296() // Condition for Rule "CntrlProp, j:12, i:14"
{
  return mu__invariant_44( 12, 14 );
}

bool mu__condition_297() // Condition for Rule "CntrlProp, j:12, i:15"
{
  return mu__invariant_44( 12, 15 );
}

bool mu__condition_298() // Condition for Rule "CntrlProp, j:12, i:16"
{
  return mu__invariant_44( 12, 16 );
}

bool mu__condition_299() // Condition for Rule "CntrlProp, j:12, i:17"
{
  return mu__invariant_44( 12, 17 );
}

bool mu__condition_300() // Condition for Rule "CntrlProp, j:12, i:18"
{
  return mu__invariant_44( 12, 18 );
}

bool mu__condition_301() // Condition for Rule "CntrlProp, j:12, i:19"
{
  return mu__invariant_44( 12, 19 );
}

bool mu__condition_302() // Condition for Rule "CntrlProp, j:12, i:20"
{
  return mu__invariant_44( 12, 20 );
}

bool mu__condition_304() // Condition for Rule "CntrlProp, j:13, i:1"
{
  return mu__invariant_44( 13, 1 );
}

bool mu__condition_305() // Condition for Rule "CntrlProp, j:13, i:2"
{
  return mu__invariant_44( 13, 2 );
}

bool mu__condition_306() // Condition for Rule "CntrlProp, j:13, i:3"
{
  return mu__invariant_44( 13, 3 );
}

bool mu__condition_307() // Condition for Rule "CntrlProp, j:13, i:4"
{
  return mu__invariant_44( 13, 4 );
}

bool mu__condition_308() // Condition for Rule "CntrlProp, j:13, i:5"
{
  return mu__invariant_44( 13, 5 );
}

bool mu__condition_309() // Condition for Rule "CntrlProp, j:13, i:6"
{
  return mu__invariant_44( 13, 6 );
}

bool mu__condition_310() // Condition for Rule "CntrlProp, j:13, i:7"
{
  return mu__invariant_44( 13, 7 );
}

bool mu__condition_311() // Condition for Rule "CntrlProp, j:13, i:8"
{
  return mu__invariant_44( 13, 8 );
}

bool mu__condition_312() // Condition for Rule "CntrlProp, j:13, i:9"
{
  return mu__invariant_44( 13, 9 );
}

bool mu__condition_313() // Condition for Rule "CntrlProp, j:13, i:10"
{
  return mu__invariant_44( 13, 10 );
}

bool mu__condition_314() // Condition for Rule "CntrlProp, j:13, i:11"
{
  return mu__invariant_44( 13, 11 );
}

bool mu__condition_315() // Condition for Rule "CntrlProp, j:13, i:12"
{
  return mu__invariant_44( 13, 12 );
}

bool mu__condition_316() // Condition for Rule "CntrlProp, j:13, i:13"
{
  return mu__invariant_44( 13, 13 );
}

bool mu__condition_317() // Condition for Rule "CntrlProp, j:13, i:14"
{
  return mu__invariant_44( 13, 14 );
}

bool mu__condition_318() // Condition for Rule "CntrlProp, j:13, i:15"
{
  return mu__invariant_44( 13, 15 );
}

bool mu__condition_319() // Condition for Rule "CntrlProp, j:13, i:16"
{
  return mu__invariant_44( 13, 16 );
}

bool mu__condition_320() // Condition for Rule "CntrlProp, j:13, i:17"
{
  return mu__invariant_44( 13, 17 );
}

bool mu__condition_321() // Condition for Rule "CntrlProp, j:13, i:18"
{
  return mu__invariant_44( 13, 18 );
}

bool mu__condition_322() // Condition for Rule "CntrlProp, j:13, i:19"
{
  return mu__invariant_44( 13, 19 );
}

bool mu__condition_323() // Condition for Rule "CntrlProp, j:13, i:20"
{
  return mu__invariant_44( 13, 20 );
}

bool mu__condition_325() // Condition for Rule "CntrlProp, j:14, i:1"
{
  return mu__invariant_44( 14, 1 );
}

bool mu__condition_326() // Condition for Rule "CntrlProp, j:14, i:2"
{
  return mu__invariant_44( 14, 2 );
}

bool mu__condition_327() // Condition for Rule "CntrlProp, j:14, i:3"
{
  return mu__invariant_44( 14, 3 );
}

bool mu__condition_328() // Condition for Rule "CntrlProp, j:14, i:4"
{
  return mu__invariant_44( 14, 4 );
}

bool mu__condition_329() // Condition for Rule "CntrlProp, j:14, i:5"
{
  return mu__invariant_44( 14, 5 );
}

bool mu__condition_330() // Condition for Rule "CntrlProp, j:14, i:6"
{
  return mu__invariant_44( 14, 6 );
}

bool mu__condition_331() // Condition for Rule "CntrlProp, j:14, i:7"
{
  return mu__invariant_44( 14, 7 );
}

bool mu__condition_332() // Condition for Rule "CntrlProp, j:14, i:8"
{
  return mu__invariant_44( 14, 8 );
}

bool mu__condition_333() // Condition for Rule "CntrlProp, j:14, i:9"
{
  return mu__invariant_44( 14, 9 );
}

bool mu__condition_334() // Condition for Rule "CntrlProp, j:14, i:10"
{
  return mu__invariant_44( 14, 10 );
}

bool mu__condition_335() // Condition for Rule "CntrlProp, j:14, i:11"
{
  return mu__invariant_44( 14, 11 );
}

bool mu__condition_336() // Condition for Rule "CntrlProp, j:14, i:12"
{
  return mu__invariant_44( 14, 12 );
}

bool mu__condition_337() // Condition for Rule "CntrlProp, j:14, i:13"
{
  return mu__invariant_44( 14, 13 );
}

bool mu__condition_338() // Condition for Rule "CntrlProp, j:14, i:14"
{
  return mu__invariant_44( 14, 14 );
}

bool mu__condition_339() // Condition for Rule "CntrlProp, j:14, i:15"
{
  return mu__invariant_44( 14, 15 );
}

bool mu__condition_340() // Condition for Rule "CntrlProp, j:14, i:16"
{
  return mu__invariant_44( 14, 16 );
}

bool mu__condition_341() // Condition for Rule "CntrlProp, j:14, i:17"
{
  return mu__invariant_44( 14, 17 );
}

bool mu__condition_342() // Condition for Rule "CntrlProp, j:14, i:18"
{
  return mu__invariant_44( 14, 18 );
}

bool mu__condition_343() // Condition for Rule "CntrlProp, j:14, i:19"
{
  return mu__invariant_44( 14, 19 );
}

bool mu__condition_344() // Condition for Rule "CntrlProp, j:14, i:20"
{
  return mu__invariant_44( 14, 20 );
}

bool mu__condition_346() // Condition for Rule "CntrlProp, j:15, i:1"
{
  return mu__invariant_44( 15, 1 );
}

bool mu__condition_347() // Condition for Rule "CntrlProp, j:15, i:2"
{
  return mu__invariant_44( 15, 2 );
}

bool mu__condition_348() // Condition for Rule "CntrlProp, j:15, i:3"
{
  return mu__invariant_44( 15, 3 );
}

bool mu__condition_349() // Condition for Rule "CntrlProp, j:15, i:4"
{
  return mu__invariant_44( 15, 4 );
}

bool mu__condition_350() // Condition for Rule "CntrlProp, j:15, i:5"
{
  return mu__invariant_44( 15, 5 );
}

bool mu__condition_351() // Condition for Rule "CntrlProp, j:15, i:6"
{
  return mu__invariant_44( 15, 6 );
}

bool mu__condition_352() // Condition for Rule "CntrlProp, j:15, i:7"
{
  return mu__invariant_44( 15, 7 );
}

bool mu__condition_353() // Condition for Rule "CntrlProp, j:15, i:8"
{
  return mu__invariant_44( 15, 8 );
}

bool mu__condition_354() // Condition for Rule "CntrlProp, j:15, i:9"
{
  return mu__invariant_44( 15, 9 );
}

bool mu__condition_355() // Condition for Rule "CntrlProp, j:15, i:10"
{
  return mu__invariant_44( 15, 10 );
}

bool mu__condition_356() // Condition for Rule "CntrlProp, j:15, i:11"
{
  return mu__invariant_44( 15, 11 );
}

bool mu__condition_357() // Condition for Rule "CntrlProp, j:15, i:12"
{
  return mu__invariant_44( 15, 12 );
}

bool mu__condition_358() // Condition for Rule "CntrlProp, j:15, i:13"
{
  return mu__invariant_44( 15, 13 );
}

bool mu__condition_359() // Condition for Rule "CntrlProp, j:15, i:14"
{
  return mu__invariant_44( 15, 14 );
}

bool mu__condition_360() // Condition for Rule "CntrlProp, j:15, i:15"
{
  return mu__invariant_44( 15, 15 );
}

bool mu__condition_361() // Condition for Rule "CntrlProp, j:15, i:16"
{
  return mu__invariant_44( 15, 16 );
}

bool mu__condition_362() // Condition for Rule "CntrlProp, j:15, i:17"
{
  return mu__invariant_44( 15, 17 );
}

bool mu__condition_363() // Condition for Rule "CntrlProp, j:15, i:18"
{
  return mu__invariant_44( 15, 18 );
}

bool mu__condition_364() // Condition for Rule "CntrlProp, j:15, i:19"
{
  return mu__invariant_44( 15, 19 );
}

bool mu__condition_365() // Condition for Rule "CntrlProp, j:15, i:20"
{
  return mu__invariant_44( 15, 20 );
}

bool mu__condition_367() // Condition for Rule "CntrlProp, j:16, i:1"
{
  return mu__invariant_44( 16, 1 );
}

bool mu__condition_368() // Condition for Rule "CntrlProp, j:16, i:2"
{
  return mu__invariant_44( 16, 2 );
}

bool mu__condition_369() // Condition for Rule "CntrlProp, j:16, i:3"
{
  return mu__invariant_44( 16, 3 );
}

bool mu__condition_370() // Condition for Rule "CntrlProp, j:16, i:4"
{
  return mu__invariant_44( 16, 4 );
}

bool mu__condition_371() // Condition for Rule "CntrlProp, j:16, i:5"
{
  return mu__invariant_44( 16, 5 );
}

bool mu__condition_372() // Condition for Rule "CntrlProp, j:16, i:6"
{
  return mu__invariant_44( 16, 6 );
}

bool mu__condition_373() // Condition for Rule "CntrlProp, j:16, i:7"
{
  return mu__invariant_44( 16, 7 );
}

bool mu__condition_374() // Condition for Rule "CntrlProp, j:16, i:8"
{
  return mu__invariant_44( 16, 8 );
}

bool mu__condition_375() // Condition for Rule "CntrlProp, j:16, i:9"
{
  return mu__invariant_44( 16, 9 );
}

bool mu__condition_376() // Condition for Rule "CntrlProp, j:16, i:10"
{
  return mu__invariant_44( 16, 10 );
}

bool mu__condition_377() // Condition for Rule "CntrlProp, j:16, i:11"
{
  return mu__invariant_44( 16, 11 );
}

bool mu__condition_378() // Condition for Rule "CntrlProp, j:16, i:12"
{
  return mu__invariant_44( 16, 12 );
}

bool mu__condition_379() // Condition for Rule "CntrlProp, j:16, i:13"
{
  return mu__invariant_44( 16, 13 );
}

bool mu__condition_380() // Condition for Rule "CntrlProp, j:16, i:14"
{
  return mu__invariant_44( 16, 14 );
}

bool mu__condition_381() // Condition for Rule "CntrlProp, j:16, i:15"
{
  return mu__invariant_44( 16, 15 );
}

bool mu__condition_382() // Condition for Rule "CntrlProp, j:16, i:16"
{
  return mu__invariant_44( 16, 16 );
}

bool mu__condition_383() // Condition for Rule "CntrlProp, j:16, i:17"
{
  return mu__invariant_44( 16, 17 );
}

bool mu__condition_384() // Condition for Rule "CntrlProp, j:16, i:18"
{
  return mu__invariant_44( 16, 18 );
}

bool mu__condition_385() // Condition for Rule "CntrlProp, j:16, i:19"
{
  return mu__invariant_44( 16, 19 );
}

bool mu__condition_386() // Condition for Rule "CntrlProp, j:16, i:20"
{
  return mu__invariant_44( 16, 20 );
}

bool mu__condition_388() // Condition for Rule "CntrlProp, j:17, i:1"
{
  return mu__invariant_44( 17, 1 );
}

bool mu__condition_389() // Condition for Rule "CntrlProp, j:17, i:2"
{
  return mu__invariant_44( 17, 2 );
}

bool mu__condition_390() // Condition for Rule "CntrlProp, j:17, i:3"
{
  return mu__invariant_44( 17, 3 );
}

bool mu__condition_391() // Condition for Rule "CntrlProp, j:17, i:4"
{
  return mu__invariant_44( 17, 4 );
}

bool mu__condition_392() // Condition for Rule "CntrlProp, j:17, i:5"
{
  return mu__invariant_44( 17, 5 );
}

bool mu__condition_393() // Condition for Rule "CntrlProp, j:17, i:6"
{
  return mu__invariant_44( 17, 6 );
}

bool mu__condition_394() // Condition for Rule "CntrlProp, j:17, i:7"
{
  return mu__invariant_44( 17, 7 );
}

bool mu__condition_395() // Condition for Rule "CntrlProp, j:17, i:8"
{
  return mu__invariant_44( 17, 8 );
}

bool mu__condition_396() // Condition for Rule "CntrlProp, j:17, i:9"
{
  return mu__invariant_44( 17, 9 );
}

bool mu__condition_397() // Condition for Rule "CntrlProp, j:17, i:10"
{
  return mu__invariant_44( 17, 10 );
}

bool mu__condition_398() // Condition for Rule "CntrlProp, j:17, i:11"
{
  return mu__invariant_44( 17, 11 );
}

bool mu__condition_399() // Condition for Rule "CntrlProp, j:17, i:12"
{
  return mu__invariant_44( 17, 12 );
}

bool mu__condition_400() // Condition for Rule "CntrlProp, j:17, i:13"
{
  return mu__invariant_44( 17, 13 );
}

bool mu__condition_401() // Condition for Rule "CntrlProp, j:17, i:14"
{
  return mu__invariant_44( 17, 14 );
}

bool mu__condition_402() // Condition for Rule "CntrlProp, j:17, i:15"
{
  return mu__invariant_44( 17, 15 );
}

bool mu__condition_403() // Condition for Rule "CntrlProp, j:17, i:16"
{
  return mu__invariant_44( 17, 16 );
}

bool mu__condition_404() // Condition for Rule "CntrlProp, j:17, i:17"
{
  return mu__invariant_44( 17, 17 );
}

bool mu__condition_405() // Condition for Rule "CntrlProp, j:17, i:18"
{
  return mu__invariant_44( 17, 18 );
}

bool mu__condition_406() // Condition for Rule "CntrlProp, j:17, i:19"
{
  return mu__invariant_44( 17, 19 );
}

bool mu__condition_407() // Condition for Rule "CntrlProp, j:17, i:20"
{
  return mu__invariant_44( 17, 20 );
}

bool mu__condition_409() // Condition for Rule "CntrlProp, j:18, i:1"
{
  return mu__invariant_44( 18, 1 );
}

bool mu__condition_410() // Condition for Rule "CntrlProp, j:18, i:2"
{
  return mu__invariant_44( 18, 2 );
}

bool mu__condition_411() // Condition for Rule "CntrlProp, j:18, i:3"
{
  return mu__invariant_44( 18, 3 );
}

bool mu__condition_412() // Condition for Rule "CntrlProp, j:18, i:4"
{
  return mu__invariant_44( 18, 4 );
}

bool mu__condition_413() // Condition for Rule "CntrlProp, j:18, i:5"
{
  return mu__invariant_44( 18, 5 );
}

bool mu__condition_414() // Condition for Rule "CntrlProp, j:18, i:6"
{
  return mu__invariant_44( 18, 6 );
}

bool mu__condition_415() // Condition for Rule "CntrlProp, j:18, i:7"
{
  return mu__invariant_44( 18, 7 );
}

bool mu__condition_416() // Condition for Rule "CntrlProp, j:18, i:8"
{
  return mu__invariant_44( 18, 8 );
}

bool mu__condition_417() // Condition for Rule "CntrlProp, j:18, i:9"
{
  return mu__invariant_44( 18, 9 );
}

bool mu__condition_418() // Condition for Rule "CntrlProp, j:18, i:10"
{
  return mu__invariant_44( 18, 10 );
}

bool mu__condition_419() // Condition for Rule "CntrlProp, j:18, i:11"
{
  return mu__invariant_44( 18, 11 );
}

bool mu__condition_420() // Condition for Rule "CntrlProp, j:18, i:12"
{
  return mu__invariant_44( 18, 12 );
}

bool mu__condition_421() // Condition for Rule "CntrlProp, j:18, i:13"
{
  return mu__invariant_44( 18, 13 );
}

bool mu__condition_422() // Condition for Rule "CntrlProp, j:18, i:14"
{
  return mu__invariant_44( 18, 14 );
}

bool mu__condition_423() // Condition for Rule "CntrlProp, j:18, i:15"
{
  return mu__invariant_44( 18, 15 );
}

bool mu__condition_424() // Condition for Rule "CntrlProp, j:18, i:16"
{
  return mu__invariant_44( 18, 16 );
}

bool mu__condition_425() // Condition for Rule "CntrlProp, j:18, i:17"
{
  return mu__invariant_44( 18, 17 );
}

bool mu__condition_426() // Condition for Rule "CntrlProp, j:18, i:18"
{
  return mu__invariant_44( 18, 18 );
}

bool mu__condition_427() // Condition for Rule "CntrlProp, j:18, i:19"
{
  return mu__invariant_44( 18, 19 );
}

bool mu__condition_428() // Condition for Rule "CntrlProp, j:18, i:20"
{
  return mu__invariant_44( 18, 20 );
}

bool mu__condition_430() // Condition for Rule "CntrlProp, j:19, i:1"
{
  return mu__invariant_44( 19, 1 );
}

bool mu__condition_431() // Condition for Rule "CntrlProp, j:19, i:2"
{
  return mu__invariant_44( 19, 2 );
}

bool mu__condition_432() // Condition for Rule "CntrlProp, j:19, i:3"
{
  return mu__invariant_44( 19, 3 );
}

bool mu__condition_433() // Condition for Rule "CntrlProp, j:19, i:4"
{
  return mu__invariant_44( 19, 4 );
}

bool mu__condition_434() // Condition for Rule "CntrlProp, j:19, i:5"
{
  return mu__invariant_44( 19, 5 );
}

bool mu__condition_435() // Condition for Rule "CntrlProp, j:19, i:6"
{
  return mu__invariant_44( 19, 6 );
}

bool mu__condition_436() // Condition for Rule "CntrlProp, j:19, i:7"
{
  return mu__invariant_44( 19, 7 );
}

bool mu__condition_437() // Condition for Rule "CntrlProp, j:19, i:8"
{
  return mu__invariant_44( 19, 8 );
}

bool mu__condition_438() // Condition for Rule "CntrlProp, j:19, i:9"
{
  return mu__invariant_44( 19, 9 );
}

bool mu__condition_439() // Condition for Rule "CntrlProp, j:19, i:10"
{
  return mu__invariant_44( 19, 10 );
}

bool mu__condition_440() // Condition for Rule "CntrlProp, j:19, i:11"
{
  return mu__invariant_44( 19, 11 );
}

bool mu__condition_441() // Condition for Rule "CntrlProp, j:19, i:12"
{
  return mu__invariant_44( 19, 12 );
}

bool mu__condition_442() // Condition for Rule "CntrlProp, j:19, i:13"
{
  return mu__invariant_44( 19, 13 );
}

bool mu__condition_443() // Condition for Rule "CntrlProp, j:19, i:14"
{
  return mu__invariant_44( 19, 14 );
}

bool mu__condition_444() // Condition for Rule "CntrlProp, j:19, i:15"
{
  return mu__invariant_44( 19, 15 );
}

bool mu__condition_445() // Condition for Rule "CntrlProp, j:19, i:16"
{
  return mu__invariant_44( 19, 16 );
}

bool mu__condition_446() // Condition for Rule "CntrlProp, j:19, i:17"
{
  return mu__invariant_44( 19, 17 );
}

bool mu__condition_447() // Condition for Rule "CntrlProp, j:19, i:18"
{
  return mu__invariant_44( 19, 18 );
}

bool mu__condition_448() // Condition for Rule "CntrlProp, j:19, i:19"
{
  return mu__invariant_44( 19, 19 );
}

bool mu__condition_449() // Condition for Rule "CntrlProp, j:19, i:20"
{
  return mu__invariant_44( 19, 20 );
}

bool mu__condition_451() // Condition for Rule "CntrlProp, j:20, i:1"
{
  return mu__invariant_44( 20, 1 );
}

bool mu__condition_452() // Condition for Rule "CntrlProp, j:20, i:2"
{
  return mu__invariant_44( 20, 2 );
}

bool mu__condition_453() // Condition for Rule "CntrlProp, j:20, i:3"
{
  return mu__invariant_44( 20, 3 );
}

bool mu__condition_454() // Condition for Rule "CntrlProp, j:20, i:4"
{
  return mu__invariant_44( 20, 4 );
}

bool mu__condition_455() // Condition for Rule "CntrlProp, j:20, i:5"
{
  return mu__invariant_44( 20, 5 );
}

bool mu__condition_456() // Condition for Rule "CntrlProp, j:20, i:6"
{
  return mu__invariant_44( 20, 6 );
}

bool mu__condition_457() // Condition for Rule "CntrlProp, j:20, i:7"
{
  return mu__invariant_44( 20, 7 );
}

bool mu__condition_458() // Condition for Rule "CntrlProp, j:20, i:8"
{
  return mu__invariant_44( 20, 8 );
}

bool mu__condition_459() // Condition for Rule "CntrlProp, j:20, i:9"
{
  return mu__invariant_44( 20, 9 );
}

bool mu__condition_460() // Condition for Rule "CntrlProp, j:20, i:10"
{
  return mu__invariant_44( 20, 10 );
}

bool mu__condition_461() // Condition for Rule "CntrlProp, j:20, i:11"
{
  return mu__invariant_44( 20, 11 );
}

bool mu__condition_462() // Condition for Rule "CntrlProp, j:20, i:12"
{
  return mu__invariant_44( 20, 12 );
}

bool mu__condition_463() // Condition for Rule "CntrlProp, j:20, i:13"
{
  return mu__invariant_44( 20, 13 );
}

bool mu__condition_464() // Condition for Rule "CntrlProp, j:20, i:14"
{
  return mu__invariant_44( 20, 14 );
}

bool mu__condition_465() // Condition for Rule "CntrlProp, j:20, i:15"
{
  return mu__invariant_44( 20, 15 );
}

bool mu__condition_466() // Condition for Rule "CntrlProp, j:20, i:16"
{
  return mu__invariant_44( 20, 16 );
}

bool mu__condition_467() // Condition for Rule "CntrlProp, j:20, i:17"
{
  return mu__invariant_44( 20, 17 );
}

bool mu__condition_468() // Condition for Rule "CntrlProp, j:20, i:18"
{
  return mu__invariant_44( 20, 18 );
}

bool mu__condition_469() // Condition for Rule "CntrlProp, j:20, i:19"
{
  return mu__invariant_44( 20, 19 );
}

bool mu__condition_470() // Condition for Rule "CntrlProp, j:20, i:20"
{
  return mu__invariant_44( 20, 20 );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"CntrlProp, j:20, i:20", &mu__condition_470, NULL, },
{"CntrlProp, j:20, i:19", &mu__condition_469, NULL, },
{"CntrlProp, j:20, i:18", &mu__condition_468, NULL, },
{"CntrlProp, j:20, i:17", &mu__condition_467, NULL, },
{"CntrlProp, j:20, i:16", &mu__condition_466, NULL, },
{"CntrlProp, j:20, i:15", &mu__condition_465, NULL, },
{"CntrlProp, j:20, i:14", &mu__condition_464, NULL, },
{"CntrlProp, j:20, i:13", &mu__condition_463, NULL, },
{"CntrlProp, j:20, i:12", &mu__condition_462, NULL, },
{"CntrlProp, j:20, i:11", &mu__condition_461, NULL, },
{"CntrlProp, j:20, i:10", &mu__condition_460, NULL, },
{"CntrlProp, j:20, i:9", &mu__condition_459, NULL, },
{"CntrlProp, j:20, i:8", &mu__condition_458, NULL, },
{"CntrlProp, j:20, i:7", &mu__condition_457, NULL, },
{"CntrlProp, j:20, i:6", &mu__condition_456, NULL, },
{"CntrlProp, j:20, i:5", &mu__condition_455, NULL, },
{"CntrlProp, j:20, i:4", &mu__condition_454, NULL, },
{"CntrlProp, j:20, i:3", &mu__condition_453, NULL, },
{"CntrlProp, j:20, i:2", &mu__condition_452, NULL, },
{"CntrlProp, j:20, i:1", &mu__condition_451, NULL, },
{"CntrlProp, j:19, i:20", &mu__condition_449, NULL, },
{"CntrlProp, j:19, i:19", &mu__condition_448, NULL, },
{"CntrlProp, j:19, i:18", &mu__condition_447, NULL, },
{"CntrlProp, j:19, i:17", &mu__condition_446, NULL, },
{"CntrlProp, j:19, i:16", &mu__condition_445, NULL, },
{"CntrlProp, j:19, i:15", &mu__condition_444, NULL, },
{"CntrlProp, j:19, i:14", &mu__condition_443, NULL, },
{"CntrlProp, j:19, i:13", &mu__condition_442, NULL, },
{"CntrlProp, j:19, i:12", &mu__condition_441, NULL, },
{"CntrlProp, j:19, i:11", &mu__condition_440, NULL, },
{"CntrlProp, j:19, i:10", &mu__condition_439, NULL, },
{"CntrlProp, j:19, i:9", &mu__condition_438, NULL, },
{"CntrlProp, j:19, i:8", &mu__condition_437, NULL, },
{"CntrlProp, j:19, i:7", &mu__condition_436, NULL, },
{"CntrlProp, j:19, i:6", &mu__condition_435, NULL, },
{"CntrlProp, j:19, i:5", &mu__condition_434, NULL, },
{"CntrlProp, j:19, i:4", &mu__condition_433, NULL, },
{"CntrlProp, j:19, i:3", &mu__condition_432, NULL, },
{"CntrlProp, j:19, i:2", &mu__condition_431, NULL, },
{"CntrlProp, j:19, i:1", &mu__condition_430, NULL, },
{"CntrlProp, j:18, i:20", &mu__condition_428, NULL, },
{"CntrlProp, j:18, i:19", &mu__condition_427, NULL, },
{"CntrlProp, j:18, i:18", &mu__condition_426, NULL, },
{"CntrlProp, j:18, i:17", &mu__condition_425, NULL, },
{"CntrlProp, j:18, i:16", &mu__condition_424, NULL, },
{"CntrlProp, j:18, i:15", &mu__condition_423, NULL, },
{"CntrlProp, j:18, i:14", &mu__condition_422, NULL, },
{"CntrlProp, j:18, i:13", &mu__condition_421, NULL, },
{"CntrlProp, j:18, i:12", &mu__condition_420, NULL, },
{"CntrlProp, j:18, i:11", &mu__condition_419, NULL, },
{"CntrlProp, j:18, i:10", &mu__condition_418, NULL, },
{"CntrlProp, j:18, i:9", &mu__condition_417, NULL, },
{"CntrlProp, j:18, i:8", &mu__condition_416, NULL, },
{"CntrlProp, j:18, i:7", &mu__condition_415, NULL, },
{"CntrlProp, j:18, i:6", &mu__condition_414, NULL, },
{"CntrlProp, j:18, i:5", &mu__condition_413, NULL, },
{"CntrlProp, j:18, i:4", &mu__condition_412, NULL, },
{"CntrlProp, j:18, i:3", &mu__condition_411, NULL, },
{"CntrlProp, j:18, i:2", &mu__condition_410, NULL, },
{"CntrlProp, j:18, i:1", &mu__condition_409, NULL, },
{"CntrlProp, j:17, i:20", &mu__condition_407, NULL, },
{"CntrlProp, j:17, i:19", &mu__condition_406, NULL, },
{"CntrlProp, j:17, i:18", &mu__condition_405, NULL, },
{"CntrlProp, j:17, i:17", &mu__condition_404, NULL, },
{"CntrlProp, j:17, i:16", &mu__condition_403, NULL, },
{"CntrlProp, j:17, i:15", &mu__condition_402, NULL, },
{"CntrlProp, j:17, i:14", &mu__condition_401, NULL, },
{"CntrlProp, j:17, i:13", &mu__condition_400, NULL, },
{"CntrlProp, j:17, i:12", &mu__condition_399, NULL, },
{"CntrlProp, j:17, i:11", &mu__condition_398, NULL, },
{"CntrlProp, j:17, i:10", &mu__condition_397, NULL, },
{"CntrlProp, j:17, i:9", &mu__condition_396, NULL, },
{"CntrlProp, j:17, i:8", &mu__condition_395, NULL, },
{"CntrlProp, j:17, i:7", &mu__condition_394, NULL, },
{"CntrlProp, j:17, i:6", &mu__condition_393, NULL, },
{"CntrlProp, j:17, i:5", &mu__condition_392, NULL, },
{"CntrlProp, j:17, i:4", &mu__condition_391, NULL, },
{"CntrlProp, j:17, i:3", &mu__condition_390, NULL, },
{"CntrlProp, j:17, i:2", &mu__condition_389, NULL, },
{"CntrlProp, j:17, i:1", &mu__condition_388, NULL, },
{"CntrlProp, j:16, i:20", &mu__condition_386, NULL, },
{"CntrlProp, j:16, i:19", &mu__condition_385, NULL, },
{"CntrlProp, j:16, i:18", &mu__condition_384, NULL, },
{"CntrlProp, j:16, i:17", &mu__condition_383, NULL, },
{"CntrlProp, j:16, i:16", &mu__condition_382, NULL, },
{"CntrlProp, j:16, i:15", &mu__condition_381, NULL, },
{"CntrlProp, j:16, i:14", &mu__condition_380, NULL, },
{"CntrlProp, j:16, i:13", &mu__condition_379, NULL, },
{"CntrlProp, j:16, i:12", &mu__condition_378, NULL, },
{"CntrlProp, j:16, i:11", &mu__condition_377, NULL, },
{"CntrlProp, j:16, i:10", &mu__condition_376, NULL, },
{"CntrlProp, j:16, i:9", &mu__condition_375, NULL, },
{"CntrlProp, j:16, i:8", &mu__condition_374, NULL, },
{"CntrlProp, j:16, i:7", &mu__condition_373, NULL, },
{"CntrlProp, j:16, i:6", &mu__condition_372, NULL, },
{"CntrlProp, j:16, i:5", &mu__condition_371, NULL, },
{"CntrlProp, j:16, i:4", &mu__condition_370, NULL, },
{"CntrlProp, j:16, i:3", &mu__condition_369, NULL, },
{"CntrlProp, j:16, i:2", &mu__condition_368, NULL, },
{"CntrlProp, j:16, i:1", &mu__condition_367, NULL, },
{"CntrlProp, j:15, i:20", &mu__condition_365, NULL, },
{"CntrlProp, j:15, i:19", &mu__condition_364, NULL, },
{"CntrlProp, j:15, i:18", &mu__condition_363, NULL, },
{"CntrlProp, j:15, i:17", &mu__condition_362, NULL, },
{"CntrlProp, j:15, i:16", &mu__condition_361, NULL, },
{"CntrlProp, j:15, i:15", &mu__condition_360, NULL, },
{"CntrlProp, j:15, i:14", &mu__condition_359, NULL, },
{"CntrlProp, j:15, i:13", &mu__condition_358, NULL, },
{"CntrlProp, j:15, i:12", &mu__condition_357, NULL, },
{"CntrlProp, j:15, i:11", &mu__condition_356, NULL, },
{"CntrlProp, j:15, i:10", &mu__condition_355, NULL, },
{"CntrlProp, j:15, i:9", &mu__condition_354, NULL, },
{"CntrlProp, j:15, i:8", &mu__condition_353, NULL, },
{"CntrlProp, j:15, i:7", &mu__condition_352, NULL, },
{"CntrlProp, j:15, i:6", &mu__condition_351, NULL, },
{"CntrlProp, j:15, i:5", &mu__condition_350, NULL, },
{"CntrlProp, j:15, i:4", &mu__condition_349, NULL, },
{"CntrlProp, j:15, i:3", &mu__condition_348, NULL, },
{"CntrlProp, j:15, i:2", &mu__condition_347, NULL, },
{"CntrlProp, j:15, i:1", &mu__condition_346, NULL, },
{"CntrlProp, j:14, i:20", &mu__condition_344, NULL, },
{"CntrlProp, j:14, i:19", &mu__condition_343, NULL, },
{"CntrlProp, j:14, i:18", &mu__condition_342, NULL, },
{"CntrlProp, j:14, i:17", &mu__condition_341, NULL, },
{"CntrlProp, j:14, i:16", &mu__condition_340, NULL, },
{"CntrlProp, j:14, i:15", &mu__condition_339, NULL, },
{"CntrlProp, j:14, i:14", &mu__condition_338, NULL, },
{"CntrlProp, j:14, i:13", &mu__condition_337, NULL, },
{"CntrlProp, j:14, i:12", &mu__condition_336, NULL, },
{"CntrlProp, j:14, i:11", &mu__condition_335, NULL, },
{"CntrlProp, j:14, i:10", &mu__condition_334, NULL, },
{"CntrlProp, j:14, i:9", &mu__condition_333, NULL, },
{"CntrlProp, j:14, i:8", &mu__condition_332, NULL, },
{"CntrlProp, j:14, i:7", &mu__condition_331, NULL, },
{"CntrlProp, j:14, i:6", &mu__condition_330, NULL, },
{"CntrlProp, j:14, i:5", &mu__condition_329, NULL, },
{"CntrlProp, j:14, i:4", &mu__condition_328, NULL, },
{"CntrlProp, j:14, i:3", &mu__condition_327, NULL, },
{"CntrlProp, j:14, i:2", &mu__condition_326, NULL, },
{"CntrlProp, j:14, i:1", &mu__condition_325, NULL, },
{"CntrlProp, j:13, i:20", &mu__condition_323, NULL, },
{"CntrlProp, j:13, i:19", &mu__condition_322, NULL, },
{"CntrlProp, j:13, i:18", &mu__condition_321, NULL, },
{"CntrlProp, j:13, i:17", &mu__condition_320, NULL, },
{"CntrlProp, j:13, i:16", &mu__condition_319, NULL, },
{"CntrlProp, j:13, i:15", &mu__condition_318, NULL, },
{"CntrlProp, j:13, i:14", &mu__condition_317, NULL, },
{"CntrlProp, j:13, i:13", &mu__condition_316, NULL, },
{"CntrlProp, j:13, i:12", &mu__condition_315, NULL, },
{"CntrlProp, j:13, i:11", &mu__condition_314, NULL, },
{"CntrlProp, j:13, i:10", &mu__condition_313, NULL, },
{"CntrlProp, j:13, i:9", &mu__condition_312, NULL, },
{"CntrlProp, j:13, i:8", &mu__condition_311, NULL, },
{"CntrlProp, j:13, i:7", &mu__condition_310, NULL, },
{"CntrlProp, j:13, i:6", &mu__condition_309, NULL, },
{"CntrlProp, j:13, i:5", &mu__condition_308, NULL, },
{"CntrlProp, j:13, i:4", &mu__condition_307, NULL, },
{"CntrlProp, j:13, i:3", &mu__condition_306, NULL, },
{"CntrlProp, j:13, i:2", &mu__condition_305, NULL, },
{"CntrlProp, j:13, i:1", &mu__condition_304, NULL, },
{"CntrlProp, j:12, i:20", &mu__condition_302, NULL, },
{"CntrlProp, j:12, i:19", &mu__condition_301, NULL, },
{"CntrlProp, j:12, i:18", &mu__condition_300, NULL, },
{"CntrlProp, j:12, i:17", &mu__condition_299, NULL, },
{"CntrlProp, j:12, i:16", &mu__condition_298, NULL, },
{"CntrlProp, j:12, i:15", &mu__condition_297, NULL, },
{"CntrlProp, j:12, i:14", &mu__condition_296, NULL, },
{"CntrlProp, j:12, i:13", &mu__condition_295, NULL, },
{"CntrlProp, j:12, i:12", &mu__condition_294, NULL, },
{"CntrlProp, j:12, i:11", &mu__condition_293, NULL, },
{"CntrlProp, j:12, i:10", &mu__condition_292, NULL, },
{"CntrlProp, j:12, i:9", &mu__condition_291, NULL, },
{"CntrlProp, j:12, i:8", &mu__condition_290, NULL, },
{"CntrlProp, j:12, i:7", &mu__condition_289, NULL, },
{"CntrlProp, j:12, i:6", &mu__condition_288, NULL, },
{"CntrlProp, j:12, i:5", &mu__condition_287, NULL, },
{"CntrlProp, j:12, i:4", &mu__condition_286, NULL, },
{"CntrlProp, j:12, i:3", &mu__condition_285, NULL, },
{"CntrlProp, j:12, i:2", &mu__condition_284, NULL, },
{"CntrlProp, j:12, i:1", &mu__condition_283, NULL, },
{"CntrlProp, j:11, i:20", &mu__condition_281, NULL, },
{"CntrlProp, j:11, i:19", &mu__condition_280, NULL, },
{"CntrlProp, j:11, i:18", &mu__condition_279, NULL, },
{"CntrlProp, j:11, i:17", &mu__condition_278, NULL, },
{"CntrlProp, j:11, i:16", &mu__condition_277, NULL, },
{"CntrlProp, j:11, i:15", &mu__condition_276, NULL, },
{"CntrlProp, j:11, i:14", &mu__condition_275, NULL, },
{"CntrlProp, j:11, i:13", &mu__condition_274, NULL, },
{"CntrlProp, j:11, i:12", &mu__condition_273, NULL, },
{"CntrlProp, j:11, i:11", &mu__condition_272, NULL, },
{"CntrlProp, j:11, i:10", &mu__condition_271, NULL, },
{"CntrlProp, j:11, i:9", &mu__condition_270, NULL, },
{"CntrlProp, j:11, i:8", &mu__condition_269, NULL, },
{"CntrlProp, j:11, i:7", &mu__condition_268, NULL, },
{"CntrlProp, j:11, i:6", &mu__condition_267, NULL, },
{"CntrlProp, j:11, i:5", &mu__condition_266, NULL, },
{"CntrlProp, j:11, i:4", &mu__condition_265, NULL, },
{"CntrlProp, j:11, i:3", &mu__condition_264, NULL, },
{"CntrlProp, j:11, i:2", &mu__condition_263, NULL, },
{"CntrlProp, j:11, i:1", &mu__condition_262, NULL, },
{"CntrlProp, j:10, i:20", &mu__condition_260, NULL, },
{"CntrlProp, j:10, i:19", &mu__condition_259, NULL, },
{"CntrlProp, j:10, i:18", &mu__condition_258, NULL, },
{"CntrlProp, j:10, i:17", &mu__condition_257, NULL, },
{"CntrlProp, j:10, i:16", &mu__condition_256, NULL, },
{"CntrlProp, j:10, i:15", &mu__condition_255, NULL, },
{"CntrlProp, j:10, i:14", &mu__condition_254, NULL, },
{"CntrlProp, j:10, i:13", &mu__condition_253, NULL, },
{"CntrlProp, j:10, i:12", &mu__condition_252, NULL, },
{"CntrlProp, j:10, i:11", &mu__condition_251, NULL, },
{"CntrlProp, j:10, i:10", &mu__condition_250, NULL, },
{"CntrlProp, j:10, i:9", &mu__condition_249, NULL, },
{"CntrlProp, j:10, i:8", &mu__condition_248, NULL, },
{"CntrlProp, j:10, i:7", &mu__condition_247, NULL, },
{"CntrlProp, j:10, i:6", &mu__condition_246, NULL, },
{"CntrlProp, j:10, i:5", &mu__condition_245, NULL, },
{"CntrlProp, j:10, i:4", &mu__condition_244, NULL, },
{"CntrlProp, j:10, i:3", &mu__condition_243, NULL, },
{"CntrlProp, j:10, i:2", &mu__condition_242, NULL, },
{"CntrlProp, j:10, i:1", &mu__condition_241, NULL, },
{"CntrlProp, j:9, i:20", &mu__condition_239, NULL, },
{"CntrlProp, j:9, i:19", &mu__condition_238, NULL, },
{"CntrlProp, j:9, i:18", &mu__condition_237, NULL, },
{"CntrlProp, j:9, i:17", &mu__condition_236, NULL, },
{"CntrlProp, j:9, i:16", &mu__condition_235, NULL, },
{"CntrlProp, j:9, i:15", &mu__condition_234, NULL, },
{"CntrlProp, j:9, i:14", &mu__condition_233, NULL, },
{"CntrlProp, j:9, i:13", &mu__condition_232, NULL, },
{"CntrlProp, j:9, i:12", &mu__condition_231, NULL, },
{"CntrlProp, j:9, i:11", &mu__condition_230, NULL, },
{"CntrlProp, j:9, i:10", &mu__condition_229, NULL, },
{"CntrlProp, j:9, i:9", &mu__condition_228, NULL, },
{"CntrlProp, j:9, i:8", &mu__condition_227, NULL, },
{"CntrlProp, j:9, i:7", &mu__condition_226, NULL, },
{"CntrlProp, j:9, i:6", &mu__condition_225, NULL, },
{"CntrlProp, j:9, i:5", &mu__condition_224, NULL, },
{"CntrlProp, j:9, i:4", &mu__condition_223, NULL, },
{"CntrlProp, j:9, i:3", &mu__condition_222, NULL, },
{"CntrlProp, j:9, i:2", &mu__condition_221, NULL, },
{"CntrlProp, j:9, i:1", &mu__condition_220, NULL, },
{"CntrlProp, j:8, i:20", &mu__condition_218, NULL, },
{"CntrlProp, j:8, i:19", &mu__condition_217, NULL, },
{"CntrlProp, j:8, i:18", &mu__condition_216, NULL, },
{"CntrlProp, j:8, i:17", &mu__condition_215, NULL, },
{"CntrlProp, j:8, i:16", &mu__condition_214, NULL, },
{"CntrlProp, j:8, i:15", &mu__condition_213, NULL, },
{"CntrlProp, j:8, i:14", &mu__condition_212, NULL, },
{"CntrlProp, j:8, i:13", &mu__condition_211, NULL, },
{"CntrlProp, j:8, i:12", &mu__condition_210, NULL, },
{"CntrlProp, j:8, i:11", &mu__condition_209, NULL, },
{"CntrlProp, j:8, i:10", &mu__condition_208, NULL, },
{"CntrlProp, j:8, i:9", &mu__condition_207, NULL, },
{"CntrlProp, j:8, i:8", &mu__condition_206, NULL, },
{"CntrlProp, j:8, i:7", &mu__condition_205, NULL, },
{"CntrlProp, j:8, i:6", &mu__condition_204, NULL, },
{"CntrlProp, j:8, i:5", &mu__condition_203, NULL, },
{"CntrlProp, j:8, i:4", &mu__condition_202, NULL, },
{"CntrlProp, j:8, i:3", &mu__condition_201, NULL, },
{"CntrlProp, j:8, i:2", &mu__condition_200, NULL, },
{"CntrlProp, j:8, i:1", &mu__condition_199, NULL, },
{"CntrlProp, j:7, i:20", &mu__condition_197, NULL, },
{"CntrlProp, j:7, i:19", &mu__condition_196, NULL, },
{"CntrlProp, j:7, i:18", &mu__condition_195, NULL, },
{"CntrlProp, j:7, i:17", &mu__condition_194, NULL, },
{"CntrlProp, j:7, i:16", &mu__condition_193, NULL, },
{"CntrlProp, j:7, i:15", &mu__condition_192, NULL, },
{"CntrlProp, j:7, i:14", &mu__condition_191, NULL, },
{"CntrlProp, j:7, i:13", &mu__condition_190, NULL, },
{"CntrlProp, j:7, i:12", &mu__condition_189, NULL, },
{"CntrlProp, j:7, i:11", &mu__condition_188, NULL, },
{"CntrlProp, j:7, i:10", &mu__condition_187, NULL, },
{"CntrlProp, j:7, i:9", &mu__condition_186, NULL, },
{"CntrlProp, j:7, i:8", &mu__condition_185, NULL, },
{"CntrlProp, j:7, i:7", &mu__condition_184, NULL, },
{"CntrlProp, j:7, i:6", &mu__condition_183, NULL, },
{"CntrlProp, j:7, i:5", &mu__condition_182, NULL, },
{"CntrlProp, j:7, i:4", &mu__condition_181, NULL, },
{"CntrlProp, j:7, i:3", &mu__condition_180, NULL, },
{"CntrlProp, j:7, i:2", &mu__condition_179, NULL, },
{"CntrlProp, j:7, i:1", &mu__condition_178, NULL, },
{"CntrlProp, j:6, i:20", &mu__condition_176, NULL, },
{"CntrlProp, j:6, i:19", &mu__condition_175, NULL, },
{"CntrlProp, j:6, i:18", &mu__condition_174, NULL, },
{"CntrlProp, j:6, i:17", &mu__condition_173, NULL, },
{"CntrlProp, j:6, i:16", &mu__condition_172, NULL, },
{"CntrlProp, j:6, i:15", &mu__condition_171, NULL, },
{"CntrlProp, j:6, i:14", &mu__condition_170, NULL, },
{"CntrlProp, j:6, i:13", &mu__condition_169, NULL, },
{"CntrlProp, j:6, i:12", &mu__condition_168, NULL, },
{"CntrlProp, j:6, i:11", &mu__condition_167, NULL, },
{"CntrlProp, j:6, i:10", &mu__condition_166, NULL, },
{"CntrlProp, j:6, i:9", &mu__condition_165, NULL, },
{"CntrlProp, j:6, i:8", &mu__condition_164, NULL, },
{"CntrlProp, j:6, i:7", &mu__condition_163, NULL, },
{"CntrlProp, j:6, i:6", &mu__condition_162, NULL, },
{"CntrlProp, j:6, i:5", &mu__condition_161, NULL, },
{"CntrlProp, j:6, i:4", &mu__condition_160, NULL, },
{"CntrlProp, j:6, i:3", &mu__condition_159, NULL, },
{"CntrlProp, j:6, i:2", &mu__condition_158, NULL, },
{"CntrlProp, j:6, i:1", &mu__condition_157, NULL, },
{"CntrlProp, j:5, i:20", &mu__condition_155, NULL, },
{"CntrlProp, j:5, i:19", &mu__condition_154, NULL, },
{"CntrlProp, j:5, i:18", &mu__condition_153, NULL, },
{"CntrlProp, j:5, i:17", &mu__condition_152, NULL, },
{"CntrlProp, j:5, i:16", &mu__condition_151, NULL, },
{"CntrlProp, j:5, i:15", &mu__condition_150, NULL, },
{"CntrlProp, j:5, i:14", &mu__condition_149, NULL, },
{"CntrlProp, j:5, i:13", &mu__condition_148, NULL, },
{"CntrlProp, j:5, i:12", &mu__condition_147, NULL, },
{"CntrlProp, j:5, i:11", &mu__condition_146, NULL, },
{"CntrlProp, j:5, i:10", &mu__condition_145, NULL, },
{"CntrlProp, j:5, i:9", &mu__condition_144, NULL, },
{"CntrlProp, j:5, i:8", &mu__condition_143, NULL, },
{"CntrlProp, j:5, i:7", &mu__condition_142, NULL, },
{"CntrlProp, j:5, i:6", &mu__condition_141, NULL, },
{"CntrlProp, j:5, i:5", &mu__condition_140, NULL, },
{"CntrlProp, j:5, i:4", &mu__condition_139, NULL, },
{"CntrlProp, j:5, i:3", &mu__condition_138, NULL, },
{"CntrlProp, j:5, i:2", &mu__condition_137, NULL, },
{"CntrlProp, j:5, i:1", &mu__condition_136, NULL, },
{"CntrlProp, j:4, i:20", &mu__condition_134, NULL, },
{"CntrlProp, j:4, i:19", &mu__condition_133, NULL, },
{"CntrlProp, j:4, i:18", &mu__condition_132, NULL, },
{"CntrlProp, j:4, i:17", &mu__condition_131, NULL, },
{"CntrlProp, j:4, i:16", &mu__condition_130, NULL, },
{"CntrlProp, j:4, i:15", &mu__condition_129, NULL, },
{"CntrlProp, j:4, i:14", &mu__condition_128, NULL, },
{"CntrlProp, j:4, i:13", &mu__condition_127, NULL, },
{"CntrlProp, j:4, i:12", &mu__condition_126, NULL, },
{"CntrlProp, j:4, i:11", &mu__condition_125, NULL, },
{"CntrlProp, j:4, i:10", &mu__condition_124, NULL, },
{"CntrlProp, j:4, i:9", &mu__condition_123, NULL, },
{"CntrlProp, j:4, i:8", &mu__condition_122, NULL, },
{"CntrlProp, j:4, i:7", &mu__condition_121, NULL, },
{"CntrlProp, j:4, i:6", &mu__condition_120, NULL, },
{"CntrlProp, j:4, i:5", &mu__condition_119, NULL, },
{"CntrlProp, j:4, i:4", &mu__condition_118, NULL, },
{"CntrlProp, j:4, i:3", &mu__condition_117, NULL, },
{"CntrlProp, j:4, i:2", &mu__condition_116, NULL, },
{"CntrlProp, j:4, i:1", &mu__condition_115, NULL, },
{"CntrlProp, j:3, i:20", &mu__condition_113, NULL, },
{"CntrlProp, j:3, i:19", &mu__condition_112, NULL, },
{"CntrlProp, j:3, i:18", &mu__condition_111, NULL, },
{"CntrlProp, j:3, i:17", &mu__condition_110, NULL, },
{"CntrlProp, j:3, i:16", &mu__condition_109, NULL, },
{"CntrlProp, j:3, i:15", &mu__condition_108, NULL, },
{"CntrlProp, j:3, i:14", &mu__condition_107, NULL, },
{"CntrlProp, j:3, i:13", &mu__condition_106, NULL, },
{"CntrlProp, j:3, i:12", &mu__condition_105, NULL, },
{"CntrlProp, j:3, i:11", &mu__condition_104, NULL, },
{"CntrlProp, j:3, i:10", &mu__condition_103, NULL, },
{"CntrlProp, j:3, i:9", &mu__condition_102, NULL, },
{"CntrlProp, j:3, i:8", &mu__condition_101, NULL, },
{"CntrlProp, j:3, i:7", &mu__condition_100, NULL, },
{"CntrlProp, j:3, i:6", &mu__condition_99, NULL, },
{"CntrlProp, j:3, i:5", &mu__condition_98, NULL, },
{"CntrlProp, j:3, i:4", &mu__condition_97, NULL, },
{"CntrlProp, j:3, i:3", &mu__condition_96, NULL, },
{"CntrlProp, j:3, i:2", &mu__condition_95, NULL, },
{"CntrlProp, j:3, i:1", &mu__condition_94, NULL, },
{"CntrlProp, j:2, i:20", &mu__condition_92, NULL, },
{"CntrlProp, j:2, i:19", &mu__condition_91, NULL, },
{"CntrlProp, j:2, i:18", &mu__condition_90, NULL, },
{"CntrlProp, j:2, i:17", &mu__condition_89, NULL, },
{"CntrlProp, j:2, i:16", &mu__condition_88, NULL, },
{"CntrlProp, j:2, i:15", &mu__condition_87, NULL, },
{"CntrlProp, j:2, i:14", &mu__condition_86, NULL, },
{"CntrlProp, j:2, i:13", &mu__condition_85, NULL, },
{"CntrlProp, j:2, i:12", &mu__condition_84, NULL, },
{"CntrlProp, j:2, i:11", &mu__condition_83, NULL, },
{"CntrlProp, j:2, i:10", &mu__condition_82, NULL, },
{"CntrlProp, j:2, i:9", &mu__condition_81, NULL, },
{"CntrlProp, j:2, i:8", &mu__condition_80, NULL, },
{"CntrlProp, j:2, i:7", &mu__condition_79, NULL, },
{"CntrlProp, j:2, i:6", &mu__condition_78, NULL, },
{"CntrlProp, j:2, i:5", &mu__condition_77, NULL, },
{"CntrlProp, j:2, i:4", &mu__condition_76, NULL, },
{"CntrlProp, j:2, i:3", &mu__condition_75, NULL, },
{"CntrlProp, j:2, i:2", &mu__condition_74, NULL, },
{"CntrlProp, j:2, i:1", &mu__condition_73, NULL, },
{"CntrlProp, j:1, i:20", &mu__condition_71, NULL, },
{"CntrlProp, j:1, i:19", &mu__condition_70, NULL, },
{"CntrlProp, j:1, i:18", &mu__condition_69, NULL, },
{"CntrlProp, j:1, i:17", &mu__condition_68, NULL, },
{"CntrlProp, j:1, i:16", &mu__condition_67, NULL, },
{"CntrlProp, j:1, i:15", &mu__condition_66, NULL, },
{"CntrlProp, j:1, i:14", &mu__condition_65, NULL, },
{"CntrlProp, j:1, i:13", &mu__condition_64, NULL, },
{"CntrlProp, j:1, i:12", &mu__condition_63, NULL, },
{"CntrlProp, j:1, i:11", &mu__condition_62, NULL, },
{"CntrlProp, j:1, i:10", &mu__condition_61, NULL, },
{"CntrlProp, j:1, i:9", &mu__condition_60, NULL, },
{"CntrlProp, j:1, i:8", &mu__condition_59, NULL, },
{"CntrlProp, j:1, i:7", &mu__condition_58, NULL, },
{"CntrlProp, j:1, i:6", &mu__condition_57, NULL, },
{"CntrlProp, j:1, i:5", &mu__condition_56, NULL, },
{"CntrlProp, j:1, i:4", &mu__condition_55, NULL, },
{"CntrlProp, j:1, i:3", &mu__condition_54, NULL, },
{"CntrlProp, j:1, i:2", &mu__condition_53, NULL, },
{"CntrlProp, j:1, i:1", &mu__condition_52, NULL, },
};
const unsigned short numinvariants = 400;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
MemData:NoScalarset
CurCmd:NoScalarset
ShrSet:NoScalarset
InvSet:NoScalarset
Chan3:NoScalarset
Chan2:NoScalarset
Chan1:NoScalarset
Cache:NoScalarset
ExGntd:NoScalarset
CurPtr:NoScalarset
AuxData:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_MemData.MultisetSort();
        mu_CurCmd.MultisetSort();
        mu_ShrSet.MultisetSort();
        mu_InvSet.MultisetSort();
        mu_Chan3.MultisetSort();
        mu_Chan2.MultisetSort();
        mu_Chan1.MultisetSort();
        mu_Cache.MultisetSort();
        mu_ExGntd.MultisetSort();
        mu_CurPtr.MultisetSort();
        mu_AuxData.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_NODE::Permute(PermSet& Perm, int i) {};
void mu_1_NODE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NODE::Canonicalize(PermSet& Perm) {};
void mu_1_NODE::SimpleLimit(PermSet& Perm) {};
void mu_1_NODE::ArrayLimit(PermSet& Perm) {};
void mu_1_NODE::Limit(PermSet& Perm) {};
void mu_1_NODE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_DATA::Permute(PermSet& Perm, int i) {};
void mu_1_DATA::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_DATA::Canonicalize(PermSet& Perm) {};
void mu_1_DATA::SimpleLimit(PermSet& Perm) {};
void mu_1_DATA::ArrayLimit(PermSet& Perm) {};
void mu_1_DATA::Limit(PermSet& Perm) {};
void mu_1_DATA::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_CACHE_STATE::Permute(PermSet& Perm, int i) {};
void mu_1_CACHE_STATE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_CACHE_STATE::Canonicalize(PermSet& Perm) {};
void mu_1_CACHE_STATE::SimpleLimit(PermSet& Perm) {};
void mu_1_CACHE_STATE::ArrayLimit(PermSet& Perm) {};
void mu_1_CACHE_STATE::Limit(PermSet& Perm) {};
void mu_1_CACHE_STATE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_CACHE::Permute(PermSet& Perm, int i)
{
};
void mu_1_CACHE::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_CACHE::Canonicalize(PermSet& Perm)
{
};
void mu_1_CACHE::SimpleLimit(PermSet& Perm){}
void mu_1_CACHE::ArrayLimit(PermSet& Perm){}
void mu_1_CACHE::Limit(PermSet& Perm)
{
};
void mu_1_CACHE::MultisetLimit(PermSet& Perm)
{
};
void mu_1_MSG_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_MSG_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MSG_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_MSG_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_MSG_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_MSG_CMD::Limit(PermSet& Perm) {};
void mu_1_MSG_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MSG::Permute(PermSet& Perm, int i)
{
};
void mu_1_MSG::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_MSG::SimpleLimit(PermSet& Perm){}
void mu_1_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_MSG::Limit(PermSet& Perm)
{
};
void mu_1_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<20; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<20; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<20; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<20; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<20; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<20; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_MemData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_MemData.MultisetSort();
              mu_CurCmd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_CurCmd.MultisetSort();
              mu_ShrSet.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ShrSet.MultisetSort();
              mu_InvSet.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_InvSet.MultisetSort();
              mu_Chan3.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Chan3.MultisetSort();
              mu_Chan2.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Chan2.MultisetSort();
              mu_Chan1.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Chan1.MultisetSort();
              mu_Cache.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Cache.MultisetSort();
              mu_ExGntd.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ExGntd.MultisetSort();
              mu_CurPtr.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_CurPtr.MultisetSort();
              mu_AuxData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_AuxData.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_MemData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_MemData.MultisetSort();
          mu_CurCmd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_CurCmd.MultisetSort();
          mu_ShrSet.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ShrSet.MultisetSort();
          mu_InvSet.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_InvSet.MultisetSort();
          mu_Chan3.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Chan3.MultisetSort();
          mu_Chan2.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Chan2.MultisetSort();
          mu_Chan1.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Chan1.MultisetSort();
          mu_Cache.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Cache.MultisetSort();
          mu_ExGntd.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ExGntd.MultisetSort();
          mu_CurPtr.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_CurPtr.MultisetSort();
          mu_AuxData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_AuxData.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_MemData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_MemData.MultisetSort();
              mu_CurCmd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_CurCmd.MultisetSort();
              mu_ShrSet.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ShrSet.MultisetSort();
              mu_InvSet.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_InvSet.MultisetSort();
              mu_Chan3.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Chan3.MultisetSort();
              mu_Chan2.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Chan2.MultisetSort();
              mu_Chan1.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Chan1.MultisetSort();
              mu_Cache.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Cache.MultisetSort();
              mu_ExGntd.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ExGntd.MultisetSort();
              mu_CurPtr.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_CurPtr.MultisetSort();
              mu_AuxData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_AuxData.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_MemData.MultisetSort();
      mu_CurCmd.MultisetSort();
      mu_ShrSet.MultisetSort();
      mu_InvSet.MultisetSort();
      mu_Chan3.MultisetSort();
      mu_Chan2.MultisetSort();
      mu_Chan1.MultisetSort();
      mu_Cache.MultisetSort();
      mu_ExGntd.MultisetSort();
      mu_CurPtr.MultisetSort();
      mu_AuxData.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_MemData.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_MemData.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_CurCmd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_CurCmd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ShrSet.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ShrSet.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_InvSet.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_InvSet.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan3.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan3.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan2.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan2.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Chan1.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Chan1.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Cache.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Cache.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ExGntd.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ExGntd.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_CurPtr.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_CurPtr.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_AuxData.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_AuxData.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
