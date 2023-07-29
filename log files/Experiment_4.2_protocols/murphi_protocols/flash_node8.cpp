/******************************
  Program "./benchmarks/murphi_protocols/flash_node8.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Mar 16 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Mar 16 2023"
#define PROTOCOL_NAME "./benchmarks/murphi_protocols/flash_node8"
#define BITS_IN_WORLD 808
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
  mu_1_NODE (const char *name, int os): mu__byte(1, 8, 4, name, os) {};
  mu_1_NODE (void): mu__byte(1, 8, 4) {};
  mu_1_NODE (int val): mu__byte(1, 8, 4, "Parameter or function result.", 0)
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
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_CACHE_STATE::values[] = {"CACHE_I","CACHE_S","CACHE_E",NULL };

/*** end of enum declaration ***/
mu_1_CACHE_STATE mu_1_CACHE_STATE_undefined_var;

class mu_1_NODE_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NODE_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NODE_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_NODE_CMD::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_NODE_CMD (const char *name, int os): mu__byte(4, 6, 2, name, os) {};
  mu_1_NODE_CMD (void): mu__byte(4, 6, 2) {};
  mu_1_NODE_CMD (int val): mu__byte(4, 6, 2, "Parameter or function result.", 0)
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
    if (defined())
      cout << name << ":" << values[ value() -4] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NODE_CMD::values[] = {"NODE_None","NODE_Get","NODE_GetX",NULL };

/*** end of enum declaration ***/
mu_1_NODE_CMD mu_1_NODE_CMD_undefined_var;

class mu_1_NODE_STATE
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NODE_CMD mu_ProcCmd;
  mu_0_boolean mu_InvMarked;
  mu_1_CACHE_STATE mu_CacheState;
  mu_1_NODE_STATE ( const char *n, int os ) { set_self(n,os); };
  mu_1_NODE_STATE ( void ) {};

  virtual ~mu_1_NODE_STATE(); 
friend int CompareWeight(mu_1_NODE_STATE& a, mu_1_NODE_STATE& b)
  {
    int w;
    w = CompareWeight(a.mu_ProcCmd, b.mu_ProcCmd);
    if (w!=0) return w;
    w = CompareWeight(a.mu_InvMarked, b.mu_InvMarked);
    if (w!=0) return w;
    w = CompareWeight(a.mu_CacheState, b.mu_CacheState);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_NODE_STATE& a, mu_1_NODE_STATE& b)
  {
    int w;
    w = Compare(a.mu_ProcCmd, b.mu_ProcCmd);
    if (w!=0) return w;
    w = Compare(a.mu_InvMarked, b.mu_InvMarked);
    if (w!=0) return w;
    w = Compare(a.mu_CacheState, b.mu_CacheState);
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
    mu_ProcCmd.MultisetSort();
    mu_InvMarked.MultisetSort();
    mu_CacheState.MultisetSort();
  }
  void print_statistic()
  {
    mu_ProcCmd.print_statistic();
    mu_InvMarked.print_statistic();
    mu_CacheState.print_statistic();
  }
  void clear() {
    mu_ProcCmd.clear();
    mu_InvMarked.clear();
    mu_CacheState.clear();
 };
  void undefine() {
    mu_ProcCmd.undefine();
    mu_InvMarked.undefine();
    mu_CacheState.undefine();
 };
  void reset() {
    mu_ProcCmd.reset();
    mu_InvMarked.reset();
    mu_CacheState.reset();
 };
  void print() {
    mu_ProcCmd.print();
    mu_InvMarked.print();
    mu_CacheState.print();
  };
  void print_diff(state *prevstate) {
    mu_ProcCmd.print_diff(prevstate);
    mu_InvMarked.print_diff(prevstate);
    mu_CacheState.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_ProcCmd.to_state(thestate);
    mu_InvMarked.to_state(thestate);
    mu_CacheState.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_NODE_STATE& operator= (const mu_1_NODE_STATE& from) {
    mu_ProcCmd.value(from.mu_ProcCmd.value());
    mu_InvMarked.value(from.mu_InvMarked.value());
    mu_CacheState.value(from.mu_CacheState.value());
    return *this;
  };
};

  void mu_1_NODE_STATE::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_NODE_STATE::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_NODE_STATE::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_ProcCmd.set_self_2(name, ".ProcCmd", os + 0 ); else mu_ProcCmd.set_self_2(NULL, NULL, 0);
  if (name) mu_InvMarked.set_self_2(name, ".InvMarked", os + 8 ); else mu_InvMarked.set_self_2(NULL, NULL, 0);
  if (name) mu_CacheState.set_self_2(name, ".CacheState", os + 16 ); else mu_CacheState.set_self_2(NULL, NULL, 0);
}

mu_1_NODE_STATE::~mu_1_NODE_STATE()
{
}

/*** end record declaration ***/
mu_1_NODE_STATE mu_1_NODE_STATE_undefined_var;

class mu_1__type_0
{
 public:
  mu_0_boolean array[ 8 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 8 ) )
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
    for (int i = 0; i < 8; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<8; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<8; i++) {
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
    for (int i=0; i<8; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<8; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 8; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 8; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 8; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 8; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 8; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 8; i++)
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
  for(int i = 0; i < 8; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
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
  mu_0_boolean array[ 8 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 8 ) )
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
    for (int i = 0; i < 8; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<8; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<8; i++) {
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
    for (int i=0; i<8; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<8; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 8; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 8; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 8; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 8; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 8; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 8; i++)
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
  for(int i = 0; i < 8; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_DIR_STATE
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_0_boolean mu_Pending;
  mu_0_boolean mu_Local;
  mu_0_boolean mu_Dirty;
  mu_0_boolean mu_HeadVld;
  mu_1_NODE mu_HeadPtr;
  mu_0_boolean mu_ShrVld;
  mu_1__type_0 mu_ShrSet;
  mu_1__type_1 mu_InvSet;
  mu_1_DIR_STATE ( const char *n, int os ) { set_self(n,os); };
  mu_1_DIR_STATE ( void ) {};

  virtual ~mu_1_DIR_STATE(); 
friend int CompareWeight(mu_1_DIR_STATE& a, mu_1_DIR_STATE& b)
  {
    int w;
    w = CompareWeight(a.mu_Pending, b.mu_Pending);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Local, b.mu_Local);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Dirty, b.mu_Dirty);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HeadVld, b.mu_HeadVld);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HeadPtr, b.mu_HeadPtr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ShrVld, b.mu_ShrVld);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ShrSet, b.mu_ShrSet);
    if (w!=0) return w;
    w = CompareWeight(a.mu_InvSet, b.mu_InvSet);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_DIR_STATE& a, mu_1_DIR_STATE& b)
  {
    int w;
    w = Compare(a.mu_Pending, b.mu_Pending);
    if (w!=0) return w;
    w = Compare(a.mu_Local, b.mu_Local);
    if (w!=0) return w;
    w = Compare(a.mu_Dirty, b.mu_Dirty);
    if (w!=0) return w;
    w = Compare(a.mu_HeadVld, b.mu_HeadVld);
    if (w!=0) return w;
    w = Compare(a.mu_HeadPtr, b.mu_HeadPtr);
    if (w!=0) return w;
    w = Compare(a.mu_ShrVld, b.mu_ShrVld);
    if (w!=0) return w;
    w = Compare(a.mu_ShrSet, b.mu_ShrSet);
    if (w!=0) return w;
    w = Compare(a.mu_InvSet, b.mu_InvSet);
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
    mu_Pending.MultisetSort();
    mu_Local.MultisetSort();
    mu_Dirty.MultisetSort();
    mu_HeadVld.MultisetSort();
    mu_HeadPtr.MultisetSort();
    mu_ShrVld.MultisetSort();
    mu_ShrSet.MultisetSort();
    mu_InvSet.MultisetSort();
  }
  void print_statistic()
  {
    mu_Pending.print_statistic();
    mu_Local.print_statistic();
    mu_Dirty.print_statistic();
    mu_HeadVld.print_statistic();
    mu_HeadPtr.print_statistic();
    mu_ShrVld.print_statistic();
    mu_ShrSet.print_statistic();
    mu_InvSet.print_statistic();
  }
  void clear() {
    mu_Pending.clear();
    mu_Local.clear();
    mu_Dirty.clear();
    mu_HeadVld.clear();
    mu_HeadPtr.clear();
    mu_ShrVld.clear();
    mu_ShrSet.clear();
    mu_InvSet.clear();
 };
  void undefine() {
    mu_Pending.undefine();
    mu_Local.undefine();
    mu_Dirty.undefine();
    mu_HeadVld.undefine();
    mu_HeadPtr.undefine();
    mu_ShrVld.undefine();
    mu_ShrSet.undefine();
    mu_InvSet.undefine();
 };
  void reset() {
    mu_Pending.reset();
    mu_Local.reset();
    mu_Dirty.reset();
    mu_HeadVld.reset();
    mu_HeadPtr.reset();
    mu_ShrVld.reset();
    mu_ShrSet.reset();
    mu_InvSet.reset();
 };
  void print() {
    mu_Pending.print();
    mu_Local.print();
    mu_Dirty.print();
    mu_HeadVld.print();
    mu_HeadPtr.print();
    mu_ShrVld.print();
    mu_ShrSet.print();
    mu_InvSet.print();
  };
  void print_diff(state *prevstate) {
    mu_Pending.print_diff(prevstate);
    mu_Local.print_diff(prevstate);
    mu_Dirty.print_diff(prevstate);
    mu_HeadVld.print_diff(prevstate);
    mu_HeadPtr.print_diff(prevstate);
    mu_ShrVld.print_diff(prevstate);
    mu_ShrSet.print_diff(prevstate);
    mu_InvSet.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Pending.to_state(thestate);
    mu_Local.to_state(thestate);
    mu_Dirty.to_state(thestate);
    mu_HeadVld.to_state(thestate);
    mu_HeadPtr.to_state(thestate);
    mu_ShrVld.to_state(thestate);
    mu_ShrSet.to_state(thestate);
    mu_InvSet.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_DIR_STATE& operator= (const mu_1_DIR_STATE& from) {
    mu_Pending.value(from.mu_Pending.value());
    mu_Local.value(from.mu_Local.value());
    mu_Dirty.value(from.mu_Dirty.value());
    mu_HeadVld.value(from.mu_HeadVld.value());
    mu_HeadPtr.value(from.mu_HeadPtr.value());
    mu_ShrVld.value(from.mu_ShrVld.value());
    mu_ShrSet = from.mu_ShrSet;
    mu_InvSet = from.mu_InvSet;
    return *this;
  };
};

  void mu_1_DIR_STATE::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_DIR_STATE::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_DIR_STATE::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Pending.set_self_2(name, ".Pending", os + 0 ); else mu_Pending.set_self_2(NULL, NULL, 0);
  if (name) mu_Local.set_self_2(name, ".Local", os + 8 ); else mu_Local.set_self_2(NULL, NULL, 0);
  if (name) mu_Dirty.set_self_2(name, ".Dirty", os + 16 ); else mu_Dirty.set_self_2(NULL, NULL, 0);
  if (name) mu_HeadVld.set_self_2(name, ".HeadVld", os + 24 ); else mu_HeadVld.set_self_2(NULL, NULL, 0);
  if (name) mu_HeadPtr.set_self_2(name, ".HeadPtr", os + 32 ); else mu_HeadPtr.set_self_2(NULL, NULL, 0);
  if (name) mu_ShrVld.set_self_2(name, ".ShrVld", os + 40 ); else mu_ShrVld.set_self_2(NULL, NULL, 0);
  if (name) mu_ShrSet.set_self_2(name, ".ShrSet", os + 48 ); else mu_ShrSet.set_self_2(NULL, NULL, 0);
  if (name) mu_InvSet.set_self_2(name, ".InvSet", os + 112 ); else mu_InvSet.set_self_2(NULL, NULL, 0);
}

mu_1_DIR_STATE::~mu_1_DIR_STATE()
{
}

/*** end record declaration ***/
mu_1_DIR_STATE mu_1_DIR_STATE_undefined_var;

class mu_1_UNI_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_UNI_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_UNI_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_UNI_CMD::values[ int(val) - 7] );
    else return ( s << "Undefined" );
  };

  mu_1_UNI_CMD (const char *name, int os): mu__byte(7, 12, 3, name, os) {};
  mu_1_UNI_CMD (void): mu__byte(7, 12, 3) {};
  mu_1_UNI_CMD (int val): mu__byte(7, 12, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -7]; };
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
    if (defined())
      cout << name << ":" << values[ value() -7] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_UNI_CMD::values[] = {"UNI_None","UNI_Get","UNI_GetX","UNI_Put","UNI_PutX","UNI_Nak",NULL };

/*** end of enum declaration ***/
mu_1_UNI_CMD mu_1_UNI_CMD_undefined_var;

class mu_1_UNI_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_UNI_CMD mu_Cmd;
  mu_1_NODE mu_Proc;
  mu_0_boolean mu_HomeProc;
  mu_1_UNI_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_UNI_MSG ( void ) {};

  virtual ~mu_1_UNI_MSG(); 
friend int CompareWeight(mu_1_UNI_MSG& a, mu_1_UNI_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Proc, b.mu_Proc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HomeProc, b.mu_HomeProc);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_UNI_MSG& a, mu_1_UNI_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = Compare(a.mu_Proc, b.mu_Proc);
    if (w!=0) return w;
    w = Compare(a.mu_HomeProc, b.mu_HomeProc);
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
    mu_Proc.MultisetSort();
    mu_HomeProc.MultisetSort();
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
    mu_Proc.print_statistic();
    mu_HomeProc.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
    mu_Proc.clear();
    mu_HomeProc.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
    mu_Proc.undefine();
    mu_HomeProc.undefine();
 };
  void reset() {
    mu_Cmd.reset();
    mu_Proc.reset();
    mu_HomeProc.reset();
 };
  void print() {
    mu_Cmd.print();
    mu_Proc.print();
    mu_HomeProc.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
    mu_Proc.print_diff(prevstate);
    mu_HomeProc.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
    mu_Proc.to_state(thestate);
    mu_HomeProc.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_UNI_MSG& operator= (const mu_1_UNI_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    mu_Proc.value(from.mu_Proc.value());
    mu_HomeProc.value(from.mu_HomeProc.value());
    return *this;
  };
};

  void mu_1_UNI_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_UNI_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_UNI_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
  if (name) mu_Proc.set_self_2(name, ".Proc", os + 8 ); else mu_Proc.set_self_2(NULL, NULL, 0);
  if (name) mu_HomeProc.set_self_2(name, ".HomeProc", os + 16 ); else mu_HomeProc.set_self_2(NULL, NULL, 0);
}

mu_1_UNI_MSG::~mu_1_UNI_MSG()
{
}

/*** end record declaration ***/
mu_1_UNI_MSG mu_1_UNI_MSG_undefined_var;

class mu_1_INV_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_INV_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_INV_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_INV_CMD::values[ int(val) - 13] );
    else return ( s << "Undefined" );
  };

  mu_1_INV_CMD (const char *name, int os): mu__byte(13, 15, 2, name, os) {};
  mu_1_INV_CMD (void): mu__byte(13, 15, 2) {};
  mu_1_INV_CMD (int val): mu__byte(13, 15, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -13]; };
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
    if (defined())
      cout << name << ":" << values[ value() -13] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_INV_CMD::values[] = {"INV_None","INV_Inv","INV_InvAck",NULL };

/*** end of enum declaration ***/
mu_1_INV_CMD mu_1_INV_CMD_undefined_var;

class mu_1_INV_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_INV_CMD mu_Cmd;
  mu_1_INV_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_INV_MSG ( void ) {};

  virtual ~mu_1_INV_MSG(); 
friend int CompareWeight(mu_1_INV_MSG& a, mu_1_INV_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_INV_MSG& a, mu_1_INV_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
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
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
 };
  void reset() {
    mu_Cmd.reset();
 };
  void print() {
    mu_Cmd.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_INV_MSG& operator= (const mu_1_INV_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    return *this;
  };
};

  void mu_1_INV_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_INV_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_INV_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
}

mu_1_INV_MSG::~mu_1_INV_MSG()
{
}

/*** end record declaration ***/
mu_1_INV_MSG mu_1_INV_MSG_undefined_var;

class mu_1_RP_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_RP_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_RP_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_RP_CMD::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_RP_CMD (const char *name, int os): mu__byte(16, 17, 2, name, os) {};
  mu_1_RP_CMD (void): mu__byte(16, 17, 2) {};
  mu_1_RP_CMD (int val): mu__byte(16, 17, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -16]; };
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
    if (defined())
      cout << name << ":" << values[ value() -16] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_RP_CMD::values[] = {"RP_None","RP_Replace",NULL };

/*** end of enum declaration ***/
mu_1_RP_CMD mu_1_RP_CMD_undefined_var;

class mu_1_RP_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_RP_CMD mu_Cmd;
  mu_1_RP_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_RP_MSG ( void ) {};

  virtual ~mu_1_RP_MSG(); 
friend int CompareWeight(mu_1_RP_MSG& a, mu_1_RP_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RP_MSG& a, mu_1_RP_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
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
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
 };
  void reset() {
    mu_Cmd.reset();
 };
  void print() {
    mu_Cmd.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RP_MSG& operator= (const mu_1_RP_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    return *this;
  };
};

  void mu_1_RP_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RP_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RP_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
}

mu_1_RP_MSG::~mu_1_RP_MSG()
{
}

/*** end record declaration ***/
mu_1_RP_MSG mu_1_RP_MSG_undefined_var;

class mu_1_WB_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_WB_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_WB_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_WB_CMD::values[ int(val) - 18] );
    else return ( s << "Undefined" );
  };

  mu_1_WB_CMD (const char *name, int os): mu__byte(18, 19, 2, name, os) {};
  mu_1_WB_CMD (void): mu__byte(18, 19, 2) {};
  mu_1_WB_CMD (int val): mu__byte(18, 19, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -18]; };
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
    if (defined())
      cout << name << ":" << values[ value() -18] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_WB_CMD::values[] = {"WB_None","WB_Wb",NULL };

/*** end of enum declaration ***/
mu_1_WB_CMD mu_1_WB_CMD_undefined_var;

class mu_1_WB_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_WB_CMD mu_Cmd;
  mu_1_NODE mu_Proc;
  mu_1_WB_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_WB_MSG ( void ) {};

  virtual ~mu_1_WB_MSG(); 
friend int CompareWeight(mu_1_WB_MSG& a, mu_1_WB_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Proc, b.mu_Proc);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_WB_MSG& a, mu_1_WB_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = Compare(a.mu_Proc, b.mu_Proc);
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
    mu_Proc.MultisetSort();
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
    mu_Proc.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
    mu_Proc.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
    mu_Proc.undefine();
 };
  void reset() {
    mu_Cmd.reset();
    mu_Proc.reset();
 };
  void print() {
    mu_Cmd.print();
    mu_Proc.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
    mu_Proc.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
    mu_Proc.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_WB_MSG& operator= (const mu_1_WB_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    mu_Proc.value(from.mu_Proc.value());
    return *this;
  };
};

  void mu_1_WB_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_WB_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_WB_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
  if (name) mu_Proc.set_self_2(name, ".Proc", os + 8 ); else mu_Proc.set_self_2(NULL, NULL, 0);
}

mu_1_WB_MSG::~mu_1_WB_MSG()
{
}

/*** end record declaration ***/
mu_1_WB_MSG mu_1_WB_MSG_undefined_var;

class mu_1_SHWB_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_SHWB_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_SHWB_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_SHWB_CMD::values[ int(val) - 20] );
    else return ( s << "Undefined" );
  };

  mu_1_SHWB_CMD (const char *name, int os): mu__byte(20, 22, 2, name, os) {};
  mu_1_SHWB_CMD (void): mu__byte(20, 22, 2) {};
  mu_1_SHWB_CMD (int val): mu__byte(20, 22, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -20]; };
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
    if (defined())
      cout << name << ":" << values[ value() -20] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_SHWB_CMD::values[] = {"SHWB_None","SHWB_ShWb","SHWB_FAck",NULL };

/*** end of enum declaration ***/
mu_1_SHWB_CMD mu_1_SHWB_CMD_undefined_var;

class mu_1_SHWB_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_SHWB_CMD mu_Cmd;
  mu_1_NODE mu_Proc;
  mu_1_SHWB_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_SHWB_MSG ( void ) {};

  virtual ~mu_1_SHWB_MSG(); 
friend int CompareWeight(mu_1_SHWB_MSG& a, mu_1_SHWB_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Proc, b.mu_Proc);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_SHWB_MSG& a, mu_1_SHWB_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
    w = Compare(a.mu_Proc, b.mu_Proc);
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
    mu_Proc.MultisetSort();
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
    mu_Proc.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
    mu_Proc.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
    mu_Proc.undefine();
 };
  void reset() {
    mu_Cmd.reset();
    mu_Proc.reset();
 };
  void print() {
    mu_Cmd.print();
    mu_Proc.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
    mu_Proc.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
    mu_Proc.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_SHWB_MSG& operator= (const mu_1_SHWB_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    mu_Proc.value(from.mu_Proc.value());
    return *this;
  };
};

  void mu_1_SHWB_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_SHWB_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_SHWB_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
  if (name) mu_Proc.set_self_2(name, ".Proc", os + 8 ); else mu_Proc.set_self_2(NULL, NULL, 0);
}

mu_1_SHWB_MSG::~mu_1_SHWB_MSG()
{
}

/*** end record declaration ***/
mu_1_SHWB_MSG mu_1_SHWB_MSG_undefined_var;

class mu_1_NAKC_CMD: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NAKC_CMD& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NAKC_CMD& val)
  {
    if (val.defined())
      return ( s << mu_1_NAKC_CMD::values[ int(val) - 23] );
    else return ( s << "Undefined" );
  };

  mu_1_NAKC_CMD (const char *name, int os): mu__byte(23, 24, 2, name, os) {};
  mu_1_NAKC_CMD (void): mu__byte(23, 24, 2) {};
  mu_1_NAKC_CMD (int val): mu__byte(23, 24, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -23]; };
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
    if (defined())
      cout << name << ":" << values[ value() -23] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NAKC_CMD::values[] = {"NAKC_None","NAKC_Nakc",NULL };

/*** end of enum declaration ***/
mu_1_NAKC_CMD mu_1_NAKC_CMD_undefined_var;

class mu_1_NAKC_MSG
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NAKC_CMD mu_Cmd;
  mu_1_NAKC_MSG ( const char *n, int os ) { set_self(n,os); };
  mu_1_NAKC_MSG ( void ) {};

  virtual ~mu_1_NAKC_MSG(); 
friend int CompareWeight(mu_1_NAKC_MSG& a, mu_1_NAKC_MSG& b)
  {
    int w;
    w = CompareWeight(a.mu_Cmd, b.mu_Cmd);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_NAKC_MSG& a, mu_1_NAKC_MSG& b)
  {
    int w;
    w = Compare(a.mu_Cmd, b.mu_Cmd);
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
  }
  void print_statistic()
  {
    mu_Cmd.print_statistic();
  }
  void clear() {
    mu_Cmd.clear();
 };
  void undefine() {
    mu_Cmd.undefine();
 };
  void reset() {
    mu_Cmd.reset();
 };
  void print() {
    mu_Cmd.print();
  };
  void print_diff(state *prevstate) {
    mu_Cmd.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Cmd.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_NAKC_MSG& operator= (const mu_1_NAKC_MSG& from) {
    mu_Cmd.value(from.mu_Cmd.value());
    return *this;
  };
};

  void mu_1_NAKC_MSG::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_NAKC_MSG::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_NAKC_MSG::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Cmd.set_self_2(name, ".Cmd", os + 0 ); else mu_Cmd.set_self_2(NULL, NULL, 0);
}

mu_1_NAKC_MSG::~mu_1_NAKC_MSG()
{
}

/*** end record declaration ***/
mu_1_NAKC_MSG mu_1_NAKC_MSG_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_NODE_STATE array[ 8 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_NODE_STATE& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 8 ) )
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
    for (int i = 0; i < 8; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<8; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<8; i++) {
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
    for (int i=0; i<8; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<8; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 8; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 8; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 8; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 8; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 8; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 8; i++)
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
  for(int i = 0; i < 8; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
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
  mu_1_UNI_MSG array[ 8 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_UNI_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 8 ) )
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
    for (int i = 0; i < 8; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<8; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<8; i++) {
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
    for (int i=0; i<8; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<8; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 8; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 8; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 8; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 8; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 8; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 8; i++)
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
  for(int i = 0; i < 8; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
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
  mu_1_INV_MSG array[ 8 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_INV_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 8 ) )
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
    for (int i = 0; i < 8; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<8; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<8; i++) {
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
    for (int i=0; i<8; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<8; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 8; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 8; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 8; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 8; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 8; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 8; i++)
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
  for(int i = 0; i < 8; i++) {
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
  mu_1_RP_MSG array[ 8 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_RP_MSG& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 8 ) )
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
    for (int i = 0; i < 8; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<8; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<8; i++) {
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
    for (int i=0; i<8; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<8; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 8; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 8; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 8; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 8; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 8; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 8; i++)
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
  for(int i = 0; i < 8; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1_STATE
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_2 mu_Proc;
  mu_1_NODE_STATE mu_HomeProc;
  mu_1_DIR_STATE mu_Dir;
  mu_1__type_3 mu_UniMsg;
  mu_1_UNI_MSG mu_HomeUniMsg;
  mu_1__type_4 mu_InvMsg;
  mu_1__type_5 mu_RpMsg;
  mu_1_WB_MSG mu_WbMsg;
  mu_1_SHWB_MSG mu_ShWbMsg;
  mu_1_NAKC_MSG mu_NakcMsg;
  mu_1_NODE mu_PendReqSrc;
  mu_0_boolean mu_HomePendReqSrc;
  mu_0_boolean mu_Collecting;
  mu_1_UNI_CMD mu_FwdCmd;
  mu_1_STATE ( const char *n, int os ) { set_self(n,os); };
  mu_1_STATE ( void ) {};

  virtual ~mu_1_STATE(); 
friend int CompareWeight(mu_1_STATE& a, mu_1_STATE& b)
  {
    int w;
    w = CompareWeight(a.mu_Proc, b.mu_Proc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HomeProc, b.mu_HomeProc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Dir, b.mu_Dir);
    if (w!=0) return w;
    w = CompareWeight(a.mu_UniMsg, b.mu_UniMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HomeUniMsg, b.mu_HomeUniMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_InvMsg, b.mu_InvMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_RpMsg, b.mu_RpMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_WbMsg, b.mu_WbMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ShWbMsg, b.mu_ShWbMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_NakcMsg, b.mu_NakcMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_PendReqSrc, b.mu_PendReqSrc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_HomePendReqSrc, b.mu_HomePendReqSrc);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Collecting, b.mu_Collecting);
    if (w!=0) return w;
    w = CompareWeight(a.mu_FwdCmd, b.mu_FwdCmd);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_STATE& a, mu_1_STATE& b)
  {
    int w;
    w = Compare(a.mu_Proc, b.mu_Proc);
    if (w!=0) return w;
    w = Compare(a.mu_HomeProc, b.mu_HomeProc);
    if (w!=0) return w;
    w = Compare(a.mu_Dir, b.mu_Dir);
    if (w!=0) return w;
    w = Compare(a.mu_UniMsg, b.mu_UniMsg);
    if (w!=0) return w;
    w = Compare(a.mu_HomeUniMsg, b.mu_HomeUniMsg);
    if (w!=0) return w;
    w = Compare(a.mu_InvMsg, b.mu_InvMsg);
    if (w!=0) return w;
    w = Compare(a.mu_RpMsg, b.mu_RpMsg);
    if (w!=0) return w;
    w = Compare(a.mu_WbMsg, b.mu_WbMsg);
    if (w!=0) return w;
    w = Compare(a.mu_ShWbMsg, b.mu_ShWbMsg);
    if (w!=0) return w;
    w = Compare(a.mu_NakcMsg, b.mu_NakcMsg);
    if (w!=0) return w;
    w = Compare(a.mu_PendReqSrc, b.mu_PendReqSrc);
    if (w!=0) return w;
    w = Compare(a.mu_HomePendReqSrc, b.mu_HomePendReqSrc);
    if (w!=0) return w;
    w = Compare(a.mu_Collecting, b.mu_Collecting);
    if (w!=0) return w;
    w = Compare(a.mu_FwdCmd, b.mu_FwdCmd);
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
    mu_Proc.MultisetSort();
    mu_HomeProc.MultisetSort();
    mu_Dir.MultisetSort();
    mu_UniMsg.MultisetSort();
    mu_HomeUniMsg.MultisetSort();
    mu_InvMsg.MultisetSort();
    mu_RpMsg.MultisetSort();
    mu_WbMsg.MultisetSort();
    mu_ShWbMsg.MultisetSort();
    mu_NakcMsg.MultisetSort();
    mu_PendReqSrc.MultisetSort();
    mu_HomePendReqSrc.MultisetSort();
    mu_Collecting.MultisetSort();
    mu_FwdCmd.MultisetSort();
  }
  void print_statistic()
  {
    mu_Proc.print_statistic();
    mu_HomeProc.print_statistic();
    mu_Dir.print_statistic();
    mu_UniMsg.print_statistic();
    mu_HomeUniMsg.print_statistic();
    mu_InvMsg.print_statistic();
    mu_RpMsg.print_statistic();
    mu_WbMsg.print_statistic();
    mu_ShWbMsg.print_statistic();
    mu_NakcMsg.print_statistic();
    mu_PendReqSrc.print_statistic();
    mu_HomePendReqSrc.print_statistic();
    mu_Collecting.print_statistic();
    mu_FwdCmd.print_statistic();
  }
  void clear() {
    mu_Proc.clear();
    mu_HomeProc.clear();
    mu_Dir.clear();
    mu_UniMsg.clear();
    mu_HomeUniMsg.clear();
    mu_InvMsg.clear();
    mu_RpMsg.clear();
    mu_WbMsg.clear();
    mu_ShWbMsg.clear();
    mu_NakcMsg.clear();
    mu_PendReqSrc.clear();
    mu_HomePendReqSrc.clear();
    mu_Collecting.clear();
    mu_FwdCmd.clear();
 };
  void undefine() {
    mu_Proc.undefine();
    mu_HomeProc.undefine();
    mu_Dir.undefine();
    mu_UniMsg.undefine();
    mu_HomeUniMsg.undefine();
    mu_InvMsg.undefine();
    mu_RpMsg.undefine();
    mu_WbMsg.undefine();
    mu_ShWbMsg.undefine();
    mu_NakcMsg.undefine();
    mu_PendReqSrc.undefine();
    mu_HomePendReqSrc.undefine();
    mu_Collecting.undefine();
    mu_FwdCmd.undefine();
 };
  void reset() {
    mu_Proc.reset();
    mu_HomeProc.reset();
    mu_Dir.reset();
    mu_UniMsg.reset();
    mu_HomeUniMsg.reset();
    mu_InvMsg.reset();
    mu_RpMsg.reset();
    mu_WbMsg.reset();
    mu_ShWbMsg.reset();
    mu_NakcMsg.reset();
    mu_PendReqSrc.reset();
    mu_HomePendReqSrc.reset();
    mu_Collecting.reset();
    mu_FwdCmd.reset();
 };
  void print() {
    mu_Proc.print();
    mu_HomeProc.print();
    mu_Dir.print();
    mu_UniMsg.print();
    mu_HomeUniMsg.print();
    mu_InvMsg.print();
    mu_RpMsg.print();
    mu_WbMsg.print();
    mu_ShWbMsg.print();
    mu_NakcMsg.print();
    mu_PendReqSrc.print();
    mu_HomePendReqSrc.print();
    mu_Collecting.print();
    mu_FwdCmd.print();
  };
  void print_diff(state *prevstate) {
    mu_Proc.print_diff(prevstate);
    mu_HomeProc.print_diff(prevstate);
    mu_Dir.print_diff(prevstate);
    mu_UniMsg.print_diff(prevstate);
    mu_HomeUniMsg.print_diff(prevstate);
    mu_InvMsg.print_diff(prevstate);
    mu_RpMsg.print_diff(prevstate);
    mu_WbMsg.print_diff(prevstate);
    mu_ShWbMsg.print_diff(prevstate);
    mu_NakcMsg.print_diff(prevstate);
    mu_PendReqSrc.print_diff(prevstate);
    mu_HomePendReqSrc.print_diff(prevstate);
    mu_Collecting.print_diff(prevstate);
    mu_FwdCmd.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Proc.to_state(thestate);
    mu_HomeProc.to_state(thestate);
    mu_Dir.to_state(thestate);
    mu_UniMsg.to_state(thestate);
    mu_HomeUniMsg.to_state(thestate);
    mu_InvMsg.to_state(thestate);
    mu_RpMsg.to_state(thestate);
    mu_WbMsg.to_state(thestate);
    mu_ShWbMsg.to_state(thestate);
    mu_NakcMsg.to_state(thestate);
    mu_PendReqSrc.to_state(thestate);
    mu_HomePendReqSrc.to_state(thestate);
    mu_Collecting.to_state(thestate);
    mu_FwdCmd.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_STATE& operator= (const mu_1_STATE& from) {
    mu_Proc = from.mu_Proc;
    mu_HomeProc = from.mu_HomeProc;
    mu_Dir = from.mu_Dir;
    mu_UniMsg = from.mu_UniMsg;
    mu_HomeUniMsg = from.mu_HomeUniMsg;
    mu_InvMsg = from.mu_InvMsg;
    mu_RpMsg = from.mu_RpMsg;
    mu_WbMsg = from.mu_WbMsg;
    mu_ShWbMsg = from.mu_ShWbMsg;
    mu_NakcMsg = from.mu_NakcMsg;
    mu_PendReqSrc.value(from.mu_PendReqSrc.value());
    mu_HomePendReqSrc.value(from.mu_HomePendReqSrc.value());
    mu_Collecting.value(from.mu_Collecting.value());
    mu_FwdCmd.value(from.mu_FwdCmd.value());
    return *this;
  };
};

  void mu_1_STATE::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_STATE::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_STATE::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Proc.set_self_2(name, ".Proc", os + 0 ); else mu_Proc.set_self_2(NULL, NULL, 0);
  if (name) mu_HomeProc.set_self_2(name, ".HomeProc", os + 192 ); else mu_HomeProc.set_self_2(NULL, NULL, 0);
  if (name) mu_Dir.set_self_2(name, ".Dir", os + 216 ); else mu_Dir.set_self_2(NULL, NULL, 0);
  if (name) mu_UniMsg.set_self_2(name, ".UniMsg", os + 392 ); else mu_UniMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_HomeUniMsg.set_self_2(name, ".HomeUniMsg", os + 584 ); else mu_HomeUniMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_InvMsg.set_self_2(name, ".InvMsg", os + 608 ); else mu_InvMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_RpMsg.set_self_2(name, ".RpMsg", os + 672 ); else mu_RpMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_WbMsg.set_self_2(name, ".WbMsg", os + 736 ); else mu_WbMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_ShWbMsg.set_self_2(name, ".ShWbMsg", os + 752 ); else mu_ShWbMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_NakcMsg.set_self_2(name, ".NakcMsg", os + 768 ); else mu_NakcMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_PendReqSrc.set_self_2(name, ".PendReqSrc", os + 776 ); else mu_PendReqSrc.set_self_2(NULL, NULL, 0);
  if (name) mu_HomePendReqSrc.set_self_2(name, ".HomePendReqSrc", os + 784 ); else mu_HomePendReqSrc.set_self_2(NULL, NULL, 0);
  if (name) mu_Collecting.set_self_2(name, ".Collecting", os + 792 ); else mu_Collecting.set_self_2(NULL, NULL, 0);
  if (name) mu_FwdCmd.set_self_2(name, ".FwdCmd", os + 800 ); else mu_FwdCmd.set_self_2(NULL, NULL, 0);
}

mu_1_STATE::~mu_1_STATE()
{
}

/*** end record declaration ***/
mu_1_STATE mu_1_STATE_undefined_var;

const int mu_NODE_NUM = 8;
const int mu_CACHE_I = 1;
const int mu_CACHE_S = 2;
const int mu_CACHE_E = 3;
const int mu_NODE_None = 4;
const int mu_NODE_Get = 5;
const int mu_NODE_GetX = 6;
const int mu_UNI_None = 7;
const int mu_UNI_Get = 8;
const int mu_UNI_GetX = 9;
const int mu_UNI_Put = 10;
const int mu_UNI_PutX = 11;
const int mu_UNI_Nak = 12;
const int mu_INV_None = 13;
const int mu_INV_Inv = 14;
const int mu_INV_InvAck = 15;
const int mu_RP_None = 16;
const int mu_RP_Replace = 17;
const int mu_WB_None = 18;
const int mu_WB_Wb = 19;
const int mu_SHWB_None = 20;
const int mu_SHWB_ShWb = 21;
const int mu_SHWB_FAck = 22;
const int mu_NAKC_None = 23;
const int mu_NAKC_Nakc = 24;
/*** Variable declaration ***/
mu_1_STATE mu_Sta("Sta",0);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_Sta.clear();
}
void world_class::undefine()
{
  mu_Sta.undefine();
}
void world_class::reset()
{
  mu_Sta.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Sta.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_Sta.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_Sta.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_Sta.to_state( newstate );
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
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Replace, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return (mu_Sta.mu_RpMsg[mu_src].mu_Cmd) == (mu_RP_Replace);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 8 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_RpMsg[mu_src].mu_Cmd) == (mu_RP_Replace)) {
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
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_RpMsg[mu_src].mu_Cmd = mu_RP_None;
if ( mu_Sta.mu_Dir.mu_ShrVld )
{
mu_Sta.mu_Dir.mu_ShrSet[mu_src] = mu_false;
mu_Sta.mu_Dir.mu_InvSet[mu_src] = mu_false;
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
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_ShWb, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr6;
  if (!((mu_Sta.mu_ShWbMsg.mu_Cmd) == (mu_SHWB_ShWb))) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = ((mu_Sta.mu_ShWbMsg.mu_Proc) == (mu_src)) ; 
}
    return mu__boolexpr6;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr7;
  if (!((mu_Sta.mu_ShWbMsg.mu_Cmd) == (mu_SHWB_ShWb))) mu__boolexpr7 = FALSE ;
  else {
  mu__boolexpr7 = ((mu_Sta.mu_ShWbMsg.mu_Proc) == (mu_src)) ; 
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
    r = what_rule - 8;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_None;
mu_Sta.mu_Dir.mu_Pending = mu_false;
mu_Sta.mu_Dir.mu_Dirty = mu_false;
mu_Sta.mu_Dir.mu_ShrVld = mu_true;
mu_Sta.mu_Dir.mu_ShrSet[mu_src] = mu_true;
mu_Sta.mu_Dir.mu_InvSet[mu_src] = mu_true;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
if ( (mu_p) != (mu_src) )
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_Sta.mu_Dir.mu_ShrSet[mu_p];
}
};
};
mu_Sta.mu_ShWbMsg.mu_Proc.undefine();
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
    return tsprintf("NI_FAck");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_ShWbMsg.mu_Cmd) == (mu_SHWB_FAck);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    while (what_rule < 17 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_ShWbMsg.mu_Cmd) == (mu_SHWB_FAck)) {
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
    r = what_rule - 16;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_None;
mu_Sta.mu_Dir.mu_Pending = mu_false;
if ( mu_Sta.mu_Dir.mu_Dirty )
{
mu_Sta.mu_Dir.mu_HeadPtr = mu_Sta.mu_ShWbMsg.mu_Proc;
}
mu_Sta.mu_ShWbMsg.mu_Proc.undefine();
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
    return tsprintf("NI_Wb");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_WbMsg.mu_Cmd) == (mu_WB_Wb);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17;
    while (what_rule < 18 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_WbMsg.mu_Cmd) == (mu_WB_Wb)) {
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
    r = what_rule - 17;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_WbMsg.mu_Cmd = mu_WB_None;
mu_Sta.mu_WbMsg.mu_Proc.undefine();
mu_Sta.mu_Dir.mu_Dirty = mu_false;
mu_Sta.mu_Dir.mu_HeadVld = mu_false;
mu_Sta.mu_Dir.mu_HeadPtr.undefine();
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
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_InvAck2, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr8;
bool mu__boolexpr9;
  if (!((mu_Sta.mu_InvMsg[mu_src].mu_Cmd) == (mu_INV_InvAck))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = (mu_Sta.mu_Dir.mu_Pending) ; 
}
  if (!(mu__boolexpr9)) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = (mu_Sta.mu_Dir.mu_InvSet[mu_src]) ; 
}
    return mu__boolexpr8;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 18;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 26 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr10;
bool mu__boolexpr11;
  if (!((mu_Sta.mu_InvMsg[mu_src].mu_Cmd) == (mu_INV_InvAck))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = (mu_Sta.mu_Dir.mu_Pending) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = (mu_Sta.mu_Dir.mu_InvSet[mu_src]) ; 
}
	      if (mu__boolexpr10) {
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
    r = what_rule - 18;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_InvMsg[mu_src].mu_Cmd = mu_INV_None;
mu_Sta.mu_Dir.mu_InvSet[mu_src] = mu_false;
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
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_InvAck1, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr12;
bool mu__boolexpr13;
bool mu__boolexpr14;
  if (!((mu_Sta.mu_InvMsg[mu_src].mu_Cmd) == (mu_INV_InvAck))) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = (mu_Sta.mu_Dir.mu_Pending) ; 
}
  if (!(mu__boolexpr14)) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = (mu_Sta.mu_Dir.mu_InvSet[mu_src]) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
bool mu__quant15; 
mu__quant15 = TRUE;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
bool mu__boolexpr16;
  if (!((mu_p) != (mu_src))) mu__boolexpr16 = TRUE ;
  else {
  mu__boolexpr16 = (!(mu_Sta.mu_Dir.mu_InvSet[mu_p])) ; 
}
if ( !(mu__boolexpr16) )
  { mu__quant15 = FALSE; break; }
};
};
  mu__boolexpr12 = (mu__quant15) ; 
}
    return mu__boolexpr12;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 26;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 34 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
  if (!((mu_Sta.mu_InvMsg[mu_src].mu_Cmd) == (mu_INV_InvAck))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = (mu_Sta.mu_Dir.mu_Pending) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = (mu_Sta.mu_Dir.mu_InvSet[mu_src]) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
bool mu__quant20; 
mu__quant20 = TRUE;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
bool mu__boolexpr21;
  if (!((mu_p) != (mu_src))) mu__boolexpr21 = TRUE ;
  else {
  mu__boolexpr21 = (!(mu_Sta.mu_Dir.mu_InvSet[mu_p])) ; 
}
if ( !(mu__boolexpr21) )
  { mu__quant20 = FALSE; break; }
};
};
  mu__boolexpr17 = (mu__quant20) ; 
}
	      if (mu__boolexpr17) {
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
    r = what_rule - 26;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_InvMsg[mu_src].mu_Cmd = mu_INV_None;
mu_Sta.mu_Dir.mu_InvSet[mu_src] = mu_false;
mu_Sta.mu_Dir.mu_Pending = mu_false;
bool mu__boolexpr22;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
if ( mu__boolexpr22 )
{
mu_Sta.mu_Dir.mu_Local = mu_false;
}
mu_Sta.mu_Collecting = mu_false;
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
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Inv, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return (mu_Sta.mu_InvMsg[mu_dst].mu_Cmd) == (mu_INV_Inv);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 34;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 42 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_InvMsg[mu_dst].mu_Cmd) == (mu_INV_Inv)) {
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
    r = what_rule - 34;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_InvMsg[mu_dst].mu_Cmd = mu_INV_InvAck;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_I;
if ( (mu_Sta.mu_Proc[mu_dst].mu_ProcCmd) == (mu_NODE_Get) )
{
mu_Sta.mu_Proc[mu_dst].mu_InvMarked = mu_true;
}
else
{
mu_Sta.mu_Proc[mu_dst].mu_InvMarked = mu_Sta.mu_Proc[mu_dst].mu_InvMarked;
}
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
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_PutX, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr23;
  if (!((mu_Sta.mu_UniMsg[mu_dst].mu_Cmd) == (mu_UNI_PutX))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_Sta.mu_Proc[mu_dst].mu_ProcCmd) == (mu_NODE_GetX)) ; 
}
    return mu__boolexpr23;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 42;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 50 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr24;
  if (!((mu_Sta.mu_UniMsg[mu_dst].mu_Cmd) == (mu_UNI_PutX))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_Sta.mu_Proc[mu_dst].mu_ProcCmd) == (mu_NODE_GetX)) ; 
}
	      if (mu__boolexpr24) {
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
    r = what_rule - 42;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_UniMsg[mu_dst].mu_Cmd = mu_UNI_None;
mu_Sta.mu_UniMsg[mu_dst].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_dst].mu_Proc.undefine();
mu_Sta.mu_Proc[mu_dst].mu_ProcCmd = mu_NODE_None;
mu_Sta.mu_Proc[mu_dst].mu_InvMarked = mu_false;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_E;
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
    return tsprintf("NI_Local_PutXAcksDone");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_PutX);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 50;
    while (what_rule < 51 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_PutX)) {
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
    r = what_rule - 50;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_None;
mu_Sta.mu_HomeUniMsg.mu_Proc.undefine();
mu_Sta.mu_Dir.mu_Pending = mu_false;
mu_Sta.mu_Dir.mu_Local = mu_true;
mu_Sta.mu_Dir.mu_HeadVld = mu_false;
mu_Sta.mu_Dir.mu_HeadPtr.undefine();
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_None;
mu_Sta.mu_HomeProc.mu_InvMarked = mu_false;
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_E;
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
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_Put, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return (mu_Sta.mu_UniMsg[mu_dst].mu_Cmd) == (mu_UNI_Put);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 51;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 59 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_UniMsg[mu_dst].mu_Cmd) == (mu_UNI_Put)) {
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
    r = what_rule - 51;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_UniMsg[mu_dst].mu_Cmd = mu_UNI_None;
mu_Sta.mu_UniMsg[mu_dst].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_dst].mu_Proc.undefine();
mu_Sta.mu_Proc[mu_dst].mu_ProcCmd = mu_NODE_None;
if ( mu_Sta.mu_Proc[mu_dst].mu_InvMarked )
{
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_I;
}
else
{
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_S;
}
mu_Sta.mu_Proc[mu_dst].mu_InvMarked = mu_false;
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
    return tsprintf("NI_Local_Put");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Put);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 59;
    while (what_rule < 60 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Put)) {
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
    r = what_rule - 59;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_None;
mu_Sta.mu_HomeUniMsg.mu_Proc.undefine();
mu_Sta.mu_Dir.mu_Pending = mu_false;
mu_Sta.mu_Dir.mu_Dirty = mu_false;
mu_Sta.mu_Dir.mu_Local = mu_true;
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_None;
if ( mu_Sta.mu_HomeProc.mu_InvMarked )
{
mu_Sta.mu_HomeProc.mu_InvMarked = mu_false;
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
}
else
{
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_S;
}
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
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_GetX_PutX_Home, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
    return mu__boolexpr25;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 60;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 68 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr28;
bool mu__boolexpr29;
bool mu__boolexpr30;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr28) {
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
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_I;
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_PutX;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_dst;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_GetX_PutX, dst:%s, src:%s", mu_dst.Name(), mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr31;
bool mu__boolexpr32;
bool mu__boolexpr33;
bool mu__boolexpr34;
  if (!((mu_src) != (mu_dst))) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
    return mu__boolexpr31;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 68;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 132 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr35;
bool mu__boolexpr36;
bool mu__boolexpr37;
bool mu__boolexpr38;
  if (!((mu_src) != (mu_dst))) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr36)) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
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
    r = what_rule - 68;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_I;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_PutX;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_dst;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_FAck;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_src;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_GetX_Nak_Home, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr39;
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E)) ; 
}
    return mu__boolexpr39;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 132;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 140 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr42) {
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
    r = what_rule - 132;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_dst;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_GetX_Nak, dst:%s, src:%s", mu_dst.Name(), mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!((mu_src) != (mu_dst))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E)) ; 
}
    return mu__boolexpr45;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 140;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 204 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
bool mu__boolexpr52;
  if (!((mu_src) != (mu_dst))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr49) {
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
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_dst;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_GetX_PutX3, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr53;
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
bool mu__boolexpr57;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr57 = TRUE ;
  else {
bool mu__boolexpr58;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr57 = (mu__boolexpr58) ; 
}
  mu__boolexpr54 = (mu__boolexpr57) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
    return mu__boolexpr53;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 204;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 212 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
bool mu__boolexpr63;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr63 = TRUE ;
  else {
bool mu__boolexpr64;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr63 = (mu__boolexpr64) ; 
}
  mu__boolexpr60 = (mu__boolexpr63) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
	      if (mu__boolexpr59) {
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
    r = what_rule - 204;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Dir.mu_Pending = mu_true;
mu_Sta.mu_Dir.mu_Dirty = mu_true;
mu_Sta.mu_Dir.mu_InvSet[mu_src] = mu_false;
mu_Sta.mu_InvMsg[mu_src].mu_Cmd = mu_INV_None;
mu_Sta.mu_Dir.mu_ShrSet[mu_src] = mu_false;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
if ( (mu_p) != (mu_src) )
{
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!(mu_Sta.mu_Dir.mu_ShrVld)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = (mu_Sta.mu_Dir.mu_ShrSet[mu_p]) ; 
}
  if (mu__boolexpr66) mu__boolexpr65 = TRUE ;
  else {
bool mu__boolexpr67;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_p)) ; 
}
  mu__boolexpr65 = (mu__boolexpr67) ; 
}
if ( mu__boolexpr65 )
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_true;
}
else
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
}
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!(mu_Sta.mu_Dir.mu_ShrVld)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (mu_Sta.mu_Dir.mu_ShrSet[mu_p]) ; 
}
  if (mu__boolexpr69) mu__boolexpr68 = TRUE ;
  else {
bool mu__boolexpr70;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_p)) ; 
}
  mu__boolexpr68 = (mu__boolexpr70) ; 
}
if ( mu__boolexpr68 )
{
mu_Sta.mu_InvMsg[mu_p].mu_Cmd = mu_INV_Inv;
}
else
{
mu_Sta.mu_InvMsg[mu_p].mu_Cmd = mu_INV_None;
}
mu_Sta.mu_Dir.mu_ShrSet[mu_p] = mu_false;
}
};
};
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_src;
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_PutX;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
if ( mu_Sta.mu_Dir.mu_Local )
{
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
if ( (mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_Get) )
{
mu_Sta.mu_HomeProc.mu_InvMarked = mu_true;
}
}
mu_Sta.mu_Dir.mu_Local = mu_false;
mu_Sta.mu_HomePendReqSrc = mu_false;
mu_Sta.mu_PendReqSrc = mu_src;
mu_Sta.mu_Collecting = mu_true;
  };

};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_GetX_PutX2, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr71;
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
bool mu__boolexpr76;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr76 = TRUE ;
  else {
bool mu__boolexpr77;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr76 = (mu__boolexpr77) ; 
}
  mu__boolexpr73 = (mu__boolexpr76) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
bool mu__boolexpr78;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr78 = TRUE ;
  else {
bool mu__boolexpr79;
  if (!((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_src))) mu__boolexpr79 = FALSE ;
  else {
bool mu__quant80; 
mu__quant80 = TRUE;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
bool mu__boolexpr81;
  if (!((mu_p) != (mu_src))) mu__boolexpr81 = TRUE ;
  else {
  mu__boolexpr81 = (!(mu_Sta.mu_Dir.mu_ShrSet[mu_p])) ; 
}
if ( !(mu__boolexpr81) )
  { mu__quant80 = FALSE; break; }
};
};
  mu__boolexpr79 = (mu__quant80) ; 
}
  mu__boolexpr78 = (mu__boolexpr79) ; 
}
  mu__boolexpr71 = (mu__boolexpr78) ; 
}
    return mu__boolexpr71;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 212;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 220 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
bool mu__boolexpr87;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr87 = TRUE ;
  else {
bool mu__boolexpr88;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr87 = (mu__boolexpr88) ; 
}
  mu__boolexpr84 = (mu__boolexpr87) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
bool mu__boolexpr89;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr89 = TRUE ;
  else {
bool mu__boolexpr90;
  if (!((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_src))) mu__boolexpr90 = FALSE ;
  else {
bool mu__quant91; 
mu__quant91 = TRUE;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
bool mu__boolexpr92;
  if (!((mu_p) != (mu_src))) mu__boolexpr92 = TRUE ;
  else {
  mu__boolexpr92 = (!(mu_Sta.mu_Dir.mu_ShrSet[mu_p])) ; 
}
if ( !(mu__boolexpr92) )
  { mu__quant91 = FALSE; break; }
};
};
  mu__boolexpr90 = (mu__quant91) ; 
}
  mu__boolexpr89 = (mu__boolexpr90) ; 
}
  mu__boolexpr82 = (mu__boolexpr89) ; 
}
	      if (mu__boolexpr82) {
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
    r = what_rule - 212;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Dir.mu_Dirty = mu_true;
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_src;
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
mu_Sta.mu_Dir.mu_ShrSet[mu_p] = mu_false;
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
};
};
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_PutX;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
if ( mu_Sta.mu_Dir.mu_Local )
{
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
if ( (mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_Get) )
{
mu_Sta.mu_HomeProc.mu_InvMarked = mu_true;
}
}
mu_Sta.mu_Dir.mu_Local = mu_false;
  };

};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_GetX_PutX1, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
bool mu__boolexpr97;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr97 = TRUE ;
  else {
bool mu__boolexpr98;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr97 = (mu__boolexpr98) ; 
}
  mu__boolexpr94 = (mu__boolexpr97) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
    return mu__boolexpr93;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 220;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 228 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr99;
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
bool mu__boolexpr103;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr103 = TRUE ;
  else {
bool mu__boolexpr104;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr103 = (mu__boolexpr104) ; 
}
  mu__boolexpr100 = (mu__boolexpr103) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
	      if (mu__boolexpr99) {
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
    r = what_rule - 220;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Dir.mu_Local = mu_false;
mu_Sta.mu_Dir.mu_Dirty = mu_true;
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_src;
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
mu_Sta.mu_Dir.mu_ShrSet[mu_p] = mu_false;
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
};
};
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_PutX;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
  };

};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_GetX_GetX, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_src)) ; 
}
    return mu__boolexpr105;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 228;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 236 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_src)) ; 
}
	      if (mu__boolexpr110) {
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
    r = what_rule - 228;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Dir.mu_Pending = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_GetX;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_Sta.mu_Dir.mu_HeadPtr;
mu_Sta.mu_FwdCmd = mu_UNI_GetX;
mu_Sta.mu_HomePendReqSrc = mu_false;
mu_Sta.mu_PendReqSrc = mu_src;
mu_Sta.mu_Collecting = mu_false;
  };

};
/******************** RuleBase19 ********************/
class RuleBase19
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_GetX_Nak, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr115;
bool mu__boolexpr116;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
bool mu__boolexpr117;
bool mu__boolexpr118;
  if (mu_Sta.mu_Dir.mu_Pending) mu__boolexpr118 = TRUE ;
  else {
bool mu__boolexpr119;
bool mu__boolexpr120;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_Sta.mu_Dir.mu_Local) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr118 = (mu__boolexpr119) ; 
}
  if (mu__boolexpr118) mu__boolexpr117 = TRUE ;
  else {
bool mu__boolexpr121;
bool mu__boolexpr122;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_src)) ; 
}
  mu__boolexpr117 = (mu__boolexpr121) ; 
}
  mu__boolexpr115 = (mu__boolexpr117) ; 
}
    return mu__boolexpr115;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 236;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 244 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr123;
bool mu__boolexpr124;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
bool mu__boolexpr125;
bool mu__boolexpr126;
  if (mu_Sta.mu_Dir.mu_Pending) mu__boolexpr126 = TRUE ;
  else {
bool mu__boolexpr127;
bool mu__boolexpr128;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = (mu_Sta.mu_Dir.mu_Local) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr126 = (mu__boolexpr127) ; 
}
  if (mu__boolexpr126) mu__boolexpr125 = TRUE ;
  else {
bool mu__boolexpr129;
bool mu__boolexpr130;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_src)) ; 
}
  mu__boolexpr125 = (mu__boolexpr129) ; 
}
  mu__boolexpr123 = (mu__boolexpr125) ; 
}
	      if (mu__boolexpr123) {
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
    r = what_rule - 236;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
  };

};
/******************** RuleBase20 ********************/
class RuleBase20
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_Get_Put_Home, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Get))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
    return mu__boolexpr131;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 244;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 252 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Get))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr134) {
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
    r = what_rule - 244;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_S;
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_Put;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_dst;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase21 ********************/
class RuleBase21
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_Get_Put, dst:%s, src:%s", mu_dst.Name(), mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!((mu_src) != (mu_dst))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
    return mu__boolexpr137;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 252;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 316 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
  if (!((mu_src) != (mu_dst))) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr141) {
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
    r = what_rule - 252;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_S;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Put;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_dst;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_ShWb;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_src;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase22 ********************/
class RuleBase22
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_Get_Nak_Home, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Get))) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
    return mu__boolexpr145;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 316;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 324 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Get))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr148) {
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
    r = what_rule - 316;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_dst;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase23 ********************/
class RuleBase23
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Remote_Get_Nak, dst:%s, src:%s", mu_dst.Name(), mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
  if (!((mu_src) != (mu_dst))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E)) ; 
}
    return mu__boolexpr151;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 324;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 388 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
  if (!((mu_src) != (mu_dst))) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_dst)) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr155) {
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
    r = what_rule - 324;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_dst;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
/******************** RuleBase24 ********************/
class RuleBase24
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_Get_Put, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_Sta.mu_RpMsg[mu_src].mu_Cmd) != (mu_RP_Replace)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
bool mu__boolexpr163;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr163 = TRUE ;
  else {
bool mu__boolexpr164;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr163 = (mu__boolexpr164) ; 
}
  mu__boolexpr159 = (mu__boolexpr163) ; 
}
    return mu__boolexpr159;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 388;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 396 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_Sta.mu_RpMsg[mu_src].mu_Cmd) != (mu_RP_Replace)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
bool mu__boolexpr169;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr169 = TRUE ;
  else {
bool mu__boolexpr170;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr169 = (mu__boolexpr170) ; 
}
  mu__boolexpr165 = (mu__boolexpr169) ; 
}
	      if (mu__boolexpr165) {
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
    r = what_rule - 388;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
if ( mu_Sta.mu_Dir.mu_Dirty )
{
mu_Sta.mu_Dir.mu_Dirty = mu_false;
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_src;
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_S;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Put;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
}
else
{
if ( mu_Sta.mu_Dir.mu_HeadVld )
{
mu_Sta.mu_Dir.mu_ShrVld = mu_true;
mu_Sta.mu_Dir.mu_ShrSet[mu_src] = mu_true;
mu_Sta.mu_Dir.mu_InvSet[mu_src] = mu_true;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
if ( (mu_p) != (mu_src) )
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_Sta.mu_Dir.mu_ShrSet[mu_p];
}
};
};
}
else
{
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_src;
}
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Put;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
}
  };

};
/******************** RuleBase25 ********************/
class RuleBase25
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_Get_Get, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
bool mu__boolexpr176;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_Sta.mu_RpMsg[mu_src].mu_Cmd) != (mu_RP_Replace)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_src)) ; 
}
    return mu__boolexpr171;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 396;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 404 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_Sta.mu_RpMsg[mu_src].mu_Cmd) != (mu_RP_Replace)) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_src)) ; 
}
	      if (mu__boolexpr177) {
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
    r = what_rule - 396;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Dir.mu_Pending = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Get;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_Sta.mu_Dir.mu_HeadPtr;
mu_Sta.mu_FwdCmd = mu_UNI_Get;
mu_Sta.mu_HomePendReqSrc = mu_false;
mu_Sta.mu_PendReqSrc = mu_src;
mu_Sta.mu_Collecting = mu_false;
  };

};
/******************** RuleBase26 ********************/
class RuleBase26
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Local_Get_Nak, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_Sta.mu_RpMsg[mu_src].mu_Cmd) != (mu_RP_Replace)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
bool mu__boolexpr186;
bool mu__boolexpr187;
  if (mu_Sta.mu_Dir.mu_Pending) mu__boolexpr187 = TRUE ;
  else {
bool mu__boolexpr188;
bool mu__boolexpr189;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = (mu_Sta.mu_Dir.mu_Local) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr187 = (mu__boolexpr188) ; 
}
  if (mu__boolexpr187) mu__boolexpr186 = TRUE ;
  else {
bool mu__boolexpr190;
bool mu__boolexpr191;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_src)) ; 
}
  mu__boolexpr186 = (mu__boolexpr190) ; 
}
  mu__boolexpr183 = (mu__boolexpr186) ; 
}
    return mu__boolexpr183;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 404;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 412 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = (mu_Sta.mu_UniMsg[mu_src].mu_HomeProc) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_Sta.mu_RpMsg[mu_src].mu_Cmd) != (mu_RP_Replace)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
bool mu__boolexpr195;
bool mu__boolexpr196;
  if (mu_Sta.mu_Dir.mu_Pending) mu__boolexpr196 = TRUE ;
  else {
bool mu__boolexpr197;
bool mu__boolexpr198;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = (mu_Sta.mu_Dir.mu_Local) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr196 = (mu__boolexpr197) ; 
}
  if (mu__boolexpr196) mu__boolexpr195 = TRUE ;
  else {
bool mu__boolexpr199;
bool mu__boolexpr200;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_src)) ; 
}
  mu__boolexpr195 = (mu__boolexpr199) ; 
}
  mu__boolexpr192 = (mu__boolexpr195) ; 
}
	      if (mu__boolexpr192) {
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
    r = what_rule - 404;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
  };

};
/******************** RuleBase27 ********************/
class RuleBase27
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("NI_Nak_Clear");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_NakcMsg.mu_Cmd) == (mu_NAKC_Nakc);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 412;
    while (what_rule < 413 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_NakcMsg.mu_Cmd) == (mu_NAKC_Nakc)) {
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
    r = what_rule - 412;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_None;
mu_Sta.mu_Dir.mu_Pending = mu_false;
  };

};
/******************** RuleBase28 ********************/
class RuleBase28
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("NI_Nak_Home");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Nak);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 413;
    while (what_rule < 414 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Nak)) {
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
    r = what_rule - 413;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_None;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc.undefine();
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_None;
mu_Sta.mu_HomeProc.mu_InvMarked = mu_false;
  };

};
/******************** RuleBase29 ********************/
class RuleBase29
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("NI_Nak, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return (mu_Sta.mu_UniMsg[mu_dst].mu_Cmd) == (mu_UNI_Nak);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 414;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 422 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_UniMsg[mu_dst].mu_Cmd) == (mu_UNI_Nak)) {
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
    r = what_rule - 414;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_UniMsg[mu_dst].mu_Cmd = mu_UNI_None;
mu_Sta.mu_UniMsg[mu_dst].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_dst].mu_Proc.undefine();
mu_Sta.mu_Proc[mu_dst].mu_ProcCmd = mu_NODE_None;
mu_Sta.mu_Proc[mu_dst].mu_InvMarked = mu_false;
  };

};
/******************** RuleBase30 ********************/
class RuleBase30
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("PI_Local_Replace");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr201;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_S)) ; 
}
    return mu__boolexpr201;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 422;
    while (what_rule < 423 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr202;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_S)) ; 
}
	      if (mu__boolexpr202) {
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
    r = what_rule - 422;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_Dir.mu_Local = mu_false;
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
  };

};
/******************** RuleBase31 ********************/
class RuleBase31
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("PI_Remote_Replace, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr203;
  if (!((mu_Sta.mu_Proc[mu_src].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_Sta.mu_Proc[mu_src].mu_CacheState) == (mu_CACHE_S)) ; 
}
    return mu__boolexpr203;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 423;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 431 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr204;
  if (!((mu_Sta.mu_Proc[mu_src].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_Sta.mu_Proc[mu_src].mu_CacheState) == (mu_CACHE_S)) ; 
}
	      if (mu__boolexpr204) {
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
    r = what_rule - 423;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_src].mu_CacheState = mu_CACHE_I;
mu_Sta.mu_RpMsg[mu_src].mu_Cmd = mu_RP_Replace;
  };

};
/******************** RuleBase32 ********************/
class RuleBase32
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("PI_Local_PutX");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr205;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
    return mu__boolexpr205;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 431;
    while (what_rule < 432 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr206;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr206) {
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
    r = what_rule - 431;
    }
  }

  void Code(unsigned r)
  {
if ( mu_Sta.mu_Dir.mu_Pending )
{
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
mu_Sta.mu_Dir.mu_Dirty = mu_false;
}
else
{
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
mu_Sta.mu_Dir.mu_Local = mu_false;
mu_Sta.mu_Dir.mu_Dirty = mu_false;
}
  };

};
/******************** RuleBase33 ********************/
class RuleBase33
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("PI_Remote_PutX, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr207;
  if (!((mu_Sta.mu_Proc[mu_dst].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
    return mu__boolexpr207;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 432;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 440 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr208;
  if (!((mu_Sta.mu_Proc[mu_dst].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) ; 
}
	      if (mu__boolexpr208) {
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
    r = what_rule - 432;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_I;
mu_Sta.mu_WbMsg.mu_Cmd = mu_WB_Wb;
mu_Sta.mu_WbMsg.mu_Proc = mu_dst;
  };

};
/******************** RuleBase34 ********************/
class RuleBase34
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("PI_Local_GetX_PutX");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr211 = FALSE ;
  else {
bool mu__boolexpr212;
  if ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) mu__boolexpr212 = TRUE ;
  else {
  mu__boolexpr212 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_S)) ; 
}
  mu__boolexpr211 = (mu__boolexpr212) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
    return mu__boolexpr209;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 440;
    while (what_rule < 441 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr215 = FALSE ;
  else {
bool mu__boolexpr216;
  if ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) mu__boolexpr216 = TRUE ;
  else {
  mu__boolexpr216 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_S)) ; 
}
  mu__boolexpr215 = (mu__boolexpr216) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
	      if (mu__boolexpr213) {
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
    r = what_rule - 440;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_Dir.mu_Local = mu_true;
mu_Sta.mu_Dir.mu_Dirty = mu_true;
if ( mu_Sta.mu_Dir.mu_HeadVld )
{
mu_Sta.mu_Dir.mu_Pending = mu_true;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
bool mu__boolexpr217;
bool mu__boolexpr218;
  if (!(mu_Sta.mu_Dir.mu_ShrVld)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_Sta.mu_Dir.mu_ShrSet[mu_p]) ; 
}
  if (mu__boolexpr218) mu__boolexpr217 = TRUE ;
  else {
bool mu__boolexpr219;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_p)) ; 
}
  mu__boolexpr217 = (mu__boolexpr219) ; 
}
if ( mu__boolexpr217 )
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_true;
}
else
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
}
bool mu__boolexpr220;
bool mu__boolexpr221;
  if (!(mu_Sta.mu_Dir.mu_ShrVld)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = (mu_Sta.mu_Dir.mu_ShrSet[mu_p]) ; 
}
  if (mu__boolexpr221) mu__boolexpr220 = TRUE ;
  else {
bool mu__boolexpr222;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_p)) ; 
}
  mu__boolexpr220 = (mu__boolexpr222) ; 
}
if ( mu__boolexpr220 )
{
mu_Sta.mu_InvMsg[mu_p].mu_Cmd = mu_INV_Inv;
}
else
{
mu_Sta.mu_InvMsg[mu_p].mu_Cmd = mu_INV_None;
}
mu_Sta.mu_Dir.mu_ShrSet[mu_p] = mu_false;
};
};
mu_Sta.mu_Dir.mu_HeadVld = mu_false;
mu_Sta.mu_Dir.mu_HeadPtr.undefine();
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
mu_Sta.mu_Collecting = mu_true;
}
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_None;
mu_Sta.mu_HomeProc.mu_InvMarked = mu_false;
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_E;
  };

};
/******************** RuleBase35 ********************/
class RuleBase35
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("PI_Local_GetX_GetX");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr225 = FALSE ;
  else {
bool mu__boolexpr226;
  if ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) mu__boolexpr226 = TRUE ;
  else {
  mu__boolexpr226 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_S)) ; 
}
  mu__boolexpr225 = (mu__boolexpr226) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
    return mu__boolexpr223;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 441;
    while (what_rule < 442 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr229 = FALSE ;
  else {
bool mu__boolexpr230;
  if ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) mu__boolexpr230 = TRUE ;
  else {
  mu__boolexpr230 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_S)) ; 
}
  mu__boolexpr229 = (mu__boolexpr230) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
	      if (mu__boolexpr227) {
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
    r = what_rule - 441;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_GetX;
mu_Sta.mu_Dir.mu_Pending = mu_true;
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_GetX;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_Sta.mu_Dir.mu_HeadPtr;
mu_Sta.mu_FwdCmd = mu_UNI_GetX;
mu_Sta.mu_HomePendReqSrc = mu_true;
mu_Sta.mu_PendReqSrc.undefine();
mu_Sta.mu_Collecting = mu_false;
  };

};
/******************** RuleBase36 ********************/
class RuleBase36
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("PI_Remote_GetX, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr231;
  if (!((mu_Sta.mu_Proc[mu_src].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_Sta.mu_Proc[mu_src].mu_CacheState) == (mu_CACHE_I)) ; 
}
    return mu__boolexpr231;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 442;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 450 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr232;
  if (!((mu_Sta.mu_Proc[mu_src].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_Sta.mu_Proc[mu_src].mu_CacheState) == (mu_CACHE_I)) ; 
}
	      if (mu__boolexpr232) {
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
    r = what_rule - 442;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_src].mu_ProcCmd = mu_NODE_GetX;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_GetX;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
  };

};
/******************** RuleBase37 ********************/
class RuleBase37
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("PI_Local_Get_Put");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
    return mu__boolexpr233;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 450;
    while (what_rule < 451 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
	      if (mu__boolexpr236) {
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
    r = what_rule - 450;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_Dir.mu_Local = mu_true;
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_None;
if ( mu_Sta.mu_HomeProc.mu_InvMarked )
{
mu_Sta.mu_HomeProc.mu_InvMarked = mu_false;
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
}
else
{
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_S;
}
  };

};
/******************** RuleBase38 ********************/
class RuleBase38
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("PI_Local_Get_Get");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr239;
bool mu__boolexpr240;
bool mu__boolexpr241;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
    return mu__boolexpr239;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 451;
    while (what_rule < 452 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
  if (!((mu_Sta.mu_HomeProc.mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = (!(mu_Sta.mu_Dir.mu_Pending)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
	      if (mu__boolexpr242) {
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
    r = what_rule - 451;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_Get;
mu_Sta.mu_Dir.mu_Pending = mu_true;
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_Get;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_Sta.mu_Dir.mu_HeadPtr;
mu_Sta.mu_FwdCmd = mu_UNI_Get;
mu_Sta.mu_HomePendReqSrc = mu_true;
mu_Sta.mu_PendReqSrc.undefine();
mu_Sta.mu_Collecting = mu_false;
  };

};
/******************** RuleBase39 ********************/
class RuleBase39
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    return tsprintf("PI_Remote_Get, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
bool mu__boolexpr245;
  if (!((mu_Sta.mu_Proc[mu_src].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_Sta.mu_Proc[mu_src].mu_CacheState) == (mu_CACHE_I)) ; 
}
    return mu__boolexpr245;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 452;
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    while (what_rule < 460 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr246;
  if (!((mu_Sta.mu_Proc[mu_src].mu_ProcCmd) == (mu_NODE_None))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_Sta.mu_Proc[mu_src].mu_CacheState) == (mu_CACHE_I)) ; 
}
	      if (mu__boolexpr246) {
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
    r = what_rule - 452;
    mu_src.value((r % 8) + 1);
    r = r / 8;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 8) + 1);
    r = r / 8;
mu_Sta.mu_Proc[mu_src].mu_ProcCmd = mu_NODE_Get;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Get;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_true;
mu_Sta.mu_UniMsg[mu_src].mu_Proc.undefine();
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
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
  RuleBase19 R19;
  RuleBase20 R20;
  RuleBase21 R21;
  RuleBase22 R22;
  RuleBase23 R23;
  RuleBase24 R24;
  RuleBase25 R25;
  RuleBase26 R26;
  RuleBase27 R27;
  RuleBase28 R28;
  RuleBase29 R29;
  RuleBase30 R30;
  RuleBase31 R31;
  RuleBase32 R32;
  RuleBase33 R33;
  RuleBase34 R34;
  RuleBase35 R35;
  RuleBase36 R36;
  RuleBase37 R37;
  RuleBase38 R38;
  RuleBase39 R39;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<8)
    { R0.NextRule(what_rule);
      if (what_rule<8) return; }
  if (what_rule>=8 && what_rule<16)
    { R1.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<17)
    { R2.NextRule(what_rule);
      if (what_rule<17) return; }
  if (what_rule>=17 && what_rule<18)
    { R3.NextRule(what_rule);
      if (what_rule<18) return; }
  if (what_rule>=18 && what_rule<26)
    { R4.NextRule(what_rule);
      if (what_rule<26) return; }
  if (what_rule>=26 && what_rule<34)
    { R5.NextRule(what_rule);
      if (what_rule<34) return; }
  if (what_rule>=34 && what_rule<42)
    { R6.NextRule(what_rule);
      if (what_rule<42) return; }
  if (what_rule>=42 && what_rule<50)
    { R7.NextRule(what_rule);
      if (what_rule<50) return; }
  if (what_rule>=50 && what_rule<51)
    { R8.NextRule(what_rule);
      if (what_rule<51) return; }
  if (what_rule>=51 && what_rule<59)
    { R9.NextRule(what_rule);
      if (what_rule<59) return; }
  if (what_rule>=59 && what_rule<60)
    { R10.NextRule(what_rule);
      if (what_rule<60) return; }
  if (what_rule>=60 && what_rule<68)
    { R11.NextRule(what_rule);
      if (what_rule<68) return; }
  if (what_rule>=68 && what_rule<132)
    { R12.NextRule(what_rule);
      if (what_rule<132) return; }
  if (what_rule>=132 && what_rule<140)
    { R13.NextRule(what_rule);
      if (what_rule<140) return; }
  if (what_rule>=140 && what_rule<204)
    { R14.NextRule(what_rule);
      if (what_rule<204) return; }
  if (what_rule>=204 && what_rule<212)
    { R15.NextRule(what_rule);
      if (what_rule<212) return; }
  if (what_rule>=212 && what_rule<220)
    { R16.NextRule(what_rule);
      if (what_rule<220) return; }
  if (what_rule>=220 && what_rule<228)
    { R17.NextRule(what_rule);
      if (what_rule<228) return; }
  if (what_rule>=228 && what_rule<236)
    { R18.NextRule(what_rule);
      if (what_rule<236) return; }
  if (what_rule>=236 && what_rule<244)
    { R19.NextRule(what_rule);
      if (what_rule<244) return; }
  if (what_rule>=244 && what_rule<252)
    { R20.NextRule(what_rule);
      if (what_rule<252) return; }
  if (what_rule>=252 && what_rule<316)
    { R21.NextRule(what_rule);
      if (what_rule<316) return; }
  if (what_rule>=316 && what_rule<324)
    { R22.NextRule(what_rule);
      if (what_rule<324) return; }
  if (what_rule>=324 && what_rule<388)
    { R23.NextRule(what_rule);
      if (what_rule<388) return; }
  if (what_rule>=388 && what_rule<396)
    { R24.NextRule(what_rule);
      if (what_rule<396) return; }
  if (what_rule>=396 && what_rule<404)
    { R25.NextRule(what_rule);
      if (what_rule<404) return; }
  if (what_rule>=404 && what_rule<412)
    { R26.NextRule(what_rule);
      if (what_rule<412) return; }
  if (what_rule>=412 && what_rule<413)
    { R27.NextRule(what_rule);
      if (what_rule<413) return; }
  if (what_rule>=413 && what_rule<414)
    { R28.NextRule(what_rule);
      if (what_rule<414) return; }
  if (what_rule>=414 && what_rule<422)
    { R29.NextRule(what_rule);
      if (what_rule<422) return; }
  if (what_rule>=422 && what_rule<423)
    { R30.NextRule(what_rule);
      if (what_rule<423) return; }
  if (what_rule>=423 && what_rule<431)
    { R31.NextRule(what_rule);
      if (what_rule<431) return; }
  if (what_rule>=431 && what_rule<432)
    { R32.NextRule(what_rule);
      if (what_rule<432) return; }
  if (what_rule>=432 && what_rule<440)
    { R33.NextRule(what_rule);
      if (what_rule<440) return; }
  if (what_rule>=440 && what_rule<441)
    { R34.NextRule(what_rule);
      if (what_rule<441) return; }
  if (what_rule>=441 && what_rule<442)
    { R35.NextRule(what_rule);
      if (what_rule<442) return; }
  if (what_rule>=442 && what_rule<450)
    { R36.NextRule(what_rule);
      if (what_rule<450) return; }
  if (what_rule>=450 && what_rule<451)
    { R37.NextRule(what_rule);
      if (what_rule<451) return; }
  if (what_rule>=451 && what_rule<452)
    { R38.NextRule(what_rule);
      if (what_rule<452) return; }
  if (what_rule>=452 && what_rule<460)
    { R39.NextRule(what_rule);
      if (what_rule<460) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=7) return R0.Condition(r-0);
  if (r>=8 && r<=15) return R1.Condition(r-8);
  if (r>=16 && r<=16) return R2.Condition(r-16);
  if (r>=17 && r<=17) return R3.Condition(r-17);
  if (r>=18 && r<=25) return R4.Condition(r-18);
  if (r>=26 && r<=33) return R5.Condition(r-26);
  if (r>=34 && r<=41) return R6.Condition(r-34);
  if (r>=42 && r<=49) return R7.Condition(r-42);
  if (r>=50 && r<=50) return R8.Condition(r-50);
  if (r>=51 && r<=58) return R9.Condition(r-51);
  if (r>=59 && r<=59) return R10.Condition(r-59);
  if (r>=60 && r<=67) return R11.Condition(r-60);
  if (r>=68 && r<=131) return R12.Condition(r-68);
  if (r>=132 && r<=139) return R13.Condition(r-132);
  if (r>=140 && r<=203) return R14.Condition(r-140);
  if (r>=204 && r<=211) return R15.Condition(r-204);
  if (r>=212 && r<=219) return R16.Condition(r-212);
  if (r>=220 && r<=227) return R17.Condition(r-220);
  if (r>=228 && r<=235) return R18.Condition(r-228);
  if (r>=236 && r<=243) return R19.Condition(r-236);
  if (r>=244 && r<=251) return R20.Condition(r-244);
  if (r>=252 && r<=315) return R21.Condition(r-252);
  if (r>=316 && r<=323) return R22.Condition(r-316);
  if (r>=324 && r<=387) return R23.Condition(r-324);
  if (r>=388 && r<=395) return R24.Condition(r-388);
  if (r>=396 && r<=403) return R25.Condition(r-396);
  if (r>=404 && r<=411) return R26.Condition(r-404);
  if (r>=412 && r<=412) return R27.Condition(r-412);
  if (r>=413 && r<=413) return R28.Condition(r-413);
  if (r>=414 && r<=421) return R29.Condition(r-414);
  if (r>=422 && r<=422) return R30.Condition(r-422);
  if (r>=423 && r<=430) return R31.Condition(r-423);
  if (r>=431 && r<=431) return R32.Condition(r-431);
  if (r>=432 && r<=439) return R33.Condition(r-432);
  if (r>=440 && r<=440) return R34.Condition(r-440);
  if (r>=441 && r<=441) return R35.Condition(r-441);
  if (r>=442 && r<=449) return R36.Condition(r-442);
  if (r>=450 && r<=450) return R37.Condition(r-450);
  if (r>=451 && r<=451) return R38.Condition(r-451);
  if (r>=452 && r<=459) return R39.Condition(r-452);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=7) { R0.Code(r-0); return; } 
  if (r>=8 && r<=15) { R1.Code(r-8); return; } 
  if (r>=16 && r<=16) { R2.Code(r-16); return; } 
  if (r>=17 && r<=17) { R3.Code(r-17); return; } 
  if (r>=18 && r<=25) { R4.Code(r-18); return; } 
  if (r>=26 && r<=33) { R5.Code(r-26); return; } 
  if (r>=34 && r<=41) { R6.Code(r-34); return; } 
  if (r>=42 && r<=49) { R7.Code(r-42); return; } 
  if (r>=50 && r<=50) { R8.Code(r-50); return; } 
  if (r>=51 && r<=58) { R9.Code(r-51); return; } 
  if (r>=59 && r<=59) { R10.Code(r-59); return; } 
  if (r>=60 && r<=67) { R11.Code(r-60); return; } 
  if (r>=68 && r<=131) { R12.Code(r-68); return; } 
  if (r>=132 && r<=139) { R13.Code(r-132); return; } 
  if (r>=140 && r<=203) { R14.Code(r-140); return; } 
  if (r>=204 && r<=211) { R15.Code(r-204); return; } 
  if (r>=212 && r<=219) { R16.Code(r-212); return; } 
  if (r>=220 && r<=227) { R17.Code(r-220); return; } 
  if (r>=228 && r<=235) { R18.Code(r-228); return; } 
  if (r>=236 && r<=243) { R19.Code(r-236); return; } 
  if (r>=244 && r<=251) { R20.Code(r-244); return; } 
  if (r>=252 && r<=315) { R21.Code(r-252); return; } 
  if (r>=316 && r<=323) { R22.Code(r-316); return; } 
  if (r>=324 && r<=387) { R23.Code(r-324); return; } 
  if (r>=388 && r<=395) { R24.Code(r-388); return; } 
  if (r>=396 && r<=403) { R25.Code(r-396); return; } 
  if (r>=404 && r<=411) { R26.Code(r-404); return; } 
  if (r>=412 && r<=412) { R27.Code(r-412); return; } 
  if (r>=413 && r<=413) { R28.Code(r-413); return; } 
  if (r>=414 && r<=421) { R29.Code(r-414); return; } 
  if (r>=422 && r<=422) { R30.Code(r-422); return; } 
  if (r>=423 && r<=430) { R31.Code(r-423); return; } 
  if (r>=431 && r<=431) { R32.Code(r-431); return; } 
  if (r>=432 && r<=439) { R33.Code(r-432); return; } 
  if (r>=440 && r<=440) { R34.Code(r-440); return; } 
  if (r>=441 && r<=441) { R35.Code(r-441); return; } 
  if (r>=442 && r<=449) { R36.Code(r-442); return; } 
  if (r>=450 && r<=450) { R37.Code(r-450); return; } 
  if (r>=451 && r<=451) { R38.Code(r-451); return; } 
  if (r>=452 && r<=459) { R39.Code(r-452); return; } 
}
int Priority(unsigned short r)
{
  if (r<=7) { return R0.Priority(); } 
  if (r>=8 && r<=15) { return R1.Priority(); } 
  if (r>=16 && r<=16) { return R2.Priority(); } 
  if (r>=17 && r<=17) { return R3.Priority(); } 
  if (r>=18 && r<=25) { return R4.Priority(); } 
  if (r>=26 && r<=33) { return R5.Priority(); } 
  if (r>=34 && r<=41) { return R6.Priority(); } 
  if (r>=42 && r<=49) { return R7.Priority(); } 
  if (r>=50 && r<=50) { return R8.Priority(); } 
  if (r>=51 && r<=58) { return R9.Priority(); } 
  if (r>=59 && r<=59) { return R10.Priority(); } 
  if (r>=60 && r<=67) { return R11.Priority(); } 
  if (r>=68 && r<=131) { return R12.Priority(); } 
  if (r>=132 && r<=139) { return R13.Priority(); } 
  if (r>=140 && r<=203) { return R14.Priority(); } 
  if (r>=204 && r<=211) { return R15.Priority(); } 
  if (r>=212 && r<=219) { return R16.Priority(); } 
  if (r>=220 && r<=227) { return R17.Priority(); } 
  if (r>=228 && r<=235) { return R18.Priority(); } 
  if (r>=236 && r<=243) { return R19.Priority(); } 
  if (r>=244 && r<=251) { return R20.Priority(); } 
  if (r>=252 && r<=315) { return R21.Priority(); } 
  if (r>=316 && r<=323) { return R22.Priority(); } 
  if (r>=324 && r<=387) { return R23.Priority(); } 
  if (r>=388 && r<=395) { return R24.Priority(); } 
  if (r>=396 && r<=403) { return R25.Priority(); } 
  if (r>=404 && r<=411) { return R26.Priority(); } 
  if (r>=412 && r<=412) { return R27.Priority(); } 
  if (r>=413 && r<=413) { return R28.Priority(); } 
  if (r>=414 && r<=421) { return R29.Priority(); } 
  if (r>=422 && r<=422) { return R30.Priority(); } 
  if (r>=423 && r<=430) { return R31.Priority(); } 
  if (r>=431 && r<=431) { return R32.Priority(); } 
  if (r>=432 && r<=439) { return R33.Priority(); } 
  if (r>=440 && r<=440) { return R34.Priority(); } 
  if (r>=441 && r<=441) { return R35.Priority(); } 
  if (r>=442 && r<=449) { return R36.Priority(); } 
  if (r>=450 && r<=450) { return R37.Priority(); } 
  if (r>=451 && r<=451) { return R38.Priority(); } 
  if (r>=452 && r<=459) { return R39.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=7) return R0.Name(r-0);
  if (r>=8 && r<=15) return R1.Name(r-8);
  if (r>=16 && r<=16) return R2.Name(r-16);
  if (r>=17 && r<=17) return R3.Name(r-17);
  if (r>=18 && r<=25) return R4.Name(r-18);
  if (r>=26 && r<=33) return R5.Name(r-26);
  if (r>=34 && r<=41) return R6.Name(r-34);
  if (r>=42 && r<=49) return R7.Name(r-42);
  if (r>=50 && r<=50) return R8.Name(r-50);
  if (r>=51 && r<=58) return R9.Name(r-51);
  if (r>=59 && r<=59) return R10.Name(r-59);
  if (r>=60 && r<=67) return R11.Name(r-60);
  if (r>=68 && r<=131) return R12.Name(r-68);
  if (r>=132 && r<=139) return R13.Name(r-132);
  if (r>=140 && r<=203) return R14.Name(r-140);
  if (r>=204 && r<=211) return R15.Name(r-204);
  if (r>=212 && r<=219) return R16.Name(r-212);
  if (r>=220 && r<=227) return R17.Name(r-220);
  if (r>=228 && r<=235) return R18.Name(r-228);
  if (r>=236 && r<=243) return R19.Name(r-236);
  if (r>=244 && r<=251) return R20.Name(r-244);
  if (r>=252 && r<=315) return R21.Name(r-252);
  if (r>=316 && r<=323) return R22.Name(r-316);
  if (r>=324 && r<=387) return R23.Name(r-324);
  if (r>=388 && r<=395) return R24.Name(r-388);
  if (r>=396 && r<=403) return R25.Name(r-396);
  if (r>=404 && r<=411) return R26.Name(r-404);
  if (r>=412 && r<=412) return R27.Name(r-412);
  if (r>=413 && r<=413) return R28.Name(r-413);
  if (r>=414 && r<=421) return R29.Name(r-414);
  if (r>=422 && r<=422) return R30.Name(r-422);
  if (r>=423 && r<=430) return R31.Name(r-423);
  if (r>=431 && r<=431) return R32.Name(r-431);
  if (r>=432 && r<=439) return R33.Name(r-432);
  if (r>=440 && r<=440) return R34.Name(r-440);
  if (r>=441 && r<=441) return R35.Name(r-441);
  if (r>=442 && r<=449) return R36.Name(r-442);
  if (r>=450 && r<=450) return R37.Name(r-450);
  if (r>=451 && r<=451) return R38.Name(r-451);
  if (r>=452 && r<=459) return R39.Name(r-452);
  return NULL;
}
};
const unsigned numrules = 460;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 460


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Init");
  }
  void Code(unsigned short r)
  {
mu_Sta.undefine();
mu_Sta.mu_Dir.mu_Pending = mu_false;
mu_Sta.mu_Dir.mu_Local = mu_false;
mu_Sta.mu_Dir.mu_Dirty = mu_false;
mu_Sta.mu_Dir.mu_HeadVld = mu_false;
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
mu_Sta.mu_WbMsg.mu_Cmd = mu_WB_None;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_None;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_None;
{
for(int mu_p = 1; mu_p <= 8; mu_p++) {
mu_Sta.mu_Proc[mu_p].mu_ProcCmd = mu_NODE_None;
mu_Sta.mu_Proc[mu_p].mu_InvMarked = mu_false;
mu_Sta.mu_Proc[mu_p].mu_CacheState = mu_CACHE_I;
mu_Sta.mu_Dir.mu_ShrSet[mu_p] = mu_false;
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
mu_Sta.mu_InvMsg[mu_p].mu_Cmd = mu_INV_None;
mu_Sta.mu_RpMsg[mu_p].mu_Cmd = mu_RP_None;
mu_Sta.mu_UniMsg[mu_p].mu_Cmd = mu_UNI_None;
mu_Sta.mu_UniMsg[mu_p].mu_HomeProc = mu_false;
};
};
mu_Sta.mu_HomeProc.mu_ProcCmd = mu_NODE_None;
mu_Sta.mu_HomeProc.mu_InvMarked = mu_false;
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_None;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomePendReqSrc = mu_false;
mu_Sta.mu_Collecting = mu_false;
mu_Sta.mu_FwdCmd = mu_UNI_None;
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_247( const mu_1_NODE &mu_j, const mu_1_NODE &mu_i) // Invariant "test_proprity"
{
bool mu__boolexpr248;
  if (!((mu_Sta.mu_Proc[mu_i].mu_CacheState) == (mu_CACHE_E))) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_Sta.mu_Proc[mu_j].mu_CacheState) == (mu_CACHE_S)) ; 
}
return !(mu__boolexpr248);
};

bool mu__condition_251() // Condition for Rule "test_proprity, j:1, i:1"
{
  return mu__invariant_247( 1, 1 );
}

bool mu__condition_252() // Condition for Rule "test_proprity, j:1, i:2"
{
  return mu__invariant_247( 1, 2 );
}

bool mu__condition_253() // Condition for Rule "test_proprity, j:1, i:3"
{
  return mu__invariant_247( 1, 3 );
}

bool mu__condition_254() // Condition for Rule "test_proprity, j:1, i:4"
{
  return mu__invariant_247( 1, 4 );
}

bool mu__condition_255() // Condition for Rule "test_proprity, j:1, i:5"
{
  return mu__invariant_247( 1, 5 );
}

bool mu__condition_256() // Condition for Rule "test_proprity, j:1, i:6"
{
  return mu__invariant_247( 1, 6 );
}

bool mu__condition_257() // Condition for Rule "test_proprity, j:1, i:7"
{
  return mu__invariant_247( 1, 7 );
}

bool mu__condition_258() // Condition for Rule "test_proprity, j:1, i:8"
{
  return mu__invariant_247( 1, 8 );
}

bool mu__condition_260() // Condition for Rule "test_proprity, j:2, i:1"
{
  return mu__invariant_247( 2, 1 );
}

bool mu__condition_261() // Condition for Rule "test_proprity, j:2, i:2"
{
  return mu__invariant_247( 2, 2 );
}

bool mu__condition_262() // Condition for Rule "test_proprity, j:2, i:3"
{
  return mu__invariant_247( 2, 3 );
}

bool mu__condition_263() // Condition for Rule "test_proprity, j:2, i:4"
{
  return mu__invariant_247( 2, 4 );
}

bool mu__condition_264() // Condition for Rule "test_proprity, j:2, i:5"
{
  return mu__invariant_247( 2, 5 );
}

bool mu__condition_265() // Condition for Rule "test_proprity, j:2, i:6"
{
  return mu__invariant_247( 2, 6 );
}

bool mu__condition_266() // Condition for Rule "test_proprity, j:2, i:7"
{
  return mu__invariant_247( 2, 7 );
}

bool mu__condition_267() // Condition for Rule "test_proprity, j:2, i:8"
{
  return mu__invariant_247( 2, 8 );
}

bool mu__condition_269() // Condition for Rule "test_proprity, j:3, i:1"
{
  return mu__invariant_247( 3, 1 );
}

bool mu__condition_270() // Condition for Rule "test_proprity, j:3, i:2"
{
  return mu__invariant_247( 3, 2 );
}

bool mu__condition_271() // Condition for Rule "test_proprity, j:3, i:3"
{
  return mu__invariant_247( 3, 3 );
}

bool mu__condition_272() // Condition for Rule "test_proprity, j:3, i:4"
{
  return mu__invariant_247( 3, 4 );
}

bool mu__condition_273() // Condition for Rule "test_proprity, j:3, i:5"
{
  return mu__invariant_247( 3, 5 );
}

bool mu__condition_274() // Condition for Rule "test_proprity, j:3, i:6"
{
  return mu__invariant_247( 3, 6 );
}

bool mu__condition_275() // Condition for Rule "test_proprity, j:3, i:7"
{
  return mu__invariant_247( 3, 7 );
}

bool mu__condition_276() // Condition for Rule "test_proprity, j:3, i:8"
{
  return mu__invariant_247( 3, 8 );
}

bool mu__condition_278() // Condition for Rule "test_proprity, j:4, i:1"
{
  return mu__invariant_247( 4, 1 );
}

bool mu__condition_279() // Condition for Rule "test_proprity, j:4, i:2"
{
  return mu__invariant_247( 4, 2 );
}

bool mu__condition_280() // Condition for Rule "test_proprity, j:4, i:3"
{
  return mu__invariant_247( 4, 3 );
}

bool mu__condition_281() // Condition for Rule "test_proprity, j:4, i:4"
{
  return mu__invariant_247( 4, 4 );
}

bool mu__condition_282() // Condition for Rule "test_proprity, j:4, i:5"
{
  return mu__invariant_247( 4, 5 );
}

bool mu__condition_283() // Condition for Rule "test_proprity, j:4, i:6"
{
  return mu__invariant_247( 4, 6 );
}

bool mu__condition_284() // Condition for Rule "test_proprity, j:4, i:7"
{
  return mu__invariant_247( 4, 7 );
}

bool mu__condition_285() // Condition for Rule "test_proprity, j:4, i:8"
{
  return mu__invariant_247( 4, 8 );
}

bool mu__condition_287() // Condition for Rule "test_proprity, j:5, i:1"
{
  return mu__invariant_247( 5, 1 );
}

bool mu__condition_288() // Condition for Rule "test_proprity, j:5, i:2"
{
  return mu__invariant_247( 5, 2 );
}

bool mu__condition_289() // Condition for Rule "test_proprity, j:5, i:3"
{
  return mu__invariant_247( 5, 3 );
}

bool mu__condition_290() // Condition for Rule "test_proprity, j:5, i:4"
{
  return mu__invariant_247( 5, 4 );
}

bool mu__condition_291() // Condition for Rule "test_proprity, j:5, i:5"
{
  return mu__invariant_247( 5, 5 );
}

bool mu__condition_292() // Condition for Rule "test_proprity, j:5, i:6"
{
  return mu__invariant_247( 5, 6 );
}

bool mu__condition_293() // Condition for Rule "test_proprity, j:5, i:7"
{
  return mu__invariant_247( 5, 7 );
}

bool mu__condition_294() // Condition for Rule "test_proprity, j:5, i:8"
{
  return mu__invariant_247( 5, 8 );
}

bool mu__condition_296() // Condition for Rule "test_proprity, j:6, i:1"
{
  return mu__invariant_247( 6, 1 );
}

bool mu__condition_297() // Condition for Rule "test_proprity, j:6, i:2"
{
  return mu__invariant_247( 6, 2 );
}

bool mu__condition_298() // Condition for Rule "test_proprity, j:6, i:3"
{
  return mu__invariant_247( 6, 3 );
}

bool mu__condition_299() // Condition for Rule "test_proprity, j:6, i:4"
{
  return mu__invariant_247( 6, 4 );
}

bool mu__condition_300() // Condition for Rule "test_proprity, j:6, i:5"
{
  return mu__invariant_247( 6, 5 );
}

bool mu__condition_301() // Condition for Rule "test_proprity, j:6, i:6"
{
  return mu__invariant_247( 6, 6 );
}

bool mu__condition_302() // Condition for Rule "test_proprity, j:6, i:7"
{
  return mu__invariant_247( 6, 7 );
}

bool mu__condition_303() // Condition for Rule "test_proprity, j:6, i:8"
{
  return mu__invariant_247( 6, 8 );
}

bool mu__condition_305() // Condition for Rule "test_proprity, j:7, i:1"
{
  return mu__invariant_247( 7, 1 );
}

bool mu__condition_306() // Condition for Rule "test_proprity, j:7, i:2"
{
  return mu__invariant_247( 7, 2 );
}

bool mu__condition_307() // Condition for Rule "test_proprity, j:7, i:3"
{
  return mu__invariant_247( 7, 3 );
}

bool mu__condition_308() // Condition for Rule "test_proprity, j:7, i:4"
{
  return mu__invariant_247( 7, 4 );
}

bool mu__condition_309() // Condition for Rule "test_proprity, j:7, i:5"
{
  return mu__invariant_247( 7, 5 );
}

bool mu__condition_310() // Condition for Rule "test_proprity, j:7, i:6"
{
  return mu__invariant_247( 7, 6 );
}

bool mu__condition_311() // Condition for Rule "test_proprity, j:7, i:7"
{
  return mu__invariant_247( 7, 7 );
}

bool mu__condition_312() // Condition for Rule "test_proprity, j:7, i:8"
{
  return mu__invariant_247( 7, 8 );
}

bool mu__condition_314() // Condition for Rule "test_proprity, j:8, i:1"
{
  return mu__invariant_247( 8, 1 );
}

bool mu__condition_315() // Condition for Rule "test_proprity, j:8, i:2"
{
  return mu__invariant_247( 8, 2 );
}

bool mu__condition_316() // Condition for Rule "test_proprity, j:8, i:3"
{
  return mu__invariant_247( 8, 3 );
}

bool mu__condition_317() // Condition for Rule "test_proprity, j:8, i:4"
{
  return mu__invariant_247( 8, 4 );
}

bool mu__condition_318() // Condition for Rule "test_proprity, j:8, i:5"
{
  return mu__invariant_247( 8, 5 );
}

bool mu__condition_319() // Condition for Rule "test_proprity, j:8, i:6"
{
  return mu__invariant_247( 8, 6 );
}

bool mu__condition_320() // Condition for Rule "test_proprity, j:8, i:7"
{
  return mu__invariant_247( 8, 7 );
}

bool mu__condition_321() // Condition for Rule "test_proprity, j:8, i:8"
{
  return mu__invariant_247( 8, 8 );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"test_proprity, j:8, i:8", &mu__condition_321, NULL, },
{"test_proprity, j:8, i:7", &mu__condition_320, NULL, },
{"test_proprity, j:8, i:6", &mu__condition_319, NULL, },
{"test_proprity, j:8, i:5", &mu__condition_318, NULL, },
{"test_proprity, j:8, i:4", &mu__condition_317, NULL, },
{"test_proprity, j:8, i:3", &mu__condition_316, NULL, },
{"test_proprity, j:8, i:2", &mu__condition_315, NULL, },
{"test_proprity, j:8, i:1", &mu__condition_314, NULL, },
{"test_proprity, j:7, i:8", &mu__condition_312, NULL, },
{"test_proprity, j:7, i:7", &mu__condition_311, NULL, },
{"test_proprity, j:7, i:6", &mu__condition_310, NULL, },
{"test_proprity, j:7, i:5", &mu__condition_309, NULL, },
{"test_proprity, j:7, i:4", &mu__condition_308, NULL, },
{"test_proprity, j:7, i:3", &mu__condition_307, NULL, },
{"test_proprity, j:7, i:2", &mu__condition_306, NULL, },
{"test_proprity, j:7, i:1", &mu__condition_305, NULL, },
{"test_proprity, j:6, i:8", &mu__condition_303, NULL, },
{"test_proprity, j:6, i:7", &mu__condition_302, NULL, },
{"test_proprity, j:6, i:6", &mu__condition_301, NULL, },
{"test_proprity, j:6, i:5", &mu__condition_300, NULL, },
{"test_proprity, j:6, i:4", &mu__condition_299, NULL, },
{"test_proprity, j:6, i:3", &mu__condition_298, NULL, },
{"test_proprity, j:6, i:2", &mu__condition_297, NULL, },
{"test_proprity, j:6, i:1", &mu__condition_296, NULL, },
{"test_proprity, j:5, i:8", &mu__condition_294, NULL, },
{"test_proprity, j:5, i:7", &mu__condition_293, NULL, },
{"test_proprity, j:5, i:6", &mu__condition_292, NULL, },
{"test_proprity, j:5, i:5", &mu__condition_291, NULL, },
{"test_proprity, j:5, i:4", &mu__condition_290, NULL, },
{"test_proprity, j:5, i:3", &mu__condition_289, NULL, },
{"test_proprity, j:5, i:2", &mu__condition_288, NULL, },
{"test_proprity, j:5, i:1", &mu__condition_287, NULL, },
{"test_proprity, j:4, i:8", &mu__condition_285, NULL, },
{"test_proprity, j:4, i:7", &mu__condition_284, NULL, },
{"test_proprity, j:4, i:6", &mu__condition_283, NULL, },
{"test_proprity, j:4, i:5", &mu__condition_282, NULL, },
{"test_proprity, j:4, i:4", &mu__condition_281, NULL, },
{"test_proprity, j:4, i:3", &mu__condition_280, NULL, },
{"test_proprity, j:4, i:2", &mu__condition_279, NULL, },
{"test_proprity, j:4, i:1", &mu__condition_278, NULL, },
{"test_proprity, j:3, i:8", &mu__condition_276, NULL, },
{"test_proprity, j:3, i:7", &mu__condition_275, NULL, },
{"test_proprity, j:3, i:6", &mu__condition_274, NULL, },
{"test_proprity, j:3, i:5", &mu__condition_273, NULL, },
{"test_proprity, j:3, i:4", &mu__condition_272, NULL, },
{"test_proprity, j:3, i:3", &mu__condition_271, NULL, },
{"test_proprity, j:3, i:2", &mu__condition_270, NULL, },
{"test_proprity, j:3, i:1", &mu__condition_269, NULL, },
{"test_proprity, j:2, i:8", &mu__condition_267, NULL, },
{"test_proprity, j:2, i:7", &mu__condition_266, NULL, },
{"test_proprity, j:2, i:6", &mu__condition_265, NULL, },
{"test_proprity, j:2, i:5", &mu__condition_264, NULL, },
{"test_proprity, j:2, i:4", &mu__condition_263, NULL, },
{"test_proprity, j:2, i:3", &mu__condition_262, NULL, },
{"test_proprity, j:2, i:2", &mu__condition_261, NULL, },
{"test_proprity, j:2, i:1", &mu__condition_260, NULL, },
{"test_proprity, j:1, i:8", &mu__condition_258, NULL, },
{"test_proprity, j:1, i:7", &mu__condition_257, NULL, },
{"test_proprity, j:1, i:6", &mu__condition_256, NULL, },
{"test_proprity, j:1, i:5", &mu__condition_255, NULL, },
{"test_proprity, j:1, i:4", &mu__condition_254, NULL, },
{"test_proprity, j:1, i:3", &mu__condition_253, NULL, },
{"test_proprity, j:1, i:2", &mu__condition_252, NULL, },
{"test_proprity, j:1, i:1", &mu__condition_251, NULL, },
};
const unsigned short numinvariants = 64;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
Sta:NoScalarset
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
        mu_Sta.MultisetSort();
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
void mu_1_CACHE_STATE::Permute(PermSet& Perm, int i) {};
void mu_1_CACHE_STATE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_CACHE_STATE::Canonicalize(PermSet& Perm) {};
void mu_1_CACHE_STATE::SimpleLimit(PermSet& Perm) {};
void mu_1_CACHE_STATE::ArrayLimit(PermSet& Perm) {};
void mu_1_CACHE_STATE::Limit(PermSet& Perm) {};
void mu_1_CACHE_STATE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NODE_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_NODE_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NODE_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_NODE_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_NODE_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_NODE_CMD::Limit(PermSet& Perm) {};
void mu_1_NODE_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NODE_STATE::Permute(PermSet& Perm, int i)
{
};
void mu_1_NODE_STATE::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_NODE_STATE::Canonicalize(PermSet& Perm)
{
};
void mu_1_NODE_STATE::SimpleLimit(PermSet& Perm){}
void mu_1_NODE_STATE::ArrayLimit(PermSet& Perm){}
void mu_1_NODE_STATE::Limit(PermSet& Perm)
{
};
void mu_1_NODE_STATE::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<8; j++)
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
  for (j=0; j<8; j++)
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
void mu_1_DIR_STATE::Permute(PermSet& Perm, int i)
{
};
void mu_1_DIR_STATE::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_DIR_STATE::Canonicalize(PermSet& Perm)
{
};
void mu_1_DIR_STATE::SimpleLimit(PermSet& Perm){}
void mu_1_DIR_STATE::ArrayLimit(PermSet& Perm){}
void mu_1_DIR_STATE::Limit(PermSet& Perm)
{
};
void mu_1_DIR_STATE::MultisetLimit(PermSet& Perm)
{
};
void mu_1_UNI_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_UNI_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_UNI_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_UNI_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_UNI_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_UNI_CMD::Limit(PermSet& Perm) {};
void mu_1_UNI_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_UNI_MSG::Permute(PermSet& Perm, int i)
{
};
void mu_1_UNI_MSG::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_UNI_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_UNI_MSG::SimpleLimit(PermSet& Perm){}
void mu_1_UNI_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_UNI_MSG::Limit(PermSet& Perm)
{
};
void mu_1_UNI_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1_INV_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_INV_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_INV_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_INV_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_INV_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_INV_CMD::Limit(PermSet& Perm) {};
void mu_1_INV_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_INV_MSG::Permute(PermSet& Perm, int i)
{
};
void mu_1_INV_MSG::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_INV_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_INV_MSG::SimpleLimit(PermSet& Perm){}
void mu_1_INV_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_INV_MSG::Limit(PermSet& Perm)
{
};
void mu_1_INV_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RP_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_RP_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_RP_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_RP_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_RP_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_RP_CMD::Limit(PermSet& Perm) {};
void mu_1_RP_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_RP_MSG::Permute(PermSet& Perm, int i)
{
};
void mu_1_RP_MSG::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RP_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_RP_MSG::SimpleLimit(PermSet& Perm){}
void mu_1_RP_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_RP_MSG::Limit(PermSet& Perm)
{
};
void mu_1_RP_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1_WB_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_WB_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_WB_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_WB_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_WB_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_WB_CMD::Limit(PermSet& Perm) {};
void mu_1_WB_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_WB_MSG::Permute(PermSet& Perm, int i)
{
};
void mu_1_WB_MSG::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_WB_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_WB_MSG::SimpleLimit(PermSet& Perm){}
void mu_1_WB_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_WB_MSG::Limit(PermSet& Perm)
{
};
void mu_1_WB_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1_SHWB_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_SHWB_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_SHWB_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_SHWB_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_SHWB_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_SHWB_CMD::Limit(PermSet& Perm) {};
void mu_1_SHWB_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_SHWB_MSG::Permute(PermSet& Perm, int i)
{
};
void mu_1_SHWB_MSG::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_SHWB_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_SHWB_MSG::SimpleLimit(PermSet& Perm){}
void mu_1_SHWB_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_SHWB_MSG::Limit(PermSet& Perm)
{
};
void mu_1_SHWB_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1_NAKC_CMD::Permute(PermSet& Perm, int i) {};
void mu_1_NAKC_CMD::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NAKC_CMD::Canonicalize(PermSet& Perm) {};
void mu_1_NAKC_CMD::SimpleLimit(PermSet& Perm) {};
void mu_1_NAKC_CMD::ArrayLimit(PermSet& Perm) {};
void mu_1_NAKC_CMD::Limit(PermSet& Perm) {};
void mu_1_NAKC_CMD::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NAKC_MSG::Permute(PermSet& Perm, int i)
{
};
void mu_1_NAKC_MSG::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_NAKC_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_NAKC_MSG::SimpleLimit(PermSet& Perm){}
void mu_1_NAKC_MSG::ArrayLimit(PermSet& Perm){}
void mu_1_NAKC_MSG::Limit(PermSet& Perm)
{
};
void mu_1_NAKC_MSG::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<8; j++)
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
  for (j=0; j<8; j++)
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
  for (j=0; j<8; j++)
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
  for (j=0; j<8; j++)
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
void mu_1_STATE::Permute(PermSet& Perm, int i)
{
};
void mu_1_STATE::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_STATE::Canonicalize(PermSet& Perm)
{
};
void mu_1_STATE::SimpleLimit(PermSet& Perm){}
void mu_1_STATE::ArrayLimit(PermSet& Perm){}
void mu_1_STATE::Limit(PermSet& Perm)
{
};
void mu_1_STATE::MultisetLimit(PermSet& Perm)
{
};

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
              
              mu_Sta.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Sta.MultisetSort();
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

          mu_Sta.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Sta.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_Sta.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Sta.MultisetSort();
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
      mu_Sta.MultisetSort();
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
        mu_Sta.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Sta.MultisetSort();
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
