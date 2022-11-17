/******************************
  Program "ABSflash_ctc_10_origin.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Nov 14 2021"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Nov 14 2021"
#define PROTOCOL_NAME "ABSflash_ctc_10_origin"
#define BITS_IN_WORLD 328
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
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NODE& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NODE& val)
    {
      if (val.defined())
	return ( s << mu_1_NODE::values[ int(val) - 1 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_NODE (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu_1_NODE (void): mu__byte(1, 2, 2) {};
  mu_1_NODE (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -1]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_NODE& a, mu_1_NODE& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_NODE::values[] =
  { "NODE_1","NODE_2",NULL };

/*** end scalarset declaration ***/
mu_1_NODE mu_1_NODE_undefined_var;

class mu_1_OTHER: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_OTHER& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_OTHER& val)
  {
    if (val.defined())
      return ( s << mu_1_OTHER::values[ int(val) - 3] );
    else return ( s << "Undefined" );
  };

  mu_1_OTHER (const char *name, int os): mu__byte(3, 3, 1, name, os) {};
  mu_1_OTHER (void): mu__byte(3, 3, 1) {};
  mu_1_OTHER (int val): mu__byte(3, 3, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -3]; };
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
      cout << name << ":" << values[ value() -3] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_OTHER::values[] = {"Other",NULL };

/*** end of enum declaration ***/
mu_1_OTHER mu_1_OTHER_undefined_var;

class mu_1_ABS_NODE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ABS_NODE& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ABS_NODE& val)
    {
      if (val.defined())
	return ( s << mu_1_ABS_NODE::values[ val.indexvalue() ] );
      else
	return ( s << "Undefined" );
    };

  // note thate lb and ub are not used if we have byte compacted state.
  mu_1_ABS_NODE (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_ABS_NODE (void): mu__byte(0, 2, 2) {};
  mu_1_ABS_NODE (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
    { operator=(val); };
  int indexvalue()
  {
    if ((value() >= 1) && (value() <= 2)) return (value() - 1);
    if ((value() >= 3) && (value() <= 3)) return (value() - 1);
  return 0;
  };
  inline int unionassign(int val)
  {
    if (val >= 0 && val <= 1) return value(val+1);
    if (val >= 2 && val <= 2) return value(val+1);
  return 0;
  };
  const char * Name() { return values[ indexvalue() ]; };
friend int CompareWeight(mu_1_ABS_NODE& a, mu_1_ABS_NODE& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ indexvalue() ] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
};
const char *mu_1_ABS_NODE::values[] = {"NODE_1","NODE_2","Other",NULL };

/*** end union declaration ***/
mu_1_ABS_NODE mu_1_ABS_NODE_undefined_var;

class mu_1_CACHE_STATE: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_CACHE_STATE& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_CACHE_STATE& val)
  {
    if (val.defined())
      return ( s << mu_1_CACHE_STATE::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_CACHE_STATE (const char *name, int os): mu__byte(4, 6, 2, name, os) {};
  mu_1_CACHE_STATE (void): mu__byte(4, 6, 2) {};
  mu_1_CACHE_STATE (int val): mu__byte(4, 6, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_NODE_CMD::values[ int(val) - 7] );
    else return ( s << "Undefined" );
  };

  mu_1_NODE_CMD (const char *name, int os): mu__byte(7, 9, 2, name, os) {};
  mu_1_NODE_CMD (void): mu__byte(7, 9, 2) {};
  mu_1_NODE_CMD (int val): mu__byte(7, 9, 2, "Parameter or function result.", 0)
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
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1__type_1
{
 public:
  mu_0_boolean array[ 2 ];
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
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
  mu_1_ABS_NODE mu_HeadPtr;
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
  if (name) mu_InvSet.set_self_2(name, ".InvSet", os + 64 ); else mu_InvSet.set_self_2(NULL, NULL, 0);
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
      return ( s << mu_1_UNI_CMD::values[ int(val) - 10] );
    else return ( s << "Undefined" );
  };

  mu_1_UNI_CMD (const char *name, int os): mu__byte(10, 15, 3, name, os) {};
  mu_1_UNI_CMD (void): mu__byte(10, 15, 3) {};
  mu_1_UNI_CMD (int val): mu__byte(10, 15, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -10]; };
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
      cout << name << ":" << values[ value() -10] << '\n';
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
  mu_1_ABS_NODE mu_Proc;
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
      return ( s << mu_1_INV_CMD::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_INV_CMD (const char *name, int os): mu__byte(16, 18, 2, name, os) {};
  mu_1_INV_CMD (void): mu__byte(16, 18, 2) {};
  mu_1_INV_CMD (int val): mu__byte(16, 18, 2, "Parameter or function result.", 0)
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
      return ( s << mu_1_RP_CMD::values[ int(val) - 19] );
    else return ( s << "Undefined" );
  };

  mu_1_RP_CMD (const char *name, int os): mu__byte(19, 20, 2, name, os) {};
  mu_1_RP_CMD (void): mu__byte(19, 20, 2) {};
  mu_1_RP_CMD (int val): mu__byte(19, 20, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -19]; };
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
      cout << name << ":" << values[ value() -19] << '\n';
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
      return ( s << mu_1_WB_CMD::values[ int(val) - 21] );
    else return ( s << "Undefined" );
  };

  mu_1_WB_CMD (const char *name, int os): mu__byte(21, 22, 2, name, os) {};
  mu_1_WB_CMD (void): mu__byte(21, 22, 2) {};
  mu_1_WB_CMD (int val): mu__byte(21, 22, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -21]; };
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
      cout << name << ":" << values[ value() -21] << '\n';
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
  mu_1_ABS_NODE mu_Proc;
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
      return ( s << mu_1_SHWB_CMD::values[ int(val) - 23] );
    else return ( s << "Undefined" );
  };

  mu_1_SHWB_CMD (const char *name, int os): mu__byte(23, 25, 2, name, os) {};
  mu_1_SHWB_CMD (void): mu__byte(23, 25, 2) {};
  mu_1_SHWB_CMD (int val): mu__byte(23, 25, 2, "Parameter or function result.", 0)
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
  mu_1_ABS_NODE mu_Proc;
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
      return ( s << mu_1_NAKC_CMD::values[ int(val) - 26] );
    else return ( s << "Undefined" );
  };

  mu_1_NAKC_CMD (const char *name, int os): mu__byte(26, 27, 2, name, os) {};
  mu_1_NAKC_CMD (void): mu__byte(26, 27, 2) {};
  mu_1_NAKC_CMD (int val): mu__byte(26, 27, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -26]; };
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
      cout << name << ":" << values[ value() -26] << '\n';
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
  mu_1_NODE_STATE array[ 2 ];
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_UNI_MSG array[ 2 ];
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 24 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_INV_MSG array[ 2 ];
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_RP_MSG array[ 2 ];
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
    if ( ( index >= 1 ) && ( index <= 2 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: NODE is internally represented from 1 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 2; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
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
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"NODE_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"NODE_2", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
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
  mu_1_ABS_NODE mu_PendReqSrc;
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
  if (name) mu_HomeProc.set_self_2(name, ".HomeProc", os + 48 ); else mu_HomeProc.set_self_2(NULL, NULL, 0);
  if (name) mu_Dir.set_self_2(name, ".Dir", os + 72 ); else mu_Dir.set_self_2(NULL, NULL, 0);
  if (name) mu_UniMsg.set_self_2(name, ".UniMsg", os + 152 ); else mu_UniMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_HomeUniMsg.set_self_2(name, ".HomeUniMsg", os + 200 ); else mu_HomeUniMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_InvMsg.set_self_2(name, ".InvMsg", os + 224 ); else mu_InvMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_RpMsg.set_self_2(name, ".RpMsg", os + 240 ); else mu_RpMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_WbMsg.set_self_2(name, ".WbMsg", os + 256 ); else mu_WbMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_ShWbMsg.set_self_2(name, ".ShWbMsg", os + 272 ); else mu_ShWbMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_NakcMsg.set_self_2(name, ".NakcMsg", os + 288 ); else mu_NakcMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_PendReqSrc.set_self_2(name, ".PendReqSrc", os + 296 ); else mu_PendReqSrc.set_self_2(NULL, NULL, 0);
  if (name) mu_HomePendReqSrc.set_self_2(name, ".HomePendReqSrc", os + 304 ); else mu_HomePendReqSrc.set_self_2(NULL, NULL, 0);
  if (name) mu_Collecting.set_self_2(name, ".Collecting", os + 312 ); else mu_Collecting.set_self_2(NULL, NULL, 0);
  if (name) mu_FwdCmd.set_self_2(name, ".FwdCmd", os + 320 ); else mu_FwdCmd.set_self_2(NULL, NULL, 0);
}

mu_1_STATE::~mu_1_STATE()
{
}

/*** end record declaration ***/
mu_1_STATE mu_1_STATE_undefined_var;

const int mu_NODE_NUM = 2;
const int mu_NODE_1 = 1;
const int mu_NODE_2 = 2;
const int mu_Other = 3;
const int mu_CACHE_I = 4;
const int mu_CACHE_S = 5;
const int mu_CACHE_E = 6;
const int mu_NODE_None = 7;
const int mu_NODE_Get = 8;
const int mu_NODE_GetX = 9;
const int mu_UNI_None = 10;
const int mu_UNI_Get = 11;
const int mu_UNI_GetX = 12;
const int mu_UNI_Put = 13;
const int mu_UNI_PutX = 14;
const int mu_UNI_Nak = 15;
const int mu_INV_None = 16;
const int mu_INV_Inv = 17;
const int mu_INV_InvAck = 18;
const int mu_RP_None = 19;
const int mu_RP_Replace = 20;
const int mu_WB_None = 21;
const int mu_WB_Wb = 22;
const int mu_SHWB_None = 23;
const int mu_SHWB_ShWb = 24;
const int mu_SHWB_FAck = 25;
const int mu_NAKC_None = 26;
const int mu_NAKC_Nakc = 27;
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
    return tsprintf("ABS_NI_Remote_Get_Put_iandj");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr6;
bool mu__boolexpr7;
bool mu__boolexpr8;
bool mu__boolexpr9;
bool mu__boolexpr10;
bool mu__boolexpr11;
bool mu__boolexpr12;
bool mu__boolexpr13;
bool mu__boolexpr14;
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
bool mu__boolexpr28;
bool mu__boolexpr29;
bool mu__boolexpr30;
bool mu__boolexpr31;
bool mu__boolexpr32;
bool mu__boolexpr33;
bool mu__boolexpr34;
bool mu__boolexpr35;
bool mu__boolexpr36;
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
bool mu__boolexpr40;
bool mu__boolexpr41;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
bool mu__boolexpr46;
  if (!((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_Sta.mu_HomePendReqSrc) == (mu_false)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_Sta.mu_Dir.mu_Pending) == (mu_true)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = ((mu_Sta.mu_NakcMsg.mu_Cmd) != (mu_NAKC_Nakc)) ; 
}
  if (!(mu__boolexpr36)) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
  mu__boolexpr32 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_None)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_S)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_Sta.mu_Collecting) == (mu_false)) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_Sta.mu_Dir.mu_Local) == (mu_false)) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_Sta.mu_Dir.mu_HeadVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_Sta.mu_FwdCmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr15)) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr14)) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_Sta.mu_Dir.mu_Dirty) == (mu_false)) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr12)) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr10)) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr9)) mu__boolexpr8 = FALSE ;
  else {
  mu__boolexpr8 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr8)) mu__boolexpr7 = FALSE ;
  else {
  mu__boolexpr7 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  if (!(mu__boolexpr7)) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
    return mu__boolexpr6;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    while (what_rule < 1 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
bool mu__boolexpr50;
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
bool mu__boolexpr54;
bool mu__boolexpr55;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
  if (!((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_Sta.mu_HomePendReqSrc) == (mu_false)) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_Sta.mu_Dir.mu_Pending) == (mu_true)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_Sta.mu_NakcMsg.mu_Cmd) != (mu_NAKC_Nakc)) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr75)) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_None)) ; 
}
  if (!(mu__boolexpr72)) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_S)) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_Sta.mu_Collecting) == (mu_false)) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr67)) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_Sta.mu_Dir.mu_Local) == (mu_false)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_Sta.mu_Dir.mu_HeadVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr59)) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_Sta.mu_FwdCmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr56)) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr55)) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_Sta.mu_Dir.mu_Dirty) == (mu_false)) ; 
}
  if (!(mu__boolexpr54)) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr51)) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr50)) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
	      if (mu__boolexpr47) {
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
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_FwdCmd = mu_UNI_None;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_ShWb;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_Other;
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
    mu_i.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("ABS_NI_Remote_Get_Put_j, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
bool mu__boolexpr100;
bool mu__boolexpr101;
bool mu__boolexpr102;
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
bool mu__boolexpr112;
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
bool mu__boolexpr120;
bool mu__boolexpr121;
bool mu__boolexpr122;
bool mu__boolexpr123;
bool mu__boolexpr124;
bool mu__boolexpr125;
bool mu__boolexpr126;
bool mu__boolexpr127;
bool mu__boolexpr128;
bool mu__boolexpr129;
bool mu__boolexpr130;
bool mu__boolexpr131;
  if (!(!(mu_Sta.mu_UniMsg[mu_i].mu_HomeProc))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_Other)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr130)) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr128)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr126)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_Sta.mu_HomePendReqSrc) == (mu_false)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr124)) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_Sta.mu_Dir.mu_Pending) == (mu_true)) ; 
}
  if (!(mu__boolexpr123)) mu__boolexpr122 = FALSE ;
  else {
  mu__boolexpr122 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr122)) mu__boolexpr121 = FALSE ;
  else {
  mu__boolexpr121 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr121)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr120)) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_Sta.mu_NakcMsg.mu_Cmd) != (mu_NAKC_Nakc)) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_None)) ; 
}
  if (!(mu__boolexpr113)) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_S)) ; 
}
  if (!(mu__boolexpr112)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_Sta.mu_Collecting) == (mu_false)) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr109)) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr106)) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr103)) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_Sta.mu_Dir.mu_Local) == (mu_false)) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr101)) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_Sta.mu_Dir.mu_HeadVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr100)) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_Sta.mu_FwdCmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
  mu__boolexpr97 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr96)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_Sta.mu_Dir.mu_Dirty) == (mu_false)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr93)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
    return mu__boolexpr88;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1;
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 3 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr132;
bool mu__boolexpr133;
bool mu__boolexpr134;
bool mu__boolexpr135;
bool mu__boolexpr136;
bool mu__boolexpr137;
bool mu__boolexpr138;
bool mu__boolexpr139;
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
bool mu__boolexpr148;
bool mu__boolexpr149;
bool mu__boolexpr150;
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
bool mu__boolexpr155;
bool mu__boolexpr156;
bool mu__boolexpr157;
bool mu__boolexpr158;
bool mu__boolexpr159;
bool mu__boolexpr160;
bool mu__boolexpr161;
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
bool mu__boolexpr165;
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
bool mu__boolexpr172;
bool mu__boolexpr173;
bool mu__boolexpr174;
bool mu__boolexpr175;
  if (!(!(mu_Sta.mu_UniMsg[mu_i].mu_HomeProc))) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_Other)) ; 
}
  if (!(mu__boolexpr175)) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr174)) mu__boolexpr173 = FALSE ;
  else {
  mu__boolexpr173 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr173)) mu__boolexpr172 = FALSE ;
  else {
  mu__boolexpr172 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr172)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_Sta.mu_HomePendReqSrc) == (mu_false)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_Sta.mu_Dir.mu_Pending) == (mu_true)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr166)) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr165)) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_Sta.mu_NakcMsg.mu_Cmd) != (mu_NAKC_Nakc)) ; 
}
  if (!(mu__boolexpr162)) mu__boolexpr161 = FALSE ;
  else {
  mu__boolexpr161 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr161)) mu__boolexpr160 = FALSE ;
  else {
  mu__boolexpr160 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr160)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr158)) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_None)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_S)) ; 
}
  if (!(mu__boolexpr156)) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_Sta.mu_Collecting) == (mu_false)) ; 
}
  if (!(mu__boolexpr155)) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr151)) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr150)) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  if (!(mu__boolexpr148)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = ((mu_Sta.mu_Dir.mu_Local) == (mu_false)) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = ((mu_Sta.mu_Dir.mu_HeadVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr144)) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_Sta.mu_FwdCmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_Sta.mu_Dir.mu_Dirty) == (mu_false)) ; 
}
  if (!(mu__boolexpr139)) mu__boolexpr138 = FALSE ;
  else {
  mu__boolexpr138 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr138)) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr136)) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr135)) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr134)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
	      if (mu__boolexpr132) {
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
    r = what_rule - 1;
    mu_i.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_i;
    mu_i.value((r % 2) + 1);
    r = r / 2;
mu_Sta.mu_UniMsg[mu_i].mu_Cmd = mu_UNI_Put;
mu_Sta.mu_UniMsg[mu_i].mu_HomeProc = mu_false;
mu_Sta.mu_FwdCmd = mu_UNI_None;
mu_Sta.mu_UniMsg[mu_i].mu_Proc = mu_Other;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_ShWb;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_i;
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
    static mu_1_NODE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("ABS_NI_Remote_Get_Put_i, j:%s", mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr176;
bool mu__boolexpr177;
bool mu__boolexpr178;
bool mu__boolexpr179;
bool mu__boolexpr180;
bool mu__boolexpr181;
bool mu__boolexpr182;
bool mu__boolexpr183;
bool mu__boolexpr184;
bool mu__boolexpr185;
bool mu__boolexpr186;
bool mu__boolexpr187;
bool mu__boolexpr188;
bool mu__boolexpr189;
bool mu__boolexpr190;
bool mu__boolexpr191;
bool mu__boolexpr192;
bool mu__boolexpr193;
bool mu__boolexpr194;
bool mu__boolexpr195;
bool mu__boolexpr196;
bool mu__boolexpr197;
bool mu__boolexpr198;
bool mu__boolexpr199;
bool mu__boolexpr200;
bool mu__boolexpr201;
bool mu__boolexpr202;
bool mu__boolexpr203;
bool mu__boolexpr204;
bool mu__boolexpr205;
bool mu__boolexpr206;
bool mu__boolexpr207;
bool mu__boolexpr208;
bool mu__boolexpr209;
bool mu__boolexpr210;
bool mu__boolexpr211;
bool mu__boolexpr212;
bool mu__boolexpr213;
bool mu__boolexpr214;
bool mu__boolexpr215;
bool mu__boolexpr216;
bool mu__boolexpr217;
  if (!((mu_Sta.mu_Proc[mu_j].mu_CacheState) == (mu_CACHE_E))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr217)) mu__boolexpr216 = FALSE ;
  else {
  mu__boolexpr216 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr216)) mu__boolexpr215 = FALSE ;
  else {
  mu__boolexpr215 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr215)) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_Sta.mu_HomePendReqSrc) == (mu_false)) ; 
}
  if (!(mu__boolexpr213)) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr212)) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_Sta.mu_Dir.mu_Pending) == (mu_true)) ; 
}
  if (!(mu__boolexpr211)) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr210)) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr209)) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr208)) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr207)) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_Sta.mu_NakcMsg.mu_Cmd) != (mu_NAKC_Nakc)) ; 
}
  if (!(mu__boolexpr206)) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr204)) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr203)) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr202)) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_None)) ; 
}
  if (!(mu__boolexpr201)) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_S)) ; 
}
  if (!(mu__boolexpr200)) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_Sta.mu_Collecting) == (mu_false)) ; 
}
  if (!(mu__boolexpr199)) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr198)) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr197)) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr196)) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr195)) mu__boolexpr194 = FALSE ;
  else {
  mu__boolexpr194 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr194)) mu__boolexpr193 = FALSE ;
  else {
  mu__boolexpr193 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr193)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  if (!(mu__boolexpr192)) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr191)) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_Sta.mu_Dir.mu_Local) == (mu_false)) ; 
}
  if (!(mu__boolexpr190)) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_Sta.mu_Dir.mu_HeadVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr188)) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_Sta.mu_FwdCmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr187)) mu__boolexpr186 = FALSE ;
  else {
  mu__boolexpr186 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr186)) mu__boolexpr185 = FALSE ;
  else {
  mu__boolexpr185 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr185)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = ((mu_Sta.mu_Dir.mu_Dirty) == (mu_false)) ; 
}
  if (!(mu__boolexpr183)) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr181)) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr180)) mu__boolexpr179 = FALSE ;
  else {
  mu__boolexpr179 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr179)) mu__boolexpr178 = FALSE ;
  else {
  mu__boolexpr178 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr178)) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
    return mu__boolexpr176;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 3;
    static mu_1_NODE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 5 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr218;
bool mu__boolexpr219;
bool mu__boolexpr220;
bool mu__boolexpr221;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
bool mu__boolexpr232;
bool mu__boolexpr233;
bool mu__boolexpr234;
bool mu__boolexpr235;
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
bool mu__boolexpr239;
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
bool mu__boolexpr257;
bool mu__boolexpr258;
bool mu__boolexpr259;
  if (!((mu_Sta.mu_Proc[mu_j].mu_CacheState) == (mu_CACHE_E))) mu__boolexpr259 = FALSE ;
  else {
  mu__boolexpr259 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr259)) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr257)) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = ((mu_Sta.mu_HomePendReqSrc) == (mu_false)) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
  mu__boolexpr254 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr254)) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = ((mu_Sta.mu_Dir.mu_Pending) == (mu_true)) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = ((mu_Sta.mu_NakcMsg.mu_Cmd) != (mu_NAKC_Nakc)) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr247)) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_None)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_S)) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = ((mu_Sta.mu_Collecting) == (mu_false)) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr240)) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr239)) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
  mu__boolexpr236 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr236)) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr235)) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
  mu__boolexpr232 = ((mu_Sta.mu_Dir.mu_Local) == (mu_false)) ; 
}
  if (!(mu__boolexpr232)) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_Sta.mu_Dir.mu_HeadVld) == (mu_false)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = ((mu_Sta.mu_FwdCmd) == (mu_UNI_Get)) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  if (!(mu__boolexpr227)) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_Sta.mu_Dir.mu_Dirty) == (mu_false)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_GetX)) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  if (!(mu__boolexpr222)) mu__boolexpr221 = FALSE ;
  else {
  mu__boolexpr221 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  if (!(mu__boolexpr221)) mu__boolexpr220 = FALSE ;
  else {
  mu__boolexpr220 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  if (!(mu__boolexpr220)) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  if (!(mu__boolexpr219)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
	      if (mu__boolexpr218) {
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
    r = what_rule - 3;
    mu_j.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_j;
    mu_j.value((r % 2) + 1);
    r = r / 2;
mu_Sta.mu_Proc[mu_j].mu_CacheState = mu_CACHE_S;
mu_Sta.mu_FwdCmd = mu_UNI_None;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_ShWb;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_Other;
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
    return tsprintf("ABS_NI_ShWb");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr260;
  if (!((mu_Sta.mu_ShWbMsg.mu_Cmd) == (mu_SHWB_ShWb))) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = ((mu_Sta.mu_ShWbMsg.mu_Proc) == (mu_Other)) ; 
}
    return mu__boolexpr260;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5;
    while (what_rule < 6 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr261;
  if (!((mu_Sta.mu_ShWbMsg.mu_Cmd) == (mu_SHWB_ShWb))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_Sta.mu_ShWbMsg.mu_Proc) == (mu_Other)) ; 
}
	      if (mu__boolexpr261) {
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
    r = what_rule - 5;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_None;
mu_Sta.mu_Dir.mu_Pending = mu_false;
mu_Sta.mu_Dir.mu_Dirty = mu_false;
mu_Sta.mu_Dir.mu_ShrVld = mu_true;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_Sta.mu_Dir.mu_ShrSet[mu_p];
};
};
mu_Sta.mu_ShWbMsg.mu_Proc.undefine();
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
    return tsprintf("ABS_NI_FAck");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_ShWbMsg.mu_Cmd) == (mu_SHWB_FAck);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6;
    while (what_rule < 7 )
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
    r = what_rule - 6;
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
    return tsprintf("ABS_NI_Wb");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_WbMsg.mu_Cmd) == (mu_WB_Wb);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 7;
    while (what_rule < 8 )
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
    r = what_rule - 7;
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
    return tsprintf("ABS_NI_InvAck1");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr262;
  if (!(mu_Sta.mu_Dir.mu_Pending)) mu__boolexpr262 = FALSE ;
  else {
bool mu__quant263; 
mu__quant263 = TRUE;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
if ( !(!(mu_Sta.mu_Dir.mu_InvSet[mu_p])) )
  { mu__quant263 = FALSE; break; }
};
};
  mu__boolexpr262 = (mu__quant263) ; 
}
    return mu__boolexpr262;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 8;
    while (what_rule < 9 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr264;
  if (!(mu_Sta.mu_Dir.mu_Pending)) mu__boolexpr264 = FALSE ;
  else {
bool mu__quant265; 
mu__quant265 = TRUE;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
if ( !(!(mu_Sta.mu_Dir.mu_InvSet[mu_p])) )
  { mu__quant265 = FALSE; break; }
};
};
  mu__boolexpr264 = (mu__quant265) ; 
}
	      if (mu__boolexpr264) {
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
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_Dir.mu_Pending = mu_false;
bool mu__boolexpr266;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
if ( mu__boolexpr266 )
{
mu_Sta.mu_Dir.mu_Local = mu_false;
}
mu_Sta.mu_Collecting = mu_false;
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
    return tsprintf("ABS_NI_Local_PutXAcksDone");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_PutX);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9;
    while (what_rule < 10 )
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
    r = what_rule - 9;
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
    return tsprintf("ABS_NI_Local_Put");
  }
  bool Condition(unsigned r)
  {
    return (mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Put);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10;
    while (what_rule < 11 )
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
    r = what_rule - 10;
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
    return tsprintf("ABS_NI_Remote_GetX_PutX_Home");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr267;
bool mu__boolexpr268;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_Other)) ; 
}
    return mu__boolexpr267;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11;
    while (what_rule < 12 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr269;
bool mu__boolexpr270;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_Other)) ; 
}
	      if (mu__boolexpr269) {
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
    r = what_rule - 11;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_PutX;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_Other;
mu_Sta.mu_FwdCmd = mu_UNI_None;
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
    return tsprintf("ABS_NI_Remote_GetX_PutX");
  }
  bool Condition(unsigned r)
  {
    return mu_true;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12;
    while (what_rule < 13 )
      {
	if ( ( TRUE  ) ) {
	      if (mu_true) {
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
    r = what_rule - 12;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_FAck;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_Other;
mu_Sta.mu_FwdCmd = mu_UNI_None;
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
    return tsprintf("ABS_NI_Remote_GetX_Nak_Home");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr271;
bool mu__boolexpr272;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_Other)) ; 
}
    return mu__boolexpr271;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 13;
    while (what_rule < 14 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr273;
bool mu__boolexpr274;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_Other)) ; 
}
	      if (mu__boolexpr273) {
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
    r = what_rule - 13;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_Other;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
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
    return tsprintf("ABS_NI_Remote_GetX_Nak");
  }
  bool Condition(unsigned r)
  {
    return mu_true;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 14;
    while (what_rule < 15 )
      {
	if ( ( TRUE  ) ) {
	      if (mu_true) {
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
    r = what_rule - 14;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
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
    return tsprintf("ABS_NI_Local_GetX_PutX3");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr275;
bool mu__boolexpr276;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr276 = FALSE ;
  else {
bool mu__boolexpr277;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr277 = TRUE ;
  else {
bool mu__boolexpr278;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr277 = (mu__boolexpr278) ; 
}
  mu__boolexpr276 = (mu__boolexpr277) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
    return mu__boolexpr275;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 15;
    while (what_rule < 16 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr279;
bool mu__boolexpr280;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr280 = FALSE ;
  else {
bool mu__boolexpr281;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr281 = TRUE ;
  else {
bool mu__boolexpr282;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr282 = FALSE ;
  else {
  mu__boolexpr282 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr281 = (mu__boolexpr282) ; 
}
  mu__boolexpr280 = (mu__boolexpr281) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
	      if (mu__boolexpr279) {
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
    r = what_rule - 15;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_Dir.mu_Pending = mu_true;
mu_Sta.mu_Dir.mu_Dirty = mu_true;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
bool mu__boolexpr283;
bool mu__boolexpr284;
  if (!(mu_Sta.mu_Dir.mu_ShrVld)) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = (mu_Sta.mu_Dir.mu_ShrSet[mu_p]) ; 
}
  if (mu__boolexpr284) mu__boolexpr283 = TRUE ;
  else {
bool mu__boolexpr285;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_p)) ; 
}
  mu__boolexpr283 = (mu__boolexpr285) ; 
}
if ( mu__boolexpr283 )
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_true;
}
else
{
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
}
bool mu__boolexpr286;
bool mu__boolexpr287;
  if (!(mu_Sta.mu_Dir.mu_ShrVld)) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (mu_Sta.mu_Dir.mu_ShrSet[mu_p]) ; 
}
  if (mu__boolexpr287) mu__boolexpr286 = TRUE ;
  else {
bool mu__boolexpr288;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr288 = FALSE ;
  else {
  mu__boolexpr288 = ((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_p)) ; 
}
  mu__boolexpr286 = (mu__boolexpr288) ; 
}
if ( mu__boolexpr286 )
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
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_Other;
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
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
mu_Sta.mu_PendReqSrc = mu_Other;
mu_Sta.mu_Collecting = mu_true;
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
    return tsprintf("ABS_NI_Local_GetX_PutX2");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr289;
bool mu__boolexpr290;
bool mu__boolexpr291;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr291 = FALSE ;
  else {
bool mu__boolexpr292;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr292 = TRUE ;
  else {
bool mu__boolexpr293;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr292 = (mu__boolexpr293) ; 
}
  mu__boolexpr291 = (mu__boolexpr292) ; 
}
  if (!(mu__boolexpr291)) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
bool mu__boolexpr294;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr294 = TRUE ;
  else {
bool mu__boolexpr295;
  if (!((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_Other))) mu__boolexpr295 = FALSE ;
  else {
bool mu__quant296; 
mu__quant296 = TRUE;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
if ( !(!(mu_Sta.mu_Dir.mu_ShrSet[mu_p])) )
  { mu__quant296 = FALSE; break; }
};
};
  mu__boolexpr295 = (mu__quant296) ; 
}
  mu__boolexpr294 = (mu__boolexpr295) ; 
}
  mu__boolexpr289 = (mu__boolexpr294) ; 
}
    return mu__boolexpr289;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 16;
    while (what_rule < 17 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr299 = FALSE ;
  else {
bool mu__boolexpr300;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr300 = TRUE ;
  else {
bool mu__boolexpr301;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr300 = (mu__boolexpr301) ; 
}
  mu__boolexpr299 = (mu__boolexpr300) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (!(mu_Sta.mu_Dir.mu_Dirty)) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
bool mu__boolexpr302;
  if (!(mu_Sta.mu_Dir.mu_HeadVld)) mu__boolexpr302 = TRUE ;
  else {
bool mu__boolexpr303;
  if (!((mu_Sta.mu_Dir.mu_HeadPtr) == (mu_Other))) mu__boolexpr303 = FALSE ;
  else {
bool mu__quant304; 
mu__quant304 = TRUE;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
if ( !(!(mu_Sta.mu_Dir.mu_ShrSet[mu_p])) )
  { mu__quant304 = FALSE; break; }
};
};
  mu__boolexpr303 = (mu__quant304) ; 
}
  mu__boolexpr302 = (mu__boolexpr303) ; 
}
  mu__boolexpr297 = (mu__boolexpr302) ; 
}
	      if (mu__boolexpr297) {
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
mu_Sta.mu_Dir.mu_Dirty = mu_true;
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_Other;
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
mu_Sta.mu_Dir.mu_ShrSet[mu_p] = mu_false;
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
};
};
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
    return tsprintf("ABS_NI_Local_GetX_PutX1");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr305;
bool mu__boolexpr306;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr306 = FALSE ;
  else {
bool mu__boolexpr307;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr307 = TRUE ;
  else {
bool mu__boolexpr308;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr308 = FALSE ;
  else {
  mu__boolexpr308 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr307 = (mu__boolexpr308) ; 
}
  mu__boolexpr306 = (mu__boolexpr307) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
    return mu__boolexpr305;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 17;
    while (what_rule < 18 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr310 = FALSE ;
  else {
bool mu__boolexpr311;
  if (!(mu_Sta.mu_Dir.mu_Dirty)) mu__boolexpr311 = TRUE ;
  else {
bool mu__boolexpr312;
  if (!(mu_Sta.mu_Dir.mu_Local)) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_E)) ; 
}
  mu__boolexpr311 = (mu__boolexpr312) ; 
}
  mu__boolexpr310 = (mu__boolexpr311) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
	      if (mu__boolexpr309) {
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
mu_Sta.mu_Dir.mu_Local = mu_false;
mu_Sta.mu_Dir.mu_Dirty = mu_true;
mu_Sta.mu_Dir.mu_HeadVld = mu_true;
mu_Sta.mu_Dir.mu_HeadPtr = mu_Other;
mu_Sta.mu_Dir.mu_ShrVld = mu_false;
{
for(int mu_p = 1; mu_p <= 2; mu_p++) {
mu_Sta.mu_Dir.mu_ShrSet[mu_p] = mu_false;
mu_Sta.mu_Dir.mu_InvSet[mu_p] = mu_false;
};
};
mu_Sta.mu_HomeProc.mu_CacheState = mu_CACHE_I;
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
    return tsprintf("ABS_NI_Local_GetX_GetX");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr313;
bool mu__boolexpr314;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
  mu__boolexpr313 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
    return mu__boolexpr313;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 18;
    while (what_rule < 19 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr315;
bool mu__boolexpr316;
  if (!(!(mu_Sta.mu_Dir.mu_Pending))) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (mu_Sta.mu_Dir.mu_Dirty) ; 
}
  if (!(mu__boolexpr316)) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = (!(mu_Sta.mu_Dir.mu_Local)) ; 
}
	      if (mu__boolexpr315) {
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
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_Dir.mu_Pending = mu_true;
mu_Sta.mu_FwdCmd = mu_UNI_GetX;
mu_Sta.mu_HomePendReqSrc = mu_false;
mu_Sta.mu_PendReqSrc = mu_Other;
mu_Sta.mu_Collecting = mu_false;
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
    return tsprintf("ABS_NI_Remote_Get_Put_Home");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr317;
bool mu__boolexpr318;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Get))) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr318)) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_Other)) ; 
}
    return mu__boolexpr317;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 19;
    while (what_rule < 20 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr319;
bool mu__boolexpr320;
  if (!((mu_Sta.mu_HomeUniMsg.mu_Cmd) == (mu_UNI_Get))) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (!(mu_Sta.mu_HomeUniMsg.mu_HomeProc)) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) == (mu_Other)) ; 
}
	      if (mu__boolexpr319) {
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
    r = what_rule - 19;
    }
  }

  void Code(unsigned r)
  {
mu_Sta.mu_HomeUniMsg.mu_Cmd = mu_UNI_Put;
mu_Sta.mu_HomeUniMsg.mu_HomeProc = mu_false;
mu_Sta.mu_HomeUniMsg.mu_Proc = mu_Other;
mu_Sta.mu_FwdCmd = mu_UNI_None;
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
    mu_src.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("ABS_NI_Remote_GetX_PutX, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr321;
bool mu__boolexpr322;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_Other)) ; 
}
    return mu__boolexpr321;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 20;
    static mu_1_NODE mu_src;
    mu_src.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 22 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr323;
bool mu__boolexpr324;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_Other)) ; 
}
	      if (mu__boolexpr323) {
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
    mu_src.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 2) + 1);
    r = r / 2;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_PutX;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_Other;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_FAck;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_src;
mu_Sta.mu_FwdCmd = mu_UNI_None;
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
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("ABS_NI_Remote_GetX_PutX, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    return (mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 22;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 24 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) == (mu_CACHE_E)) {
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
    r = what_rule - 22;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
mu_Sta.mu_Proc[mu_dst].mu_CacheState = mu_CACHE_I;
mu_Sta.mu_ShWbMsg.mu_Cmd = mu_SHWB_FAck;
mu_Sta.mu_ShWbMsg.mu_Proc = mu_Other;
mu_Sta.mu_FwdCmd = mu_UNI_None;
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
    static mu_1_NODE mu_src;
    mu_src.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("ABS_NI_Remote_GetX_Nak, src:%s", mu_src.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 2) + 1);
    r = r / 2;
bool mu__boolexpr325;
bool mu__boolexpr326;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_Other)) ; 
}
    return mu__boolexpr325;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 24;
    static mu_1_NODE mu_src;
    mu_src.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 26 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr327;
bool mu__boolexpr328;
  if (!((mu_Sta.mu_UniMsg[mu_src].mu_Cmd) == (mu_UNI_GetX))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (!(mu_Sta.mu_UniMsg[mu_src].mu_HomeProc)) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_Sta.mu_UniMsg[mu_src].mu_Proc) == (mu_Other)) ; 
}
	      if (mu__boolexpr327) {
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
    r = what_rule - 24;
    mu_src.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_src;
    mu_src.value((r % 2) + 1);
    r = r / 2;
mu_Sta.mu_UniMsg[mu_src].mu_Cmd = mu_UNI_Nak;
mu_Sta.mu_UniMsg[mu_src].mu_HomeProc = mu_false;
mu_Sta.mu_UniMsg[mu_src].mu_Proc = mu_Other;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
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
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    return tsprintf("ABS_NI_Remote_GetX_Nak, dst:%s", mu_dst.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    return (mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E);
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 26;
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    while (what_rule < 28 )
      {
	if ( ( TRUE  ) ) {
	      if ((mu_Sta.mu_Proc[mu_dst].mu_CacheState) != (mu_CACHE_E)) {
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
    mu_dst.value((r % 2) + 1);
    r = r / 2;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_NODE mu_dst;
    mu_dst.value((r % 2) + 1);
    r = r / 2;
mu_Sta.mu_NakcMsg.mu_Cmd = mu_NAKC_Nakc;
mu_Sta.mu_FwdCmd = mu_UNI_None;
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<1)
    { R0.NextRule(what_rule);
      if (what_rule<1) return; }
  if (what_rule>=1 && what_rule<3)
    { R1.NextRule(what_rule);
      if (what_rule<3) return; }
  if (what_rule>=3 && what_rule<5)
    { R2.NextRule(what_rule);
      if (what_rule<5) return; }
  if (what_rule>=5 && what_rule<6)
    { R3.NextRule(what_rule);
      if (what_rule<6) return; }
  if (what_rule>=6 && what_rule<7)
    { R4.NextRule(what_rule);
      if (what_rule<7) return; }
  if (what_rule>=7 && what_rule<8)
    { R5.NextRule(what_rule);
      if (what_rule<8) return; }
  if (what_rule>=8 && what_rule<9)
    { R6.NextRule(what_rule);
      if (what_rule<9) return; }
  if (what_rule>=9 && what_rule<10)
    { R7.NextRule(what_rule);
      if (what_rule<10) return; }
  if (what_rule>=10 && what_rule<11)
    { R8.NextRule(what_rule);
      if (what_rule<11) return; }
  if (what_rule>=11 && what_rule<12)
    { R9.NextRule(what_rule);
      if (what_rule<12) return; }
  if (what_rule>=12 && what_rule<13)
    { R10.NextRule(what_rule);
      if (what_rule<13) return; }
  if (what_rule>=13 && what_rule<14)
    { R11.NextRule(what_rule);
      if (what_rule<14) return; }
  if (what_rule>=14 && what_rule<15)
    { R12.NextRule(what_rule);
      if (what_rule<15) return; }
  if (what_rule>=15 && what_rule<16)
    { R13.NextRule(what_rule);
      if (what_rule<16) return; }
  if (what_rule>=16 && what_rule<17)
    { R14.NextRule(what_rule);
      if (what_rule<17) return; }
  if (what_rule>=17 && what_rule<18)
    { R15.NextRule(what_rule);
      if (what_rule<18) return; }
  if (what_rule>=18 && what_rule<19)
    { R16.NextRule(what_rule);
      if (what_rule<19) return; }
  if (what_rule>=19 && what_rule<20)
    { R17.NextRule(what_rule);
      if (what_rule<20) return; }
  if (what_rule>=20 && what_rule<22)
    { R18.NextRule(what_rule);
      if (what_rule<22) return; }
  if (what_rule>=22 && what_rule<24)
    { R19.NextRule(what_rule);
      if (what_rule<24) return; }
  if (what_rule>=24 && what_rule<26)
    { R20.NextRule(what_rule);
      if (what_rule<26) return; }
  if (what_rule>=26 && what_rule<28)
    { R21.NextRule(what_rule);
      if (what_rule<28) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=0) return R0.Condition(r-0);
  if (r>=1 && r<=2) return R1.Condition(r-1);
  if (r>=3 && r<=4) return R2.Condition(r-3);
  if (r>=5 && r<=5) return R3.Condition(r-5);
  if (r>=6 && r<=6) return R4.Condition(r-6);
  if (r>=7 && r<=7) return R5.Condition(r-7);
  if (r>=8 && r<=8) return R6.Condition(r-8);
  if (r>=9 && r<=9) return R7.Condition(r-9);
  if (r>=10 && r<=10) return R8.Condition(r-10);
  if (r>=11 && r<=11) return R9.Condition(r-11);
  if (r>=12 && r<=12) return R10.Condition(r-12);
  if (r>=13 && r<=13) return R11.Condition(r-13);
  if (r>=14 && r<=14) return R12.Condition(r-14);
  if (r>=15 && r<=15) return R13.Condition(r-15);
  if (r>=16 && r<=16) return R14.Condition(r-16);
  if (r>=17 && r<=17) return R15.Condition(r-17);
  if (r>=18 && r<=18) return R16.Condition(r-18);
  if (r>=19 && r<=19) return R17.Condition(r-19);
  if (r>=20 && r<=21) return R18.Condition(r-20);
  if (r>=22 && r<=23) return R19.Condition(r-22);
  if (r>=24 && r<=25) return R20.Condition(r-24);
  if (r>=26 && r<=27) return R21.Condition(r-26);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=0) { R0.Code(r-0); return; } 
  if (r>=1 && r<=2) { R1.Code(r-1); return; } 
  if (r>=3 && r<=4) { R2.Code(r-3); return; } 
  if (r>=5 && r<=5) { R3.Code(r-5); return; } 
  if (r>=6 && r<=6) { R4.Code(r-6); return; } 
  if (r>=7 && r<=7) { R5.Code(r-7); return; } 
  if (r>=8 && r<=8) { R6.Code(r-8); return; } 
  if (r>=9 && r<=9) { R7.Code(r-9); return; } 
  if (r>=10 && r<=10) { R8.Code(r-10); return; } 
  if (r>=11 && r<=11) { R9.Code(r-11); return; } 
  if (r>=12 && r<=12) { R10.Code(r-12); return; } 
  if (r>=13 && r<=13) { R11.Code(r-13); return; } 
  if (r>=14 && r<=14) { R12.Code(r-14); return; } 
  if (r>=15 && r<=15) { R13.Code(r-15); return; } 
  if (r>=16 && r<=16) { R14.Code(r-16); return; } 
  if (r>=17 && r<=17) { R15.Code(r-17); return; } 
  if (r>=18 && r<=18) { R16.Code(r-18); return; } 
  if (r>=19 && r<=19) { R17.Code(r-19); return; } 
  if (r>=20 && r<=21) { R18.Code(r-20); return; } 
  if (r>=22 && r<=23) { R19.Code(r-22); return; } 
  if (r>=24 && r<=25) { R20.Code(r-24); return; } 
  if (r>=26 && r<=27) { R21.Code(r-26); return; } 
}
int Priority(unsigned short r)
{
  if (r<=0) { return R0.Priority(); } 
  if (r>=1 && r<=2) { return R1.Priority(); } 
  if (r>=3 && r<=4) { return R2.Priority(); } 
  if (r>=5 && r<=5) { return R3.Priority(); } 
  if (r>=6 && r<=6) { return R4.Priority(); } 
  if (r>=7 && r<=7) { return R5.Priority(); } 
  if (r>=8 && r<=8) { return R6.Priority(); } 
  if (r>=9 && r<=9) { return R7.Priority(); } 
  if (r>=10 && r<=10) { return R8.Priority(); } 
  if (r>=11 && r<=11) { return R9.Priority(); } 
  if (r>=12 && r<=12) { return R10.Priority(); } 
  if (r>=13 && r<=13) { return R11.Priority(); } 
  if (r>=14 && r<=14) { return R12.Priority(); } 
  if (r>=15 && r<=15) { return R13.Priority(); } 
  if (r>=16 && r<=16) { return R14.Priority(); } 
  if (r>=17 && r<=17) { return R15.Priority(); } 
  if (r>=18 && r<=18) { return R16.Priority(); } 
  if (r>=19 && r<=19) { return R17.Priority(); } 
  if (r>=20 && r<=21) { return R18.Priority(); } 
  if (r>=22 && r<=23) { return R19.Priority(); } 
  if (r>=24 && r<=25) { return R20.Priority(); } 
  if (r>=26 && r<=27) { return R21.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=0) return R0.Name(r-0);
  if (r>=1 && r<=2) return R1.Name(r-1);
  if (r>=3 && r<=4) return R2.Name(r-3);
  if (r>=5 && r<=5) return R3.Name(r-5);
  if (r>=6 && r<=6) return R4.Name(r-6);
  if (r>=7 && r<=7) return R5.Name(r-7);
  if (r>=8 && r<=8) return R6.Name(r-8);
  if (r>=9 && r<=9) return R7.Name(r-9);
  if (r>=10 && r<=10) return R8.Name(r-10);
  if (r>=11 && r<=11) return R9.Name(r-11);
  if (r>=12 && r<=12) return R10.Name(r-12);
  if (r>=13 && r<=13) return R11.Name(r-13);
  if (r>=14 && r<=14) return R12.Name(r-14);
  if (r>=15 && r<=15) return R13.Name(r-15);
  if (r>=16 && r<=16) return R14.Name(r-16);
  if (r>=17 && r<=17) return R15.Name(r-17);
  if (r>=18 && r<=18) return R16.Name(r-18);
  if (r>=19 && r<=19) return R17.Name(r-19);
  if (r>=20 && r<=21) return R18.Name(r-20);
  if (r>=22 && r<=23) return R19.Name(r-22);
  if (r>=24 && r<=25) return R20.Name(r-24);
  if (r>=26 && r<=27) return R21.Name(r-26);
  return NULL;
}
};
const unsigned numrules = 28;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 28


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
for(int mu_p = 1; mu_p <= 2; mu_p++) {
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
int mu__invariant_329() // Invariant "auxinv_110"
{
bool mu__quant330; 
mu__quant330 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant331; 
mu__quant331 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr332;
  if (!((mu_i) != (mu_j))) mu__boolexpr332 = TRUE ;
  else {
bool mu__boolexpr333;
bool mu__boolexpr334;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = TRUE ;
  else {
  mu__boolexpr333 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr332 = (mu__boolexpr333) ; 
}
if ( !(mu__boolexpr332) )
  { mu__quant331 = FALSE; break; }
};
};
if ( !(mu__quant331) )
  { mu__quant330 = FALSE; break; }
};
};
return mu__quant330;
};

bool mu__condition_335() // Condition for Rule "auxinv_110"
{
  return mu__invariant_329( );
}

/**** end rule declaration ****/

int mu__invariant_336() // Invariant "auxinv_109"
{
bool mu__quant337; 
mu__quant337 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant338; 
mu__quant338 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr339;
  if (!((mu_i) != (mu_j))) mu__boolexpr339 = TRUE ;
  else {
bool mu__boolexpr340;
bool mu__boolexpr341;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = TRUE ;
  else {
  mu__boolexpr340 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) != (mu_CACHE_S)) ; 
}
  mu__boolexpr339 = (mu__boolexpr340) ; 
}
if ( !(mu__boolexpr339) )
  { mu__quant338 = FALSE; break; }
};
};
if ( !(mu__quant338) )
  { mu__quant337 = FALSE; break; }
};
};
return mu__quant337;
};

bool mu__condition_342() // Condition for Rule "auxinv_109"
{
  return mu__invariant_336( );
}

/**** end rule declaration ****/

int mu__invariant_343() // Invariant "auxinv_108"
{
bool mu__quant344; 
mu__quant344 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant345; 
mu__quant345 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr346;
  if (!((mu_i) != (mu_j))) mu__boolexpr346 = TRUE ;
  else {
bool mu__boolexpr347;
bool mu__boolexpr348;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = TRUE ;
  else {
  mu__boolexpr347 = ((mu_Sta.mu_Proc[mu_j].mu_CacheState) != (mu_CACHE_S)) ; 
}
  mu__boolexpr346 = (mu__boolexpr347) ; 
}
if ( !(mu__boolexpr346) )
  { mu__quant345 = FALSE; break; }
};
};
if ( !(mu__quant345) )
  { mu__quant344 = FALSE; break; }
};
};
return mu__quant344;
};

bool mu__condition_349() // Condition for Rule "auxinv_108"
{
  return mu__invariant_343( );
}

/**** end rule declaration ****/

int mu__invariant_350() // Invariant "auxinv_107"
{
bool mu__quant351; 
mu__quant351 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant352; 
mu__quant352 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr353;
  if (!((mu_i) != (mu_j))) mu__boolexpr353 = TRUE ;
  else {
bool mu__boolexpr354;
bool mu__boolexpr355;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = TRUE ;
  else {
  mu__boolexpr354 = ((mu_Sta.mu_Proc[mu_j].mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr353 = (mu__boolexpr354) ; 
}
if ( !(mu__boolexpr353) )
  { mu__quant352 = FALSE; break; }
};
};
if ( !(mu__quant352) )
  { mu__quant351 = FALSE; break; }
};
};
return mu__quant351;
};

bool mu__condition_356() // Condition for Rule "auxinv_107"
{
  return mu__invariant_350( );
}

/**** end rule declaration ****/

int mu__invariant_357() // Invariant "auxinv_106"
{
bool mu__quant358; 
mu__quant358 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant359; 
mu__quant359 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr360;
  if (!((mu_i) != (mu_j))) mu__boolexpr360 = TRUE ;
  else {
bool mu__boolexpr361;
bool mu__boolexpr362;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = TRUE ;
  else {
  mu__boolexpr361 = ((mu_Sta.mu_Proc[mu_i].mu_ProcCmd) != (mu_NODE_GetX)) ; 
}
  mu__boolexpr360 = (mu__boolexpr361) ; 
}
if ( !(mu__boolexpr360) )
  { mu__quant359 = FALSE; break; }
};
};
if ( !(mu__quant359) )
  { mu__quant358 = FALSE; break; }
};
};
return mu__quant358;
};

bool mu__condition_363() // Condition for Rule "auxinv_106"
{
  return mu__invariant_357( );
}

/**** end rule declaration ****/

int mu__invariant_364() // Invariant "auxinv_105"
{
bool mu__quant365; 
mu__quant365 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant366; 
mu__quant366 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr367;
  if (!((mu_i) != (mu_j))) mu__boolexpr367 = TRUE ;
  else {
bool mu__boolexpr368;
bool mu__boolexpr369;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = TRUE ;
  else {
  mu__boolexpr368 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) == (mu_CACHE_I)) ; 
}
  mu__boolexpr367 = (mu__boolexpr368) ; 
}
if ( !(mu__boolexpr367) )
  { mu__quant366 = FALSE; break; }
};
};
if ( !(mu__quant366) )
  { mu__quant365 = FALSE; break; }
};
};
return mu__quant365;
};

bool mu__condition_370() // Condition for Rule "auxinv_105"
{
  return mu__invariant_364( );
}

/**** end rule declaration ****/

int mu__invariant_371() // Invariant "auxinv_104"
{
bool mu__quant372; 
mu__quant372 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant373; 
mu__quant373 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr374;
  if (!((mu_i) != (mu_j))) mu__boolexpr374 = TRUE ;
  else {
bool mu__boolexpr375;
bool mu__boolexpr376;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = TRUE ;
  else {
  mu__boolexpr375 = ((mu_Sta.mu_Proc[mu_i].mu_ProcCmd) != (mu_NODE_None)) ; 
}
  mu__boolexpr374 = (mu__boolexpr375) ; 
}
if ( !(mu__boolexpr374) )
  { mu__quant373 = FALSE; break; }
};
};
if ( !(mu__quant373) )
  { mu__quant372 = FALSE; break; }
};
};
return mu__quant372;
};

bool mu__condition_377() // Condition for Rule "auxinv_104"
{
  return mu__invariant_371( );
}

/**** end rule declaration ****/

int mu__invariant_378() // Invariant "auxinv_103"
{
bool mu__quant379; 
mu__quant379 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant380; 
mu__quant380 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr381;
  if (!((mu_i) != (mu_j))) mu__boolexpr381 = TRUE ;
  else {
bool mu__boolexpr382;
bool mu__boolexpr383;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = TRUE ;
  else {
  mu__boolexpr382 = ((mu_Sta.mu_Proc[mu_j].mu_CacheState) == (mu_CACHE_I)) ; 
}
  mu__boolexpr381 = (mu__boolexpr382) ; 
}
if ( !(mu__boolexpr381) )
  { mu__quant380 = FALSE; break; }
};
};
if ( !(mu__quant380) )
  { mu__quant379 = FALSE; break; }
};
};
return mu__quant379;
};

bool mu__condition_384() // Condition for Rule "auxinv_103"
{
  return mu__invariant_378( );
}

/**** end rule declaration ****/

int mu__invariant_385() // Invariant "auxinv_102"
{
bool mu__quant386; 
mu__quant386 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant387; 
mu__quant387 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr388;
  if (!((mu_i) != (mu_j))) mu__boolexpr388 = TRUE ;
  else {
bool mu__boolexpr389;
bool mu__boolexpr390;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = TRUE ;
  else {
  mu__boolexpr389 = ((mu_Sta.mu_InvMsg[mu_j].mu_Cmd) != (mu_INV_InvAck)) ; 
}
  mu__boolexpr388 = (mu__boolexpr389) ; 
}
if ( !(mu__boolexpr388) )
  { mu__quant387 = FALSE; break; }
};
};
if ( !(mu__quant387) )
  { mu__quant386 = FALSE; break; }
};
};
return mu__quant386;
};

bool mu__condition_391() // Condition for Rule "auxinv_102"
{
  return mu__invariant_385( );
}

/**** end rule declaration ****/

int mu__invariant_392() // Invariant "auxinv_101"
{
bool mu__quant393; 
mu__quant393 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant394; 
mu__quant394 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr395;
  if (!((mu_i) != (mu_j))) mu__boolexpr395 = TRUE ;
  else {
bool mu__boolexpr396;
bool mu__boolexpr397;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = TRUE ;
  else {
  mu__boolexpr396 = ((mu_Sta.mu_InvMsg[mu_i].mu_Cmd) != (mu_INV_InvAck)) ; 
}
  mu__boolexpr395 = (mu__boolexpr396) ; 
}
if ( !(mu__boolexpr395) )
  { mu__quant394 = FALSE; break; }
};
};
if ( !(mu__quant394) )
  { mu__quant393 = FALSE; break; }
};
};
return mu__quant393;
};

bool mu__condition_398() // Condition for Rule "auxinv_101"
{
  return mu__invariant_392( );
}

/**** end rule declaration ****/

int mu__invariant_399() // Invariant "auxinv_100"
{
bool mu__quant400; 
mu__quant400 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant401; 
mu__quant401 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr402;
  if (!((mu_i) != (mu_j))) mu__boolexpr402 = TRUE ;
  else {
bool mu__boolexpr403;
bool mu__boolexpr404;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = TRUE ;
  else {
  mu__boolexpr403 = ((mu_Sta.mu_RpMsg[mu_i].mu_Cmd) != (mu_RP_Replace)) ; 
}
  mu__boolexpr402 = (mu__boolexpr403) ; 
}
if ( !(mu__boolexpr402) )
  { mu__quant401 = FALSE; break; }
};
};
if ( !(mu__quant401) )
  { mu__quant400 = FALSE; break; }
};
};
return mu__quant400;
};

bool mu__condition_405() // Condition for Rule "auxinv_100"
{
  return mu__invariant_399( );
}

/**** end rule declaration ****/

int mu__invariant_406() // Invariant "auxinv_99"
{
bool mu__quant407; 
mu__quant407 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant408; 
mu__quant408 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr409;
  if (!((mu_i) != (mu_j))) mu__boolexpr409 = TRUE ;
  else {
bool mu__boolexpr410;
bool mu__boolexpr411;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = TRUE ;
  else {
  mu__boolexpr410 = ((mu_Sta.mu_Proc[mu_i].mu_ProcCmd) == (mu_NODE_Get)) ; 
}
  mu__boolexpr409 = (mu__boolexpr410) ; 
}
if ( !(mu__boolexpr409) )
  { mu__quant408 = FALSE; break; }
};
};
if ( !(mu__quant408) )
  { mu__quant407 = FALSE; break; }
};
};
return mu__quant407;
};

bool mu__condition_412() // Condition for Rule "auxinv_99"
{
  return mu__invariant_406( );
}

/**** end rule declaration ****/

int mu__invariant_413() // Invariant "auxinv_98"
{
bool mu__quant414; 
mu__quant414 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant415; 
mu__quant415 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr416;
  if (!((mu_i) != (mu_j))) mu__boolexpr416 = TRUE ;
  else {
bool mu__boolexpr417;
bool mu__boolexpr418;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = TRUE ;
  else {
  mu__boolexpr417 = ((mu_Sta.mu_UniMsg[mu_i].mu_HomeProc) == (mu_false)) ; 
}
  mu__boolexpr416 = (mu__boolexpr417) ; 
}
if ( !(mu__boolexpr416) )
  { mu__quant415 = FALSE; break; }
};
};
if ( !(mu__quant415) )
  { mu__quant414 = FALSE; break; }
};
};
return mu__quant414;
};

bool mu__condition_419() // Condition for Rule "auxinv_98"
{
  return mu__invariant_413( );
}

/**** end rule declaration ****/

int mu__invariant_420() // Invariant "auxinv_97"
{
bool mu__quant421; 
mu__quant421 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant422; 
mu__quant422 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr423;
  if (!((mu_i) != (mu_j))) mu__boolexpr423 = TRUE ;
  else {
bool mu__boolexpr424;
bool mu__boolexpr425;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = TRUE ;
  else {
  mu__boolexpr424 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_PutX)) ; 
}
  mu__boolexpr423 = (mu__boolexpr424) ; 
}
if ( !(mu__boolexpr423) )
  { mu__quant422 = FALSE; break; }
};
};
if ( !(mu__quant422) )
  { mu__quant421 = FALSE; break; }
};
};
return mu__quant421;
};

bool mu__condition_426() // Condition for Rule "auxinv_97"
{
  return mu__invariant_420( );
}

/**** end rule declaration ****/

int mu__invariant_427() // Invariant "auxinv_96"
{
bool mu__quant428; 
mu__quant428 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant429; 
mu__quant429 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr430;
  if (!((mu_i) != (mu_j))) mu__boolexpr430 = TRUE ;
  else {
bool mu__boolexpr431;
bool mu__boolexpr432;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = TRUE ;
  else {
  mu__boolexpr431 = ((mu_Sta.mu_Proc[mu_j].mu_InvMarked) == (mu_false)) ; 
}
  mu__boolexpr430 = (mu__boolexpr431) ; 
}
if ( !(mu__boolexpr430) )
  { mu__quant429 = FALSE; break; }
};
};
if ( !(mu__quant429) )
  { mu__quant428 = FALSE; break; }
};
};
return mu__quant428;
};

bool mu__condition_433() // Condition for Rule "auxinv_96"
{
  return mu__invariant_427( );
}

/**** end rule declaration ****/

int mu__invariant_434() // Invariant "auxinv_95"
{
bool mu__quant435; 
mu__quant435 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant436; 
mu__quant436 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr437;
  if (!((mu_i) != (mu_j))) mu__boolexpr437 = TRUE ;
  else {
bool mu__boolexpr438;
bool mu__boolexpr439;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = TRUE ;
  else {
  mu__boolexpr438 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_GetX)) ; 
}
  mu__boolexpr437 = (mu__boolexpr438) ; 
}
if ( !(mu__boolexpr437) )
  { mu__quant436 = FALSE; break; }
};
};
if ( !(mu__quant436) )
  { mu__quant435 = FALSE; break; }
};
};
return mu__quant435;
};

bool mu__condition_440() // Condition for Rule "auxinv_95"
{
  return mu__invariant_434( );
}

/**** end rule declaration ****/

int mu__invariant_441() // Invariant "auxinv_94"
{
bool mu__quant442; 
mu__quant442 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant443; 
mu__quant443 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr444;
  if (!((mu_i) != (mu_j))) mu__boolexpr444 = TRUE ;
  else {
bool mu__boolexpr445;
bool mu__boolexpr446;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = TRUE ;
  else {
  mu__boolexpr445 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr444 = (mu__boolexpr445) ; 
}
if ( !(mu__boolexpr444) )
  { mu__quant443 = FALSE; break; }
};
};
if ( !(mu__quant443) )
  { mu__quant442 = FALSE; break; }
};
};
return mu__quant442;
};

bool mu__condition_447() // Condition for Rule "auxinv_94"
{
  return mu__invariant_441( );
}

/**** end rule declaration ****/

int mu__invariant_448() // Invariant "auxinv_93"
{
bool mu__quant449; 
mu__quant449 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant450; 
mu__quant450 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr451;
  if (!((mu_i) != (mu_j))) mu__boolexpr451 = TRUE ;
  else {
bool mu__boolexpr452;
bool mu__boolexpr453;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = TRUE ;
  else {
  mu__boolexpr452 = ((mu_Sta.mu_HomeProc.mu_CacheState) != (mu_CACHE_S)) ; 
}
  mu__boolexpr451 = (mu__boolexpr452) ; 
}
if ( !(mu__boolexpr451) )
  { mu__quant450 = FALSE; break; }
};
};
if ( !(mu__quant450) )
  { mu__quant449 = FALSE; break; }
};
};
return mu__quant449;
};

bool mu__condition_454() // Condition for Rule "auxinv_93"
{
  return mu__invariant_448( );
}

/**** end rule declaration ****/

int mu__invariant_455() // Invariant "auxinv_92"
{
bool mu__quant456; 
mu__quant456 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant457; 
mu__quant457 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr458;
  if (!((mu_i) != (mu_j))) mu__boolexpr458 = TRUE ;
  else {
bool mu__boolexpr459;
bool mu__boolexpr460;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr460)) mu__boolexpr459 = TRUE ;
  else {
  mu__boolexpr459 = ((mu_Sta.mu_UniMsg[mu_j].mu_Cmd) != (mu_UNI_PutX)) ; 
}
  mu__boolexpr458 = (mu__boolexpr459) ; 
}
if ( !(mu__boolexpr458) )
  { mu__quant457 = FALSE; break; }
};
};
if ( !(mu__quant457) )
  { mu__quant456 = FALSE; break; }
};
};
return mu__quant456;
};

bool mu__condition_461() // Condition for Rule "auxinv_92"
{
  return mu__invariant_455( );
}

/**** end rule declaration ****/

int mu__invariant_462() // Invariant "auxinv_91"
{
bool mu__quant463; 
mu__quant463 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant464; 
mu__quant464 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr465;
  if (!((mu_i) != (mu_j))) mu__boolexpr465 = TRUE ;
  else {
bool mu__boolexpr466;
bool mu__boolexpr467;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = TRUE ;
  else {
  mu__boolexpr466 = ((mu_Sta.mu_HomeProc.mu_CacheState) == (mu_CACHE_I)) ; 
}
  mu__boolexpr465 = (mu__boolexpr466) ; 
}
if ( !(mu__boolexpr465) )
  { mu__quant464 = FALSE; break; }
};
};
if ( !(mu__quant464) )
  { mu__quant463 = FALSE; break; }
};
};
return mu__quant463;
};

bool mu__condition_468() // Condition for Rule "auxinv_91"
{
  return mu__invariant_462( );
}

/**** end rule declaration ****/

int mu__invariant_469() // Invariant "auxinv_90"
{
bool mu__quant470; 
mu__quant470 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant471; 
mu__quant471 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr472;
  if (!((mu_i) != (mu_j))) mu__boolexpr472 = TRUE ;
  else {
bool mu__boolexpr473;
bool mu__boolexpr474;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = TRUE ;
  else {
  mu__boolexpr473 = ((mu_Sta.mu_UniMsg[mu_j].mu_Proc) != (mu_i)) ; 
}
  mu__boolexpr472 = (mu__boolexpr473) ; 
}
if ( !(mu__boolexpr472) )
  { mu__quant471 = FALSE; break; }
};
};
if ( !(mu__quant471) )
  { mu__quant470 = FALSE; break; }
};
};
return mu__quant470;
};

bool mu__condition_475() // Condition for Rule "auxinv_90"
{
  return mu__invariant_469( );
}

/**** end rule declaration ****/

int mu__invariant_476() // Invariant "auxinv_89"
{
bool mu__quant477; 
mu__quant477 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant478; 
mu__quant478 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr479;
  if (!((mu_i) != (mu_j))) mu__boolexpr479 = TRUE ;
  else {
bool mu__boolexpr480;
bool mu__boolexpr481;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = TRUE ;
  else {
  mu__boolexpr480 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) != (mu_i)) ; 
}
  mu__boolexpr479 = (mu__boolexpr480) ; 
}
if ( !(mu__boolexpr479) )
  { mu__quant478 = FALSE; break; }
};
};
if ( !(mu__quant478) )
  { mu__quant477 = FALSE; break; }
};
};
return mu__quant477;
};

bool mu__condition_482() // Condition for Rule "auxinv_89"
{
  return mu__invariant_476( );
}

/**** end rule declaration ****/

int mu__invariant_483() // Invariant "auxinv_88"
{
bool mu__quant484; 
mu__quant484 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant485; 
mu__quant485 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr486;
  if (!((mu_i) != (mu_j))) mu__boolexpr486 = TRUE ;
  else {
bool mu__boolexpr487;
bool mu__boolexpr488;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = TRUE ;
  else {
  mu__boolexpr487 = ((mu_Sta.mu_UniMsg[mu_j].mu_Cmd) != (mu_UNI_Put)) ; 
}
  mu__boolexpr486 = (mu__boolexpr487) ; 
}
if ( !(mu__boolexpr486) )
  { mu__quant485 = FALSE; break; }
};
};
if ( !(mu__quant485) )
  { mu__quant484 = FALSE; break; }
};
};
return mu__quant484;
};

bool mu__condition_489() // Condition for Rule "auxinv_88"
{
  return mu__invariant_483( );
}

/**** end rule declaration ****/

int mu__invariant_490() // Invariant "auxinv_87"
{
bool mu__quant491; 
mu__quant491 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant492; 
mu__quant492 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr493;
  if (!((mu_i) != (mu_j))) mu__boolexpr493 = TRUE ;
  else {
bool mu__boolexpr494;
bool mu__boolexpr495;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = TRUE ;
  else {
  mu__boolexpr494 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_Put)) ; 
}
  mu__boolexpr493 = (mu__boolexpr494) ; 
}
if ( !(mu__boolexpr493) )
  { mu__quant492 = FALSE; break; }
};
};
if ( !(mu__quant492) )
  { mu__quant491 = FALSE; break; }
};
};
return mu__quant491;
};

bool mu__condition_496() // Condition for Rule "auxinv_87"
{
  return mu__invariant_490( );
}

/**** end rule declaration ****/

int mu__invariant_497() // Invariant "auxinv_86"
{
bool mu__quant498; 
mu__quant498 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant499; 
mu__quant499 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr500;
  if (!((mu_i) != (mu_j))) mu__boolexpr500 = TRUE ;
  else {
bool mu__boolexpr501;
bool mu__boolexpr502;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr502)) mu__boolexpr501 = TRUE ;
  else {
  mu__boolexpr501 = ((mu_Sta.mu_InvMsg[mu_j].mu_Cmd) != (mu_INV_Inv)) ; 
}
  mu__boolexpr500 = (mu__boolexpr501) ; 
}
if ( !(mu__boolexpr500) )
  { mu__quant499 = FALSE; break; }
};
};
if ( !(mu__quant499) )
  { mu__quant498 = FALSE; break; }
};
};
return mu__quant498;
};

bool mu__condition_503() // Condition for Rule "auxinv_86"
{
  return mu__invariant_497( );
}

/**** end rule declaration ****/

int mu__invariant_504() // Invariant "auxinv_85"
{
bool mu__quant505; 
mu__quant505 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant506; 
mu__quant506 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr507;
  if (!((mu_i) != (mu_j))) mu__boolexpr507 = TRUE ;
  else {
bool mu__boolexpr508;
bool mu__boolexpr509;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = TRUE ;
  else {
  mu__boolexpr508 = ((mu_Sta.mu_InvMsg[mu_i].mu_Cmd) != (mu_INV_Inv)) ; 
}
  mu__boolexpr507 = (mu__boolexpr508) ; 
}
if ( !(mu__boolexpr507) )
  { mu__quant506 = FALSE; break; }
};
};
if ( !(mu__quant506) )
  { mu__quant505 = FALSE; break; }
};
};
return mu__quant505;
};

bool mu__condition_510() // Condition for Rule "auxinv_85"
{
  return mu__invariant_504( );
}

/**** end rule declaration ****/

int mu__invariant_511() // Invariant "auxinv_84"
{
bool mu__quant512; 
mu__quant512 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant513; 
mu__quant513 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr514;
  if (!((mu_i) != (mu_j))) mu__boolexpr514 = TRUE ;
  else {
bool mu__boolexpr515;
bool mu__boolexpr516;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr516)) mu__boolexpr515 = TRUE ;
  else {
  mu__boolexpr515 = ((mu_Sta.mu_UniMsg[mu_j].mu_Proc) != (mu_j)) ; 
}
  mu__boolexpr514 = (mu__boolexpr515) ; 
}
if ( !(mu__boolexpr514) )
  { mu__quant513 = FALSE; break; }
};
};
if ( !(mu__quant513) )
  { mu__quant512 = FALSE; break; }
};
};
return mu__quant512;
};

bool mu__condition_517() // Condition for Rule "auxinv_84"
{
  return mu__invariant_511( );
}

/**** end rule declaration ****/

int mu__invariant_518() // Invariant "auxinv_83"
{
bool mu__quant519; 
mu__quant519 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant520; 
mu__quant520 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr521;
  if (!((mu_i) != (mu_j))) mu__boolexpr521 = TRUE ;
  else {
bool mu__boolexpr522;
bool mu__boolexpr523;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr523)) mu__boolexpr522 = TRUE ;
  else {
  mu__boolexpr522 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_Nak)) ; 
}
  mu__boolexpr521 = (mu__boolexpr522) ; 
}
if ( !(mu__boolexpr521) )
  { mu__quant520 = FALSE; break; }
};
};
if ( !(mu__quant520) )
  { mu__quant519 = FALSE; break; }
};
};
return mu__quant519;
};

bool mu__condition_524() // Condition for Rule "auxinv_83"
{
  return mu__invariant_518( );
}

/**** end rule declaration ****/

int mu__invariant_525() // Invariant "auxinv_82"
{
bool mu__quant526; 
mu__quant526 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant527; 
mu__quant527 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr528;
  if (!((mu_i) != (mu_j))) mu__boolexpr528 = TRUE ;
  else {
bool mu__boolexpr529;
bool mu__boolexpr530;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr530)) mu__boolexpr529 = TRUE ;
  else {
  mu__boolexpr529 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  mu__boolexpr528 = (mu__boolexpr529) ; 
}
if ( !(mu__boolexpr528) )
  { mu__quant527 = FALSE; break; }
};
};
if ( !(mu__quant527) )
  { mu__quant526 = FALSE; break; }
};
};
return mu__quant526;
};

bool mu__condition_531() // Condition for Rule "auxinv_82"
{
  return mu__invariant_525( );
}

/**** end rule declaration ****/

int mu__invariant_532() // Invariant "auxinv_81"
{
bool mu__quant533; 
mu__quant533 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant534; 
mu__quant534 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr535;
  if (!((mu_i) != (mu_j))) mu__boolexpr535 = TRUE ;
  else {
bool mu__boolexpr536;
bool mu__boolexpr537;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = TRUE ;
  else {
  mu__boolexpr536 = ((mu_Sta.mu_Dir.mu_ShrSet[mu_j]) == (mu_false)) ; 
}
  mu__boolexpr535 = (mu__boolexpr536) ; 
}
if ( !(mu__boolexpr535) )
  { mu__quant534 = FALSE; break; }
};
};
if ( !(mu__quant534) )
  { mu__quant533 = FALSE; break; }
};
};
return mu__quant533;
};

bool mu__condition_538() // Condition for Rule "auxinv_81"
{
  return mu__invariant_532( );
}

/**** end rule declaration ****/

int mu__invariant_539() // Invariant "auxinv_80"
{
bool mu__quant540; 
mu__quant540 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant541; 
mu__quant541 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr542;
  if (!((mu_i) != (mu_j))) mu__boolexpr542 = TRUE ;
  else {
bool mu__boolexpr543;
bool mu__boolexpr544;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr544)) mu__boolexpr543 = TRUE ;
  else {
  mu__boolexpr543 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  mu__boolexpr542 = (mu__boolexpr543) ; 
}
if ( !(mu__boolexpr542) )
  { mu__quant541 = FALSE; break; }
};
};
if ( !(mu__quant541) )
  { mu__quant540 = FALSE; break; }
};
};
return mu__quant540;
};

bool mu__condition_545() // Condition for Rule "auxinv_80"
{
  return mu__invariant_539( );
}

/**** end rule declaration ****/

int mu__invariant_546() // Invariant "auxinv_79"
{
bool mu__quant547; 
mu__quant547 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant548; 
mu__quant548 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr549;
  if (!((mu_i) != (mu_j))) mu__boolexpr549 = TRUE ;
  else {
bool mu__boolexpr550;
bool mu__boolexpr551;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr551)) mu__boolexpr550 = TRUE ;
  else {
  mu__boolexpr550 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  mu__boolexpr549 = (mu__boolexpr550) ; 
}
if ( !(mu__boolexpr549) )
  { mu__quant548 = FALSE; break; }
};
};
if ( !(mu__quant548) )
  { mu__quant547 = FALSE; break; }
};
};
return mu__quant547;
};

bool mu__condition_552() // Condition for Rule "auxinv_79"
{
  return mu__invariant_546( );
}

/**** end rule declaration ****/

int mu__invariant_553() // Invariant "auxinv_78"
{
bool mu__quant554; 
mu__quant554 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant555; 
mu__quant555 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr556;
  if (!((mu_i) != (mu_j))) mu__boolexpr556 = TRUE ;
  else {
bool mu__boolexpr557;
bool mu__boolexpr558;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = TRUE ;
  else {
  mu__boolexpr557 = ((mu_Sta.mu_Dir.mu_ShrSet[mu_i]) == (mu_false)) ; 
}
  mu__boolexpr556 = (mu__boolexpr557) ; 
}
if ( !(mu__boolexpr556) )
  { mu__quant555 = FALSE; break; }
};
};
if ( !(mu__quant555) )
  { mu__quant554 = FALSE; break; }
};
};
return mu__quant554;
};

bool mu__condition_559() // Condition for Rule "auxinv_78"
{
  return mu__invariant_553( );
}

/**** end rule declaration ****/

int mu__invariant_560() // Invariant "auxinv_77"
{
bool mu__quant561; 
mu__quant561 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant562; 
mu__quant562 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr563;
  if (!((mu_i) != (mu_j))) mu__boolexpr563 = TRUE ;
  else {
bool mu__boolexpr564;
bool mu__boolexpr565;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = TRUE ;
  else {
  mu__boolexpr564 = ((mu_Sta.mu_Dir.mu_InvSet[mu_i]) == (mu_false)) ; 
}
  mu__boolexpr563 = (mu__boolexpr564) ; 
}
if ( !(mu__boolexpr563) )
  { mu__quant562 = FALSE; break; }
};
};
if ( !(mu__quant562) )
  { mu__quant561 = FALSE; break; }
};
};
return mu__quant561;
};

bool mu__condition_566() // Condition for Rule "auxinv_77"
{
  return mu__invariant_560( );
}

/**** end rule declaration ****/

int mu__invariant_567() // Invariant "auxinv_76"
{
bool mu__quant568; 
mu__quant568 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant569; 
mu__quant569 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr570;
  if (!((mu_i) != (mu_j))) mu__boolexpr570 = TRUE ;
  else {
bool mu__boolexpr571;
bool mu__boolexpr572;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = TRUE ;
  else {
  mu__boolexpr571 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_GetX)) ; 
}
  mu__boolexpr570 = (mu__boolexpr571) ; 
}
if ( !(mu__boolexpr570) )
  { mu__quant569 = FALSE; break; }
};
};
if ( !(mu__quant569) )
  { mu__quant568 = FALSE; break; }
};
};
return mu__quant568;
};

bool mu__condition_573() // Condition for Rule "auxinv_76"
{
  return mu__invariant_567( );
}

/**** end rule declaration ****/

int mu__invariant_574() // Invariant "auxinv_75"
{
bool mu__quant575; 
mu__quant575 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant576; 
mu__quant576 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr577;
  if (!((mu_i) != (mu_j))) mu__boolexpr577 = TRUE ;
  else {
bool mu__boolexpr578;
bool mu__boolexpr579;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr579)) mu__boolexpr578 = TRUE ;
  else {
  mu__boolexpr578 = ((mu_Sta.mu_Dir.mu_InvSet[mu_j]) == (mu_false)) ; 
}
  mu__boolexpr577 = (mu__boolexpr578) ; 
}
if ( !(mu__boolexpr577) )
  { mu__quant576 = FALSE; break; }
};
};
if ( !(mu__quant576) )
  { mu__quant575 = FALSE; break; }
};
};
return mu__quant575;
};

bool mu__condition_580() // Condition for Rule "auxinv_75"
{
  return mu__invariant_574( );
}

/**** end rule declaration ****/

int mu__invariant_581() // Invariant "auxinv_74"
{
bool mu__quant582; 
mu__quant582 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant583; 
mu__quant583 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr584;
  if (!((mu_i) != (mu_j))) mu__boolexpr584 = TRUE ;
  else {
bool mu__boolexpr585;
bool mu__boolexpr586;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr586 = FALSE ;
  else {
  mu__boolexpr586 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr586)) mu__boolexpr585 = TRUE ;
  else {
  mu__boolexpr585 = ((mu_Sta.mu_HomeUniMsg.mu_Proc) != (mu_j)) ; 
}
  mu__boolexpr584 = (mu__boolexpr585) ; 
}
if ( !(mu__boolexpr584) )
  { mu__quant583 = FALSE; break; }
};
};
if ( !(mu__quant583) )
  { mu__quant582 = FALSE; break; }
};
};
return mu__quant582;
};

bool mu__condition_587() // Condition for Rule "auxinv_74"
{
  return mu__invariant_581( );
}

/**** end rule declaration ****/

int mu__invariant_588() // Invariant "auxinv_73"
{
bool mu__quant589; 
mu__quant589 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant590; 
mu__quant590 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr591;
  if (!((mu_i) != (mu_j))) mu__boolexpr591 = TRUE ;
  else {
bool mu__boolexpr592;
bool mu__boolexpr593;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr593 = FALSE ;
  else {
  mu__boolexpr593 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr593)) mu__boolexpr592 = TRUE ;
  else {
  mu__boolexpr592 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Get)) ; 
}
  mu__boolexpr591 = (mu__boolexpr592) ; 
}
if ( !(mu__boolexpr591) )
  { mu__quant590 = FALSE; break; }
};
};
if ( !(mu__quant590) )
  { mu__quant589 = FALSE; break; }
};
};
return mu__quant589;
};

bool mu__condition_594() // Condition for Rule "auxinv_73"
{
  return mu__invariant_588( );
}

/**** end rule declaration ****/

int mu__invariant_595() // Invariant "auxinv_72"
{
bool mu__quant596; 
mu__quant596 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant597; 
mu__quant597 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr598;
  if (!((mu_i) != (mu_j))) mu__boolexpr598 = TRUE ;
  else {
bool mu__boolexpr599;
bool mu__boolexpr600;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr600 = FALSE ;
  else {
  mu__boolexpr600 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr600)) mu__boolexpr599 = TRUE ;
  else {
  mu__boolexpr599 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  mu__boolexpr598 = (mu__boolexpr599) ; 
}
if ( !(mu__boolexpr598) )
  { mu__quant597 = FALSE; break; }
};
};
if ( !(mu__quant597) )
  { mu__quant596 = FALSE; break; }
};
};
return mu__quant596;
};

bool mu__condition_601() // Condition for Rule "auxinv_72"
{
  return mu__invariant_595( );
}

/**** end rule declaration ****/

int mu__invariant_602() // Invariant "auxinv_71"
{
bool mu__quant603; 
mu__quant603 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant604; 
mu__quant604 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr605;
  if (!((mu_i) != (mu_j))) mu__boolexpr605 = TRUE ;
  else {
bool mu__boolexpr606;
bool mu__boolexpr607;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr607 = FALSE ;
  else {
  mu__boolexpr607 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr607)) mu__boolexpr606 = TRUE ;
  else {
  mu__boolexpr606 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  mu__boolexpr605 = (mu__boolexpr606) ; 
}
if ( !(mu__boolexpr605) )
  { mu__quant604 = FALSE; break; }
};
};
if ( !(mu__quant604) )
  { mu__quant603 = FALSE; break; }
};
};
return mu__quant603;
};

bool mu__condition_608() // Condition for Rule "auxinv_71"
{
  return mu__invariant_602( );
}

/**** end rule declaration ****/

int mu__invariant_609() // Invariant "auxinv_70"
{
bool mu__quant610; 
mu__quant610 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant611; 
mu__quant611 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr612;
  if (!((mu_i) != (mu_j))) mu__boolexpr612 = TRUE ;
  else {
bool mu__boolexpr613;
bool mu__boolexpr614;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr614 = FALSE ;
  else {
  mu__boolexpr614 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr614)) mu__boolexpr613 = TRUE ;
  else {
  mu__boolexpr613 = ((mu_Sta.mu_NakcMsg.mu_Cmd) != (mu_NAKC_Nakc)) ; 
}
  mu__boolexpr612 = (mu__boolexpr613) ; 
}
if ( !(mu__boolexpr612) )
  { mu__quant611 = FALSE; break; }
};
};
if ( !(mu__quant611) )
  { mu__quant610 = FALSE; break; }
};
};
return mu__quant610;
};

bool mu__condition_615() // Condition for Rule "auxinv_70"
{
  return mu__invariant_609( );
}

/**** end rule declaration ****/

int mu__invariant_616() // Invariant "auxinv_69"
{
bool mu__quant617; 
mu__quant617 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant618; 
mu__quant618 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr619;
  if (!((mu_i) != (mu_j))) mu__boolexpr619 = TRUE ;
  else {
bool mu__boolexpr620;
bool mu__boolexpr621;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr621 = FALSE ;
  else {
  mu__boolexpr621 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr621)) mu__boolexpr620 = TRUE ;
  else {
  mu__boolexpr620 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  mu__boolexpr619 = (mu__boolexpr620) ; 
}
if ( !(mu__boolexpr619) )
  { mu__quant618 = FALSE; break; }
};
};
if ( !(mu__quant618) )
  { mu__quant617 = FALSE; break; }
};
};
return mu__quant617;
};

bool mu__condition_622() // Condition for Rule "auxinv_69"
{
  return mu__invariant_616( );
}

/**** end rule declaration ****/

int mu__invariant_623() // Invariant "auxinv_68"
{
bool mu__quant624; 
mu__quant624 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant625; 
mu__quant625 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr626;
  if (!((mu_i) != (mu_j))) mu__boolexpr626 = TRUE ;
  else {
bool mu__boolexpr627;
bool mu__boolexpr628;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr628 = FALSE ;
  else {
  mu__boolexpr628 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr628)) mu__boolexpr627 = TRUE ;
  else {
  mu__boolexpr627 = ((mu_Sta.mu_ShWbMsg.mu_Proc) != (mu_i)) ; 
}
  mu__boolexpr626 = (mu__boolexpr627) ; 
}
if ( !(mu__boolexpr626) )
  { mu__quant625 = FALSE; break; }
};
};
if ( !(mu__quant625) )
  { mu__quant624 = FALSE; break; }
};
};
return mu__quant624;
};

bool mu__condition_629() // Condition for Rule "auxinv_68"
{
  return mu__invariant_623( );
}

/**** end rule declaration ****/

int mu__invariant_630() // Invariant "auxinv_67"
{
bool mu__quant631; 
mu__quant631 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant632; 
mu__quant632 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr633;
  if (!((mu_i) != (mu_j))) mu__boolexpr633 = TRUE ;
  else {
bool mu__boolexpr634;
bool mu__boolexpr635;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr635 = FALSE ;
  else {
  mu__boolexpr635 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr635)) mu__boolexpr634 = TRUE ;
  else {
  mu__boolexpr634 = ((mu_Sta.mu_ShWbMsg.mu_Proc) != (mu_j)) ; 
}
  mu__boolexpr633 = (mu__boolexpr634) ; 
}
if ( !(mu__boolexpr633) )
  { mu__quant632 = FALSE; break; }
};
};
if ( !(mu__quant632) )
  { mu__quant631 = FALSE; break; }
};
};
return mu__quant631;
};

bool mu__condition_636() // Condition for Rule "auxinv_67"
{
  return mu__invariant_630( );
}

/**** end rule declaration ****/

int mu__invariant_637() // Invariant "auxinv_66"
{
bool mu__quant638; 
mu__quant638 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant639; 
mu__quant639 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr640;
  if (!((mu_i) != (mu_j))) mu__boolexpr640 = TRUE ;
  else {
bool mu__boolexpr641;
bool mu__boolexpr642;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr642 = FALSE ;
  else {
  mu__boolexpr642 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr642)) mu__boolexpr641 = TRUE ;
  else {
  mu__boolexpr641 = ((mu_Sta.mu_HomePendReqSrc) == (mu_false)) ; 
}
  mu__boolexpr640 = (mu__boolexpr641) ; 
}
if ( !(mu__boolexpr640) )
  { mu__quant639 = FALSE; break; }
};
};
if ( !(mu__quant639) )
  { mu__quant638 = FALSE; break; }
};
};
return mu__quant638;
};

bool mu__condition_643() // Condition for Rule "auxinv_66"
{
  return mu__invariant_637( );
}

/**** end rule declaration ****/

int mu__invariant_644() // Invariant "auxinv_65"
{
bool mu__quant645; 
mu__quant645 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant646; 
mu__quant646 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr647;
  if (!((mu_i) != (mu_j))) mu__boolexpr647 = TRUE ;
  else {
bool mu__boolexpr648;
bool mu__boolexpr649;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr649 = FALSE ;
  else {
  mu__boolexpr649 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr649)) mu__boolexpr648 = TRUE ;
  else {
  mu__boolexpr648 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_j)) ; 
}
  mu__boolexpr647 = (mu__boolexpr648) ; 
}
if ( !(mu__boolexpr647) )
  { mu__quant646 = FALSE; break; }
};
};
if ( !(mu__quant646) )
  { mu__quant645 = FALSE; break; }
};
};
return mu__quant645;
};

bool mu__condition_650() // Condition for Rule "auxinv_65"
{
  return mu__invariant_644( );
}

/**** end rule declaration ****/

int mu__invariant_651() // Invariant "auxinv_64"
{
bool mu__quant652; 
mu__quant652 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant653; 
mu__quant653 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr654;
  if (!((mu_i) != (mu_j))) mu__boolexpr654 = TRUE ;
  else {
bool mu__boolexpr655;
bool mu__boolexpr656;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr656 = FALSE ;
  else {
  mu__boolexpr656 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr656)) mu__boolexpr655 = TRUE ;
  else {
  mu__boolexpr655 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_i)) ; 
}
  mu__boolexpr654 = (mu__boolexpr655) ; 
}
if ( !(mu__boolexpr654) )
  { mu__quant653 = FALSE; break; }
};
};
if ( !(mu__quant653) )
  { mu__quant652 = FALSE; break; }
};
};
return mu__quant652;
};

bool mu__condition_657() // Condition for Rule "auxinv_64"
{
  return mu__invariant_651( );
}

/**** end rule declaration ****/

int mu__invariant_658() // Invariant "auxinv_63"
{
bool mu__quant659; 
mu__quant659 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant660; 
mu__quant660 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr661;
  if (!((mu_i) != (mu_j))) mu__boolexpr661 = TRUE ;
  else {
bool mu__boolexpr662;
bool mu__boolexpr663;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr663 = FALSE ;
  else {
  mu__boolexpr663 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr663)) mu__boolexpr662 = TRUE ;
  else {
  mu__boolexpr662 = ((mu_Sta.mu_PendReqSrc) != (mu_j)) ; 
}
  mu__boolexpr661 = (mu__boolexpr662) ; 
}
if ( !(mu__boolexpr661) )
  { mu__quant660 = FALSE; break; }
};
};
if ( !(mu__quant660) )
  { mu__quant659 = FALSE; break; }
};
};
return mu__quant659;
};

bool mu__condition_664() // Condition for Rule "auxinv_63"
{
  return mu__invariant_658( );
}

/**** end rule declaration ****/

int mu__invariant_665() // Invariant "auxinv_62"
{
bool mu__quant666; 
mu__quant666 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant667; 
mu__quant667 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr668;
  if (!((mu_i) != (mu_j))) mu__boolexpr668 = TRUE ;
  else {
bool mu__boolexpr669;
bool mu__boolexpr670;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr670 = FALSE ;
  else {
  mu__boolexpr670 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr670)) mu__boolexpr669 = TRUE ;
  else {
  mu__boolexpr669 = ((mu_Sta.mu_Dir.mu_HeadVld) == (mu_false)) ; 
}
  mu__boolexpr668 = (mu__boolexpr669) ; 
}
if ( !(mu__boolexpr668) )
  { mu__quant667 = FALSE; break; }
};
};
if ( !(mu__quant667) )
  { mu__quant666 = FALSE; break; }
};
};
return mu__quant666;
};

bool mu__condition_671() // Condition for Rule "auxinv_62"
{
  return mu__invariant_665( );
}

/**** end rule declaration ****/

int mu__invariant_672() // Invariant "auxinv_61"
{
bool mu__quant673; 
mu__quant673 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant674; 
mu__quant674 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr675;
  if (!((mu_i) != (mu_j))) mu__boolexpr675 = TRUE ;
  else {
bool mu__boolexpr676;
bool mu__boolexpr677;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr677 = FALSE ;
  else {
  mu__boolexpr677 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr677)) mu__boolexpr676 = TRUE ;
  else {
  mu__boolexpr676 = ((mu_Sta.mu_PendReqSrc) == (mu_i)) ; 
}
  mu__boolexpr675 = (mu__boolexpr676) ; 
}
if ( !(mu__boolexpr675) )
  { mu__quant674 = FALSE; break; }
};
};
if ( !(mu__quant674) )
  { mu__quant673 = FALSE; break; }
};
};
return mu__quant673;
};

bool mu__condition_678() // Condition for Rule "auxinv_61"
{
  return mu__invariant_672( );
}

/**** end rule declaration ****/

int mu__invariant_679() // Invariant "auxinv_60"
{
bool mu__quant680; 
mu__quant680 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant681; 
mu__quant681 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr682;
  if (!((mu_i) != (mu_j))) mu__boolexpr682 = TRUE ;
  else {
bool mu__boolexpr683;
bool mu__boolexpr684;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr684 = FALSE ;
  else {
  mu__boolexpr684 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr684)) mu__boolexpr683 = TRUE ;
  else {
  mu__boolexpr683 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  mu__boolexpr682 = (mu__boolexpr683) ; 
}
if ( !(mu__boolexpr682) )
  { mu__quant681 = FALSE; break; }
};
};
if ( !(mu__quant681) )
  { mu__quant680 = FALSE; break; }
};
};
return mu__quant680;
};

bool mu__condition_685() // Condition for Rule "auxinv_60"
{
  return mu__invariant_679( );
}

/**** end rule declaration ****/

int mu__invariant_686() // Invariant "auxinv_59"
{
bool mu__quant687; 
mu__quant687 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant688; 
mu__quant688 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr689;
  if (!((mu_i) != (mu_j))) mu__boolexpr689 = TRUE ;
  else {
bool mu__boolexpr690;
bool mu__boolexpr691;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr691 = FALSE ;
  else {
  mu__boolexpr691 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr691)) mu__boolexpr690 = TRUE ;
  else {
  mu__boolexpr690 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_GetX)) ; 
}
  mu__boolexpr689 = (mu__boolexpr690) ; 
}
if ( !(mu__boolexpr689) )
  { mu__quant688 = FALSE; break; }
};
};
if ( !(mu__quant688) )
  { mu__quant687 = FALSE; break; }
};
};
return mu__quant687;
};

bool mu__condition_692() // Condition for Rule "auxinv_59"
{
  return mu__invariant_686( );
}

/**** end rule declaration ****/

int mu__invariant_693() // Invariant "auxinv_58"
{
bool mu__quant694; 
mu__quant694 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant695; 
mu__quant695 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr696;
  if (!((mu_i) != (mu_j))) mu__boolexpr696 = TRUE ;
  else {
bool mu__boolexpr697;
bool mu__boolexpr698;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr698 = FALSE ;
  else {
  mu__boolexpr698 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr698)) mu__boolexpr697 = TRUE ;
  else {
  mu__boolexpr697 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  mu__boolexpr696 = (mu__boolexpr697) ; 
}
if ( !(mu__boolexpr696) )
  { mu__quant695 = FALSE; break; }
};
};
if ( !(mu__quant695) )
  { mu__quant694 = FALSE; break; }
};
};
return mu__quant694;
};

bool mu__condition_699() // Condition for Rule "auxinv_58"
{
  return mu__invariant_693( );
}

/**** end rule declaration ****/

int mu__invariant_700() // Invariant "auxinv_57"
{
bool mu__quant701; 
mu__quant701 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant702; 
mu__quant702 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr703;
  if (!((mu_i) != (mu_j))) mu__boolexpr703 = TRUE ;
  else {
bool mu__boolexpr704;
bool mu__boolexpr705;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr705 = FALSE ;
  else {
  mu__boolexpr705 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr705)) mu__boolexpr704 = TRUE ;
  else {
  mu__boolexpr704 = ((mu_Sta.mu_Collecting) == (mu_false)) ; 
}
  mu__boolexpr703 = (mu__boolexpr704) ; 
}
if ( !(mu__boolexpr703) )
  { mu__quant702 = FALSE; break; }
};
};
if ( !(mu__quant702) )
  { mu__quant701 = FALSE; break; }
};
};
return mu__quant701;
};

bool mu__condition_706() // Condition for Rule "auxinv_57"
{
  return mu__invariant_700( );
}

/**** end rule declaration ****/

int mu__invariant_707() // Invariant "auxinv_56"
{
bool mu__quant708; 
mu__quant708 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant709; 
mu__quant709 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr710;
  if (!((mu_i) != (mu_j))) mu__boolexpr710 = TRUE ;
  else {
bool mu__boolexpr711;
bool mu__boolexpr712;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr712 = FALSE ;
  else {
  mu__boolexpr712 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr712)) mu__boolexpr711 = TRUE ;
  else {
  mu__boolexpr711 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_None)) ; 
}
  mu__boolexpr710 = (mu__boolexpr711) ; 
}
if ( !(mu__boolexpr710) )
  { mu__quant709 = FALSE; break; }
};
};
if ( !(mu__quant709) )
  { mu__quant708 = FALSE; break; }
};
};
return mu__quant708;
};

bool mu__condition_713() // Condition for Rule "auxinv_56"
{
  return mu__invariant_707( );
}

/**** end rule declaration ****/

int mu__invariant_714() // Invariant "auxinv_55"
{
bool mu__quant715; 
mu__quant715 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant716; 
mu__quant716 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr717;
  if (!((mu_i) != (mu_j))) mu__boolexpr717 = TRUE ;
  else {
bool mu__boolexpr718;
bool mu__boolexpr719;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr719 = FALSE ;
  else {
  mu__boolexpr719 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr719)) mu__boolexpr718 = TRUE ;
  else {
  mu__boolexpr718 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  mu__boolexpr717 = (mu__boolexpr718) ; 
}
if ( !(mu__boolexpr717) )
  { mu__quant716 = FALSE; break; }
};
};
if ( !(mu__quant716) )
  { mu__quant715 = FALSE; break; }
};
};
return mu__quant715;
};

bool mu__condition_720() // Condition for Rule "auxinv_55"
{
  return mu__invariant_714( );
}

/**** end rule declaration ****/

int mu__invariant_721() // Invariant "auxinv_54"
{
bool mu__quant722; 
mu__quant722 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant723; 
mu__quant723 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr724;
  if (!((mu_i) != (mu_j))) mu__boolexpr724 = TRUE ;
  else {
bool mu__boolexpr725;
bool mu__boolexpr726;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr726 = FALSE ;
  else {
  mu__boolexpr726 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr726)) mu__boolexpr725 = TRUE ;
  else {
  mu__boolexpr725 = ((mu_Sta.mu_Dir.mu_Pending) == (mu_true)) ; 
}
  mu__boolexpr724 = (mu__boolexpr725) ; 
}
if ( !(mu__boolexpr724) )
  { mu__quant723 = FALSE; break; }
};
};
if ( !(mu__quant723) )
  { mu__quant722 = FALSE; break; }
};
};
return mu__quant722;
};

bool mu__condition_727() // Condition for Rule "auxinv_54"
{
  return mu__invariant_721( );
}

/**** end rule declaration ****/

int mu__invariant_728() // Invariant "auxinv_53"
{
bool mu__quant729; 
mu__quant729 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant730; 
mu__quant730 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr731;
  if (!((mu_i) != (mu_j))) mu__boolexpr731 = TRUE ;
  else {
bool mu__boolexpr732;
bool mu__boolexpr733;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr733 = FALSE ;
  else {
  mu__boolexpr733 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr733)) mu__boolexpr732 = TRUE ;
  else {
  mu__boolexpr732 = ((mu_Sta.mu_Dir.mu_Dirty) == (mu_false)) ; 
}
  mu__boolexpr731 = (mu__boolexpr732) ; 
}
if ( !(mu__boolexpr731) )
  { mu__quant730 = FALSE; break; }
};
};
if ( !(mu__quant730) )
  { mu__quant729 = FALSE; break; }
};
};
return mu__quant729;
};

bool mu__condition_734() // Condition for Rule "auxinv_53"
{
  return mu__invariant_728( );
}

/**** end rule declaration ****/

int mu__invariant_735() // Invariant "auxinv_52"
{
bool mu__quant736; 
mu__quant736 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant737; 
mu__quant737 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr738;
  if (!((mu_i) != (mu_j))) mu__boolexpr738 = TRUE ;
  else {
bool mu__boolexpr739;
bool mu__boolexpr740;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr740 = FALSE ;
  else {
  mu__boolexpr740 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr740)) mu__boolexpr739 = TRUE ;
  else {
  mu__boolexpr739 = ((mu_Sta.mu_Dir.mu_Local) == (mu_false)) ; 
}
  mu__boolexpr738 = (mu__boolexpr739) ; 
}
if ( !(mu__boolexpr738) )
  { mu__quant737 = FALSE; break; }
};
};
if ( !(mu__quant737) )
  { mu__quant736 = FALSE; break; }
};
};
return mu__quant736;
};

bool mu__condition_741() // Condition for Rule "auxinv_52"
{
  return mu__invariant_735( );
}

/**** end rule declaration ****/

int mu__invariant_742() // Invariant "auxinv_51"
{
bool mu__quant743; 
mu__quant743 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant744; 
mu__quant744 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr745;
  if (!((mu_i) != (mu_j))) mu__boolexpr745 = TRUE ;
  else {
bool mu__boolexpr746;
bool mu__boolexpr747;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr747 = FALSE ;
  else {
  mu__boolexpr747 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr747)) mu__boolexpr746 = TRUE ;
  else {
  mu__boolexpr746 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  mu__boolexpr745 = (mu__boolexpr746) ; 
}
if ( !(mu__boolexpr745) )
  { mu__quant744 = FALSE; break; }
};
};
if ( !(mu__quant744) )
  { mu__quant743 = FALSE; break; }
};
};
return mu__quant743;
};

bool mu__condition_748() // Condition for Rule "auxinv_51"
{
  return mu__invariant_742( );
}

/**** end rule declaration ****/

int mu__invariant_749() // Invariant "auxinv_50"
{
bool mu__quant750; 
mu__quant750 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant751; 
mu__quant751 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr752;
  if (!((mu_i) != (mu_j))) mu__boolexpr752 = TRUE ;
  else {
bool mu__boolexpr753;
bool mu__boolexpr754;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr754 = FALSE ;
  else {
  mu__boolexpr754 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr754)) mu__boolexpr753 = TRUE ;
  else {
  mu__boolexpr753 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  mu__boolexpr752 = (mu__boolexpr753) ; 
}
if ( !(mu__boolexpr752) )
  { mu__quant751 = FALSE; break; }
};
};
if ( !(mu__quant751) )
  { mu__quant750 = FALSE; break; }
};
};
return mu__quant750;
};

bool mu__condition_755() // Condition for Rule "auxinv_50"
{
  return mu__invariant_749( );
}

/**** end rule declaration ****/

int mu__invariant_756() // Invariant "auxinv_49"
{
bool mu__quant757; 
mu__quant757 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant758; 
mu__quant758 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr759;
  if (!((mu_i) != (mu_j))) mu__boolexpr759 = TRUE ;
  else {
bool mu__boolexpr760;
bool mu__boolexpr761;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr761 = FALSE ;
  else {
  mu__boolexpr761 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j)) ; 
}
  if (!(mu__boolexpr761)) mu__boolexpr760 = TRUE ;
  else {
  mu__boolexpr760 = ((mu_Sta.mu_FwdCmd) == (mu_UNI_Get)) ; 
}
  mu__boolexpr759 = (mu__boolexpr760) ; 
}
if ( !(mu__boolexpr759) )
  { mu__quant758 = FALSE; break; }
};
};
if ( !(mu__quant758) )
  { mu__quant757 = FALSE; break; }
};
};
return mu__quant757;
};

bool mu__condition_762() // Condition for Rule "auxinv_49"
{
  return mu__invariant_756( );
}

/**** end rule declaration ****/

int mu__invariant_763() // Invariant "auxinv_48"
{
bool mu__quant764; 
mu__quant764 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant765; 
mu__quant765 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr766;
  if (!((mu_i) != (mu_j))) mu__boolexpr766 = TRUE ;
  else {
bool mu__boolexpr767;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr767 = TRUE ;
  else {
  mu__boolexpr767 = ((mu_Sta.mu_Proc[mu_j].mu_CacheState) != (mu_CACHE_S)) ; 
}
  mu__boolexpr766 = (mu__boolexpr767) ; 
}
if ( !(mu__boolexpr766) )
  { mu__quant765 = FALSE; break; }
};
};
if ( !(mu__quant765) )
  { mu__quant764 = FALSE; break; }
};
};
return mu__quant764;
};

bool mu__condition_768() // Condition for Rule "auxinv_48"
{
  return mu__invariant_763( );
}

/**** end rule declaration ****/

int mu__invariant_769() // Invariant "auxinv_47"
{
bool mu__quant770; 
mu__quant770 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr771;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr771 = TRUE ;
  else {
  mu__boolexpr771 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) != (mu_CACHE_S)) ; 
}
if ( !(mu__boolexpr771) )
  { mu__quant770 = FALSE; break; }
};
};
return mu__quant770;
};

bool mu__condition_772() // Condition for Rule "auxinv_47"
{
  return mu__invariant_769( );
}

/**** end rule declaration ****/

int mu__invariant_773() // Invariant "auxinv_46"
{
bool mu__quant774; 
mu__quant774 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant775; 
mu__quant775 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr776;
  if (!((mu_i) != (mu_j))) mu__boolexpr776 = TRUE ;
  else {
bool mu__boolexpr777;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr777 = TRUE ;
  else {
  mu__boolexpr777 = ((mu_Sta.mu_Proc[mu_j].mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr776 = (mu__boolexpr777) ; 
}
if ( !(mu__boolexpr776) )
  { mu__quant775 = FALSE; break; }
};
};
if ( !(mu__quant775) )
  { mu__quant774 = FALSE; break; }
};
};
return mu__quant774;
};

bool mu__condition_778() // Condition for Rule "auxinv_46"
{
  return mu__invariant_773( );
}

/**** end rule declaration ****/

int mu__invariant_779() // Invariant "auxinv_45"
{
bool mu__quant780; 
mu__quant780 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr781;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr781 = TRUE ;
  else {
  mu__boolexpr781 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) != (mu_CACHE_E)) ; 
}
if ( !(mu__boolexpr781) )
  { mu__quant780 = FALSE; break; }
};
};
return mu__quant780;
};

bool mu__condition_782() // Condition for Rule "auxinv_45"
{
  return mu__invariant_779( );
}

/**** end rule declaration ****/

int mu__invariant_783() // Invariant "auxinv_44"
{
bool mu__quant784; 
mu__quant784 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant785; 
mu__quant785 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr786;
  if (!((mu_i) != (mu_j))) mu__boolexpr786 = TRUE ;
  else {
bool mu__boolexpr787;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr787 = TRUE ;
  else {
  mu__boolexpr787 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) != (mu_CACHE_S)) ; 
}
  mu__boolexpr786 = (mu__boolexpr787) ; 
}
if ( !(mu__boolexpr786) )
  { mu__quant785 = FALSE; break; }
};
};
if ( !(mu__quant785) )
  { mu__quant784 = FALSE; break; }
};
};
return mu__quant784;
};

bool mu__condition_788() // Condition for Rule "auxinv_44"
{
  return mu__invariant_783( );
}

/**** end rule declaration ****/

int mu__invariant_789() // Invariant "auxinv_43"
{
bool mu__quant790; 
mu__quant790 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant791; 
mu__quant791 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr792;
  if (!((mu_i) != (mu_j))) mu__boolexpr792 = TRUE ;
  else {
bool mu__boolexpr793;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr793 = TRUE ;
  else {
  mu__boolexpr793 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) != (mu_CACHE_E)) ; 
}
  mu__boolexpr792 = (mu__boolexpr793) ; 
}
if ( !(mu__boolexpr792) )
  { mu__quant791 = FALSE; break; }
};
};
if ( !(mu__quant791) )
  { mu__quant790 = FALSE; break; }
};
};
return mu__quant790;
};

bool mu__condition_794() // Condition for Rule "auxinv_43"
{
  return mu__invariant_789( );
}

/**** end rule declaration ****/

int mu__invariant_795() // Invariant "auxinv_42"
{
bool mu__quant796; 
mu__quant796 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr797;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr797 = TRUE ;
  else {
  mu__boolexpr797 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) == (mu_CACHE_I)) ; 
}
if ( !(mu__boolexpr797) )
  { mu__quant796 = FALSE; break; }
};
};
return mu__quant796;
};

bool mu__condition_798() // Condition for Rule "auxinv_42"
{
  return mu__invariant_795( );
}

/**** end rule declaration ****/

int mu__invariant_799() // Invariant "auxinv_41"
{
bool mu__quant800; 
mu__quant800 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant801; 
mu__quant801 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr802;
  if (!((mu_i) != (mu_j))) mu__boolexpr802 = TRUE ;
  else {
bool mu__boolexpr803;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr803 = TRUE ;
  else {
  mu__boolexpr803 = ((mu_Sta.mu_Proc[mu_j].mu_CacheState) == (mu_CACHE_I)) ; 
}
  mu__boolexpr802 = (mu__boolexpr803) ; 
}
if ( !(mu__boolexpr802) )
  { mu__quant801 = FALSE; break; }
};
};
if ( !(mu__quant801) )
  { mu__quant800 = FALSE; break; }
};
};
return mu__quant800;
};

bool mu__condition_804() // Condition for Rule "auxinv_41"
{
  return mu__invariant_799( );
}

/**** end rule declaration ****/

int mu__invariant_805() // Invariant "auxinv_40"
{
bool mu__quant806; 
mu__quant806 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant807; 
mu__quant807 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr808;
  if (!((mu_i) != (mu_j))) mu__boolexpr808 = TRUE ;
  else {
bool mu__boolexpr809;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr809 = TRUE ;
  else {
  mu__boolexpr809 = ((mu_Sta.mu_Proc[mu_i].mu_ProcCmd) != (mu_NODE_None)) ; 
}
  mu__boolexpr808 = (mu__boolexpr809) ; 
}
if ( !(mu__boolexpr808) )
  { mu__quant807 = FALSE; break; }
};
};
if ( !(mu__quant807) )
  { mu__quant806 = FALSE; break; }
};
};
return mu__quant806;
};

bool mu__condition_810() // Condition for Rule "auxinv_40"
{
  return mu__invariant_805( );
}

/**** end rule declaration ****/

int mu__invariant_811() // Invariant "auxinv_39"
{
bool mu__quant812; 
mu__quant812 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr813;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr813 = TRUE ;
  else {
  mu__boolexpr813 = ((mu_Sta.mu_Proc[mu_i].mu_ProcCmd) != (mu_NODE_GetX)) ; 
}
if ( !(mu__boolexpr813) )
  { mu__quant812 = FALSE; break; }
};
};
return mu__quant812;
};

bool mu__condition_814() // Condition for Rule "auxinv_39"
{
  return mu__invariant_811( );
}

/**** end rule declaration ****/

int mu__invariant_815() // Invariant "auxinv_38"
{
bool mu__quant816; 
mu__quant816 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr817;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr817 = TRUE ;
  else {
  mu__boolexpr817 = ((mu_Sta.mu_Proc[mu_i].mu_ProcCmd) != (mu_NODE_None)) ; 
}
if ( !(mu__boolexpr817) )
  { mu__quant816 = FALSE; break; }
};
};
return mu__quant816;
};

bool mu__condition_818() // Condition for Rule "auxinv_38"
{
  return mu__invariant_815( );
}

/**** end rule declaration ****/

int mu__invariant_819() // Invariant "auxinv_37"
{
bool mu__quant820; 
mu__quant820 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant821; 
mu__quant821 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr822;
  if (!((mu_i) != (mu_j))) mu__boolexpr822 = TRUE ;
  else {
bool mu__boolexpr823;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr823 = TRUE ;
  else {
  mu__boolexpr823 = ((mu_Sta.mu_Proc[mu_i].mu_CacheState) == (mu_CACHE_I)) ; 
}
  mu__boolexpr822 = (mu__boolexpr823) ; 
}
if ( !(mu__boolexpr822) )
  { mu__quant821 = FALSE; break; }
};
};
if ( !(mu__quant821) )
  { mu__quant820 = FALSE; break; }
};
};
return mu__quant820;
};

bool mu__condition_824() // Condition for Rule "auxinv_37"
{
  return mu__invariant_819( );
}

/**** end rule declaration ****/

int mu__invariant_825() // Invariant "auxinv_36"
{
bool mu__quant826; 
mu__quant826 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr827;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr827 = TRUE ;
  else {
  mu__boolexpr827 = ((mu_Sta.mu_Proc[mu_i].mu_ProcCmd) == (mu_NODE_Get)) ; 
}
if ( !(mu__boolexpr827) )
  { mu__quant826 = FALSE; break; }
};
};
return mu__quant826;
};

bool mu__condition_828() // Condition for Rule "auxinv_36"
{
  return mu__invariant_825( );
}

/**** end rule declaration ****/

int mu__invariant_829() // Invariant "auxinv_35"
{
bool mu__quant830; 
mu__quant830 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant831; 
mu__quant831 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr832;
  if (!((mu_i) != (mu_j))) mu__boolexpr832 = TRUE ;
  else {
bool mu__boolexpr833;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr833 = TRUE ;
  else {
  mu__boolexpr833 = ((mu_Sta.mu_UniMsg[mu_i].mu_HomeProc) == (mu_false)) ; 
}
  mu__boolexpr832 = (mu__boolexpr833) ; 
}
if ( !(mu__boolexpr832) )
  { mu__quant831 = FALSE; break; }
};
};
if ( !(mu__quant831) )
  { mu__quant830 = FALSE; break; }
};
};
return mu__quant830;
};

bool mu__condition_834() // Condition for Rule "auxinv_35"
{
  return mu__invariant_829( );
}

/**** end rule declaration ****/

int mu__invariant_835() // Invariant "auxinv_34"
{
bool mu__quant836; 
mu__quant836 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr837;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr837 = TRUE ;
  else {
  mu__boolexpr837 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_PutX)) ; 
}
if ( !(mu__boolexpr837) )
  { mu__quant836 = FALSE; break; }
};
};
return mu__quant836;
};

bool mu__condition_838() // Condition for Rule "auxinv_34"
{
  return mu__invariant_835( );
}

/**** end rule declaration ****/

int mu__invariant_839() // Invariant "auxinv_33"
{
bool mu__quant840; 
mu__quant840 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant841; 
mu__quant841 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr842;
  if (!((mu_i) != (mu_j))) mu__boolexpr842 = TRUE ;
  else {
bool mu__boolexpr843;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr843 = TRUE ;
  else {
  mu__boolexpr843 = ((mu_Sta.mu_UniMsg[mu_j].mu_Cmd) != (mu_UNI_PutX)) ; 
}
  mu__boolexpr842 = (mu__boolexpr843) ; 
}
if ( !(mu__boolexpr842) )
  { mu__quant841 = FALSE; break; }
};
};
if ( !(mu__quant841) )
  { mu__quant840 = FALSE; break; }
};
};
return mu__quant840;
};

bool mu__condition_844() // Condition for Rule "auxinv_33"
{
  return mu__invariant_839( );
}

/**** end rule declaration ****/

int mu__invariant_845() // Invariant "auxinv_32"
{
bool mu__quant846; 
mu__quant846 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr847;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr847 = TRUE ;
  else {
  mu__boolexpr847 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_GetX)) ; 
}
if ( !(mu__boolexpr847) )
  { mu__quant846 = FALSE; break; }
};
};
return mu__quant846;
};

bool mu__condition_848() // Condition for Rule "auxinv_32"
{
  return mu__invariant_845( );
}

/**** end rule declaration ****/

int mu__invariant_849() // Invariant "auxinv_31"
{
bool mu__quant850; 
mu__quant850 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant851; 
mu__quant851 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr852;
  if (!((mu_i) != (mu_j))) mu__boolexpr852 = TRUE ;
  else {
bool mu__boolexpr853;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr853 = TRUE ;
  else {
  mu__boolexpr853 = ((mu_Sta.mu_UniMsg[mu_j].mu_Cmd) != (mu_UNI_Put)) ; 
}
  mu__boolexpr852 = (mu__boolexpr853) ; 
}
if ( !(mu__boolexpr852) )
  { mu__quant851 = FALSE; break; }
};
};
if ( !(mu__quant851) )
  { mu__quant850 = FALSE; break; }
};
};
return mu__quant850;
};

bool mu__condition_854() // Condition for Rule "auxinv_31"
{
  return mu__invariant_849( );
}

/**** end rule declaration ****/

int mu__invariant_855() // Invariant "auxinv_30"
{
bool mu__quant856; 
mu__quant856 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant857; 
mu__quant857 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr858;
  if (!((mu_i) != (mu_j))) mu__boolexpr858 = TRUE ;
  else {
bool mu__boolexpr859;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr859 = TRUE ;
  else {
  mu__boolexpr859 = ((mu_Sta.mu_UniMsg[mu_j].mu_Proc) != (mu_j)) ; 
}
  mu__boolexpr858 = (mu__boolexpr859) ; 
}
if ( !(mu__boolexpr858) )
  { mu__quant857 = FALSE; break; }
};
};
if ( !(mu__quant857) )
  { mu__quant856 = FALSE; break; }
};
};
return mu__quant856;
};

bool mu__condition_860() // Condition for Rule "auxinv_30"
{
  return mu__invariant_855( );
}

/**** end rule declaration ****/

int mu__invariant_861() // Invariant "auxinv_29"
{
bool mu__quant862; 
mu__quant862 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr863;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr863 = TRUE ;
  else {
  mu__boolexpr863 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_Put)) ; 
}
if ( !(mu__boolexpr863) )
  { mu__quant862 = FALSE; break; }
};
};
return mu__quant862;
};

bool mu__condition_864() // Condition for Rule "auxinv_29"
{
  return mu__invariant_861( );
}

/**** end rule declaration ****/

int mu__invariant_865() // Invariant "auxinv_28"
{
bool mu__quant866; 
mu__quant866 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant867; 
mu__quant867 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr868;
  if (!((mu_i) != (mu_j))) mu__boolexpr868 = TRUE ;
  else {
bool mu__boolexpr869;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr869 = TRUE ;
  else {
  mu__boolexpr869 = ((mu_Sta.mu_UniMsg[mu_j].mu_Proc) != (mu_j)) ; 
}
  mu__boolexpr868 = (mu__boolexpr869) ; 
}
if ( !(mu__boolexpr868) )
  { mu__quant867 = FALSE; break; }
};
};
if ( !(mu__quant867) )
  { mu__quant866 = FALSE; break; }
};
};
return mu__quant866;
};

bool mu__condition_870() // Condition for Rule "auxinv_28"
{
  return mu__invariant_865( );
}

/**** end rule declaration ****/

int mu__invariant_871() // Invariant "auxinv_27"
{
bool mu__quant872; 
mu__quant872 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant873; 
mu__quant873 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr874;
  if (!((mu_i) != (mu_j))) mu__boolexpr874 = TRUE ;
  else {
bool mu__boolexpr875;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr875 = TRUE ;
  else {
  mu__boolexpr875 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) != (mu_i)) ; 
}
  mu__boolexpr874 = (mu__boolexpr875) ; 
}
if ( !(mu__boolexpr874) )
  { mu__quant873 = FALSE; break; }
};
};
if ( !(mu__quant873) )
  { mu__quant872 = FALSE; break; }
};
};
return mu__quant872;
};

bool mu__condition_876() // Condition for Rule "auxinv_27"
{
  return mu__invariant_871( );
}

/**** end rule declaration ****/

int mu__invariant_877() // Invariant "auxinv_26"
{
bool mu__quant878; 
mu__quant878 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr879;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr879 = TRUE ;
  else {
  mu__boolexpr879 = ((mu_Sta.mu_UniMsg[mu_i].mu_Proc) != (mu_i)) ; 
}
if ( !(mu__boolexpr879) )
  { mu__quant878 = FALSE; break; }
};
};
return mu__quant878;
};

bool mu__condition_880() // Condition for Rule "auxinv_26"
{
  return mu__invariant_877( );
}

/**** end rule declaration ****/

int mu__invariant_881() // Invariant "auxinv_25"
{
bool mu__quant882; 
mu__quant882 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr883;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr883 = TRUE ;
  else {
  mu__boolexpr883 = ((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) != (mu_UNI_Nak)) ; 
}
if ( !(mu__boolexpr883) )
  { mu__quant882 = FALSE; break; }
};
};
return mu__quant882;
};

bool mu__condition_884() // Condition for Rule "auxinv_25"
{
  return mu__invariant_881( );
}

/**** end rule declaration ****/

int mu__invariant_885() // Invariant "auxinv_24"
{
bool mu__quant886; 
mu__quant886 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant887; 
mu__quant887 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr888;
  if (!((mu_i) != (mu_j))) mu__boolexpr888 = TRUE ;
  else {
bool mu__boolexpr889;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr889 = TRUE ;
  else {
  mu__boolexpr889 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
  mu__boolexpr888 = (mu__boolexpr889) ; 
}
if ( !(mu__boolexpr888) )
  { mu__quant887 = FALSE; break; }
};
};
if ( !(mu__quant887) )
  { mu__quant886 = FALSE; break; }
};
};
return mu__quant886;
};

bool mu__condition_890() // Condition for Rule "auxinv_24"
{
  return mu__invariant_885( );
}

/**** end rule declaration ****/

int mu__invariant_891() // Invariant "auxinv_23"
{
bool mu__quant892; 
mu__quant892 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr893;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr893 = TRUE ;
  else {
  mu__boolexpr893 = ((mu_Sta.mu_HomeUniMsg.mu_HomeProc) == (mu_false)) ; 
}
if ( !(mu__boolexpr893) )
  { mu__quant892 = FALSE; break; }
};
};
return mu__quant892;
};

bool mu__condition_894() // Condition for Rule "auxinv_23"
{
  return mu__invariant_891( );
}

/**** end rule declaration ****/

int mu__invariant_895() // Invariant "auxinv_22"
{
bool mu__quant896; 
mu__quant896 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr897;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr897 = TRUE ;
  else {
  mu__boolexpr897 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
if ( !(mu__boolexpr897) )
  { mu__quant896 = FALSE; break; }
};
};
return mu__quant896;
};

bool mu__condition_898() // Condition for Rule "auxinv_22"
{
  return mu__invariant_895( );
}

/**** end rule declaration ****/

int mu__invariant_899() // Invariant "auxinv_21"
{
bool mu__quant900; 
mu__quant900 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant901; 
mu__quant901 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr902;
  if (!((mu_i) != (mu_j))) mu__boolexpr902 = TRUE ;
  else {
bool mu__boolexpr903;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr903 = TRUE ;
  else {
  mu__boolexpr903 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_PutX)) ; 
}
  mu__boolexpr902 = (mu__boolexpr903) ; 
}
if ( !(mu__boolexpr902) )
  { mu__quant901 = FALSE; break; }
};
};
if ( !(mu__quant901) )
  { mu__quant900 = FALSE; break; }
};
};
return mu__quant900;
};

bool mu__condition_904() // Condition for Rule "auxinv_21"
{
  return mu__invariant_899( );
}

/**** end rule declaration ****/

int mu__invariant_905() // Invariant "auxinv_20"
{
bool mu__quant906; 
mu__quant906 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant907; 
mu__quant907 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr908;
  if (!((mu_i) != (mu_j))) mu__boolexpr908 = TRUE ;
  else {
bool mu__boolexpr909;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr909 = TRUE ;
  else {
  mu__boolexpr909 = ((mu_Sta.mu_HomeProc.mu_InvMarked) == (mu_false)) ; 
}
  mu__boolexpr908 = (mu__boolexpr909) ; 
}
if ( !(mu__boolexpr908) )
  { mu__quant907 = FALSE; break; }
};
};
if ( !(mu__quant907) )
  { mu__quant906 = FALSE; break; }
};
};
return mu__quant906;
};

bool mu__condition_910() // Condition for Rule "auxinv_20"
{
  return mu__invariant_905( );
}

/**** end rule declaration ****/

int mu__invariant_911() // Invariant "auxinv_19"
{
bool mu__quant912; 
mu__quant912 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant913; 
mu__quant913 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr914;
  if (!((mu_i) != (mu_j))) mu__boolexpr914 = TRUE ;
  else {
bool mu__boolexpr915;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr915 = TRUE ;
  else {
  mu__boolexpr915 = ((mu_Sta.mu_Dir.mu_ShrSet[mu_i]) == (mu_false)) ; 
}
  mu__boolexpr914 = (mu__boolexpr915) ; 
}
if ( !(mu__boolexpr914) )
  { mu__quant913 = FALSE; break; }
};
};
if ( !(mu__quant913) )
  { mu__quant912 = FALSE; break; }
};
};
return mu__quant912;
};

bool mu__condition_916() // Condition for Rule "auxinv_19"
{
  return mu__invariant_911( );
}

/**** end rule declaration ****/

int mu__invariant_917() // Invariant "auxinv_18"
{
bool mu__quant918; 
mu__quant918 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant919; 
mu__quant919 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr920;
  if (!((mu_i) != (mu_j))) mu__boolexpr920 = TRUE ;
  else {
bool mu__boolexpr921;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr921 = TRUE ;
  else {
  mu__boolexpr921 = ((mu_Sta.mu_Dir.mu_ShrSet[mu_j]) == (mu_false)) ; 
}
  mu__boolexpr920 = (mu__boolexpr921) ; 
}
if ( !(mu__boolexpr920) )
  { mu__quant919 = FALSE; break; }
};
};
if ( !(mu__quant919) )
  { mu__quant918 = FALSE; break; }
};
};
return mu__quant918;
};

bool mu__condition_922() // Condition for Rule "auxinv_18"
{
  return mu__invariant_917( );
}

/**** end rule declaration ****/

int mu__invariant_923() // Invariant "auxinv_17"
{
bool mu__quant924; 
mu__quant924 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant925; 
mu__quant925 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr926;
  if (!((mu_i) != (mu_j))) mu__boolexpr926 = TRUE ;
  else {
bool mu__boolexpr927;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr927 = TRUE ;
  else {
  mu__boolexpr927 = ((mu_Sta.mu_HomeUniMsg.mu_Cmd) != (mu_UNI_Put)) ; 
}
  mu__boolexpr926 = (mu__boolexpr927) ; 
}
if ( !(mu__boolexpr926) )
  { mu__quant925 = FALSE; break; }
};
};
if ( !(mu__quant925) )
  { mu__quant924 = FALSE; break; }
};
};
return mu__quant924;
};

bool mu__condition_928() // Condition for Rule "auxinv_17"
{
  return mu__invariant_923( );
}

/**** end rule declaration ****/

int mu__invariant_929() // Invariant "auxinv_16"
{
bool mu__quant930; 
mu__quant930 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant931; 
mu__quant931 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr932;
  if (!((mu_i) != (mu_j))) mu__boolexpr932 = TRUE ;
  else {
bool mu__boolexpr933;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr933 = TRUE ;
  else {
  mu__boolexpr933 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_ShWb)) ; 
}
  mu__boolexpr932 = (mu__boolexpr933) ; 
}
if ( !(mu__boolexpr932) )
  { mu__quant931 = FALSE; break; }
};
};
if ( !(mu__quant931) )
  { mu__quant930 = FALSE; break; }
};
};
return mu__quant930;
};

bool mu__condition_934() // Condition for Rule "auxinv_16"
{
  return mu__invariant_929( );
}

/**** end rule declaration ****/

int mu__invariant_935() // Invariant "auxinv_15"
{
bool mu__quant936; 
mu__quant936 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant937; 
mu__quant937 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr938;
  if (!((mu_i) != (mu_j))) mu__boolexpr938 = TRUE ;
  else {
bool mu__boolexpr939;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr939 = TRUE ;
  else {
  mu__boolexpr939 = ((mu_Sta.mu_ShWbMsg.mu_Cmd) != (mu_SHWB_FAck)) ; 
}
  mu__boolexpr938 = (mu__boolexpr939) ; 
}
if ( !(mu__boolexpr938) )
  { mu__quant937 = FALSE; break; }
};
};
if ( !(mu__quant937) )
  { mu__quant936 = FALSE; break; }
};
};
return mu__quant936;
};

bool mu__condition_940() // Condition for Rule "auxinv_15"
{
  return mu__invariant_935( );
}

/**** end rule declaration ****/

int mu__invariant_941() // Invariant "auxinv_14"
{
bool mu__quant942; 
mu__quant942 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant943; 
mu__quant943 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr944;
  if (!((mu_i) != (mu_j))) mu__boolexpr944 = TRUE ;
  else {
bool mu__boolexpr945;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr945 = TRUE ;
  else {
  mu__boolexpr945 = ((mu_Sta.mu_ShWbMsg.mu_Proc) != (mu_i)) ; 
}
  mu__boolexpr944 = (mu__boolexpr945) ; 
}
if ( !(mu__boolexpr944) )
  { mu__quant943 = FALSE; break; }
};
};
if ( !(mu__quant943) )
  { mu__quant942 = FALSE; break; }
};
};
return mu__quant942;
};

bool mu__condition_946() // Condition for Rule "auxinv_14"
{
  return mu__invariant_941( );
}

/**** end rule declaration ****/

int mu__invariant_947() // Invariant "auxinv_13"
{
bool mu__quant948; 
mu__quant948 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant949; 
mu__quant949 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr950;
  if (!((mu_i) != (mu_j))) mu__boolexpr950 = TRUE ;
  else {
bool mu__boolexpr951;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr951 = TRUE ;
  else {
  mu__boolexpr951 = ((mu_Sta.mu_ShWbMsg.mu_Proc) != (mu_j)) ; 
}
  mu__boolexpr950 = (mu__boolexpr951) ; 
}
if ( !(mu__boolexpr950) )
  { mu__quant949 = FALSE; break; }
};
};
if ( !(mu__quant949) )
  { mu__quant948 = FALSE; break; }
};
};
return mu__quant948;
};

bool mu__condition_952() // Condition for Rule "auxinv_13"
{
  return mu__invariant_947( );
}

/**** end rule declaration ****/

int mu__invariant_953() // Invariant "auxinv_12"
{
bool mu__quant954; 
mu__quant954 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant955; 
mu__quant955 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr956;
  if (!((mu_i) != (mu_j))) mu__boolexpr956 = TRUE ;
  else {
bool mu__boolexpr957;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr957 = TRUE ;
  else {
  mu__boolexpr957 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_i)) ; 
}
  mu__boolexpr956 = (mu__boolexpr957) ; 
}
if ( !(mu__boolexpr956) )
  { mu__quant955 = FALSE; break; }
};
};
if ( !(mu__quant955) )
  { mu__quant954 = FALSE; break; }
};
};
return mu__quant954;
};

bool mu__condition_958() // Condition for Rule "auxinv_12"
{
  return mu__invariant_953( );
}

/**** end rule declaration ****/

int mu__invariant_959() // Invariant "auxinv_11"
{
bool mu__quant960; 
mu__quant960 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr961;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr961 = TRUE ;
  else {
  mu__boolexpr961 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_i)) ; 
}
if ( !(mu__boolexpr961) )
  { mu__quant960 = FALSE; break; }
};
};
return mu__quant960;
};

bool mu__condition_962() // Condition for Rule "auxinv_11"
{
  return mu__invariant_959( );
}

/**** end rule declaration ****/

int mu__invariant_963() // Invariant "auxinv_10"
{
bool mu__quant964; 
mu__quant964 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant965; 
mu__quant965 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr966;
  if (!((mu_i) != (mu_j))) mu__boolexpr966 = TRUE ;
  else {
bool mu__boolexpr967;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr967 = TRUE ;
  else {
  mu__boolexpr967 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_j)) ; 
}
  mu__boolexpr966 = (mu__boolexpr967) ; 
}
if ( !(mu__boolexpr966) )
  { mu__quant965 = FALSE; break; }
};
};
if ( !(mu__quant965) )
  { mu__quant964 = FALSE; break; }
};
};
return mu__quant964;
};

bool mu__condition_968() // Condition for Rule "auxinv_10"
{
  return mu__invariant_963( );
}

/**** end rule declaration ****/

int mu__invariant_969() // Invariant "auxinv_9"
{
bool mu__quant970; 
mu__quant970 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant971; 
mu__quant971 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr972;
  if (!((mu_i) != (mu_j))) mu__boolexpr972 = TRUE ;
  else {
bool mu__boolexpr973;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr973 = TRUE ;
  else {
  mu__boolexpr973 = ((mu_Sta.mu_Dir.mu_HeadPtr) != (mu_j)) ; 
}
  mu__boolexpr972 = (mu__boolexpr973) ; 
}
if ( !(mu__boolexpr972) )
  { mu__quant971 = FALSE; break; }
};
};
if ( !(mu__quant971) )
  { mu__quant970 = FALSE; break; }
};
};
return mu__quant970;
};

bool mu__condition_974() // Condition for Rule "auxinv_9"
{
  return mu__invariant_969( );
}

/**** end rule declaration ****/

int mu__invariant_975() // Invariant "auxinv_8"
{
bool mu__quant976; 
mu__quant976 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant977; 
mu__quant977 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr978;
  if (!((mu_i) != (mu_j))) mu__boolexpr978 = TRUE ;
  else {
bool mu__boolexpr979;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr979 = TRUE ;
  else {
  mu__boolexpr979 = ((mu_Sta.mu_WbMsg.mu_Cmd) != (mu_WB_Wb)) ; 
}
  mu__boolexpr978 = (mu__boolexpr979) ; 
}
if ( !(mu__boolexpr978) )
  { mu__quant977 = FALSE; break; }
};
};
if ( !(mu__quant977) )
  { mu__quant976 = FALSE; break; }
};
};
return mu__quant976;
};

bool mu__condition_980() // Condition for Rule "auxinv_8"
{
  return mu__invariant_975( );
}

/**** end rule declaration ****/

int mu__invariant_981() // Invariant "auxinv_7"
{
bool mu__quant982; 
mu__quant982 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant983; 
mu__quant983 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr984;
  if (!((mu_i) != (mu_j))) mu__boolexpr984 = TRUE ;
  else {
bool mu__boolexpr985;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr985 = TRUE ;
  else {
  mu__boolexpr985 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
  mu__boolexpr984 = (mu__boolexpr985) ; 
}
if ( !(mu__boolexpr984) )
  { mu__quant983 = FALSE; break; }
};
};
if ( !(mu__quant983) )
  { mu__quant982 = FALSE; break; }
};
};
return mu__quant982;
};

bool mu__condition_986() // Condition for Rule "auxinv_7"
{
  return mu__invariant_981( );
}

/**** end rule declaration ****/

int mu__invariant_987() // Invariant "auxinv_6"
{
bool mu__quant988; 
mu__quant988 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr989;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr989 = TRUE ;
  else {
  mu__boolexpr989 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_PutX)) ; 
}
if ( !(mu__boolexpr989) )
  { mu__quant988 = FALSE; break; }
};
};
return mu__quant988;
};

bool mu__condition_990() // Condition for Rule "auxinv_6"
{
  return mu__invariant_987( );
}

/**** end rule declaration ****/

int mu__invariant_991() // Invariant "auxinv_5"
{
bool mu__quant992; 
mu__quant992 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant993; 
mu__quant993 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr994;
  if (!((mu_i) != (mu_j))) mu__boolexpr994 = TRUE ;
  else {
bool mu__boolexpr995;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr995 = TRUE ;
  else {
  mu__boolexpr995 = ((mu_Sta.mu_Dir.mu_ShrVld) == (mu_false)) ; 
}
  mu__boolexpr994 = (mu__boolexpr995) ; 
}
if ( !(mu__boolexpr994) )
  { mu__quant993 = FALSE; break; }
};
};
if ( !(mu__quant993) )
  { mu__quant992 = FALSE; break; }
};
};
return mu__quant992;
};

bool mu__condition_996() // Condition for Rule "auxinv_5"
{
  return mu__invariant_991( );
}

/**** end rule declaration ****/

int mu__invariant_997() // Invariant "auxinv_4"
{
bool mu__quant998; 
mu__quant998 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant999; 
mu__quant999 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr1000;
  if (!((mu_i) != (mu_j))) mu__boolexpr1000 = TRUE ;
  else {
bool mu__boolexpr1001;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr1001 = TRUE ;
  else {
  mu__boolexpr1001 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
  mu__boolexpr1000 = (mu__boolexpr1001) ; 
}
if ( !(mu__boolexpr1000) )
  { mu__quant999 = FALSE; break; }
};
};
if ( !(mu__quant999) )
  { mu__quant998 = FALSE; break; }
};
};
return mu__quant998;
};

bool mu__condition_1002() // Condition for Rule "auxinv_4"
{
  return mu__invariant_997( );
}

/**** end rule declaration ****/

int mu__invariant_1003() // Invariant "auxinv_3"
{
bool mu__quant1004; 
mu__quant1004 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr1005;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr1005 = TRUE ;
  else {
  mu__boolexpr1005 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Put)) ; 
}
if ( !(mu__boolexpr1005) )
  { mu__quant1004 = FALSE; break; }
};
};
return mu__quant1004;
};

bool mu__condition_1006() // Condition for Rule "auxinv_3"
{
  return mu__invariant_1003( );
}

/**** end rule declaration ****/

int mu__invariant_1007() // Invariant "auxinv_2"
{
bool mu__quant1008; 
mu__quant1008 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__quant1009; 
mu__quant1009 = TRUE;
{
for(int mu_j = 1; mu_j <= 2; mu_j++) {
bool mu__boolexpr1010;
  if (!((mu_i) != (mu_j))) mu__boolexpr1010 = TRUE ;
  else {
bool mu__boolexpr1011;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Proc) == (mu_j))) mu__boolexpr1011 = TRUE ;
  else {
  mu__boolexpr1011 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
  mu__boolexpr1010 = (mu__boolexpr1011) ; 
}
if ( !(mu__boolexpr1010) )
  { mu__quant1009 = FALSE; break; }
};
};
if ( !(mu__quant1009) )
  { mu__quant1008 = FALSE; break; }
};
};
return mu__quant1008;
};

bool mu__condition_1012() // Condition for Rule "auxinv_2"
{
  return mu__invariant_1007( );
}

/**** end rule declaration ****/

int mu__invariant_1013() // Invariant "auxinv_1"
{
bool mu__quant1014; 
mu__quant1014 = TRUE;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr1015;
  if (!((mu_Sta.mu_UniMsg[mu_i].mu_Cmd) == (mu_UNI_Get))) mu__boolexpr1015 = TRUE ;
  else {
  mu__boolexpr1015 = ((mu_Sta.mu_FwdCmd) != (mu_UNI_Nak)) ; 
}
if ( !(mu__boolexpr1015) )
  { mu__quant1014 = FALSE; break; }
};
};
return mu__quant1014;
};

bool mu__condition_1016() // Condition for Rule "auxinv_1"
{
  return mu__invariant_1013( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"auxinv_1", &mu__condition_1016, NULL, },
{"auxinv_2", &mu__condition_1012, NULL, },
{"auxinv_3", &mu__condition_1006, NULL, },
{"auxinv_4", &mu__condition_1002, NULL, },
{"auxinv_5", &mu__condition_996, NULL, },
{"auxinv_6", &mu__condition_990, NULL, },
{"auxinv_7", &mu__condition_986, NULL, },
{"auxinv_8", &mu__condition_980, NULL, },
{"auxinv_9", &mu__condition_974, NULL, },
{"auxinv_10", &mu__condition_968, NULL, },
{"auxinv_11", &mu__condition_962, NULL, },
{"auxinv_12", &mu__condition_958, NULL, },
{"auxinv_13", &mu__condition_952, NULL, },
{"auxinv_14", &mu__condition_946, NULL, },
{"auxinv_15", &mu__condition_940, NULL, },
{"auxinv_16", &mu__condition_934, NULL, },
{"auxinv_17", &mu__condition_928, NULL, },
{"auxinv_18", &mu__condition_922, NULL, },
{"auxinv_19", &mu__condition_916, NULL, },
{"auxinv_20", &mu__condition_910, NULL, },
{"auxinv_21", &mu__condition_904, NULL, },
{"auxinv_22", &mu__condition_898, NULL, },
{"auxinv_23", &mu__condition_894, NULL, },
{"auxinv_24", &mu__condition_890, NULL, },
{"auxinv_25", &mu__condition_884, NULL, },
{"auxinv_26", &mu__condition_880, NULL, },
{"auxinv_27", &mu__condition_876, NULL, },
{"auxinv_28", &mu__condition_870, NULL, },
{"auxinv_29", &mu__condition_864, NULL, },
{"auxinv_30", &mu__condition_860, NULL, },
{"auxinv_31", &mu__condition_854, NULL, },
{"auxinv_32", &mu__condition_848, NULL, },
{"auxinv_33", &mu__condition_844, NULL, },
{"auxinv_34", &mu__condition_838, NULL, },
{"auxinv_35", &mu__condition_834, NULL, },
{"auxinv_36", &mu__condition_828, NULL, },
{"auxinv_37", &mu__condition_824, NULL, },
{"auxinv_38", &mu__condition_818, NULL, },
{"auxinv_39", &mu__condition_814, NULL, },
{"auxinv_40", &mu__condition_810, NULL, },
{"auxinv_41", &mu__condition_804, NULL, },
{"auxinv_42", &mu__condition_798, NULL, },
{"auxinv_43", &mu__condition_794, NULL, },
{"auxinv_44", &mu__condition_788, NULL, },
{"auxinv_45", &mu__condition_782, NULL, },
{"auxinv_46", &mu__condition_778, NULL, },
{"auxinv_47", &mu__condition_772, NULL, },
{"auxinv_48", &mu__condition_768, NULL, },
{"auxinv_49", &mu__condition_762, NULL, },
{"auxinv_50", &mu__condition_755, NULL, },
{"auxinv_51", &mu__condition_748, NULL, },
{"auxinv_52", &mu__condition_741, NULL, },
{"auxinv_53", &mu__condition_734, NULL, },
{"auxinv_54", &mu__condition_727, NULL, },
{"auxinv_55", &mu__condition_720, NULL, },
{"auxinv_56", &mu__condition_713, NULL, },
{"auxinv_57", &mu__condition_706, NULL, },
{"auxinv_58", &mu__condition_699, NULL, },
{"auxinv_59", &mu__condition_692, NULL, },
{"auxinv_60", &mu__condition_685, NULL, },
{"auxinv_61", &mu__condition_678, NULL, },
{"auxinv_62", &mu__condition_671, NULL, },
{"auxinv_63", &mu__condition_664, NULL, },
{"auxinv_64", &mu__condition_657, NULL, },
{"auxinv_65", &mu__condition_650, NULL, },
{"auxinv_66", &mu__condition_643, NULL, },
{"auxinv_67", &mu__condition_636, NULL, },
{"auxinv_68", &mu__condition_629, NULL, },
{"auxinv_69", &mu__condition_622, NULL, },
{"auxinv_70", &mu__condition_615, NULL, },
{"auxinv_71", &mu__condition_608, NULL, },
{"auxinv_72", &mu__condition_601, NULL, },
{"auxinv_73", &mu__condition_594, NULL, },
{"auxinv_74", &mu__condition_587, NULL, },
{"auxinv_75", &mu__condition_580, NULL, },
{"auxinv_76", &mu__condition_573, NULL, },
{"auxinv_77", &mu__condition_566, NULL, },
{"auxinv_78", &mu__condition_559, NULL, },
{"auxinv_79", &mu__condition_552, NULL, },
{"auxinv_80", &mu__condition_545, NULL, },
{"auxinv_81", &mu__condition_538, NULL, },
{"auxinv_82", &mu__condition_531, NULL, },
{"auxinv_83", &mu__condition_524, NULL, },
{"auxinv_84", &mu__condition_517, NULL, },
{"auxinv_85", &mu__condition_510, NULL, },
{"auxinv_86", &mu__condition_503, NULL, },
{"auxinv_87", &mu__condition_496, NULL, },
{"auxinv_88", &mu__condition_489, NULL, },
{"auxinv_89", &mu__condition_482, NULL, },
{"auxinv_90", &mu__condition_475, NULL, },
{"auxinv_91", &mu__condition_468, NULL, },
{"auxinv_92", &mu__condition_461, NULL, },
{"auxinv_93", &mu__condition_454, NULL, },
{"auxinv_94", &mu__condition_447, NULL, },
{"auxinv_95", &mu__condition_440, NULL, },
{"auxinv_96", &mu__condition_433, NULL, },
{"auxinv_97", &mu__condition_426, NULL, },
{"auxinv_98", &mu__condition_419, NULL, },
{"auxinv_99", &mu__condition_412, NULL, },
{"auxinv_100", &mu__condition_405, NULL, },
{"auxinv_101", &mu__condition_398, NULL, },
{"auxinv_102", &mu__condition_391, NULL, },
{"auxinv_103", &mu__condition_384, NULL, },
{"auxinv_104", &mu__condition_377, NULL, },
{"auxinv_105", &mu__condition_370, NULL, },
{"auxinv_106", &mu__condition_363, NULL, },
{"auxinv_107", &mu__condition_356, NULL, },
{"auxinv_108", &mu__condition_349, NULL, },
{"auxinv_109", &mu__condition_342, NULL, },
{"auxinv_110", &mu__condition_335, NULL, },
};
const unsigned short numinvariants = 110;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
Sta:ScalarsetArrayOfScalarset
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
  int class_mu_1_NODE[2];
  int undefined_class_mu_1_NODE;// has the highest class number

  void Print_class_mu_1_NODE();
  bool OnlyOneRemain_mu_1_NODE;
  bool MTO_class_mu_1_NODE()
  {
    int i,j;
    if (OnlyOneRemain_mu_1_NODE)
      return FALSE;
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_NODE[i]== class_mu_1_NODE[j])
	    return TRUE;
    OnlyOneRemain_mu_1_NODE = TRUE;
    return FALSE;
  }
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
  int * in_mu_1_NODE;
  typedef int arr_mu_1_NODE[2];
  arr_mu_1_NODE * perm_mu_1_NODE;
  arr_mu_1_NODE * revperm_mu_1_NODE;

  int size_mu_1_NODE[2];
  bool reversed_sorted_mu_1_NODE(int start, int end);
  void reverse_reversed_mu_1_NODE(int start, int end);

  // procedure for explicit representation
  bool ok0(mu_1_NODE* perm, int size, mu_1_NODE k);
  void GenPerm0(mu_1_NODE* perm, int size, unsigned long& index);

  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
void PermSet::Print_class_mu_1_NODE()
{
  cout << "class_mu_1_NODE:\t";
  for (int i=0; i<2; i++)
    cout << class_mu_1_NODE[i];
  cout << " " << undefined_class_mu_1_NODE << "\n";
}
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
    for (i=0; i<2; i++)
      for (j=0; j<2; j++)
        if (i!=j && class_mu_1_NODE[i]== class_mu_1_NODE[j])
	    return TRUE;
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
     || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
    mu_1_NODE Perm0[2];

  /********************
   declaration of class variables
  ********************/
  in = new bool[2];
 in_mu_1_NODE = new int[2];
 perm_mu_1_NODE = new arr_mu_1_NODE[2];
 revperm_mu_1_NODE = new arr_mu_1_NODE[2];

    // Set perm and revperm
    count = 0;
    for (i=1; i<=2; i++)
      {
        Perm0[0].value(i);
        GenPerm0(Perm0, 1, count);
      }
    if (count!=2)
      Error.Error( "unable to initialize PermSet");
    for (i=0; i<2; i++)
      for (j=1; j<=2; j++)
        for (k=1; k<=2; k++)
          if (revperm_mu_1_NODE[i][k-1]==j)   // k - base 
            perm_mu_1_NODE[i][j-1]=k; // j - base 

    // setting up combination of permutations
    // for different scalarset
    int carry;
    int i_mu_1_NODE = 0;
    size = 2;
    count = 2;
    for (i=0; i<2; i++)
      {
        carry = 1;
        in[i]= TRUE;
      in_mu_1_NODE[i] = i_mu_1_NODE;
      i_mu_1_NODE += carry;
      if (i_mu_1_NODE >= 2) { i_mu_1_NODE = 0; carry = 1; } 
      else { carry = 0; } 
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
 in_mu_1_NODE = new int[1];
 perm_mu_1_NODE = new arr_mu_1_NODE[1];
 revperm_mu_1_NODE = new arr_mu_1_NODE[1];
  in[0] = TRUE;
    in_mu_1_NODE[0] = 0;
  }
}
void PermSet::ResetToSimple()
{
  int i;
  for (i=0; i<2; i++)
    class_mu_1_NODE[i]=0;
  undefined_class_mu_1_NODE=0;
  OnlyOneRemain_mu_1_NODE = FALSE;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<2; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;
  int start_mu_1_NODE[2];
  int size_mu_1_NODE[2];
  bool should_be_in_mu_1_NODE[2];

  // Setup range for mapping
  start = 0;
  for (j=0; j<=undefined_class_mu_1_NODE; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  {
	    size_mu_1_NODE[k] = class_size;
	    start_mu_1_NODE[k] = start;
	  }
      start+=class_size;
    }

  // To be In or not to be
  for (i=0; i<2; i++) // set up
    should_be_in_mu_1_NODE[i] = TRUE;
  for (i=0; i<2; i++) // to be in or not to be
    for (k=0; k<2; k++) // step through class_mu_1_pid[k]
      if (! (perm_mu_1_NODE[i][k]-1 >=start_mu_1_NODE[k] 
	     && perm_mu_1_NODE[i][k]-1 < start_mu_1_NODE[k] + size_mu_1_NODE[k]) )
  	    {
	      should_be_in_mu_1_NODE[i] = FALSE;
	      break;
	    }

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<2; i++)
    {
      in[i] = TRUE;
      if (in[i] && !should_be_in_mu_1_NODE[in_mu_1_NODE[i]]) in[i] = FALSE;
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
  start = 0;
  for (j=0; j<=undefined_class_mu_1_NODE; j++) // class number
    {
      class_size = 0;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  class_size++;
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	if (class_mu_1_NODE[k]==j)
	  {
	    size_mu_1_NODE[k] = class_size;
	  }
      start+=class_size;
    }
  start = 0;
  for (j=0; j<=undefined_class_mu_1_NODE; j++) // class number
    {
      for (k=0; k<2; k++) // step through class_mu_1_pid[k]
	    if (class_mu_1_NODE[k]==j)
	      revperm_mu_1_NODE[0][start++] = k+1;
    }
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_NODE[0][k]==j+1)
        perm_mu_1_NODE[0][j]=k+1;
  Presentation = Explicit;
}
bool PermSet::ok0(mu_1_NODE* Perm, int size, mu_1_NODE k)
{
  for (int i=0; i<size; i++)
    if(Perm[i].value()==k)
      return FALSE;
  return TRUE;
}
void PermSet::GenPerm0(mu_1_NODE* Perm,int size, unsigned long& count)
{
  int i;
  if (size!=2)
    {
      for (i=1; i<=2; i++)
        if(ok0(Perm,size,i))
          {
            Perm[size].value(i);
            GenPerm0(Perm, size+1, count);
          }
    }
  else
    {
      for (i=1; i<=2; i++)
        revperm_mu_1_NODE[count][i-1]=Perm[i-1].value();// i - base
      count++;
    }
}
bool PermSet::reversed_sorted_mu_1_NODE(int start, int end)
{
  int i,j;

  for (i=start; i<end; i++)
    if (revperm_mu_1_NODE[0][i]<revperm_mu_1_NODE[0][i+1])
      return FALSE;
  return TRUE;
}
void PermSet::reverse_reversed_mu_1_NODE(int start, int end)
{
  int i,j;
  int temp;

  for (i=start, j=end; i<j; i++,j--) 
    {
      temp = revperm_mu_1_NODE[0][j];
      revperm_mu_1_NODE[0][j] = revperm_mu_1_NODE[0][i];
      revperm_mu_1_NODE[0][i] = temp;
    }
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
  for (start = 0; start < 2; )
    {
      end = start-1+size_mu_1_NODE[revperm_mu_1_NODE[0][start]-1];
      if (reversed_sorted_mu_1_NODE(start,end))
	       {
	  reverse_reversed_mu_1_NODE(start,end);
	  start = end+1;
	}
      else
	{
	  nexted = TRUE;
	  for (j = start; j<end; j++)
	    {
	      if (reversed_sorted_mu_1_NODE(j+1,end))
		{
		  for (k = end; k>j; k--)
		    {
		      if (revperm_mu_1_NODE[0][j]<revperm_mu_1_NODE[0][k])
			{
			  // swap j, k
			  temp = revperm_mu_1_NODE[0][j];
			  revperm_mu_1_NODE[0][j] = revperm_mu_1_NODE[0][k];
			  revperm_mu_1_NODE[0][k] = temp;
			  break;
			}
		    }
		  reverse_reversed_mu_1_NODE(j+1,end);
		  break;
		}
	    }
	  break;
	}
    }
if (!nexted) return FALSE;
  for (j=0; j<2; j++)
    for (k=0; k<2; k++)
      if (revperm_mu_1_NODE[0][k]==j+1)   // k - base 
	perm_mu_1_NODE[0][j]=k+1; // j - base 
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
void mu_1_NODE::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined())
    value(Perm.perm_mu_1_NODE[Perm.in_mu_1_NODE[i]][value()-1]); // value - base
};
void mu_1_NODE::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
            Perm.class_mu_1_NODE[i]++;
        value(1 + Perm.undefined_class_mu_1_NODE++);
      }
    else 
      {
        value(Perm.class_mu_1_NODE[value()-1]+1);
      }
}
void mu_1_NODE::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_NODE::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");

  if (defined())
    if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
      {
        // it has not been mapped to any particular value
        for (i=0; i<2; i++)
          if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
            Perm.class_mu_1_NODE[i]++;
        Perm.undefined_class_mu_1_NODE++;
      }
}
void mu_1_NODE::ArrayLimit(PermSet& Perm) {}
void mu_1_NODE::Limit(PermSet& Perm) {}
void mu_1_NODE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_OTHER::Permute(PermSet& Perm, int i) {};
void mu_1_OTHER::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_OTHER::Canonicalize(PermSet& Perm) {};
void mu_1_OTHER::SimpleLimit(PermSet& Perm) {};
void mu_1_OTHER::ArrayLimit(PermSet& Perm) {};
void mu_1_OTHER::Limit(PermSet& Perm) {};
void mu_1_OTHER::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ABS_NODE::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 1 ) && ( value() <= 2 ) )
      value(Perm.perm_mu_1_NODE[Perm.in_mu_1_NODE[i]][value()-1]+(0)); // value - base
  }
}
void mu_1_ABS_NODE::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 1 ) && ( value() <= 2 ) )
      {
        if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
          {
            // it has not been mapped to any particular value
            for (i=0; i<2; i++)
              if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
                Perm.class_mu_1_NODE[i]++;
            value(1 + Perm.undefined_class_mu_1_NODE++);
          }
        else 
          {
            value(Perm.class_mu_1_NODE[value()-1]+1);
          }
      }
  }
}
void mu_1_ABS_NODE::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_ABS_NODE::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
    if ( ( value() >= 1 ) && ( value() <= 2 ) )
      if (Perm.class_mu_1_NODE[value()-1]==Perm.undefined_class_mu_1_NODE) // value - base
        {
          // it has not been mapped to any particular value
          for (i=0; i<2; i++)
            if (Perm.class_mu_1_NODE[i] == Perm.undefined_class_mu_1_NODE && i!=value()-1)
              Perm.class_mu_1_NODE[i]++;
          Perm.undefined_class_mu_1_NODE++;
        }
  }
}
void mu_1_ABS_NODE::ArrayLimit(PermSet& Perm) {}
void mu_1_ABS_NODE::Limit(PermSet& Perm) {}
void mu_1_ABS_NODE::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for union type.\n"); };
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
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
     (*this)[j].value(temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]].value());};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_NODE[2];
  int start_mu_1_NODE[2];
  // canonicalization
  static mu_1__type_0 temp;
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_NODE())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_NODE; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              {
                size_mu_1_NODE[k] = class_size;
                start_mu_1_NODE[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_NODE[j] 
             && i < start_mu_1_NODE[j] + size_mu_1_NODE[j])
           {
             array[i+0].value(temp[j+1].value());
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_NODE[j]+0].value(temp[j+1].value());
    }
}
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
     (*this)[j].value(temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]].value());};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_NODE[2];
  int start_mu_1_NODE[2];
  // canonicalization
  static mu_1__type_1 temp;
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_NODE())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_NODE; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              {
                size_mu_1_NODE[k] = class_size;
                start_mu_1_NODE[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_NODE[j] 
             && i < start_mu_1_NODE[j] + size_mu_1_NODE[j])
           {
             array[i+0].value(temp[j+1].value());
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_NODE[j]+0].value(temp[j+1].value());
    }
}
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_0_boolean value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k].value(value[k-1].value());
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j].value((*this)[i+1].value());
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
                value[j].value((*this)[i+1].value());
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_DIR_STATE::Permute(PermSet& Perm, int i)
{
  mu_HeadPtr.Permute(Perm,i);
  mu_ShrSet.Permute(Perm,i);
  mu_InvSet.Permute(Perm,i);
};
void mu_1_DIR_STATE::SimpleCanonicalize(PermSet& Perm)
{
  mu_HeadPtr.SimpleCanonicalize(Perm);
};
void mu_1_DIR_STATE::Canonicalize(PermSet& Perm)
{
  mu_ShrSet.Canonicalize(Perm);
  mu_InvSet.Canonicalize(Perm);
};
void mu_1_DIR_STATE::SimpleLimit(PermSet& Perm)
{
  mu_HeadPtr.SimpleLimit(Perm);
};
void mu_1_DIR_STATE::ArrayLimit(PermSet& Perm)
{
  mu_ShrSet.ArrayLimit(Perm);
  mu_InvSet.ArrayLimit(Perm);
};
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
  mu_Proc.Permute(Perm,i);
};
void mu_1_UNI_MSG::SimpleCanonicalize(PermSet& Perm)
{
  mu_Proc.SimpleCanonicalize(Perm);
};
void mu_1_UNI_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_UNI_MSG::SimpleLimit(PermSet& Perm)
{
  mu_Proc.SimpleLimit(Perm);
};
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
  mu_Proc.Permute(Perm,i);
};
void mu_1_WB_MSG::SimpleCanonicalize(PermSet& Perm)
{
  mu_Proc.SimpleCanonicalize(Perm);
};
void mu_1_WB_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_WB_MSG::SimpleLimit(PermSet& Perm)
{
  mu_Proc.SimpleLimit(Perm);
};
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
  mu_Proc.Permute(Perm,i);
};
void mu_1_SHWB_MSG::SimpleCanonicalize(PermSet& Perm)
{
  mu_Proc.SimpleCanonicalize(Perm);
};
void mu_1_SHWB_MSG::Canonicalize(PermSet& Perm)
{
};
void mu_1_SHWB_MSG::SimpleLimit(PermSet& Perm)
{
  mu_Proc.SimpleLimit(Perm);
};
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
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_NODE_STATE value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_NODE[2];
  int start_mu_1_NODE[2];
  // canonicalization
  static mu_1__type_2 temp;
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_NODE())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_NODE; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              {
                size_mu_1_NODE[k] = class_size;
                start_mu_1_NODE[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_NODE[j] 
             && i < start_mu_1_NODE[j] + size_mu_1_NODE[j])
           {
             array[i+0] = temp[j+1];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_NODE[j]+0] = temp[j+1];
    }
}
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_NODE_STATE value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_UNI_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_3::Limit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_UNI_MSG value[2];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_mu_1_NODE, oldcount_mu_1_NODE;
  bool pos_mu_1_NODE[2][2];
  bool goodset_mu_1_NODE[2];
  // count_ corresponds to the number of equivalence class within the
  // scalarset value.  If count_ == size of the scalarset, then a unique
  // permutation has been found.

  // pos_ is a relation on a equivalence class number and a scalarset value.

  // initializing pos array
  for (i=0; i<2; i++)
    for (j=0; j<2; j++)
      pos_mu_1_NODE[i][j]=FALSE;
  count_mu_1_NODE = 0;
  while (1)
    {
      exists = FALSE;
      for (i=0; i<2; i++)
       if (Perm.class_mu_1_NODE[i] == count_mu_1_NODE)
         {
           pos_mu_1_NODE[count_mu_1_NODE][i]=TRUE;
           exists = TRUE;
         }
      if (exists) count_mu_1_NODE++;
      else break;
    }

  // refinement -- check selfloop
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2)
    {
      exists = FALSE;
      split = FALSE;
      // if there exists both self loop and non-self loop
      for (k=0; k<2; k++) // step through class
        if ((*this)[k+1].mu_Proc.isundefined()
            ||(*this)[k+1].mu_Proc!=k+1)
          exists = TRUE;
        else
          split = TRUE;
      if (exists && split)
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] 
                    && !(*this)[k+1].mu_Proc.isundefined()
                    && (*this)[k+1].mu_Proc==k+1)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k] ) 
                          split= TRUE;
                  if (split)
                    {
                      for (j=count_mu_1_NODE; j>i; j--)
                        for (k=0; k<2; k++)
                          pos_mu_1_NODE[j][k] = pos_mu_1_NODE[j-1][k];
                      for (k=0; k<2; k++)
                        {
                          if (pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k])
                            pos_mu_1_NODE[i][k] = FALSE;
                          if (pos_mu_1_NODE[i+1][k] && goodset_mu_1_NODE[k])
                            pos_mu_1_NODE[i+1][k] = FALSE;
                        }
                      count_mu_1_NODE++; i++;
                    }
                }
            }
        }
    }

  // refinement -- checking priority in general
  while_guard = FALSE;
  while_guard = while_guard || (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2);
  while ( while_guard )
    {
      oldcount_mu_1_NODE = count_mu_1_NODE;

      // refinement -- graph structure for a single scalarset
      //               as in array S1 of S1
      // only if there is more than 1 permutation in class
      if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE<2)
        {
          exists = FALSE;
          split = FALSE;
          for (k=0; k<2; k++) // step through class
            if (!(*this)[k+1].mu_Proc.isundefined()
                &&(*this)[k+1].mu_Proc!=k+1
                &&(*this)[k+1].mu_Proc>=1
                &&(*this)[k+1].mu_Proc<=2)
              exists = TRUE;
          if (exists)
            {
              for (i=0; i<count_mu_1_NODE; i++) // for value priority
                {
                  for (j=0; j<count_mu_1_NODE; j++) // for value priority
                    {
                      exists = FALSE;
                      for (k=0; k<2; k++) // step through class
                        goodset_mu_1_NODE[k] = FALSE;
                      for (k=0; k<2; k++) // step through class
                        if (pos_mu_1_NODE[i][k] 
                            && !(*this)[k+1].mu_Proc.isundefined()
                            && (*this)[k+1].mu_Proc!=k+1
                            && (*this)[k+1].mu_Proc>=1
                            && (*this)[k+1].mu_Proc<=2
                            && pos_mu_1_NODE[j][(*this)[k+1].mu_Proc-1])
                          {
                            exists = TRUE;
                            goodset_mu_1_NODE[k] = TRUE;
                          }
                      if (exists)
                        {
                          split=FALSE;
                          for (k=0; k<2; k++)
                            if ( pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k] ) 
                              split= TRUE;
                          if (split)
                            {
                              for (j=count_mu_1_NODE; j>i; j--)
                                for (k=0; k<2; k++)
                                  pos_mu_1_NODE[j][k] = pos_mu_1_NODE[j-1][k];
                              for (k=0; k<2; k++)
                                {
                                  if (pos_mu_1_NODE[i][k] && !goodset_mu_1_NODE[k])
                                    pos_mu_1_NODE[i][k] = FALSE;
                                  if (pos_mu_1_NODE[i+1][k] && goodset_mu_1_NODE[k])
                                    pos_mu_1_NODE[i+1][k] = FALSE;                  
                                }
                              count_mu_1_NODE++;
                            }
                        }
                    }
                }
            }
        }
      while_guard = FALSE;
      while_guard = while_guard || (oldcount_mu_1_NODE!=count_mu_1_NODE);
      while_guard_temp = while_guard;
      while_guard = FALSE;
      while_guard = while_guard || count_mu_1_NODE<2;
      while_guard = while_guard && while_guard_temp;
    } // end while
  // enter the result into class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          if (pos_mu_1_NODE[i][j])
            Perm.class_mu_1_NODE[j] = i;
      Perm.undefined_class_mu_1_NODE=0;
      for (j=0; j<2; j++)
        if (Perm.class_mu_1_NODE[j]>Perm.undefined_class_mu_1_NODE)
          Perm.undefined_class_mu_1_NODE=Perm.class_mu_1_NODE[j];
    }
}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_INV_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_NODE[2];
  int start_mu_1_NODE[2];
  // canonicalization
  static mu_1__type_4 temp;
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_NODE())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_NODE; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              {
                size_mu_1_NODE[k] = class_size;
                start_mu_1_NODE[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_NODE[j] 
             && i < start_mu_1_NODE[j] + size_mu_1_NODE[j])
           {
             array[i+0] = temp[j+1];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_NODE[j]+0] = temp[j+1];
    }
}
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_INV_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
  temp = *this;
  for (j=1; j<=2; j++)
    (*this)[j] = temp[Perm.revperm_mu_1_NODE[Perm.in_mu_1_NODE[i]][j-1]];};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_RP_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // range mapping
  int start;
  int class_size;
  int size_mu_1_NODE[2];
  int start_mu_1_NODE[2];
  // canonicalization
  static mu_1__type_5 temp;
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
  if (Perm.MTO_class_mu_1_NODE())
    {

      // setup range for maping
      start = 0;
      for (j=0; j<=Perm.undefined_class_mu_1_NODE; j++) // class number
        {
          class_size = 0;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              class_size++;
          for (k=0; k<2; k++) // step through class[k]
            if (Perm.class_mu_1_NODE[k]==j)
              {
                size_mu_1_NODE[k] = class_size;
                start_mu_1_NODE[k] = start;
              }
          start+=class_size;
        }

      // canonicalize
      temp = *this;
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
         if (i >=start_mu_1_NODE[j] 
             && i < start_mu_1_NODE[j] + size_mu_1_NODE[j])
           {
             array[i+0] = temp[j+1];
             break;
           }
    }
  else
    {

      // fast canonicalize
      temp = *this;
      for (j=0; j<2; j++)
        array[Perm.class_mu_1_NODE[j]+0] = temp[j+1];
    }
}
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int count_mu_1_NODE;
  int compare;
  static mu_1_RP_MSG value[2];
  // limit
  bool exists;
  bool split;
  bool goodset_mu_1_NODE[2];
  bool pos_mu_1_NODE[2][2];
  // sorting mu_1_NODE
  // only if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE())
    {
      for (i=0; i<2; i++)
        for (j=0; j<2; j++)
          pos_mu_1_NODE[i][j]=FALSE;
      count_mu_1_NODE = 0;
      for (i=0; i<2; i++)
        {
          for (j=0; j<count_mu_1_NODE; j++)
            {
              compare = CompareWeight(value[j],(*this)[i+1]);
              if (compare==0)
                {
                  pos_mu_1_NODE[j][i]= TRUE;
                  break;
                }
              else if (compare>0)
                {
                  for (k=count_mu_1_NODE; k>j; k--)
                    {
                      value[k] = value[k-1];
                      for (z=0; z<2; z++)
                        pos_mu_1_NODE[k][z] = pos_mu_1_NODE[k-1][z];
                    }
                  value[j] = (*this)[i+1];
                  for (z=0; z<2; z++)
                    pos_mu_1_NODE[j][z] = FALSE;
                  pos_mu_1_NODE[j][i] = TRUE;
                  count_mu_1_NODE++;
                  break;
                }
            }
          if (j==count_mu_1_NODE)
            {
              value[j] = (*this)[i+1];
              for (z=0; z<2; z++)
                pos_mu_1_NODE[j][z] = FALSE;
              pos_mu_1_NODE[j][i] = TRUE;
              count_mu_1_NODE++;
            }
        }
    }
  // if there is more than 1 permutation in class
  if (Perm.MTO_class_mu_1_NODE() && count_mu_1_NODE>1)
    {
      // limit
      for (j=0; j<2; j++) // class priority
        {
          for (i=0; i<count_mu_1_NODE; i++) // for value priority
            {
              exists = FALSE;
              for (k=0; k<2; k++) // step through class
                goodset_mu_1_NODE[k] = FALSE;
              for (k=0; k<2; k++) // step through class
                if (pos_mu_1_NODE[i][k] && Perm.class_mu_1_NODE[k] == j)
                  {
                    exists = TRUE;
                    goodset_mu_1_NODE[k] = TRUE;
                    pos_mu_1_NODE[i][k] = FALSE;
                  }
              if (exists)
                {
                  split=FALSE;
                  for (k=0; k<2; k++)
                    if ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) 
                      split= TRUE;
                  if (split)
                    {
                      for (k=0; k<2; k++)
                        if (Perm.class_mu_1_NODE[k]>j
                            || ( Perm.class_mu_1_NODE[k] == j && !goodset_mu_1_NODE[k] ) )
                          Perm.class_mu_1_NODE[k]++;
                      Perm.undefined_class_mu_1_NODE++;
                    }
                }
            }
        }
    }
}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_STATE::Permute(PermSet& Perm, int i)
{
  mu_Proc.Permute(Perm,i);
  mu_Dir.Permute(Perm,i);
  mu_UniMsg.Permute(Perm,i);
  mu_HomeUniMsg.Permute(Perm,i);
  mu_InvMsg.Permute(Perm,i);
  mu_RpMsg.Permute(Perm,i);
  mu_WbMsg.Permute(Perm,i);
  mu_ShWbMsg.Permute(Perm,i);
  mu_PendReqSrc.Permute(Perm,i);
};
void mu_1_STATE::SimpleCanonicalize(PermSet& Perm)
{
  mu_Dir.SimpleCanonicalize(Perm);
  mu_HomeUniMsg.SimpleCanonicalize(Perm);
  mu_WbMsg.SimpleCanonicalize(Perm);
  mu_ShWbMsg.SimpleCanonicalize(Perm);
  mu_PendReqSrc.SimpleCanonicalize(Perm);
};
void mu_1_STATE::Canonicalize(PermSet& Perm)
{
  mu_Proc.Canonicalize(Perm);
  mu_Dir.Canonicalize(Perm);
  mu_InvMsg.Canonicalize(Perm);
  mu_RpMsg.Canonicalize(Perm);
};
void mu_1_STATE::SimpleLimit(PermSet& Perm)
{
  mu_Dir.SimpleLimit(Perm);
  mu_HomeUniMsg.SimpleLimit(Perm);
  mu_WbMsg.SimpleLimit(Perm);
  mu_ShWbMsg.SimpleLimit(Perm);
  mu_PendReqSrc.SimpleLimit(Perm);
};
void mu_1_STATE::ArrayLimit(PermSet& Perm)
{
  mu_Proc.ArrayLimit(Perm);
  mu_Dir.ArrayLimit(Perm);
  mu_UniMsg.ArrayLimit(Perm);
  mu_InvMsg.ArrayLimit(Perm);
  mu_RpMsg.ArrayLimit(Perm);
};
void mu_1_STATE::Limit(PermSet& Perm)
{
  mu_UniMsg.Limit(Perm);
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
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize
         || args->sym_alg.mode == argsym_alg::Heuristic_Fast_Canonicalize) {
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

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.Limit(Perm);
  }

  Perm.SimpleToExplicit();

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
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.Limit(Perm);
  }

  Perm.SimpleToOne();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  mu_Sta.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Sta.MultisetSort();
  BestPermutedState = *workingstate;
  BestInitialized = TRUE;

  cycle=1;
  while (Perm.NextPermutation())
    {
      if (args->perm_limit.value != 0
          && cycle++ >= args->perm_limit.value) break;
      StateCopy(workingstate, &temp);
      mu_Sta.Permute(Perm,0);
      if (args->multiset_reduction.value)
        mu_Sta.MultisetSort();
      switch (StateCmp(workingstate, &BestPermutedState)) {
      case -1:
        BestPermutedState = *workingstate;
        break;
      case 1:
        break;
      case 0:
        break;
      default:
        Error.Error("funny return value from StateCmp");
      }
    }
  StateCopy(workingstate, &BestPermutedState);

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

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.ArrayLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_Sta.Limit(Perm);
  }

  Perm.SimpleToOne();

  mu_Sta.Permute(Perm,0);
  if (args->multiset_reduction.value)
    mu_Sta.MultisetSort();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
