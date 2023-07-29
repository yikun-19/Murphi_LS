/******************************
  Program "./benchmarks/murphi_protocols/n_godsont_node8.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Mar 16 2023"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Mar 16 2023"
#define PROTOCOL_NAME "./benchmarks/murphi_protocols/n_godsont_node8"
#define BITS_IN_WORLD 1288
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_TYPE_NODE: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_TYPE_NODE& val) { return mu__byte::operator=((int) val); };
  mu_1_TYPE_NODE (const char *name, int os): mu__byte(1, 16, 5, name, os) {};
  mu_1_TYPE_NODE (void): mu__byte(1, 16, 5) {};
  mu_1_TYPE_NODE (int val): mu__byte(1, 16, 5, "Parameter or function result.", 0)
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
mu_1_TYPE_NODE mu_1_TYPE_NODE_undefined_var;

class mu_1_TYPE_CACHE: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_TYPE_CACHE& val) { return mu__byte::operator=((int) val); };
  mu_1_TYPE_CACHE (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_TYPE_CACHE (void): mu__byte(1, 2, 2) {};
  mu_1_TYPE_CACHE (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_TYPE_CACHE mu_1_TYPE_CACHE_undefined_var;

class mu_1_TYPE_ADDR: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_TYPE_ADDR& val) { return mu__byte::operator=((int) val); };
  mu_1_TYPE_ADDR (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_TYPE_ADDR (void): mu__byte(1, 2, 2) {};
  mu_1_TYPE_ADDR (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_TYPE_ADDR mu_1_TYPE_ADDR_undefined_var;

class mu_1_TYPE_DATA: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_TYPE_DATA& val) { return mu__byte::operator=((int) val); };
  mu_1_TYPE_DATA (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_TYPE_DATA (void): mu__byte(1, 2, 2) {};
  mu_1_TYPE_DATA (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_TYPE_DATA mu_1_TYPE_DATA_undefined_var;

class mu_1_TYPE_LOCK: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_TYPE_LOCK& val) { return mu__byte::operator=((int) val); };
  mu_1_TYPE_LOCK (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_TYPE_LOCK (void): mu__byte(1, 2, 2) {};
  mu_1_TYPE_LOCK (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu_1_TYPE_LOCK mu_1_TYPE_LOCK_undefined_var;

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

const char *mu_1_CACHE_STATE::values[] = {"INVALID","DIRTY","VALID",NULL };

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
  mu_1_CACHE_STATE mu_state;
  mu_1_TYPE_ADDR mu_addr;
  mu_1_TYPE_DATA mu_data;
  mu_1_CACHE ( const char *n, int os ) { set_self(n,os); };
  mu_1_CACHE ( void ) {};

  virtual ~mu_1_CACHE(); 
friend int CompareWeight(mu_1_CACHE& a, mu_1_CACHE& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_CACHE& a, mu_1_CACHE& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = Compare(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = Compare(a.mu_data, b.mu_data);
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
    mu_state.MultisetSort();
    mu_addr.MultisetSort();
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_addr.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_addr.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_addr.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_addr.reset();
    mu_data.reset();
 };
  void print() {
    mu_state.print();
    mu_addr.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_CACHE& operator= (const mu_1_CACHE& from) {
    mu_state.value(from.mu_state.value());
    mu_addr.value(from.mu_addr.value());
    mu_data.value(from.mu_data.value());
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

  if (name) mu_state.set_self_2(name, ".state", os + 0 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 8 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
}

mu_1_CACHE::~mu_1_CACHE()
{
}

/*** end record declaration ***/
mu_1_CACHE mu_1_CACHE_undefined_var;

class mu_1_MEMORY
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_TYPE_DATA mu_data;
  mu_1_MEMORY ( const char *n, int os ) { set_self(n,os); };
  mu_1_MEMORY ( void ) {};

  virtual ~mu_1_MEMORY(); 
friend int CompareWeight(mu_1_MEMORY& a, mu_1_MEMORY& b)
  {
    int w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_MEMORY& a, mu_1_MEMORY& b)
  {
    int w;
    w = Compare(a.mu_data, b.mu_data);
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
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_data.print_statistic();
  }
  void clear() {
    mu_data.clear();
 };
  void undefine() {
    mu_data.undefine();
 };
  void reset() {
    mu_data.reset();
 };
  void print() {
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_MEMORY& operator= (const mu_1_MEMORY& from) {
    mu_data.value(from.mu_data.value());
    return *this;
  };
};

  void mu_1_MEMORY::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_MEMORY::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_MEMORY::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_data.set_self_2(name, ".data", os + 0 ); else mu_data.set_self_2(NULL, NULL, 0);
}

mu_1_MEMORY::~mu_1_MEMORY()
{
}

/*** end record declaration ***/
mu_1_MEMORY mu_1_MEMORY_undefined_var;

class mu_1__type_0
{
 public:
  mu_0_boolean array[ 2 ];
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_LOCK
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_TYPE_NODE mu_owner;
  mu_0_boolean mu_beUsed;
  mu_1__type_0 mu_inProtection;
  mu_1_LOCK ( const char *n, int os ) { set_self(n,os); };
  mu_1_LOCK ( void ) {};

  virtual ~mu_1_LOCK(); 
friend int CompareWeight(mu_1_LOCK& a, mu_1_LOCK& b)
  {
    int w;
    w = CompareWeight(a.mu_owner, b.mu_owner);
    if (w!=0) return w;
    w = CompareWeight(a.mu_beUsed, b.mu_beUsed);
    if (w!=0) return w;
    w = CompareWeight(a.mu_inProtection, b.mu_inProtection);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_LOCK& a, mu_1_LOCK& b)
  {
    int w;
    w = Compare(a.mu_owner, b.mu_owner);
    if (w!=0) return w;
    w = Compare(a.mu_beUsed, b.mu_beUsed);
    if (w!=0) return w;
    w = Compare(a.mu_inProtection, b.mu_inProtection);
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
    mu_owner.MultisetSort();
    mu_beUsed.MultisetSort();
    mu_inProtection.MultisetSort();
  }
  void print_statistic()
  {
    mu_owner.print_statistic();
    mu_beUsed.print_statistic();
    mu_inProtection.print_statistic();
  }
  void clear() {
    mu_owner.clear();
    mu_beUsed.clear();
    mu_inProtection.clear();
 };
  void undefine() {
    mu_owner.undefine();
    mu_beUsed.undefine();
    mu_inProtection.undefine();
 };
  void reset() {
    mu_owner.reset();
    mu_beUsed.reset();
    mu_inProtection.reset();
 };
  void print() {
    mu_owner.print();
    mu_beUsed.print();
    mu_inProtection.print();
  };
  void print_diff(state *prevstate) {
    mu_owner.print_diff(prevstate);
    mu_beUsed.print_diff(prevstate);
    mu_inProtection.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_owner.to_state(thestate);
    mu_beUsed.to_state(thestate);
    mu_inProtection.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_LOCK& operator= (const mu_1_LOCK& from) {
    mu_owner.value(from.mu_owner.value());
    mu_beUsed.value(from.mu_beUsed.value());
    mu_inProtection = from.mu_inProtection;
    return *this;
  };
};

  void mu_1_LOCK::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_LOCK::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_LOCK::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_owner.set_self_2(name, ".owner", os + 0 ); else mu_owner.set_self_2(NULL, NULL, 0);
  if (name) mu_beUsed.set_self_2(name, ".beUsed", os + 8 ); else mu_beUsed.set_self_2(NULL, NULL, 0);
  if (name) mu_inProtection.set_self_2(name, ".inProtection", os + 16 ); else mu_inProtection.set_self_2(NULL, NULL, 0);
}

mu_1_LOCK::~mu_1_LOCK()
{
}

/*** end record declaration ***/
mu_1_LOCK mu_1_LOCK_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_CACHE array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_CACHE& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 24 + os);
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
  mu_0_boolean array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1_NODE
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_cache;
  mu_0_boolean mu_hasLock;
  mu_1__type_2 mu_firstRead;
  mu_1_NODE ( const char *n, int os ) { set_self(n,os); };
  mu_1_NODE ( void ) {};

  virtual ~mu_1_NODE(); 
friend int CompareWeight(mu_1_NODE& a, mu_1_NODE& b)
  {
    int w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hasLock, b.mu_hasLock);
    if (w!=0) return w;
    w = CompareWeight(a.mu_firstRead, b.mu_firstRead);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_NODE& a, mu_1_NODE& b)
  {
    int w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_hasLock, b.mu_hasLock);
    if (w!=0) return w;
    w = Compare(a.mu_firstRead, b.mu_firstRead);
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
    mu_cache.MultisetSort();
    mu_hasLock.MultisetSort();
    mu_firstRead.MultisetSort();
  }
  void print_statistic()
  {
    mu_cache.print_statistic();
    mu_hasLock.print_statistic();
    mu_firstRead.print_statistic();
  }
  void clear() {
    mu_cache.clear();
    mu_hasLock.clear();
    mu_firstRead.clear();
 };
  void undefine() {
    mu_cache.undefine();
    mu_hasLock.undefine();
    mu_firstRead.undefine();
 };
  void reset() {
    mu_cache.reset();
    mu_hasLock.reset();
    mu_firstRead.reset();
 };
  void print() {
    mu_cache.print();
    mu_hasLock.print();
    mu_firstRead.print();
  };
  void print_diff(state *prevstate) {
    mu_cache.print_diff(prevstate);
    mu_hasLock.print_diff(prevstate);
    mu_firstRead.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_cache.to_state(thestate);
    mu_hasLock.to_state(thestate);
    mu_firstRead.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_NODE& operator= (const mu_1_NODE& from) {
    mu_cache = from.mu_cache;
    mu_hasLock.value(from.mu_hasLock.value());
    mu_firstRead = from.mu_firstRead;
    return *this;
  };
};

  void mu_1_NODE::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_NODE::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_NODE::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_cache.set_self_2(name, ".cache", os + 0 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_hasLock.set_self_2(name, ".hasLock", os + 48 ); else mu_hasLock.set_self_2(NULL, NULL, 0);
  if (name) mu_firstRead.set_self_2(name, ".firstRead", os + 56 ); else mu_firstRead.set_self_2(NULL, NULL, 0);
}

mu_1_NODE::~mu_1_NODE()
{
}

/*** end record declaration ***/
mu_1_NODE mu_1_NODE_undefined_var;

class mu_1_REPLACE_STAGE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_REPLACE_STAGE& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_REPLACE_STAGE& val)
  {
    if (val.defined())
      return ( s << mu_1_REPLACE_STAGE::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_REPLACE_STAGE (const char *name, int os): mu__byte(4, 12, 4, name, os) {};
  mu_1_REPLACE_STAGE (void): mu__byte(4, 12, 4) {};
  mu_1_REPLACE_STAGE (int val): mu__byte(4, 12, 4, "Parameter or function result.", 0)
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

const char *mu_1_REPLACE_STAGE::values[] = {"NON","REQUIRE","REQREPALL","RANDOM","RANDINV","DESIGNATED","TOREP","DONE","REPALLDONE",NULL };

/*** end of enum declaration ***/
mu_1_REPLACE_STAGE mu_1_REPLACE_STAGE_undefined_var;

class mu_1_REPLACE_RULE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_REPLACE_RULE& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_REPLACE_RULE& val)
  {
    if (val.defined())
      return ( s << mu_1_REPLACE_RULE::values[ int(val) - 13] );
    else return ( s << "Undefined" );
  };

  mu_1_REPLACE_RULE (const char *name, int os): mu__byte(13, 18, 3, name, os) {};
  mu_1_REPLACE_RULE (void): mu__byte(13, 18, 3) {};
  mu_1_REPLACE_RULE (int val): mu__byte(13, 18, 3, "Parameter or function result.", 0)
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

const char *mu_1_REPLACE_RULE::values[] = {"NONE","NLNCR","NLNCW","LNCFR","LCFR","LNCNFR",NULL };

/*** end of enum declaration ***/
mu_1_REPLACE_RULE mu_1_REPLACE_RULE_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_MEMORY array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_MEMORY& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 8 + os);
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
  mu_1_LOCK array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_LOCK& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 2 ) )
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
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<2; i++) {
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
    for (int i=0; i<2; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<2; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 2; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 2; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 2; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 2; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 2; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 2; i++)
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
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 32 + os);
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
  mu_1_NODE array[ 16 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_NODE& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 16 ) )
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
    for (int i = 0; i < 16; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<16; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<16; i++) {
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
    for (int i=0; i<16; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<16; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 16; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 16; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 16; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 16; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 16; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 16; i++)
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
  for(int i = 0; i < 16; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 72 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

const int mu_NUM_NODE = 16;
const int mu_NUM_CACHE = 2;
const int mu_NUM_ADDR = 2;
const int mu_NUM_DATA = 2;
const int mu_NUM_LOCK = 2;
const int mu_INVALID = 1;
const int mu_DIRTY = 2;
const int mu_VALID = 3;
const int mu_NON = 4;
const int mu_REQUIRE = 5;
const int mu_REQREPALL = 6;
const int mu_RANDOM = 7;
const int mu_RANDINV = 8;
const int mu_DESIGNATED = 9;
const int mu_TOREP = 10;
const int mu_DONE = 11;
const int mu_REPALLDONE = 12;
const int mu_NONE = 13;
const int mu_NLNCR = 14;
const int mu_NLNCW = 15;
const int mu_LNCFR = 16;
const int mu_LCFR = 17;
const int mu_LNCNFR = 18;
/*** Variable declaration ***/
mu_1__type_3 mu_memory("memory",0);

/*** Variable declaration ***/
mu_1__type_4 mu_lock("lock",16);

/*** Variable declaration ***/
mu_1__type_5 mu_node("node",80);

/*** Variable declaration ***/
mu_1_TYPE_NODE mu_curNode("curNode",1232);

/*** Variable declaration ***/
mu_1_TYPE_CACHE mu_curCache("curCache",1240);

/*** Variable declaration ***/
mu_1_TYPE_ADDR mu_curMemory("curMemory",1248);

/*** Variable declaration ***/
mu_1_TYPE_DATA mu_curData("curData",1256);

/*** Variable declaration ***/
mu_1_TYPE_LOCK mu_curLock("curLock",1264);

/*** Variable declaration ***/
mu_1_REPLACE_STAGE mu_replace("replace",1272);

/*** Variable declaration ***/
mu_1_REPLACE_RULE mu_repRule("repRule",1280);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_memory.clear();
  mu_lock.clear();
  mu_node.clear();
  mu_curNode.clear();
  mu_curCache.clear();
  mu_curMemory.clear();
  mu_curData.clear();
  mu_curLock.clear();
  mu_replace.clear();
  mu_repRule.clear();
}
void world_class::undefine()
{
  mu_memory.undefine();
  mu_lock.undefine();
  mu_node.undefine();
  mu_curNode.undefine();
  mu_curCache.undefine();
  mu_curMemory.undefine();
  mu_curData.undefine();
  mu_curLock.undefine();
  mu_replace.undefine();
  mu_repRule.undefine();
}
void world_class::reset()
{
  mu_memory.reset();
  mu_lock.reset();
  mu_node.reset();
  mu_curNode.reset();
  mu_curCache.reset();
  mu_curMemory.reset();
  mu_curData.reset();
  mu_curLock.reset();
  mu_replace.reset();
  mu_repRule.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_memory.print();
  mu_lock.print();
  mu_node.print();
  mu_curNode.print();
  mu_curCache.print();
  mu_curMemory.print();
  mu_curData.print();
  mu_curLock.print();
  mu_replace.print();
  mu_repRule.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_memory.print_statistic();
  mu_lock.print_statistic();
  mu_node.print_statistic();
  mu_curNode.print_statistic();
  mu_curCache.print_statistic();
  mu_curMemory.print_statistic();
  mu_curData.print_statistic();
  mu_curLock.print_statistic();
  mu_replace.print_statistic();
  mu_repRule.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_memory.print_diff(prevstate);
    mu_lock.print_diff(prevstate);
    mu_node.print_diff(prevstate);
    mu_curNode.print_diff(prevstate);
    mu_curCache.print_diff(prevstate);
    mu_curMemory.print_diff(prevstate);
    mu_curData.print_diff(prevstate);
    mu_curLock.print_diff(prevstate);
    mu_replace.print_diff(prevstate);
    mu_repRule.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_memory.to_state( newstate );
  mu_lock.to_state( newstate );
  mu_node.to_state( newstate );
  mu_curNode.to_state( newstate );
  mu_curCache.to_state( newstate );
  mu_curMemory.to_state( newstate );
  mu_curData.to_state( newstate );
  mu_curLock.to_state( newstate );
  mu_replace.to_state( newstate );
  mu_repRule.to_state( newstate );
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("Release, l:%s, i:%s", mu_l.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr6;
bool mu__boolexpr7;
bool mu__boolexpr8;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr8)) mu__boolexpr7 = FALSE ;
  else {
  mu__boolexpr7 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr7)) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
    return mu__boolexpr6;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 32 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr9;
bool mu__boolexpr10;
bool mu__boolexpr11;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr10)) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
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
    r = what_rule - 0;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_lock[mu_l].mu_beUsed = mu_false;
mu_node[mu_i].mu_hasLock = mu_false;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
mu_lock[mu_l].mu_inProtection[mu_a] = mu_false;
};
};
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("Acquire, l:%s, i:%s", mu_l.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr12;
bool mu__boolexpr13;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = (!(mu_lock[mu_l].mu_beUsed)) ; 
}
    return mu__boolexpr12;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 32;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 64 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr14;
bool mu__boolexpr15;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr15)) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = (!(mu_lock[mu_l].mu_beUsed)) ; 
}
	      if (mu__boolexpr14) {
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
    r = what_rule - 32;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_lock[mu_l].mu_beUsed = mu_true;
mu_lock[mu_l].mu_owner = mu_i;
mu_node[mu_i].mu_hasLock = mu_true;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_node[mu_i].mu_firstRead[mu_j] = mu_true;
};
};
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
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LNCW, d:%s, l:%s, a:%s, i:%s", mu_d.Name(), mu_l.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
bool mu__quant21; 
mu__quant21 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr22;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr22 = TRUE ;
  else {
  mu__boolexpr22 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr22) )
  { mu__quant21 = FALSE; break; }
};
};
  mu__boolexpr17 = (mu__quant21) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
bool mu__quant23; 
mu__quant23 = TRUE;
{
for(int mu_m = 1; mu_m <= 2; mu_m++) {
bool mu__boolexpr24;
  if (!(mu_lock[mu_m].mu_inProtection[mu_a])) mu__boolexpr24 = TRUE ;
  else {
  mu__boolexpr24 = ((mu_m) == (mu_l)) ; 
}
if ( !(mu__boolexpr24) )
  { mu__quant23 = FALSE; break; }
};
};
  mu__boolexpr16 = (mu__quant23) ; 
}
    return mu__boolexpr16;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 64;
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 192 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
bool mu__boolexpr28;
bool mu__boolexpr29;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
bool mu__quant30; 
mu__quant30 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr31;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr31 = TRUE ;
  else {
  mu__boolexpr31 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr31) )
  { mu__quant30 = FALSE; break; }
};
};
  mu__boolexpr26 = (mu__quant30) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
bool mu__quant32; 
mu__quant32 = TRUE;
{
for(int mu_m = 1; mu_m <= 2; mu_m++) {
bool mu__boolexpr33;
  if (!(mu_lock[mu_m].mu_inProtection[mu_a])) mu__boolexpr33 = TRUE ;
  else {
  mu__boolexpr33 = ((mu_m) == (mu_l)) ; 
}
if ( !(mu__boolexpr33) )
  { mu__quant32 = FALSE; break; }
};
};
  mu__boolexpr25 = (mu__quant32) ; 
}
	      if (mu__boolexpr25) {
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
    r = what_rule - 64;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_memory[mu_a].mu_data = mu_d;
mu_lock[mu_l].mu_inProtection[mu_a] = mu_true;
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
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LCW, d:%s, l:%s, a:%s, j:%s, i:%s", mu_d.Name(), mu_l.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr34;
bool mu__boolexpr35;
bool mu__boolexpr36;
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) ; 
}
  if (!(mu__boolexpr36)) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
bool mu__quant40; 
mu__quant40 = TRUE;
{
for(int mu_m = 1; mu_m <= 2; mu_m++) {
bool mu__boolexpr41;
  if (!(mu_lock[mu_m].mu_inProtection[mu_a])) mu__boolexpr41 = TRUE ;
  else {
  mu__boolexpr41 = ((mu_m) == (mu_l)) ; 
}
if ( !(mu__boolexpr41) )
  { mu__quant40 = FALSE; break; }
};
};
  mu__boolexpr34 = (mu__quant40) ; 
}
    return mu__boolexpr34;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 192;
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 448 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
bool mu__quant48; 
mu__quant48 = TRUE;
{
for(int mu_m = 1; mu_m <= 2; mu_m++) {
bool mu__boolexpr49;
  if (!(mu_lock[mu_m].mu_inProtection[mu_a])) mu__boolexpr49 = TRUE ;
  else {
  mu__boolexpr49 = ((mu_m) == (mu_l)) ; 
}
if ( !(mu__boolexpr49) )
  { mu__quant48 = FALSE; break; }
};
};
  mu__boolexpr42 = (mu__quant48) ; 
}
	      if (mu__boolexpr42) {
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
    r = what_rule - 192;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_memory[mu_a].mu_data = mu_d;
mu_node[mu_i].mu_cache[mu_j].mu_data = mu_d;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_VALID;
mu_lock[mu_l].mu_inProtection[mu_a] = mu_true;
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LNCNFRD, l:%s, a:%s, j:%s, i:%s", mu_l.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr50;
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
bool mu__boolexpr54;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_repRule) == (mu_LNCNFR)) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_l) == (mu_curLock)) ; 
}
    return mu__boolexpr50;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 448;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 576 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_repRule) == (mu_LNCNFR)) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_l) == (mu_curLock)) ; 
}
	      if (mu__boolexpr55) {
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
    r = what_rule - 448;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_node[mu_i].mu_cache[mu_j].mu_addr = mu_a;
mu_node[mu_i].mu_cache[mu_j].mu_data = mu_memory[mu_a].mu_data;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_VALID;
mu_lock[mu_l].mu_inProtection[mu_a] = mu_true;
mu_replace = mu_NON;
mu_repRule = mu_NONE;
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LNCNFRR, l:%s, a:%s, i:%s", mu_l.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = (!(mu_node[mu_i].mu_firstRead[mu_a])) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
bool mu__quant65; 
mu__quant65 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr66;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr66 = TRUE ;
  else {
  mu__boolexpr66 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr66) )
  { mu__quant65 = FALSE; break; }
};
};
  mu__boolexpr60 = (mu__quant65) ; 
}
    return mu__boolexpr60;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 576;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 640 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (!(mu_node[mu_i].mu_firstRead[mu_a])) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
bool mu__quant72; 
mu__quant72 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr73;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr73 = TRUE ;
  else {
  mu__boolexpr73 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr73) )
  { mu__quant72 = FALSE; break; }
};
};
  mu__boolexpr67 = (mu__quant72) ; 
}
	      if (mu__boolexpr67) {
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
    r = what_rule - 576;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_curNode = mu_i;
mu_curMemory = mu_a;
mu_curLock = mu_l;
mu_replace = mu_REQUIRE;
mu_repRule = mu_LNCNFR;
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LNCFRD, l:%s, a:%s, j:%s, i:%s", mu_l.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr74;
bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
bool mu__boolexpr78;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_repRule) == (mu_LNCFR)) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_l) == (mu_curLock)) ; 
}
    return mu__boolexpr74;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 640;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 768 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_repRule) == (mu_LNCFR)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_l) == (mu_curLock)) ; 
}
	      if (mu__boolexpr79) {
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
    r = what_rule - 640;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_node[mu_i].mu_cache[mu_j].mu_addr = mu_a;
mu_node[mu_i].mu_cache[mu_j].mu_data = mu_memory[mu_a].mu_data;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_VALID;
mu_node[mu_i].mu_firstRead[mu_a] = mu_false;
mu_lock[mu_l].mu_inProtection[mu_a] = mu_true;
mu_replace = mu_NON;
mu_repRule = mu_NONE;
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
    return tsprintf("LNCFRAD");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr84;
  if (!((mu_replace) == (mu_REPALLDONE))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_repRule) == (mu_LNCFR)) ; 
}
    return mu__boolexpr84;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 768;
    while (what_rule < 769 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr85;
  if (!((mu_replace) == (mu_REPALLDONE))) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_repRule) == (mu_LNCFR)) ; 
}
	      if (mu__boolexpr85) {
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
    r = what_rule - 768;
    }
  }

  void Code(unsigned r)
  {
mu_replace = mu_REQUIRE;
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LNCFRRA, l:%s, a:%s, i:%s", mu_l.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr86;
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (mu_node[mu_i].mu_firstRead[mu_a]) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
bool mu__quant91; 
mu__quant91 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr92;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr92 = TRUE ;
  else {
  mu__boolexpr92 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr92) )
  { mu__quant91 = FALSE; break; }
};
};
  mu__boolexpr86 = (mu__quant91) ; 
}
    return mu__boolexpr86;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 769;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 833 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = (mu_node[mu_i].mu_firstRead[mu_a]) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
bool mu__quant98; 
mu__quant98 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr99;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr99 = TRUE ;
  else {
  mu__boolexpr99 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr99) )
  { mu__quant98 = FALSE; break; }
};
};
  mu__boolexpr93 = (mu__quant98) ; 
}
	      if (mu__boolexpr93) {
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
    r = what_rule - 769;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_curNode = mu_i;
mu_curMemory = mu_a;
mu_curLock = mu_l;
mu_replace = mu_REQREPALL;
mu_repRule = mu_LNCFR;
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LCFRD, l:%s, a:%s, j:%s, i:%s", mu_l.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_repRule) == (mu_LCFR)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_l) == (mu_curLock)) ; 
}
    return mu__boolexpr100;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 833;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 961 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_repRule) == (mu_LCFR)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_l) == (mu_curLock)) ; 
}
	      if (mu__boolexpr105) {
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
    r = what_rule - 833;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_node[mu_i].mu_cache[mu_j].mu_data = mu_memory[mu_a].mu_data;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_VALID;
mu_node[mu_i].mu_firstRead[mu_a] = mu_false;
mu_lock[mu_l].mu_inProtection[mu_a] = mu_true;
mu_replace = mu_NON;
mu_repRule = mu_NONE;
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
    return tsprintf("LCFRAD");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr110;
  if (!((mu_replace) == (mu_REPALLDONE))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_repRule) == (mu_LCFR)) ; 
}
    return mu__boolexpr110;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 961;
    while (what_rule < 962 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr111;
  if (!((mu_replace) == (mu_REPALLDONE))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_repRule) == (mu_LCFR)) ; 
}
	      if (mu__boolexpr111) {
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
    r = what_rule - 961;
    }
  }

  void Code(unsigned r)
  {
mu_replace = mu_DESIGNATED;
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
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("LCFRRA, l:%s, a:%s, j:%s, i:%s", mu_l.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = (mu_node[mu_i].mu_firstRead[mu_a]) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr112;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 962;
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1090 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = (mu_lock[mu_l].mu_beUsed) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_lock[mu_l].mu_owner) == (mu_i)) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_node[mu_i].mu_firstRead[mu_a]) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr118) {
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
    r = what_rule - 962;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_LOCK mu_l;
    mu_l.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_curNode = mu_i;
mu_curCache = mu_j;
mu_curMemory = mu_a;
mu_curLock = mu_l;
mu_replace = mu_REQREPALL;
mu_repRule = mu_LCFR;
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
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("NLNCWD, d:%s, a:%s, j:%s, i:%s", mu_d.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_repRule) == (mu_NLNCW)) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_d) == (mu_curData)) ; 
}
    return mu__boolexpr124;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1090;
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1218 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_repRule) == (mu_NLNCW)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr132)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_a) == (mu_curMemory)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_d) == (mu_curData)) ; 
}
	      if (mu__boolexpr129) {
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
    r = what_rule - 1090;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_node[mu_i].mu_cache[mu_j].mu_addr = mu_a;
mu_node[mu_i].mu_cache[mu_j].mu_data = mu_d;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_DIRTY;
mu_replace = mu_NON;
mu_repRule = mu_NONE;
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
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("NLNCWR, d:%s, a:%s, i:%s", mu_d.Name(), mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
bool mu__quant137; 
mu__quant137 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr138;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr138 = TRUE ;
  else {
  mu__boolexpr138 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr138) )
  { mu__quant137 = FALSE; break; }
};
};
  mu__boolexpr135 = (mu__quant137) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
bool mu__quant139; 
mu__quant139 = TRUE;
{
for(int mu_l = 1; mu_l <= 2; mu_l++) {
if ( !(!(mu_lock[mu_l].mu_inProtection[mu_a])) )
  { mu__quant139 = FALSE; break; }
};
};
  mu__boolexpr134 = (mu__quant139) ; 
}
    return mu__boolexpr134;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1218;
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1282 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
bool mu__quant143; 
mu__quant143 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr144;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr144 = TRUE ;
  else {
  mu__boolexpr144 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr144) )
  { mu__quant143 = FALSE; break; }
};
};
  mu__boolexpr141 = (mu__quant143) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
bool mu__quant145; 
mu__quant145 = TRUE;
{
for(int mu_l = 1; mu_l <= 2; mu_l++) {
if ( !(!(mu_lock[mu_l].mu_inProtection[mu_a])) )
  { mu__quant145 = FALSE; break; }
};
};
  mu__boolexpr140 = (mu__quant145) ; 
}
	      if (mu__boolexpr140) {
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
    r = what_rule - 1218;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_curNode = mu_i;
mu_curMemory = mu_a;
mu_curData = mu_d;
mu_replace = mu_REQUIRE;
mu_repRule = mu_NLNCW;
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
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("NLCW, d:%s, a:%s, j:%s, i:%s", mu_d.Name(), mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
bool mu__boolexpr149;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
bool mu__quant150; 
mu__quant150 = TRUE;
{
for(int mu_l = 1; mu_l <= 2; mu_l++) {
if ( !(!(mu_lock[mu_l].mu_inProtection[mu_a])) )
  { mu__quant150 = FALSE; break; }
};
};
  mu__boolexpr146 = (mu__quant150) ; 
}
    return mu__boolexpr146;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1282;
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1410 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
bool mu__quant155; 
mu__quant155 = TRUE;
{
for(int mu_l = 1; mu_l <= 2; mu_l++) {
if ( !(!(mu_lock[mu_l].mu_inProtection[mu_a])) )
  { mu__quant155 = FALSE; break; }
};
};
  mu__boolexpr151 = (mu__quant155) ; 
}
	      if (mu__boolexpr151) {
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
    r = what_rule - 1282;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_node[mu_i].mu_cache[mu_j].mu_data = mu_d;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_DIRTY;
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
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("NLNCRD, a:%s, j:%s, i:%s", mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_repRule) == (mu_NLNCR)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_a) == (mu_curMemory)) ; 
}
    return mu__boolexpr156;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1410;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1474 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
  if (!((mu_replace) == (mu_DONE))) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_repRule) == (mu_NLNCR)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_a) == (mu_curMemory)) ; 
}
	      if (mu__boolexpr160) {
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
    r = what_rule - 1410;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_node[mu_i].mu_cache[mu_j].mu_addr = mu_a;
mu_node[mu_i].mu_cache[mu_j].mu_data = mu_memory[mu_a].mu_data;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_VALID;
mu_replace = mu_NON;
mu_repRule = mu_NONE;
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
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("NLNCRR, a:%s, i:%s", mu_a.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr164;
bool mu__boolexpr165;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
bool mu__quant166; 
mu__quant166 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr167;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr167 = TRUE ;
  else {
  mu__boolexpr167 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr167) )
  { mu__quant166 = FALSE; break; }
};
};
  mu__boolexpr164 = (mu__quant166) ; 
}
    return mu__boolexpr164;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1474;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1506 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr168;
bool mu__boolexpr169;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (!(mu_node[mu_i].mu_hasLock)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
bool mu__quant170; 
mu__quant170 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr171;
  if ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) mu__boolexpr171 = TRUE ;
  else {
  mu__boolexpr171 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) != (mu_a)) ; 
}
if ( !(mu__boolexpr171) )
  { mu__quant170 = FALSE; break; }
};
};
  mu__boolexpr168 = (mu__quant170) ; 
}
	      if (mu__boolexpr168) {
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
    r = what_rule - 1474;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_curNode = mu_i;
mu_curMemory = mu_a;
mu_replace = mu_REQUIRE;
mu_repRule = mu_NLNCR;
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
    return tsprintf("RepAllDone");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr172;
  if (!((mu_replace) == (mu_REQREPALL))) mu__boolexpr172 = FALSE ;
  else {
bool mu__quant173; 
mu__quant173 = TRUE;
{
for(int mu_i = 1; mu_i <= 16; mu_i++) {
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( !((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_DIRTY)) )
  { mu__quant173 = FALSE; break; }
};
};
};
  mu__boolexpr172 = (mu__quant173) ; 
}
    return mu__boolexpr172;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1506;
    while (what_rule < 1507 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr174;
  if (!((mu_replace) == (mu_REQREPALL))) mu__boolexpr174 = FALSE ;
  else {
bool mu__quant175; 
mu__quant175 = TRUE;
{
for(int mu_i = 1; mu_i <= 16; mu_i++) {
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( !((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_DIRTY)) )
  { mu__quant175 = FALSE; break; }
};
};
};
  mu__boolexpr174 = (mu__quant175) ; 
}
	      if (mu__boolexpr174) {
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
    r = what_rule - 1506;
    }
  }

  void Code(unsigned r)
  {
mu_replace = mu_REPALLDONE;
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
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("RepAll, a:%s, j:%s, i:%s", mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr176;
bool mu__boolexpr177;
  if (!((mu_replace) == (mu_REQREPALL))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_DIRTY)) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
    return mu__boolexpr176;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1507;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1571 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr178;
bool mu__boolexpr179;
  if (!((mu_replace) == (mu_REQREPALL))) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_DIRTY)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
	      if (mu__boolexpr178) {
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
    r = what_rule - 1507;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_memory[mu_a].mu_data = mu_node[mu_i].mu_cache[mu_j].mu_data;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_INVALID;
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
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("Replace, a:%s, j:%s, i:%s", mu_a.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!((mu_replace) == (mu_TOREP))) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_a) == (mu_node[mu_i].mu_cache[mu_j].mu_addr)) ; 
}
    return mu__boolexpr180;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1571;
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1635 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
  if (!((mu_replace) == (mu_TOREP))) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_a) == (mu_node[mu_i].mu_cache[mu_j].mu_addr)) ; 
}
	      if (mu__boolexpr183) {
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
    r = what_rule - 1571;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_ADDR mu_a;
    mu_a.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_memory[mu_a].mu_data = mu_node[mu_i].mu_cache[mu_j].mu_data;
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_INVALID;
mu_replace = mu_DONE;
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
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("DCD, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
  if (!((mu_replace) == (mu_DESIGNATED))) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_DIRTY)) ; 
}
    return mu__boolexpr186;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1635;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1667 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
  if (!((mu_replace) == (mu_DESIGNATED))) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_DIRTY)) ; 
}
	      if (mu__boolexpr189) {
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
    r = what_rule - 1635;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_replace = mu_TOREP;
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
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("DCND, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
  if (!((mu_replace) == (mu_DESIGNATED))) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_DIRTY)) ; 
}
    return mu__boolexpr192;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1667;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1699 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
  if (!((mu_replace) == (mu_DESIGNATED))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_j) == (mu_curCache)) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_DIRTY)) ; 
}
	      if (mu__boolexpr195) {
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
    r = what_rule - 1667;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_replace = mu_DONE;
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
    static mu_1_TYPE_CACHE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("CRC, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return (mu_replace) == (mu_RANDOM);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1699;
    static mu_1_TYPE_CACHE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 1701 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_replace) == (mu_RANDOM)) {
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
    r = what_rule - 1699;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_curCache = mu_i;
mu_replace = mu_DESIGNATED;
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
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("RNI, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr198;
bool mu__boolexpr199;
  if (!((mu_replace) == (mu_REQUIRE))) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
bool mu__quant200; 
mu__quant200 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( !((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) )
  { mu__quant200 = FALSE; break; }
};
};
  mu__boolexpr198 = (mu__quant200) ; 
}
    return mu__boolexpr198;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1701;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1717 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr201;
bool mu__boolexpr202;
  if (!((mu_replace) == (mu_REQUIRE))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
bool mu__quant203; 
mu__quant203 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( !((mu_node[mu_i].mu_cache[mu_j].mu_state) != (mu_INVALID)) )
  { mu__quant203 = FALSE; break; }
};
};
  mu__boolexpr201 = (mu__quant203) ; 
}
	      if (mu__boolexpr201) {
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
    r = what_rule - 1701;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_replace = mu_RANDOM;
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
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("CRIC, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (!((mu_replace) == (mu_RANDINV))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) ; 
}
    return mu__boolexpr204;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1717;
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1749 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr206;
bool mu__boolexpr207;
  if (!((mu_replace) == (mu_RANDINV))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) ; 
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
    r = what_rule - 1717;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_CACHE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_curCache = mu_j;
mu_replace = mu_DONE;
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
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    return tsprintf("RI, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
bool mu__boolexpr208;
bool mu__boolexpr209;
  if (!((mu_replace) == (mu_REQUIRE))) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
bool mu__quant210; 
mu__quant210 = FALSE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) )
  { mu__quant210 = TRUE; break; }
};
};
  mu__boolexpr208 = (mu__quant210) ; 
}
    return mu__boolexpr208;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1749;
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    while (what_rule < 1765 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr211;
bool mu__boolexpr212;
  if (!((mu_replace) == (mu_REQUIRE))) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_i) == (mu_curNode)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
bool mu__quant213; 
mu__quant213 = FALSE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
if ( ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_INVALID)) )
  { mu__quant213 = TRUE; break; }
};
};
  mu__boolexpr211 = (mu__quant213) ; 
}
	      if (mu__boolexpr211) {
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
    r = what_rule - 1749;
    mu_i.value((r % 16) + 1);
    r = r / 16;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_TYPE_NODE mu_i;
    mu_i.value((r % 16) + 1);
    r = r / 16;
mu_replace = mu_RANDINV;
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<32)
    { R0.NextRule(what_rule);
      if (what_rule<32) return; }
  if (what_rule>=32 && what_rule<64)
    { R1.NextRule(what_rule);
      if (what_rule<64) return; }
  if (what_rule>=64 && what_rule<192)
    { R2.NextRule(what_rule);
      if (what_rule<192) return; }
  if (what_rule>=192 && what_rule<448)
    { R3.NextRule(what_rule);
      if (what_rule<448) return; }
  if (what_rule>=448 && what_rule<576)
    { R4.NextRule(what_rule);
      if (what_rule<576) return; }
  if (what_rule>=576 && what_rule<640)
    { R5.NextRule(what_rule);
      if (what_rule<640) return; }
  if (what_rule>=640 && what_rule<768)
    { R6.NextRule(what_rule);
      if (what_rule<768) return; }
  if (what_rule>=768 && what_rule<769)
    { R7.NextRule(what_rule);
      if (what_rule<769) return; }
  if (what_rule>=769 && what_rule<833)
    { R8.NextRule(what_rule);
      if (what_rule<833) return; }
  if (what_rule>=833 && what_rule<961)
    { R9.NextRule(what_rule);
      if (what_rule<961) return; }
  if (what_rule>=961 && what_rule<962)
    { R10.NextRule(what_rule);
      if (what_rule<962) return; }
  if (what_rule>=962 && what_rule<1090)
    { R11.NextRule(what_rule);
      if (what_rule<1090) return; }
  if (what_rule>=1090 && what_rule<1218)
    { R12.NextRule(what_rule);
      if (what_rule<1218) return; }
  if (what_rule>=1218 && what_rule<1282)
    { R13.NextRule(what_rule);
      if (what_rule<1282) return; }
  if (what_rule>=1282 && what_rule<1410)
    { R14.NextRule(what_rule);
      if (what_rule<1410) return; }
  if (what_rule>=1410 && what_rule<1474)
    { R15.NextRule(what_rule);
      if (what_rule<1474) return; }
  if (what_rule>=1474 && what_rule<1506)
    { R16.NextRule(what_rule);
      if (what_rule<1506) return; }
  if (what_rule>=1506 && what_rule<1507)
    { R17.NextRule(what_rule);
      if (what_rule<1507) return; }
  if (what_rule>=1507 && what_rule<1571)
    { R18.NextRule(what_rule);
      if (what_rule<1571) return; }
  if (what_rule>=1571 && what_rule<1635)
    { R19.NextRule(what_rule);
      if (what_rule<1635) return; }
  if (what_rule>=1635 && what_rule<1667)
    { R20.NextRule(what_rule);
      if (what_rule<1667) return; }
  if (what_rule>=1667 && what_rule<1699)
    { R21.NextRule(what_rule);
      if (what_rule<1699) return; }
  if (what_rule>=1699 && what_rule<1701)
    { R22.NextRule(what_rule);
      if (what_rule<1701) return; }
  if (what_rule>=1701 && what_rule<1717)
    { R23.NextRule(what_rule);
      if (what_rule<1717) return; }
  if (what_rule>=1717 && what_rule<1749)
    { R24.NextRule(what_rule);
      if (what_rule<1749) return; }
  if (what_rule>=1749 && what_rule<1765)
    { R25.NextRule(what_rule);
      if (what_rule<1765) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=31) return R0.Condition(r-0);
  if (r>=32 && r<=63) return R1.Condition(r-32);
  if (r>=64 && r<=191) return R2.Condition(r-64);
  if (r>=192 && r<=447) return R3.Condition(r-192);
  if (r>=448 && r<=575) return R4.Condition(r-448);
  if (r>=576 && r<=639) return R5.Condition(r-576);
  if (r>=640 && r<=767) return R6.Condition(r-640);
  if (r>=768 && r<=768) return R7.Condition(r-768);
  if (r>=769 && r<=832) return R8.Condition(r-769);
  if (r>=833 && r<=960) return R9.Condition(r-833);
  if (r>=961 && r<=961) return R10.Condition(r-961);
  if (r>=962 && r<=1089) return R11.Condition(r-962);
  if (r>=1090 && r<=1217) return R12.Condition(r-1090);
  if (r>=1218 && r<=1281) return R13.Condition(r-1218);
  if (r>=1282 && r<=1409) return R14.Condition(r-1282);
  if (r>=1410 && r<=1473) return R15.Condition(r-1410);
  if (r>=1474 && r<=1505) return R16.Condition(r-1474);
  if (r>=1506 && r<=1506) return R17.Condition(r-1506);
  if (r>=1507 && r<=1570) return R18.Condition(r-1507);
  if (r>=1571 && r<=1634) return R19.Condition(r-1571);
  if (r>=1635 && r<=1666) return R20.Condition(r-1635);
  if (r>=1667 && r<=1698) return R21.Condition(r-1667);
  if (r>=1699 && r<=1700) return R22.Condition(r-1699);
  if (r>=1701 && r<=1716) return R23.Condition(r-1701);
  if (r>=1717 && r<=1748) return R24.Condition(r-1717);
  if (r>=1749 && r<=1764) return R25.Condition(r-1749);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=31) { R0.Code(r-0); return; } 
  if (r>=32 && r<=63) { R1.Code(r-32); return; } 
  if (r>=64 && r<=191) { R2.Code(r-64); return; } 
  if (r>=192 && r<=447) { R3.Code(r-192); return; } 
  if (r>=448 && r<=575) { R4.Code(r-448); return; } 
  if (r>=576 && r<=639) { R5.Code(r-576); return; } 
  if (r>=640 && r<=767) { R6.Code(r-640); return; } 
  if (r>=768 && r<=768) { R7.Code(r-768); return; } 
  if (r>=769 && r<=832) { R8.Code(r-769); return; } 
  if (r>=833 && r<=960) { R9.Code(r-833); return; } 
  if (r>=961 && r<=961) { R10.Code(r-961); return; } 
  if (r>=962 && r<=1089) { R11.Code(r-962); return; } 
  if (r>=1090 && r<=1217) { R12.Code(r-1090); return; } 
  if (r>=1218 && r<=1281) { R13.Code(r-1218); return; } 
  if (r>=1282 && r<=1409) { R14.Code(r-1282); return; } 
  if (r>=1410 && r<=1473) { R15.Code(r-1410); return; } 
  if (r>=1474 && r<=1505) { R16.Code(r-1474); return; } 
  if (r>=1506 && r<=1506) { R17.Code(r-1506); return; } 
  if (r>=1507 && r<=1570) { R18.Code(r-1507); return; } 
  if (r>=1571 && r<=1634) { R19.Code(r-1571); return; } 
  if (r>=1635 && r<=1666) { R20.Code(r-1635); return; } 
  if (r>=1667 && r<=1698) { R21.Code(r-1667); return; } 
  if (r>=1699 && r<=1700) { R22.Code(r-1699); return; } 
  if (r>=1701 && r<=1716) { R23.Code(r-1701); return; } 
  if (r>=1717 && r<=1748) { R24.Code(r-1717); return; } 
  if (r>=1749 && r<=1764) { R25.Code(r-1749); return; } 
}
int Priority(unsigned short r)
{
  if (r<=31) { return R0.Priority(); } 
  if (r>=32 && r<=63) { return R1.Priority(); } 
  if (r>=64 && r<=191) { return R2.Priority(); } 
  if (r>=192 && r<=447) { return R3.Priority(); } 
  if (r>=448 && r<=575) { return R4.Priority(); } 
  if (r>=576 && r<=639) { return R5.Priority(); } 
  if (r>=640 && r<=767) { return R6.Priority(); } 
  if (r>=768 && r<=768) { return R7.Priority(); } 
  if (r>=769 && r<=832) { return R8.Priority(); } 
  if (r>=833 && r<=960) { return R9.Priority(); } 
  if (r>=961 && r<=961) { return R10.Priority(); } 
  if (r>=962 && r<=1089) { return R11.Priority(); } 
  if (r>=1090 && r<=1217) { return R12.Priority(); } 
  if (r>=1218 && r<=1281) { return R13.Priority(); } 
  if (r>=1282 && r<=1409) { return R14.Priority(); } 
  if (r>=1410 && r<=1473) { return R15.Priority(); } 
  if (r>=1474 && r<=1505) { return R16.Priority(); } 
  if (r>=1506 && r<=1506) { return R17.Priority(); } 
  if (r>=1507 && r<=1570) { return R18.Priority(); } 
  if (r>=1571 && r<=1634) { return R19.Priority(); } 
  if (r>=1635 && r<=1666) { return R20.Priority(); } 
  if (r>=1667 && r<=1698) { return R21.Priority(); } 
  if (r>=1699 && r<=1700) { return R22.Priority(); } 
  if (r>=1701 && r<=1716) { return R23.Priority(); } 
  if (r>=1717 && r<=1748) { return R24.Priority(); } 
  if (r>=1749 && r<=1764) { return R25.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=31) return R0.Name(r-0);
  if (r>=32 && r<=63) return R1.Name(r-32);
  if (r>=64 && r<=191) return R2.Name(r-64);
  if (r>=192 && r<=447) return R3.Name(r-192);
  if (r>=448 && r<=575) return R4.Name(r-448);
  if (r>=576 && r<=639) return R5.Name(r-576);
  if (r>=640 && r<=767) return R6.Name(r-640);
  if (r>=768 && r<=768) return R7.Name(r-768);
  if (r>=769 && r<=832) return R8.Name(r-769);
  if (r>=833 && r<=960) return R9.Name(r-833);
  if (r>=961 && r<=961) return R10.Name(r-961);
  if (r>=962 && r<=1089) return R11.Name(r-962);
  if (r>=1090 && r<=1217) return R12.Name(r-1090);
  if (r>=1218 && r<=1281) return R13.Name(r-1218);
  if (r>=1282 && r<=1409) return R14.Name(r-1282);
  if (r>=1410 && r<=1473) return R15.Name(r-1410);
  if (r>=1474 && r<=1505) return R16.Name(r-1474);
  if (r>=1506 && r<=1506) return R17.Name(r-1506);
  if (r>=1507 && r<=1570) return R18.Name(r-1507);
  if (r>=1571 && r<=1634) return R19.Name(r-1571);
  if (r>=1635 && r<=1666) return R20.Name(r-1635);
  if (r>=1667 && r<=1698) return R21.Name(r-1667);
  if (r>=1699 && r<=1700) return R22.Name(r-1699);
  if (r>=1701 && r<=1716) return R23.Name(r-1701);
  if (r>=1717 && r<=1748) return R24.Name(r-1717);
  if (r>=1749 && r<=1764) return R25.Name(r-1749);
  return NULL;
}
};
const unsigned numrules = 1765;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 1765


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("Init, d:%s", mu_d.Name());
  }
  void Code(unsigned short r)
  {
    static mu_1_TYPE_DATA mu_d;
    mu_d.value((r % 2) + 1);
    r = r / 2;
{
for(int mu_i = 1; mu_i <= 16; mu_i++) {
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_INVALID;
};
};
mu_node[mu_i].mu_hasLock = mu_false;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
mu_node[mu_i].mu_firstRead[mu_a] = mu_true;
};
};
mu_curNode = mu_i;
};
};
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
mu_curCache = mu_j;
};
};
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
mu_memory[mu_a].mu_data = mu_d;
mu_curMemory = mu_a;
};
};
mu_curData = mu_d;
{
for(int mu_l = 1; mu_l <= 2; mu_l++) {
mu_lock[mu_l].mu_beUsed = mu_false;
mu_curLock = mu_l;
{
for(int mu_a = 1; mu_a <= 2; mu_a++) {
mu_lock[mu_l].mu_inProtection[mu_a] = mu_false;
};
};
};
};
mu_replace = mu_NON;
mu_repRule = mu_NONE;
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
int mu__invariant_214( const mu_1_TYPE_ADDR &mu_a, const mu_1_TYPE_CACHE &mu_j, const mu_1_TYPE_NODE &mu_i) // Invariant "Coherence"
{
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
bool mu__boolexpr218;
bool mu__boolexpr219;
  if (!((mu_replace) == (mu_NON))) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_node[mu_i].mu_hasLock) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (!(mu_node[mu_i].mu_firstRead[mu_a])) ; 
}
  if (!(mu__boolexpr218)) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_node[mu_i].mu_cache[mu_j].mu_state) == (mu_VALID)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_node[mu_i].mu_cache[mu_j].mu_addr) == (mu_a)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = TRUE ;
  else {
  mu__boolexpr215 = ((mu_node[mu_i].mu_cache[mu_j].mu_data) != (mu_memory[mu_a].mu_data)) ; 
}
return mu__boolexpr215;
};

bool mu__condition_223() // Condition for Rule "Coherence, a:1, j:1, i:1"
{
  return mu__invariant_214( 1, 1, 1 );
}

bool mu__condition_224() // Condition for Rule "Coherence, a:1, j:1, i:2"
{
  return mu__invariant_214( 1, 1, 2 );
}

bool mu__condition_225() // Condition for Rule "Coherence, a:1, j:1, i:3"
{
  return mu__invariant_214( 1, 1, 3 );
}

bool mu__condition_226() // Condition for Rule "Coherence, a:1, j:1, i:4"
{
  return mu__invariant_214( 1, 1, 4 );
}

bool mu__condition_227() // Condition for Rule "Coherence, a:1, j:1, i:5"
{
  return mu__invariant_214( 1, 1, 5 );
}

bool mu__condition_228() // Condition for Rule "Coherence, a:1, j:1, i:6"
{
  return mu__invariant_214( 1, 1, 6 );
}

bool mu__condition_229() // Condition for Rule "Coherence, a:1, j:1, i:7"
{
  return mu__invariant_214( 1, 1, 7 );
}

bool mu__condition_230() // Condition for Rule "Coherence, a:1, j:1, i:8"
{
  return mu__invariant_214( 1, 1, 8 );
}

bool mu__condition_231() // Condition for Rule "Coherence, a:1, j:1, i:9"
{
  return mu__invariant_214( 1, 1, 9 );
}

bool mu__condition_232() // Condition for Rule "Coherence, a:1, j:1, i:10"
{
  return mu__invariant_214( 1, 1, 10 );
}

bool mu__condition_233() // Condition for Rule "Coherence, a:1, j:1, i:11"
{
  return mu__invariant_214( 1, 1, 11 );
}

bool mu__condition_234() // Condition for Rule "Coherence, a:1, j:1, i:12"
{
  return mu__invariant_214( 1, 1, 12 );
}

bool mu__condition_235() // Condition for Rule "Coherence, a:1, j:1, i:13"
{
  return mu__invariant_214( 1, 1, 13 );
}

bool mu__condition_236() // Condition for Rule "Coherence, a:1, j:1, i:14"
{
  return mu__invariant_214( 1, 1, 14 );
}

bool mu__condition_237() // Condition for Rule "Coherence, a:1, j:1, i:15"
{
  return mu__invariant_214( 1, 1, 15 );
}

bool mu__condition_238() // Condition for Rule "Coherence, a:1, j:1, i:16"
{
  return mu__invariant_214( 1, 1, 16 );
}

bool mu__condition_240() // Condition for Rule "Coherence, a:1, j:2, i:1"
{
  return mu__invariant_214( 1, 2, 1 );
}

bool mu__condition_241() // Condition for Rule "Coherence, a:1, j:2, i:2"
{
  return mu__invariant_214( 1, 2, 2 );
}

bool mu__condition_242() // Condition for Rule "Coherence, a:1, j:2, i:3"
{
  return mu__invariant_214( 1, 2, 3 );
}

bool mu__condition_243() // Condition for Rule "Coherence, a:1, j:2, i:4"
{
  return mu__invariant_214( 1, 2, 4 );
}

bool mu__condition_244() // Condition for Rule "Coherence, a:1, j:2, i:5"
{
  return mu__invariant_214( 1, 2, 5 );
}

bool mu__condition_245() // Condition for Rule "Coherence, a:1, j:2, i:6"
{
  return mu__invariant_214( 1, 2, 6 );
}

bool mu__condition_246() // Condition for Rule "Coherence, a:1, j:2, i:7"
{
  return mu__invariant_214( 1, 2, 7 );
}

bool mu__condition_247() // Condition for Rule "Coherence, a:1, j:2, i:8"
{
  return mu__invariant_214( 1, 2, 8 );
}

bool mu__condition_248() // Condition for Rule "Coherence, a:1, j:2, i:9"
{
  return mu__invariant_214( 1, 2, 9 );
}

bool mu__condition_249() // Condition for Rule "Coherence, a:1, j:2, i:10"
{
  return mu__invariant_214( 1, 2, 10 );
}

bool mu__condition_250() // Condition for Rule "Coherence, a:1, j:2, i:11"
{
  return mu__invariant_214( 1, 2, 11 );
}

bool mu__condition_251() // Condition for Rule "Coherence, a:1, j:2, i:12"
{
  return mu__invariant_214( 1, 2, 12 );
}

bool mu__condition_252() // Condition for Rule "Coherence, a:1, j:2, i:13"
{
  return mu__invariant_214( 1, 2, 13 );
}

bool mu__condition_253() // Condition for Rule "Coherence, a:1, j:2, i:14"
{
  return mu__invariant_214( 1, 2, 14 );
}

bool mu__condition_254() // Condition for Rule "Coherence, a:1, j:2, i:15"
{
  return mu__invariant_214( 1, 2, 15 );
}

bool mu__condition_255() // Condition for Rule "Coherence, a:1, j:2, i:16"
{
  return mu__invariant_214( 1, 2, 16 );
}

bool mu__condition_258() // Condition for Rule "Coherence, a:2, j:1, i:1"
{
  return mu__invariant_214( 2, 1, 1 );
}

bool mu__condition_259() // Condition for Rule "Coherence, a:2, j:1, i:2"
{
  return mu__invariant_214( 2, 1, 2 );
}

bool mu__condition_260() // Condition for Rule "Coherence, a:2, j:1, i:3"
{
  return mu__invariant_214( 2, 1, 3 );
}

bool mu__condition_261() // Condition for Rule "Coherence, a:2, j:1, i:4"
{
  return mu__invariant_214( 2, 1, 4 );
}

bool mu__condition_262() // Condition for Rule "Coherence, a:2, j:1, i:5"
{
  return mu__invariant_214( 2, 1, 5 );
}

bool mu__condition_263() // Condition for Rule "Coherence, a:2, j:1, i:6"
{
  return mu__invariant_214( 2, 1, 6 );
}

bool mu__condition_264() // Condition for Rule "Coherence, a:2, j:1, i:7"
{
  return mu__invariant_214( 2, 1, 7 );
}

bool mu__condition_265() // Condition for Rule "Coherence, a:2, j:1, i:8"
{
  return mu__invariant_214( 2, 1, 8 );
}

bool mu__condition_266() // Condition for Rule "Coherence, a:2, j:1, i:9"
{
  return mu__invariant_214( 2, 1, 9 );
}

bool mu__condition_267() // Condition for Rule "Coherence, a:2, j:1, i:10"
{
  return mu__invariant_214( 2, 1, 10 );
}

bool mu__condition_268() // Condition for Rule "Coherence, a:2, j:1, i:11"
{
  return mu__invariant_214( 2, 1, 11 );
}

bool mu__condition_269() // Condition for Rule "Coherence, a:2, j:1, i:12"
{
  return mu__invariant_214( 2, 1, 12 );
}

bool mu__condition_270() // Condition for Rule "Coherence, a:2, j:1, i:13"
{
  return mu__invariant_214( 2, 1, 13 );
}

bool mu__condition_271() // Condition for Rule "Coherence, a:2, j:1, i:14"
{
  return mu__invariant_214( 2, 1, 14 );
}

bool mu__condition_272() // Condition for Rule "Coherence, a:2, j:1, i:15"
{
  return mu__invariant_214( 2, 1, 15 );
}

bool mu__condition_273() // Condition for Rule "Coherence, a:2, j:1, i:16"
{
  return mu__invariant_214( 2, 1, 16 );
}

bool mu__condition_275() // Condition for Rule "Coherence, a:2, j:2, i:1"
{
  return mu__invariant_214( 2, 2, 1 );
}

bool mu__condition_276() // Condition for Rule "Coherence, a:2, j:2, i:2"
{
  return mu__invariant_214( 2, 2, 2 );
}

bool mu__condition_277() // Condition for Rule "Coherence, a:2, j:2, i:3"
{
  return mu__invariant_214( 2, 2, 3 );
}

bool mu__condition_278() // Condition for Rule "Coherence, a:2, j:2, i:4"
{
  return mu__invariant_214( 2, 2, 4 );
}

bool mu__condition_279() // Condition for Rule "Coherence, a:2, j:2, i:5"
{
  return mu__invariant_214( 2, 2, 5 );
}

bool mu__condition_280() // Condition for Rule "Coherence, a:2, j:2, i:6"
{
  return mu__invariant_214( 2, 2, 6 );
}

bool mu__condition_281() // Condition for Rule "Coherence, a:2, j:2, i:7"
{
  return mu__invariant_214( 2, 2, 7 );
}

bool mu__condition_282() // Condition for Rule "Coherence, a:2, j:2, i:8"
{
  return mu__invariant_214( 2, 2, 8 );
}

bool mu__condition_283() // Condition for Rule "Coherence, a:2, j:2, i:9"
{
  return mu__invariant_214( 2, 2, 9 );
}

bool mu__condition_284() // Condition for Rule "Coherence, a:2, j:2, i:10"
{
  return mu__invariant_214( 2, 2, 10 );
}

bool mu__condition_285() // Condition for Rule "Coherence, a:2, j:2, i:11"
{
  return mu__invariant_214( 2, 2, 11 );
}

bool mu__condition_286() // Condition for Rule "Coherence, a:2, j:2, i:12"
{
  return mu__invariant_214( 2, 2, 12 );
}

bool mu__condition_287() // Condition for Rule "Coherence, a:2, j:2, i:13"
{
  return mu__invariant_214( 2, 2, 13 );
}

bool mu__condition_288() // Condition for Rule "Coherence, a:2, j:2, i:14"
{
  return mu__invariant_214( 2, 2, 14 );
}

bool mu__condition_289() // Condition for Rule "Coherence, a:2, j:2, i:15"
{
  return mu__invariant_214( 2, 2, 15 );
}

bool mu__condition_290() // Condition for Rule "Coherence, a:2, j:2, i:16"
{
  return mu__invariant_214( 2, 2, 16 );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"Coherence, a:2, j:2, i:16", &mu__condition_290, NULL, },
{"Coherence, a:2, j:2, i:15", &mu__condition_289, NULL, },
{"Coherence, a:2, j:2, i:14", &mu__condition_288, NULL, },
{"Coherence, a:2, j:2, i:13", &mu__condition_287, NULL, },
{"Coherence, a:2, j:2, i:12", &mu__condition_286, NULL, },
{"Coherence, a:2, j:2, i:11", &mu__condition_285, NULL, },
{"Coherence, a:2, j:2, i:10", &mu__condition_284, NULL, },
{"Coherence, a:2, j:2, i:9", &mu__condition_283, NULL, },
{"Coherence, a:2, j:2, i:8", &mu__condition_282, NULL, },
{"Coherence, a:2, j:2, i:7", &mu__condition_281, NULL, },
{"Coherence, a:2, j:2, i:6", &mu__condition_280, NULL, },
{"Coherence, a:2, j:2, i:5", &mu__condition_279, NULL, },
{"Coherence, a:2, j:2, i:4", &mu__condition_278, NULL, },
{"Coherence, a:2, j:2, i:3", &mu__condition_277, NULL, },
{"Coherence, a:2, j:2, i:2", &mu__condition_276, NULL, },
{"Coherence, a:2, j:2, i:1", &mu__condition_275, NULL, },
{"Coherence, a:2, j:1, i:16", &mu__condition_273, NULL, },
{"Coherence, a:2, j:1, i:15", &mu__condition_272, NULL, },
{"Coherence, a:2, j:1, i:14", &mu__condition_271, NULL, },
{"Coherence, a:2, j:1, i:13", &mu__condition_270, NULL, },
{"Coherence, a:2, j:1, i:12", &mu__condition_269, NULL, },
{"Coherence, a:2, j:1, i:11", &mu__condition_268, NULL, },
{"Coherence, a:2, j:1, i:10", &mu__condition_267, NULL, },
{"Coherence, a:2, j:1, i:9", &mu__condition_266, NULL, },
{"Coherence, a:2, j:1, i:8", &mu__condition_265, NULL, },
{"Coherence, a:2, j:1, i:7", &mu__condition_264, NULL, },
{"Coherence, a:2, j:1, i:6", &mu__condition_263, NULL, },
{"Coherence, a:2, j:1, i:5", &mu__condition_262, NULL, },
{"Coherence, a:2, j:1, i:4", &mu__condition_261, NULL, },
{"Coherence, a:2, j:1, i:3", &mu__condition_260, NULL, },
{"Coherence, a:2, j:1, i:2", &mu__condition_259, NULL, },
{"Coherence, a:2, j:1, i:1", &mu__condition_258, NULL, },
{"Coherence, a:1, j:2, i:16", &mu__condition_255, NULL, },
{"Coherence, a:1, j:2, i:15", &mu__condition_254, NULL, },
{"Coherence, a:1, j:2, i:14", &mu__condition_253, NULL, },
{"Coherence, a:1, j:2, i:13", &mu__condition_252, NULL, },
{"Coherence, a:1, j:2, i:12", &mu__condition_251, NULL, },
{"Coherence, a:1, j:2, i:11", &mu__condition_250, NULL, },
{"Coherence, a:1, j:2, i:10", &mu__condition_249, NULL, },
{"Coherence, a:1, j:2, i:9", &mu__condition_248, NULL, },
{"Coherence, a:1, j:2, i:8", &mu__condition_247, NULL, },
{"Coherence, a:1, j:2, i:7", &mu__condition_246, NULL, },
{"Coherence, a:1, j:2, i:6", &mu__condition_245, NULL, },
{"Coherence, a:1, j:2, i:5", &mu__condition_244, NULL, },
{"Coherence, a:1, j:2, i:4", &mu__condition_243, NULL, },
{"Coherence, a:1, j:2, i:3", &mu__condition_242, NULL, },
{"Coherence, a:1, j:2, i:2", &mu__condition_241, NULL, },
{"Coherence, a:1, j:2, i:1", &mu__condition_240, NULL, },
{"Coherence, a:1, j:1, i:16", &mu__condition_238, NULL, },
{"Coherence, a:1, j:1, i:15", &mu__condition_237, NULL, },
{"Coherence, a:1, j:1, i:14", &mu__condition_236, NULL, },
{"Coherence, a:1, j:1, i:13", &mu__condition_235, NULL, },
{"Coherence, a:1, j:1, i:12", &mu__condition_234, NULL, },
{"Coherence, a:1, j:1, i:11", &mu__condition_233, NULL, },
{"Coherence, a:1, j:1, i:10", &mu__condition_232, NULL, },
{"Coherence, a:1, j:1, i:9", &mu__condition_231, NULL, },
{"Coherence, a:1, j:1, i:8", &mu__condition_230, NULL, },
{"Coherence, a:1, j:1, i:7", &mu__condition_229, NULL, },
{"Coherence, a:1, j:1, i:6", &mu__condition_228, NULL, },
{"Coherence, a:1, j:1, i:5", &mu__condition_227, NULL, },
{"Coherence, a:1, j:1, i:4", &mu__condition_226, NULL, },
{"Coherence, a:1, j:1, i:3", &mu__condition_225, NULL, },
{"Coherence, a:1, j:1, i:2", &mu__condition_224, NULL, },
{"Coherence, a:1, j:1, i:1", &mu__condition_223, NULL, },
};
const unsigned short numinvariants = 64;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
replace:NoScalarset
curData:NoScalarset
curCache:NoScalarset
node:NoScalarset
lock:NoScalarset
memory:NoScalarset
curNode:NoScalarset
curMemory:NoScalarset
curLock:NoScalarset
repRule:NoScalarset
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
        mu_replace.MultisetSort();
        mu_curData.MultisetSort();
        mu_curCache.MultisetSort();
        mu_node.MultisetSort();
        mu_lock.MultisetSort();
        mu_memory.MultisetSort();
        mu_curNode.MultisetSort();
        mu_curMemory.MultisetSort();
        mu_curLock.MultisetSort();
        mu_repRule.MultisetSort();
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
void mu_1_TYPE_NODE::Permute(PermSet& Perm, int i) {};
void mu_1_TYPE_NODE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_TYPE_NODE::Canonicalize(PermSet& Perm) {};
void mu_1_TYPE_NODE::SimpleLimit(PermSet& Perm) {};
void mu_1_TYPE_NODE::ArrayLimit(PermSet& Perm) {};
void mu_1_TYPE_NODE::Limit(PermSet& Perm) {};
void mu_1_TYPE_NODE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_TYPE_CACHE::Permute(PermSet& Perm, int i) {};
void mu_1_TYPE_CACHE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_TYPE_CACHE::Canonicalize(PermSet& Perm) {};
void mu_1_TYPE_CACHE::SimpleLimit(PermSet& Perm) {};
void mu_1_TYPE_CACHE::ArrayLimit(PermSet& Perm) {};
void mu_1_TYPE_CACHE::Limit(PermSet& Perm) {};
void mu_1_TYPE_CACHE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_TYPE_ADDR::Permute(PermSet& Perm, int i) {};
void mu_1_TYPE_ADDR::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_TYPE_ADDR::Canonicalize(PermSet& Perm) {};
void mu_1_TYPE_ADDR::SimpleLimit(PermSet& Perm) {};
void mu_1_TYPE_ADDR::ArrayLimit(PermSet& Perm) {};
void mu_1_TYPE_ADDR::Limit(PermSet& Perm) {};
void mu_1_TYPE_ADDR::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_TYPE_DATA::Permute(PermSet& Perm, int i) {};
void mu_1_TYPE_DATA::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_TYPE_DATA::Canonicalize(PermSet& Perm) {};
void mu_1_TYPE_DATA::SimpleLimit(PermSet& Perm) {};
void mu_1_TYPE_DATA::ArrayLimit(PermSet& Perm) {};
void mu_1_TYPE_DATA::Limit(PermSet& Perm) {};
void mu_1_TYPE_DATA::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_TYPE_LOCK::Permute(PermSet& Perm, int i) {};
void mu_1_TYPE_LOCK::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_TYPE_LOCK::Canonicalize(PermSet& Perm) {};
void mu_1_TYPE_LOCK::SimpleLimit(PermSet& Perm) {};
void mu_1_TYPE_LOCK::ArrayLimit(PermSet& Perm) {};
void mu_1_TYPE_LOCK::Limit(PermSet& Perm) {};
void mu_1_TYPE_LOCK::MultisetLimit(PermSet& Perm)
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
void mu_1_MEMORY::Permute(PermSet& Perm, int i)
{
};
void mu_1_MEMORY::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_MEMORY::Canonicalize(PermSet& Perm)
{
};
void mu_1_MEMORY::SimpleLimit(PermSet& Perm){}
void mu_1_MEMORY::ArrayLimit(PermSet& Perm){}
void mu_1_MEMORY::Limit(PermSet& Perm)
{
};
void mu_1_MEMORY::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<2; j++)
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
void mu_1_LOCK::Permute(PermSet& Perm, int i)
{
};
void mu_1_LOCK::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_LOCK::Canonicalize(PermSet& Perm)
{
};
void mu_1_LOCK::SimpleLimit(PermSet& Perm){}
void mu_1_LOCK::ArrayLimit(PermSet& Perm){}
void mu_1_LOCK::Limit(PermSet& Perm)
{
};
void mu_1_LOCK::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
void mu_1_NODE::Permute(PermSet& Perm, int i)
{
};
void mu_1_NODE::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_NODE::Canonicalize(PermSet& Perm)
{
};
void mu_1_NODE::SimpleLimit(PermSet& Perm){}
void mu_1_NODE::ArrayLimit(PermSet& Perm){}
void mu_1_NODE::Limit(PermSet& Perm)
{
};
void mu_1_NODE::MultisetLimit(PermSet& Perm)
{
};
void mu_1_REPLACE_STAGE::Permute(PermSet& Perm, int i) {};
void mu_1_REPLACE_STAGE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_REPLACE_STAGE::Canonicalize(PermSet& Perm) {};
void mu_1_REPLACE_STAGE::SimpleLimit(PermSet& Perm) {};
void mu_1_REPLACE_STAGE::ArrayLimit(PermSet& Perm) {};
void mu_1_REPLACE_STAGE::Limit(PermSet& Perm) {};
void mu_1_REPLACE_STAGE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_REPLACE_RULE::Permute(PermSet& Perm, int i) {};
void mu_1_REPLACE_RULE::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_REPLACE_RULE::Canonicalize(PermSet& Perm) {};
void mu_1_REPLACE_RULE::SimpleLimit(PermSet& Perm) {};
void mu_1_REPLACE_RULE::ArrayLimit(PermSet& Perm) {};
void mu_1_REPLACE_RULE::Limit(PermSet& Perm) {};
void mu_1_REPLACE_RULE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<2; j++)
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
  for (j=0; j<2; j++)
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
  for (j=0; j<16; j++)
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
              
              mu_replace.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_replace.MultisetSort();
              mu_curData.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_curData.MultisetSort();
              mu_curCache.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_curCache.MultisetSort();
              mu_node.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node.MultisetSort();
              mu_lock.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_lock.MultisetSort();
              mu_memory.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_memory.MultisetSort();
              mu_curNode.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_curNode.MultisetSort();
              mu_curMemory.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_curMemory.MultisetSort();
              mu_curLock.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_curLock.MultisetSort();
              mu_repRule.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_repRule.MultisetSort();
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

          mu_replace.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_replace.MultisetSort();
          mu_curData.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_curData.MultisetSort();
          mu_curCache.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_curCache.MultisetSort();
          mu_node.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node.MultisetSort();
          mu_lock.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_lock.MultisetSort();
          mu_memory.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_memory.MultisetSort();
          mu_curNode.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_curNode.MultisetSort();
          mu_curMemory.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_curMemory.MultisetSort();
          mu_curLock.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_curLock.MultisetSort();
          mu_repRule.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_repRule.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_replace.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_replace.MultisetSort();
              mu_curData.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_curData.MultisetSort();
              mu_curCache.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_curCache.MultisetSort();
              mu_node.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node.MultisetSort();
              mu_lock.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_lock.MultisetSort();
              mu_memory.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_memory.MultisetSort();
              mu_curNode.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_curNode.MultisetSort();
              mu_curMemory.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_curMemory.MultisetSort();
              mu_curLock.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_curLock.MultisetSort();
              mu_repRule.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_repRule.MultisetSort();
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
      mu_replace.MultisetSort();
      mu_curData.MultisetSort();
      mu_curCache.MultisetSort();
      mu_node.MultisetSort();
      mu_lock.MultisetSort();
      mu_memory.MultisetSort();
      mu_curNode.MultisetSort();
      mu_curMemory.MultisetSort();
      mu_curLock.MultisetSort();
      mu_repRule.MultisetSort();
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
        mu_replace.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_replace.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_curData.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_curData.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_curCache.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_curCache.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_lock.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_lock.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_memory.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_memory.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_curNode.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_curNode.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_curMemory.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_curMemory.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_curLock.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_curLock.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_repRule.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_repRule.MultisetSort();
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
