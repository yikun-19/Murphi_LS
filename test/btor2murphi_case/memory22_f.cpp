/******************************
  Program "./btor2murphi_case/memory22_f.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "May 15 2022"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "May 15 2022"
#define PROTOCOL_NAME "./btor2murphi_case/memory22_f"
#define BITS_IN_WORLD 496
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu__subrange_3: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_3& val) { return mu__byte::operator=((int) val); };
  mu__subrange_3 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_3 (void): mu__byte(0, 0, 1) {};
  mu__subrange_3 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_3 mu__subrange_3_undefined_var;

class mu_1_bitvec_1
{
 public:
  mu_0_boolean array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_bitvec_1 (const char *n, int os) { set_self(n, os); };
  mu_1_bitvec_1 ( void ) {};
  virtual ~mu_1_bitvec_1 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 0 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_bitvec_1& operator= (const mu_1_bitvec_1& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1_bitvec_1& a, mu_1_bitvec_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_bitvec_1& a, mu_1_bitvec_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
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
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_bitvec_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_bitvec_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_bitvec_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_bitvec_1::~mu_1_bitvec_1()
{
}
/*** end array declaration ***/
mu_1_bitvec_1 mu_1_bitvec_1_undefined_var;

class mu__subrange_5: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_5& val) { return mu__byte::operator=((int) val); };
  mu__subrange_5 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_5 (void): mu__byte(0, 1, 2) {};
  mu__subrange_5 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_5 mu__subrange_5_undefined_var;

class mu_1_bitvec_2
{
 public:
  mu_0_boolean array[ 2 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_bitvec_2 (const char *n, int os) { set_self(n, os); };
  mu_1_bitvec_2 ( void ) {};
  virtual ~mu_1_bitvec_2 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 1 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_bitvec_2& operator= (const mu_1_bitvec_2& from)
  {
    for (int i = 0; i < 2; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_bitvec_2& a, mu_1_bitvec_2& b)
  {
    int w;
    for (int i=0; i<2; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_bitvec_2& a, mu_1_bitvec_2& b)
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

  void mu_1_bitvec_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_bitvec_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_bitvec_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 2; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_bitvec_2::~mu_1_bitvec_2()
{
}
/*** end array declaration ***/
mu_1_bitvec_2 mu_1_bitvec_2_undefined_var;

class mu__subrange_7: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_7& val) { return mu__byte::operator=((int) val); };
  mu__subrange_7 (const char *name, int os): mu__byte(0, 30, 5, name, os) {};
  mu__subrange_7 (void): mu__byte(0, 30, 5) {};
  mu__subrange_7 (int val): mu__byte(0, 30, 5, "Parameter or function result.", 0)
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
mu__subrange_7 mu__subrange_7_undefined_var;

class mu_1_bitvec_31
{
 public:
  mu_0_boolean array[ 31 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_bitvec_31 (const char *n, int os) { set_self(n, os); };
  mu_1_bitvec_31 ( void ) {};
  virtual ~mu_1_bitvec_31 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 30 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_bitvec_31& operator= (const mu_1_bitvec_31& from)
  {
    for (int i = 0; i < 31; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_bitvec_31& a, mu_1_bitvec_31& b)
  {
    int w;
    for (int i=0; i<31; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_bitvec_31& a, mu_1_bitvec_31& b)
  {
    int w;
    for (int i=0; i<31; i++) {
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
    for (int i=0; i<31; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<31; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 31; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 31; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 31; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 31; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 31; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 31; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_bitvec_31::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_bitvec_31::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_bitvec_31::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 31; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_bitvec_31::~mu_1_bitvec_31()
{
}
/*** end array declaration ***/
mu_1_bitvec_31 mu_1_bitvec_31_undefined_var;

class mu__subrange_9: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_9& val) { return mu__byte::operator=((int) val); };
  mu__subrange_9 (const char *name, int os): mu__byte(0, 31, 6, name, os) {};
  mu__subrange_9 (void): mu__byte(0, 31, 6) {};
  mu__subrange_9 (int val): mu__byte(0, 31, 6, "Parameter or function result.", 0)
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
mu__subrange_9 mu__subrange_9_undefined_var;

class mu_1_bitvec_32
{
 public:
  mu_0_boolean array[ 32 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_bitvec_32 (const char *n, int os) { set_self(n, os); };
  mu_1_bitvec_32 ( void ) {};
  virtual ~mu_1_bitvec_32 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 31 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_bitvec_32& operator= (const mu_1_bitvec_32& from)
  {
    for (int i = 0; i < 32; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_bitvec_32& a, mu_1_bitvec_32& b)
  {
    int w;
    for (int i=0; i<32; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_bitvec_32& a, mu_1_bitvec_32& b)
  {
    int w;
    for (int i=0; i<32; i++) {
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
    for (int i=0; i<32; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<32; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 32; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 32; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 32; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 32; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 32; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 32; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_bitvec_32::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_bitvec_32::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_bitvec_32::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 32; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_bitvec_32::~mu_1_bitvec_32()
{
}
/*** end array declaration ***/
mu_1_bitvec_32 mu_1_bitvec_32_undefined_var;

class mu__subrange_11: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_11& val) { return mu__byte::operator=((int) val); };
  mu__subrange_11 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu__subrange_11 (void): mu__byte(0, 3, 3) {};
  mu__subrange_11 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu__subrange_11 mu__subrange_11_undefined_var;

class mu_1_array_2_2
{
 public:
  mu_1_bitvec_2 array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_array_2_2 (const char *n, int os) { set_self(n, os); };
  mu_1_array_2_2 ( void ) {};
  virtual ~mu_1_array_2_2 ();
  mu_1_bitvec_2& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 3 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_array_2_2& operator= (const mu_1_array_2_2& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1_array_2_2& a, mu_1_array_2_2& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_array_2_2& a, mu_1_array_2_2& b)
  {
    int w;
    for (int i=0; i<4; i++) {
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
    for (int i=0; i<4; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<4; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 4; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 4; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 4; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 4; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 4; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 4; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_array_2_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_array_2_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_array_2_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 16 + os);
    delete[] s;
  }
};
mu_1_array_2_2::~mu_1_array_2_2()
{
}
/*** end array declaration ***/
mu_1_array_2_2 mu_1_array_2_2_undefined_var;

class mu_1_int_4: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_int_4& val) { return mu__byte::operator=((int) val); };
  mu_1_int_4 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_int_4 (void): mu__byte(0, 3, 3) {};
  mu_1_int_4 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu_1_int_4 mu_1_int_4_undefined_var;

class mu__subrange_14: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_14& val) { return mu__byte::operator=((int) val); };
  mu__subrange_14 (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu__subrange_14 (void): mu__byte(0, 2, 2) {};
  mu__subrange_14 (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
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
mu__subrange_14 mu__subrange_14_undefined_var;

class mu_1_bitvec_3
{
 public:
  mu_0_boolean array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_bitvec_3 (const char *n, int os) { set_self(n, os); };
  mu_1_bitvec_3 ( void ) {};
  virtual ~mu_1_bitvec_3 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 2 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1_bitvec_3& operator= (const mu_1_bitvec_3& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_bitvec_3& a, mu_1_bitvec_3& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_bitvec_3& a, mu_1_bitvec_3& b)
  {
    int w;
    for (int i=0; i<3; i++) {
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
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1_bitvec_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_bitvec_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_bitvec_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_bitvec_3::~mu_1_bitvec_3()
{
}
/*** end array declaration ***/
mu_1_bitvec_3 mu_1_bitvec_3_undefined_var;

class mu_1_int_2: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_int_2& val) { return mu__byte::operator=((int) val); };
  mu_1_int_2 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu_1_int_2 (void): mu__byte(0, 1, 2) {};
  mu_1_int_2 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu_1_int_2 mu_1_int_2_undefined_var;

class mu_1_int_1: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_int_1& val) { return mu__byte::operator=((int) val); };
  mu_1_int_1 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu_1_int_1 (void): mu__byte(0, 0, 1) {};
  mu_1_int_1 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu_1_int_1 mu_1_int_1_undefined_var;

class mu__subrange_18: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_18& val) { return mu__byte::operator=((int) val); };
  mu__subrange_18 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_18 (void): mu__byte(0, 0, 1) {};
  mu__subrange_18 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_18 mu__subrange_18_undefined_var;

class mu__subrange_19: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_19& val) { return mu__byte::operator=((int) val); };
  mu__subrange_19 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_19 (void): mu__byte(0, 0, 1) {};
  mu__subrange_19 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_19 mu__subrange_19_undefined_var;

class mu__subrange_20: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_20& val) { return mu__byte::operator=((int) val); };
  mu__subrange_20 (const char *name, int os): mu__byte(0, 30, 5, name, os) {};
  mu__subrange_20 (void): mu__byte(0, 30, 5) {};
  mu__subrange_20 (int val): mu__byte(0, 30, 5, "Parameter or function result.", 0)
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
mu__subrange_20 mu__subrange_20_undefined_var;

class mu__subrange_21: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_21& val) { return mu__byte::operator=((int) val); };
  mu__subrange_21 (const char *name, int os): mu__byte(31, 31, 1, name, os) {};
  mu__subrange_21 (void): mu__byte(31, 31, 1) {};
  mu__subrange_21 (int val): mu__byte(31, 31, 1, "Parameter or function result.", 0)
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
mu__subrange_21 mu__subrange_21_undefined_var;

class mu__subrange_22: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_22& val) { return mu__byte::operator=((int) val); };
  mu__subrange_22 (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu__subrange_22 (void): mu__byte(1, 1, 1) {};
  mu__subrange_22 (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu__subrange_22 mu__subrange_22_undefined_var;

class mu__subrange_23: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_23& val) { return mu__byte::operator=((int) val); };
  mu__subrange_23 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_23 (void): mu__byte(0, 0, 1) {};
  mu__subrange_23 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_23 mu__subrange_23_undefined_var;

class mu__subrange_24: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_24& val) { return mu__byte::operator=((int) val); };
  mu__subrange_24 (const char *name, int os): mu__byte(0, 31, 6, name, os) {};
  mu__subrange_24 (void): mu__byte(0, 31, 6) {};
  mu__subrange_24 (int val): mu__byte(0, 31, 6, "Parameter or function result.", 0)
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
mu__subrange_24 mu__subrange_24_undefined_var;

class mu__subrange_25: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_25& val) { return mu__byte::operator=((int) val); };
  mu__subrange_25 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_25 (void): mu__byte(0, 0, 1) {};
  mu__subrange_25 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_25 mu__subrange_25_undefined_var;

class mu__subrange_26: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_26& val) { return mu__byte::operator=((int) val); };
  mu__subrange_26 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_26 (void): mu__byte(0, 1, 2) {};
  mu__subrange_26 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_26 mu__subrange_26_undefined_var;

class mu__subrange_27: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_27& val) { return mu__byte::operator=((int) val); };
  mu__subrange_27 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_27 (void): mu__byte(0, 0, 1) {};
  mu__subrange_27 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_27 mu__subrange_27_undefined_var;

class mu__subrange_28: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_28& val) { return mu__byte::operator=((int) val); };
  mu__subrange_28 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_28 (void): mu__byte(0, 0, 1) {};
  mu__subrange_28 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_28 mu__subrange_28_undefined_var;

class mu__subrange_29: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_29& val) { return mu__byte::operator=((int) val); };
  mu__subrange_29 (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu__subrange_29 (void): mu__byte(1, 1, 1) {};
  mu__subrange_29 (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
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
mu__subrange_29 mu__subrange_29_undefined_var;

class mu__subrange_30: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_30& val) { return mu__byte::operator=((int) val); };
  mu__subrange_30 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_30 (void): mu__byte(0, 1, 2) {};
  mu__subrange_30 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_30 mu__subrange_30_undefined_var;

class mu__subrange_31: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_31& val) { return mu__byte::operator=((int) val); };
  mu__subrange_31 (const char *name, int os): mu__byte(1, 2, 2, name, os) {};
  mu__subrange_31 (void): mu__byte(1, 2, 2) {};
  mu__subrange_31 (int val): mu__byte(1, 2, 2, "Parameter or function result.", 0)
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
mu__subrange_31 mu__subrange_31_undefined_var;

class mu__subrange_32: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_32& val) { return mu__byte::operator=((int) val); };
  mu__subrange_32 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_32 (void): mu__byte(0, 1, 2) {};
  mu__subrange_32 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_32 mu__subrange_32_undefined_var;

class mu__subrange_33: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_33& val) { return mu__byte::operator=((int) val); };
  mu__subrange_33 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_33 (void): mu__byte(0, 1, 2) {};
  mu__subrange_33 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_33 mu__subrange_33_undefined_var;

class mu__subrange_34: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_34& val) { return mu__byte::operator=((int) val); };
  mu__subrange_34 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_34 (void): mu__byte(0, 1, 2) {};
  mu__subrange_34 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_34 mu__subrange_34_undefined_var;

class mu__subrange_35: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_35& val) { return mu__byte::operator=((int) val); };
  mu__subrange_35 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_35 (void): mu__byte(0, 0, 1) {};
  mu__subrange_35 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_35 mu__subrange_35_undefined_var;

class mu__subrange_36: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_36& val) { return mu__byte::operator=((int) val); };
  mu__subrange_36 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_36 (void): mu__byte(0, 0, 1) {};
  mu__subrange_36 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_36 mu__subrange_36_undefined_var;

class mu__subrange_37: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_37& val) { return mu__byte::operator=((int) val); };
  mu__subrange_37 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_37 (void): mu__byte(0, 0, 1) {};
  mu__subrange_37 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_37 mu__subrange_37_undefined_var;

class mu__subrange_38: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_38& val) { return mu__byte::operator=((int) val); };
  mu__subrange_38 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_38 (void): mu__byte(0, 0, 1) {};
  mu__subrange_38 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_38 mu__subrange_38_undefined_var;

class mu__subrange_39: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_39& val) { return mu__byte::operator=((int) val); };
  mu__subrange_39 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_39 (void): mu__byte(0, 0, 1) {};
  mu__subrange_39 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_39 mu__subrange_39_undefined_var;

class mu__subrange_40: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_40& val) { return mu__byte::operator=((int) val); };
  mu__subrange_40 (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu__subrange_40 (void): mu__byte(0, 0, 1) {};
  mu__subrange_40 (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
mu__subrange_40 mu__subrange_40_undefined_var;

class mu__subrange_41: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_41& val) { return mu__byte::operator=((int) val); };
  mu__subrange_41 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_41 (void): mu__byte(0, 1, 2) {};
  mu__subrange_41 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_41 mu__subrange_41_undefined_var;

class mu__subrange_42: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_42& val) { return mu__byte::operator=((int) val); };
  mu__subrange_42 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_42 (void): mu__byte(0, 1, 2) {};
  mu__subrange_42 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_42 mu__subrange_42_undefined_var;

class mu__subrange_43: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_43& val) { return mu__byte::operator=((int) val); };
  mu__subrange_43 (const char *name, int os): mu__byte(0, 1, 2, name, os) {};
  mu__subrange_43 (void): mu__byte(0, 1, 2) {};
  mu__subrange_43 (int val): mu__byte(0, 1, 2, "Parameter or function result.", 0)
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
mu__subrange_43 mu__subrange_43_undefined_var;

class mu__subrange_44: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu__subrange_44& val) { return mu__byte::operator=((int) val); };
  mu__subrange_44 (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu__subrange_44 (void): mu__byte(0, 3, 3) {};
  mu__subrange_44 (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu__subrange_44 mu__subrange_44_undefined_var;

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node11("node11",0);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node13("node13",8);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node18("node18",16);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node19("node19",24);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_flag("flag",32);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node37("node37",40);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_out_data("out_data",48);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node52("node52",64);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_random_data("random_data",80);

/*** Variable declaration ***/
mu_1_array_2_2 mu_mem("mem",96);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node12("node12",160);

/*** Variable declaration ***/
mu_1_bitvec_31 mu_node26("node26",168);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node31("node31",416);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node78("node78",424);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node88("node88",440);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node104("node104",456);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node121("node121",472);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_badNode("badNode",488);

mu_1_bitvec_1 mu_not_1(mu_1_bitvec_1& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_res[mu_i] = !(mu_a[mu_i]);
};
};
return mu_res;
	Error.Error("The end of function not_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_and_1(mu_1_bitvec_1& mu_a,mu_1_bitvec_1& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
bool mu__boolexpr0;
  if (!(mu_a[mu_i])) mu__boolexpr0 = FALSE ;
  else {
  mu__boolexpr0 = (mu_b[mu_i]) ; 
}
mu_res[mu_i] = mu__boolexpr0;
};
};
return mu_res;
	Error.Error("The end of function and_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_32 mu_concat_31_1(mu_1_bitvec_31& mu_a,mu_1_bitvec_1& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_32 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 30; mu_i++) {
mu_res[mu_i] = mu_a[mu_i];
};
};
{
for(int mu_i = 31; mu_i <= 31; mu_i++) {
mu_res[mu_i] = mu_b[(31) - (mu_i)];
};
};
return mu_res;
	Error.Error("The end of function concat_31_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_slice_1_2_1_1(mu_1_bitvec_2& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

/*** Variable declaration ***/
mu_1_int_2 mu_i("i",8);

mu_i = 0;
{
for(int mu_j = 1; mu_j <= 1; mu_j++) {
mu_res[mu_i] = mu_a[mu_j];
mu_i = (mu_i) + (1);
};
};
return mu_res;
	Error.Error("The end of function slice_1_2_1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_slice_1_2_0_0(mu_1_bitvec_2& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

/*** Variable declaration ***/
mu_1_int_2 mu_i("i",8);

mu_i = 0;
{
for(int mu_j = 0; mu_j <= 0; mu_j++) {
mu_res[mu_i] = mu_a[mu_j];
mu_i = (mu_i) + (1);
};
};
return mu_res;
	Error.Error("The end of function slice_1_2_0_0 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_redor_32(mu_1_bitvec_32& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

mu_res[0] = mu_false;
{
for(int mu_i = 0; mu_i <= 31; mu_i++) {
bool mu__boolexpr1;
  if (mu_res[0]) mu__boolexpr1 = TRUE ;
  else {
  mu__boolexpr1 = (mu_a[mu_i]) ; 
}
mu_res[0] = mu__boolexpr1;
};
};
return mu_res;
	Error.Error("The end of function redor_32 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_or_1(mu_1_bitvec_1& mu_a,mu_1_bitvec_1& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
bool mu__boolexpr2;
  if (mu_a[mu_i]) mu__boolexpr2 = TRUE ;
  else {
  mu__boolexpr2 = (mu_b[mu_i]) ; 
}
mu_res[mu_i] = mu__boolexpr2;
};
};
return mu_res;
	Error.Error("The end of function or_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_2 mu_uext_2_0(mu_1_bitvec_2& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_2 mu_res("res",0);

mu_res = mu_a;
return mu_res;
	Error.Error("The end of function uext_2_0 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_eq_2(mu_1_bitvec_2& mu_a,mu_1_bitvec_2& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

mu_res[0] = mu_true;
{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
if ( (mu_a[mu_i]) != (mu_b[mu_i]) )
{
mu_res[0] = mu_false;
}
};
};
return mu_res;
	Error.Error("The end of function eq_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_int_4 mu_binary2int_2(mu_1_bitvec_2& mu_a)
{
/*** Variable declaration ***/
mu_1_int_4 mu_res("res",0);

/*** Variable declaration ***/
mu_1_int_4 mu_t("t",8);

/*** Variable declaration ***/
mu_1_int_4 mu_j("j",16);

mu_res = 0;
{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_t = 1;
mu_j = mu_i;
{
  bool mu__while_expr_4;  mu__while_expr_4 = (mu_j) > (0);
int mu__counter_3 = 0;
while (mu__while_expr_4) {
if ( ++mu__counter_3 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_t = (mu_t) * (2);
mu_j = (mu_j) - (1);
};
mu__while_expr_4 = (mu_j) > (0);
}
};
if ( (mu_a[mu_i]) == (mu_true) )
{
mu_res = (mu_res) + (mu_t);
}
};
};
return mu_res;
	Error.Error("The end of function binary2int_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_2 mu_read_2_2(mu_1_array_2_2& mu_a,mu_1_bitvec_2& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_2 mu_res("res",0);

/*** Variable declaration ***/
mu_1_int_4 mu_idx("idx",16);

mu_idx = mu_binary2int_2( mu_b );
mu_res = mu_a[mu_idx];
return mu_res;
	Error.Error("The end of function read_2_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_2 mu_concat_1_1(mu_1_bitvec_1& mu_a,mu_1_bitvec_1& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_2 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_res[mu_i] = mu_a[mu_i];
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_res[mu_i] = mu_b[(1) - (mu_i)];
};
};
return mu_res;
	Error.Error("The end of function concat_1_1 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_2 mu_not_2(mu_1_bitvec_2& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_2 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
mu_res[mu_i] = !(mu_a[mu_i]);
};
};
return mu_res;
	Error.Error("The end of function not_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_ult_2(mu_1_bitvec_2& mu_a,mu_1_bitvec_2& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_3 mu_carry("carry",0);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_Not_b("Not_b",24);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",40);

mu_Not_b = mu_not_2( mu_b );
mu_carry[0] = mu_true;
{
for(int mu_i = 1; mu_i <= 2; mu_i++) {
bool mu__boolexpr5;
bool mu__boolexpr6;
  if (!(mu_a[(mu_i) - (1)])) mu__boolexpr6 = FALSE ;
  else {
  mu__boolexpr6 = (mu_Not_b[(mu_i) - (1)]) ; 
}
  if (mu__boolexpr6) mu__boolexpr5 = TRUE ;
  else {
bool mu__boolexpr7;
bool mu__boolexpr8;
bool mu__boolexpr9;
  if (!(!(mu_a[(mu_i) - (1)]))) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = (mu_Not_b[(mu_i) - (1)]) ; 
}
  if (mu__boolexpr9) mu__boolexpr8 = TRUE ;
  else {
bool mu__boolexpr10;
  if (!(mu_a[(mu_i) - (1)])) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = (!(mu_Not_b[(mu_i) - (1)])) ; 
}
  mu__boolexpr8 = (mu__boolexpr10) ; 
}
  if (!(mu__boolexpr8)) mu__boolexpr7 = FALSE ;
  else {
  mu__boolexpr7 = (mu_carry[(mu_i) - (1)]) ; 
}
  mu__boolexpr5 = (mu__boolexpr7) ; 
}
mu_carry[mu_i] = mu__boolexpr5;
};
};
mu_res[0] = ((mu_carry[2]) == (mu_true)) ? (mu_false) : (mu_true);
return mu_res;
	Error.Error("The end of function ult_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_2 mu_and_2(mu_1_bitvec_2& mu_a,mu_1_bitvec_2& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_2 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
bool mu__boolexpr11;
  if (!(mu_a[mu_i])) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = (mu_b[mu_i]) ; 
}
mu_res[mu_i] = mu__boolexpr11;
};
};
return mu_res;
	Error.Error("The end of function and_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_2 mu_or_2(mu_1_bitvec_2& mu_a,mu_1_bitvec_2& mu_b)
{
/*** Variable declaration ***/
mu_1_bitvec_2 mu_res("res",0);

{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
bool mu__boolexpr12;
  if (mu_a[mu_i]) mu__boolexpr12 = TRUE ;
  else {
  mu__boolexpr12 = (mu_b[mu_i]) ; 
}
mu_res[mu_i] = mu__boolexpr12;
};
};
return mu_res;
	Error.Error("The end of function or_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_array_2_2 mu_write_2_2(mu_1_array_2_2& mu_a,mu_1_bitvec_2& mu_b,mu_1_bitvec_2& mu_c)
{
/*** Variable declaration ***/
mu_1_array_2_2 mu_res("res",0);

/*** Variable declaration ***/
mu_1_int_4 mu_idx("idx",64);

mu_idx = mu_binary2int_2( mu_b );
mu_res = mu_a;
mu_res[mu_idx] = mu_c;
return mu_res;
	Error.Error("The end of function write_2_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_redor_2(mu_1_bitvec_2& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

mu_res[0] = mu_false;
{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
bool mu__boolexpr13;
  if (mu_res[0]) mu__boolexpr13 = TRUE ;
  else {
  mu__boolexpr13 = (mu_a[mu_i]) ; 
}
mu_res[0] = mu__boolexpr13;
};
};
return mu_res;
	Error.Error("The end of function redor_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_1 mu_int2binary_2(const mu_1_int_2& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_1 mu_res("res",0);

/*** Variable declaration ***/
mu_1_int_1 mu_i("i",8);

/*** Variable declaration ***/
mu_1_int_2 mu_n("n",16);

mu_i = 0;
if (mu_a.isundefined())
  mu_n.undefine();
else
  mu_n = mu_a;
{
for(int mu_j = 0; mu_j <= 0; mu_j++) {
mu_res[mu_j] = mu_false;
};
};
{
  bool mu__while_expr_15;  mu__while_expr_15 = (mu_n) != (0);
int mu__counter_14 = 0;
while (mu__while_expr_15) {
if ( ++mu__counter_14 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_res[mu_i] = (((mu_n) % (2)) == (0)) ? (mu_false) : (mu_true);
mu_n = (mu_n) / (2);
if ( (mu_n) != (0) )
{
mu_i = (mu_i) + (1);
}
};
mu__while_expr_15 = (mu_n) != (0);
}
};
return mu_res;
	Error.Error("The end of function int2binary_2 reached without returning values.");
};
/*** end function declaration ***/

mu_1_bitvec_2 mu_int2binary_4(const mu_1_int_4& mu_a)
{
/*** Variable declaration ***/
mu_1_bitvec_2 mu_res("res",0);

/*** Variable declaration ***/
mu_1_int_2 mu_i("i",16);

/*** Variable declaration ***/
mu_1_int_4 mu_n("n",24);

mu_i = 0;
if (mu_a.isundefined())
  mu_n.undefine();
else
  mu_n = mu_a;
{
for(int mu_j = 0; mu_j <= 1; mu_j++) {
mu_res[mu_j] = mu_false;
};
};
{
  bool mu__while_expr_17;  mu__while_expr_17 = (mu_n) != (0);
int mu__counter_16 = 0;
while (mu__while_expr_17) {
if ( ++mu__counter_16 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_res[mu_i] = (((mu_n) % (2)) == (0)) ? (mu_false) : (mu_true);
mu_n = (mu_n) / (2);
if ( (mu_n) != (0) )
{
mu_i = (mu_i) + (1);
}
};
mu__while_expr_17 = (mu_n) != (0);
}
};
return mu_res;
	Error.Error("The end of function int2binary_4 reached without returning values.");
};
/*** end function declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_node11.clear();
  mu_node13.clear();
  mu_node18.clear();
  mu_node19.clear();
  mu_flag.clear();
  mu_node37.clear();
  mu_out_data.clear();
  mu_node52.clear();
  mu_random_data.clear();
  mu_mem.clear();
  mu_node12.clear();
  mu_node26.clear();
  mu_node31.clear();
  mu_node78.clear();
  mu_node88.clear();
  mu_node104.clear();
  mu_node121.clear();
  mu_badNode.clear();
}
void world_class::undefine()
{
  mu_node11.undefine();
  mu_node13.undefine();
  mu_node18.undefine();
  mu_node19.undefine();
  mu_flag.undefine();
  mu_node37.undefine();
  mu_out_data.undefine();
  mu_node52.undefine();
  mu_random_data.undefine();
  mu_mem.undefine();
  mu_node12.undefine();
  mu_node26.undefine();
  mu_node31.undefine();
  mu_node78.undefine();
  mu_node88.undefine();
  mu_node104.undefine();
  mu_node121.undefine();
  mu_badNode.undefine();
}
void world_class::reset()
{
  mu_node11.reset();
  mu_node13.reset();
  mu_node18.reset();
  mu_node19.reset();
  mu_flag.reset();
  mu_node37.reset();
  mu_out_data.reset();
  mu_node52.reset();
  mu_random_data.reset();
  mu_mem.reset();
  mu_node12.reset();
  mu_node26.reset();
  mu_node31.reset();
  mu_node78.reset();
  mu_node88.reset();
  mu_node104.reset();
  mu_node121.reset();
  mu_badNode.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_node11.print();
  mu_node13.print();
  mu_node18.print();
  mu_node19.print();
  mu_flag.print();
  mu_node37.print();
  mu_out_data.print();
  mu_node52.print();
  mu_random_data.print();
  mu_mem.print();
  mu_node12.print();
  mu_node26.print();
  mu_node31.print();
  mu_node78.print();
  mu_node88.print();
  mu_node104.print();
  mu_node121.print();
  mu_badNode.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_node11.print_statistic();
  mu_node13.print_statistic();
  mu_node18.print_statistic();
  mu_node19.print_statistic();
  mu_flag.print_statistic();
  mu_node37.print_statistic();
  mu_out_data.print_statistic();
  mu_node52.print_statistic();
  mu_random_data.print_statistic();
  mu_mem.print_statistic();
  mu_node12.print_statistic();
  mu_node26.print_statistic();
  mu_node31.print_statistic();
  mu_node78.print_statistic();
  mu_node88.print_statistic();
  mu_node104.print_statistic();
  mu_node121.print_statistic();
  mu_badNode.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_node11.print_diff(prevstate);
    mu_node13.print_diff(prevstate);
    mu_node18.print_diff(prevstate);
    mu_node19.print_diff(prevstate);
    mu_flag.print_diff(prevstate);
    mu_node37.print_diff(prevstate);
    mu_out_data.print_diff(prevstate);
    mu_node52.print_diff(prevstate);
    mu_random_data.print_diff(prevstate);
    mu_mem.print_diff(prevstate);
    mu_node12.print_diff(prevstate);
    mu_node26.print_diff(prevstate);
    mu_node31.print_diff(prevstate);
    mu_node78.print_diff(prevstate);
    mu_node88.print_diff(prevstate);
    mu_node104.print_diff(prevstate);
    mu_node121.print_diff(prevstate);
    mu_badNode.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_node11.to_state( newstate );
  mu_node13.to_state( newstate );
  mu_node18.to_state( newstate );
  mu_node19.to_state( newstate );
  mu_flag.to_state( newstate );
  mu_node37.to_state( newstate );
  mu_out_data.to_state( newstate );
  mu_node52.to_state( newstate );
  mu_random_data.to_state( newstate );
  mu_mem.to_state( newstate );
  mu_node12.to_state( newstate );
  mu_node26.to_state( newstate );
  mu_node31.to_state( newstate );
  mu_node78.to_state( newstate );
  mu_node88.to_state( newstate );
  mu_node104.to_state( newstate );
  mu_node121.to_state( newstate );
  mu_badNode.to_state( newstate );
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
    static mu_1_int_2 mu_clk_;
    mu_clk_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_flag_fail_;
    mu_flag_fail_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_data_;
    mu_in_data_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_rd_;
    mu_in_rd_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_rd_addr_;
    mu_in_rd_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_wr_;
    mu_in_wr_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_wr_addr_;
    mu_in_wr_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_rst_n_;
    mu_rst_n_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node56_;
    mu_node56_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node63_;
    mu_node63_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_node122_;
    mu_node122_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node142_;
    mu_node142_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node143_;
    mu_node143_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node144_;
    mu_node144_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node148_;
    mu_node148_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node149_;
    mu_node149_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node150_;
    mu_node150_.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("Rule 0, clk_:%s, flag_fail_:%s, in_data_:%s, in_rd_:%s, in_rd_addr_:%s, in_wr_:%s, in_wr_addr_:%s, rst_n_:%s, node56_:%s, node63_:%s, node122_:%s, node142_:%s, node143_:%s, node144_:%s, node148_:%s, node149_:%s, node150_:%s", mu_clk_.Name(), mu_flag_fail_.Name(), mu_in_data_.Name(), mu_in_rd_.Name(), mu_in_rd_addr_.Name(), mu_in_wr_.Name(), mu_in_wr_addr_.Name(), mu_rst_n_.Name(), mu_node56_.Name(), mu_node63_.Name(), mu_node122_.Name(), mu_node142_.Name(), mu_node143_.Name(), mu_node144_.Name(), mu_node148_.Name(), mu_node149_.Name(), mu_node150_.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_int_2 mu_clk_;
    mu_clk_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_flag_fail_;
    mu_flag_fail_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_data_;
    mu_in_data_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_rd_;
    mu_in_rd_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_rd_addr_;
    mu_in_rd_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_wr_;
    mu_in_wr_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_wr_addr_;
    mu_in_wr_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_rst_n_;
    mu_rst_n_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node56_;
    mu_node56_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node63_;
    mu_node63_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_node122_;
    mu_node122_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node142_;
    mu_node142_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node143_;
    mu_node143_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node144_;
    mu_node144_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node148_;
    mu_node148_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node149_;
    mu_node149_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node150_;
    mu_node150_.value((r % 4) + 0);
    r = r / 4;
    return mu_true;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_int_2 mu_clk_;
    mu_clk_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_flag_fail_;
    mu_flag_fail_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_data_;
    mu_in_data_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_rd_;
    mu_in_rd_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_rd_addr_;
    mu_in_rd_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_wr_;
    mu_in_wr_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_wr_addr_;
    mu_in_wr_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_rst_n_;
    mu_rst_n_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node56_;
    mu_node56_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node63_;
    mu_node63_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_node122_;
    mu_node122_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node142_;
    mu_node142_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node143_;
    mu_node143_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node144_;
    mu_node144_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node148_;
    mu_node148_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node149_;
    mu_node149_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node150_;
    mu_node150_.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 134217728 )
      {
	if ( ( TRUE  ) ) {
	      if (mu_true) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 134217728;
	}
	else
	  what_rule += 134217728;
    r = what_rule - 0;
    mu_clk_.value((r % 2) + 0);
    r = r / 2;
    mu_flag_fail_.value((r % 2) + 0);
    r = r / 2;
    mu_in_data_.value((r % 4) + 0);
    r = r / 4;
    mu_in_rd_.value((r % 2) + 0);
    r = r / 2;
    mu_in_rd_addr_.value((r % 4) + 0);
    r = r / 4;
    mu_in_wr_.value((r % 2) + 0);
    r = r / 2;
    mu_in_wr_addr_.value((r % 4) + 0);
    r = r / 4;
    mu_rst_n_.value((r % 2) + 0);
    r = r / 2;
    mu_node56_.value((r % 2) + 0);
    r = r / 2;
    mu_node63_.value((r % 2) + 0);
    r = r / 2;
    mu_node122_.value((r % 4) + 0);
    r = r / 4;
    mu_node142_.value((r % 4) + 0);
    r = r / 4;
    mu_node143_.value((r % 4) + 0);
    r = r / 4;
    mu_node144_.value((r % 4) + 0);
    r = r / 4;
    mu_node148_.value((r % 4) + 0);
    r = r / 4;
    mu_node149_.value((r % 4) + 0);
    r = r / 4;
    mu_node150_.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_int_2 mu_clk_;
    mu_clk_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_flag_fail_;
    mu_flag_fail_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_data_;
    mu_in_data_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_rd_;
    mu_in_rd_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_rd_addr_;
    mu_in_rd_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_in_wr_;
    mu_in_wr_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_in_wr_addr_;
    mu_in_wr_addr_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_2 mu_rst_n_;
    mu_rst_n_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node56_;
    mu_node56_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_2 mu_node63_;
    mu_node63_.value((r % 2) + 0);
    r = r / 2;
    static mu_1_int_4 mu_node122_;
    mu_node122_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node142_;
    mu_node142_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node143_;
    mu_node143_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node144_;
    mu_node144_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node148_;
    mu_node148_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node149_;
    mu_node149_.value((r % 4) + 0);
    r = r / 4;
    static mu_1_int_4 mu_node150_;
    mu_node150_.value((r % 4) + 0);
    r = r / 4;
/*** Variable declaration ***/
mu_1_bitvec_1 mu_clk("clk",0);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_flag_fail("flag_fail",8);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_in_data("in_data",16);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_in_rd("in_rd",32);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_in_rd_addr("in_rd_addr",40);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_in_wr("in_wr",56);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_in_wr_addr("in_wr_addr",64);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_rst_n("rst_n",80);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node56("node56",88);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node63("node63",96);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node122("node122",104);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node142("node142",120);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node143("node143",136);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node144("node144",152);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node148("node148",168);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node149("node149",184);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node150("node150",200);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node15("node15",216);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node16("node16",224);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node21("node21",232);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node22("node22",240);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node24("node24",248);

/*** Variable declaration ***/
mu_1_bitvec_32 mu_node28("node28",256);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node29("node29",512);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node30("node30",520);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node32("node32",528);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node33("node33",536);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node36("node36",544);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node40("node40",552);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node41("node41",560);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node43("node43",568);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node44("node44",576);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node45("node45",584);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node47("node47",592);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node48("node48",600);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node49("node49",608);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node54("node54",616);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node57("node57",632);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node58("node58",640);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node59("node59",648);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node61("node61",656);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node66("node66",664);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node67("node67",680);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node68("node68",696);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node69("node69",704);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node71("node71",712);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node73("node73",720);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node74("node74",728);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node75("node75",736);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node76("node76",744);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node79("node79",752);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node80("node80",768);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node82("node82",784);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node83("node83",792);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node84("node84",800);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node85("node85",816);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node86("node86",824);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node87("node87",832);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node89("node89",848);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node90("node90",856);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node91("node91",864);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node92("node92",880);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node94("node94",896);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node95("node95",904);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node96("node96",920);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node97("node97",936);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node98("node98",952);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node99("node99",968);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node100("node100",984);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node101("node101",1000);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node102("node102",1064);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node103("node103",1072);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node105("node105",1136);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node106("node106",1152);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node107("node107",1168);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node108("node108",1184);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node109("node109",1200);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node110("node110",1216);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node111("node111",1280);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node112("node112",1288);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node113("node113",1352);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node114("node114",1368);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node115("node115",1384);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node116("node116",1400);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node117("node117",1416);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node118("node118",1432);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node119("node119",1496);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node120("node120",1504);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node123("node123",1568);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node124("node124",1584);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node125("node125",1600);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node126("node126",1616);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node127("node127",1632);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node128("node128",1648);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node129("node129",1712);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node130("node130",1720);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node131("node131",1784);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node132("node132",1792);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node133("node133",1800);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node134("node134",1808);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node135("node135",1816);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node136("node136",1824);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node137("node137",1832);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node138("node138",1840);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node139("node139",1848);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node140("node140",1864);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node141("node141",1872);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node145("node145",1888);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node146("node146",1904);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node147("node147",1920);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node151("node151",1936);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node152("node152",1952);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node153("node153",1968);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node154("node154",1984);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node155("node155",2000);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node156("node156",2016);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node157("node157",2024);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node158("node158",2040);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node159("node159",2056);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node160("node160",2072);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node161("node161",2088);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_node162("node162",2104);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node163("node163",2120);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_node164("node164",2184);

/*** Variable declaration ***/
mu_1_array_2_2 mu_node165("node165",2192);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_Nxtnode37("Nxtnode37",2256);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_Nxtnode52("Nxtnode52",2264);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_Nxtnode11("Nxtnode11",2280);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_Nxtnode13("Nxtnode13",2288);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_Nxtnode18("Nxtnode18",2296);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_Nxtnode19("Nxtnode19",2304);

/*** Variable declaration ***/
mu_1_bitvec_1 mu_Nxtflag("Nxtflag",2312);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_Nxtout_data("Nxtout_data",2320);

/*** Variable declaration ***/
mu_1_bitvec_2 mu_Nxtrandom_data("Nxtrandom_data",2336);

/*** Variable declaration ***/
mu_1_array_2_2 mu_Nxtmem("Nxtmem",2352);

mu_clk = mu_int2binary_2( mu_clk_ );
mu_flag_fail = mu_int2binary_2( mu_flag_fail_ );
mu_in_data = mu_int2binary_4( mu_in_data_ );
mu_in_rd = mu_int2binary_2( mu_in_rd_ );
mu_in_rd_addr = mu_int2binary_4( mu_in_rd_addr_ );
mu_in_wr = mu_int2binary_2( mu_in_wr_ );
mu_in_wr_addr = mu_int2binary_4( mu_in_wr_addr_ );
mu_rst_n = mu_int2binary_2( mu_rst_n_ );
mu_node56 = mu_int2binary_2( mu_node56_ );
mu_node63 = mu_int2binary_2( mu_node63_ );
mu_node122 = mu_int2binary_4( mu_node122_ );
mu_node142 = mu_int2binary_4( mu_node142_ );
mu_node143 = mu_int2binary_4( mu_node143_ );
mu_node144 = mu_int2binary_4( mu_node144_ );
mu_node148 = mu_int2binary_4( mu_node148_ );
mu_node149 = mu_int2binary_4( mu_node149_ );
mu_node150 = mu_int2binary_4( mu_node150_ );
mu_node15 = mu_not_1( mu_node11 );
mu_node16 = mu_and_1( mu_node13, mu_node15 );
mu_node21 = mu_not_1( mu_node18 );
mu_node22 = mu_and_1( mu_node19, mu_node21 );
mu_node24 = mu_and_1( mu_in_wr, mu_in_rd );
mu_node28 = mu_concat_31_1( mu_node26, mu_node24 );
mu_node29 = mu_redor_32( mu_node28 );
mu_node30 = mu_not_1( mu_node29 );
mu_node32 = mu_not_1( mu_node31 );
mu_node33 = mu_or_1( mu_node30, mu_node32 );
mu_node36 = mu_not_1( mu_flag );
mu_node40 = mu_not_1( mu_node37 );
mu_node41 = mu_or_1( mu_node36, mu_node40 );
mu_node43 = mu_not_1( mu_flag_fail );
mu_node44 = mu_not_1( mu_node37 );
mu_node45 = mu_or_1( mu_node43, mu_node44 );
mu_node47 = mu_not_1( mu_rst_n );
mu_node48 = mu_not_1( mu_node37 );
mu_node49 = mu_or_1( mu_node47, mu_node48 );
mu_node54 = mu_uext_2_0( mu_node52 );
mu_node57 = mu_eq_2( mu_random_data, mu_out_data );
mu_node58 = mu_and_1( mu_flag, mu_rst_n );
mu_node59 = (mu_node58[0]) ? (mu_node57) : (mu_node56);
mu_node61 = (mu_node58[0]) ? (mu_node31) : (mu_node12);
mu_node66 = mu_read_2_2( mu_mem, mu_node52 );
mu_node67 = mu_read_2_2( mu_mem, mu_in_rd_addr );
mu_node68 = mu_eq_2( mu_random_data, mu_node66 );
mu_node69 = (mu_rst_n[0]) ? (mu_node68) : (mu_node63);
mu_node71 = (mu_rst_n[0]) ? (mu_node31) : (mu_node12);
mu_node73 = mu_and_1( mu_rst_n, mu_in_rd );
mu_node74 = mu_eq_2( mu_in_rd_addr, mu_node52 );
mu_node75 = mu_and_1( mu_node73, mu_node74 );
mu_node76 = (mu_node75[0]) ? (mu_node31) : (mu_node12);
mu_node79 = (mu_in_rd[0]) ? (mu_node67) : (mu_out_data);
mu_node80 = (mu_rst_n[0]) ? (mu_node79) : (mu_node78);
mu_node82 = mu_slice_1_2_1_1( mu_in_data );
mu_node83 = mu_slice_1_2_0_0( mu_in_data );
mu_node84 = mu_concat_1_1( mu_node83, mu_node82 );
mu_node85 = mu_eq_2( mu_in_wr_addr, mu_node52 );
mu_node86 = mu_and_1( mu_in_wr, mu_node85 );
mu_node87 = (mu_node86[0]) ? (mu_node84) : (mu_random_data);
mu_node89 = mu_ult_2( mu_node52, mu_node88 );
mu_node90 = mu_and_1( mu_node86, mu_node89 );
mu_node91 = (mu_node90[0]) ? (mu_in_data) : (mu_node87);
mu_node92 = (mu_rst_n[0]) ? (mu_node91) : (mu_node78);
mu_node94 = (mu_rst_n[0]) ? (mu_node12) : (mu_node31);
mu_node95 = mu_concat_1_1( mu_node94, mu_node94 );
mu_node96 = mu_read_2_2( mu_mem, mu_node78 );
mu_node97 = mu_not_2( mu_node95 );
mu_node98 = mu_and_2( mu_node96, mu_node97 );
mu_node99 = mu_and_2( mu_node78, mu_node95 );
mu_node100 = mu_or_2( mu_node99, mu_node98 );
mu_node101 = mu_write_2_2( mu_mem, mu_node78, mu_node100 );
mu_node102 = mu_redor_2( mu_node95 );
mu_node103 = (mu_node102[0]) ? (mu_node101) : (mu_mem);
mu_node105 = mu_read_2_2( mu_node103, mu_node104 );
mu_node106 = mu_not_2( mu_node95 );
mu_node107 = mu_and_2( mu_node105, mu_node106 );
mu_node108 = mu_and_2( mu_node78, mu_node95 );
mu_node109 = mu_or_2( mu_node108, mu_node107 );
mu_node110 = mu_write_2_2( mu_node103, mu_node104, mu_node109 );
mu_node111 = mu_redor_2( mu_node95 );
mu_node112 = (mu_node111[0]) ? (mu_node110) : (mu_node103);
mu_node113 = mu_read_2_2( mu_node112, mu_node88 );
mu_node114 = mu_not_2( mu_node95 );
mu_node115 = mu_and_2( mu_node113, mu_node114 );
mu_node116 = mu_and_2( mu_node78, mu_node95 );
mu_node117 = mu_or_2( mu_node116, mu_node115 );
mu_node118 = mu_write_2_2( mu_node112, mu_node88, mu_node117 );
mu_node119 = mu_redor_2( mu_node95 );
mu_node120 = (mu_node119[0]) ? (mu_node118) : (mu_node112);
mu_node123 = mu_read_2_2( mu_node120, mu_node121 );
mu_node124 = mu_not_2( mu_node78 );
mu_node125 = mu_and_2( mu_node123, mu_node124 );
mu_node126 = mu_and_2( mu_node122, mu_node78 );
mu_node127 = mu_or_2( mu_node126, mu_node125 );
mu_node128 = mu_write_2_2( mu_node120, mu_node121, mu_node127 );
mu_node129 = mu_redor_2( mu_node78 );
mu_node130 = (mu_node129[0]) ? (mu_node128) : (mu_node120);
mu_node131 = mu_ult_2( mu_in_wr_addr, mu_node88 );
mu_node132 = (mu_node131[0]) ? (mu_node31) : (mu_node12);
mu_node133 = (mu_in_wr[0]) ? (mu_node132) : (mu_node12);
mu_node134 = (mu_rst_n[0]) ? (mu_node133) : (mu_node12);
mu_node135 = (mu_node131[0]) ? (mu_node12) : (mu_node31);
mu_node136 = (mu_in_wr[0]) ? (mu_node135) : (mu_node12);
mu_node137 = (mu_rst_n[0]) ? (mu_node136) : (mu_node12);
mu_node138 = mu_or_1( mu_node134, mu_node137 );
mu_node139 = mu_concat_1_1( mu_node138, mu_node138 );
mu_node140 = mu_redor_2( mu_node139 );
mu_node141 = (mu_node140[0]) ? (mu_in_wr_addr) : (mu_node121);
mu_node145 = (mu_node131[0]) ? (mu_in_data) : (mu_node144);
mu_node146 = (mu_in_wr[0]) ? (mu_node145) : (mu_node143);
mu_node147 = (mu_rst_n[0]) ? (mu_node146) : (mu_node142);
mu_node151 = (mu_node131[0]) ? (mu_node150) : (mu_node84);
mu_node152 = (mu_in_wr[0]) ? (mu_node151) : (mu_node149);
mu_node153 = (mu_rst_n[0]) ? (mu_node152) : (mu_node148);
mu_node154 = (mu_node137[0]) ? (mu_node153) : (mu_node147);
mu_node155 = (mu_node140[0]) ? (mu_node154) : (mu_node78);
mu_node156 = (mu_node140[0]) ? (mu_node138) : (mu_node94);
mu_node157 = mu_concat_1_1( mu_node156, mu_node156 );
mu_node158 = mu_read_2_2( mu_node130, mu_node141 );
mu_node159 = mu_not_2( mu_node157 );
mu_node160 = mu_and_2( mu_node158, mu_node159 );
mu_node161 = mu_and_2( mu_node155, mu_node157 );
mu_node162 = mu_or_2( mu_node161, mu_node160 );
mu_node163 = mu_write_2_2( mu_node130, mu_node141, mu_node162 );
mu_node164 = mu_redor_2( mu_node157 );
mu_node165 = (mu_node164[0]) ? (mu_node163) : (mu_node130);
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
  if (!(mu_node33[0])) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = (mu_node41[0]) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = (mu_node45[0]) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = (mu_node49[0]) ; 
}
if ( mu__boolexpr18 )
{
mu_Nxtnode37 = mu_node12;
mu_Nxtnode52 = mu_node52;
mu_Nxtnode11 = (mu_node58[0]) ? (mu_node57) : (mu_node56);
mu_Nxtnode13 = (mu_node58[0]) ? (mu_node31) : (mu_node12);
mu_Nxtnode18 = (mu_rst_n[0]) ? (mu_node68) : (mu_node63);
mu_Nxtnode19 = (mu_rst_n[0]) ? (mu_node31) : (mu_node12);
mu_Nxtflag = (mu_node75[0]) ? (mu_node31) : (mu_node12);
mu_Nxtout_data = (mu_rst_n[0]) ? (mu_node79) : (mu_node78);
mu_Nxtrandom_data = (mu_rst_n[0]) ? (mu_node91) : (mu_node78);
mu_Nxtmem = (mu_node164[0]) ? (mu_node163) : (mu_node130);
mu_node37 = mu_Nxtnode37;
mu_node52 = mu_Nxtnode52;
mu_node11 = mu_Nxtnode11;
mu_node13 = mu_Nxtnode13;
mu_node18 = mu_Nxtnode18;
mu_node19 = mu_Nxtnode19;
mu_flag = mu_Nxtflag;
mu_out_data = mu_Nxtout_data;
mu_random_data = mu_Nxtrandom_data;
mu_mem = mu_Nxtmem;
mu_badNode = mu_node22;
}
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<134217728)
    { R0.NextRule(what_rule);
      if (what_rule<134217728) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=134217727) return R0.Condition(r-0);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=134217727) { R0.Code(r-0); return; } 
}
int Priority(unsigned short r)
{
  if (r<=134217727) { return R0.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=134217727) return R0.Name(r-0);
  return NULL;
}
};
const unsigned numrules = 134217728;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 134217728


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
mu_node12[0] = mu_false;
mu_node26[0] = mu_false;
mu_node26[1] = mu_false;
mu_node26[2] = mu_false;
mu_node26[3] = mu_false;
mu_node26[4] = mu_false;
mu_node26[5] = mu_false;
mu_node26[6] = mu_false;
mu_node26[7] = mu_false;
mu_node26[8] = mu_false;
mu_node26[9] = mu_false;
mu_node26[10] = mu_false;
mu_node26[11] = mu_false;
mu_node26[12] = mu_false;
mu_node26[13] = mu_false;
mu_node26[14] = mu_false;
mu_node26[15] = mu_false;
mu_node26[16] = mu_false;
mu_node26[17] = mu_false;
mu_node26[18] = mu_false;
mu_node26[19] = mu_false;
mu_node26[20] = mu_false;
mu_node26[21] = mu_false;
mu_node26[22] = mu_false;
mu_node26[23] = mu_false;
mu_node26[24] = mu_false;
mu_node26[25] = mu_false;
mu_node26[26] = mu_false;
mu_node26[27] = mu_false;
mu_node26[28] = mu_false;
mu_node26[29] = mu_false;
mu_node26[30] = mu_false;
mu_node31[0] = mu_true;
mu_node78[0] = mu_false;
mu_node78[1] = mu_false;
mu_node88[0] = mu_false;
mu_node88[1] = mu_true;
mu_node104[0] = mu_true;
mu_node104[1] = mu_false;
mu_node121[0] = mu_true;
mu_node121[1] = mu_true;
{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_node11[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_node13[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_node18[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_node19[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_flag[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 0; mu_i++) {
mu_node37[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
mu_out_data[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
mu_node52[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 1; mu_i++) {
mu_random_data[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_mem[mu_i][0] = mu_false;
mu_mem[mu_i][1] = mu_false;
};
};
mu_node13 = mu_node12;
mu_node19 = mu_node12;
mu_node37 = mu_node31;
mu_badNode[0] = mu_false;
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
int mu__invariant_21() // Invariant "Invariant 0"
{
return (mu_badNode[0]) == (mu_false);
};

bool mu__condition_22() // Condition for Rule "Invariant 0"
{
  return mu__invariant_21( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"Invariant 0", &mu__condition_22, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
node121:NoScalarset
node88:NoScalarset
node31:NoScalarset
node12:NoScalarset
random_data:NoScalarset
out_data:NoScalarset
flag:NoScalarset
node18:NoScalarset
node11:NoScalarset
node13:NoScalarset
node19:NoScalarset
node37:NoScalarset
node52:NoScalarset
mem:NoScalarset
node26:NoScalarset
node78:NoScalarset
node104:NoScalarset
badNode:NoScalarset
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
        mu_node121.MultisetSort();
        mu_node88.MultisetSort();
        mu_node31.MultisetSort();
        mu_node12.MultisetSort();
        mu_random_data.MultisetSort();
        mu_out_data.MultisetSort();
        mu_flag.MultisetSort();
        mu_node18.MultisetSort();
        mu_node11.MultisetSort();
        mu_node13.MultisetSort();
        mu_node19.MultisetSort();
        mu_node37.MultisetSort();
        mu_node52.MultisetSort();
        mu_mem.MultisetSort();
        mu_node26.MultisetSort();
        mu_node78.MultisetSort();
        mu_node104.MultisetSort();
        mu_badNode.MultisetSort();
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
void mu__subrange_3::Permute(PermSet& Perm, int i) {};
void mu__subrange_3::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_3::Canonicalize(PermSet& Perm) {};
void mu__subrange_3::SimpleLimit(PermSet& Perm) {};
void mu__subrange_3::ArrayLimit(PermSet& Perm) {};
void mu__subrange_3::Limit(PermSet& Perm) {};
void mu__subrange_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_bitvec_1::Permute(PermSet& Perm, int i)
{
  static mu_1_bitvec_1 temp("Permute_mu_1_bitvec_1",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1_bitvec_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_bitvec_1::Canonicalize(PermSet& Perm){};
void mu_1_bitvec_1::SimpleLimit(PermSet& Perm){}
void mu_1_bitvec_1::ArrayLimit(PermSet& Perm) {}
void mu_1_bitvec_1::Limit(PermSet& Perm){}
void mu_1_bitvec_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu__subrange_5::Permute(PermSet& Perm, int i) {};
void mu__subrange_5::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_5::Canonicalize(PermSet& Perm) {};
void mu__subrange_5::SimpleLimit(PermSet& Perm) {};
void mu__subrange_5::ArrayLimit(PermSet& Perm) {};
void mu__subrange_5::Limit(PermSet& Perm) {};
void mu__subrange_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_bitvec_2::Permute(PermSet& Perm, int i)
{
  static mu_1_bitvec_2 temp("Permute_mu_1_bitvec_2",-1);
  int j;
  for (j=0; j<2; j++)
    array[j].Permute(Perm, i);
};
void mu_1_bitvec_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_bitvec_2::Canonicalize(PermSet& Perm){};
void mu_1_bitvec_2::SimpleLimit(PermSet& Perm){}
void mu_1_bitvec_2::ArrayLimit(PermSet& Perm) {}
void mu_1_bitvec_2::Limit(PermSet& Perm){}
void mu_1_bitvec_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu__subrange_7::Permute(PermSet& Perm, int i) {};
void mu__subrange_7::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_7::Canonicalize(PermSet& Perm) {};
void mu__subrange_7::SimpleLimit(PermSet& Perm) {};
void mu__subrange_7::ArrayLimit(PermSet& Perm) {};
void mu__subrange_7::Limit(PermSet& Perm) {};
void mu__subrange_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_bitvec_31::Permute(PermSet& Perm, int i)
{
  static mu_1_bitvec_31 temp("Permute_mu_1_bitvec_31",-1);
  int j;
  for (j=0; j<31; j++)
    array[j].Permute(Perm, i);
};
void mu_1_bitvec_31::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_bitvec_31::Canonicalize(PermSet& Perm){};
void mu_1_bitvec_31::SimpleLimit(PermSet& Perm){}
void mu_1_bitvec_31::ArrayLimit(PermSet& Perm) {}
void mu_1_bitvec_31::Limit(PermSet& Perm){}
void mu_1_bitvec_31::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu__subrange_9::Permute(PermSet& Perm, int i) {};
void mu__subrange_9::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_9::Canonicalize(PermSet& Perm) {};
void mu__subrange_9::SimpleLimit(PermSet& Perm) {};
void mu__subrange_9::ArrayLimit(PermSet& Perm) {};
void mu__subrange_9::Limit(PermSet& Perm) {};
void mu__subrange_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_bitvec_32::Permute(PermSet& Perm, int i)
{
  static mu_1_bitvec_32 temp("Permute_mu_1_bitvec_32",-1);
  int j;
  for (j=0; j<32; j++)
    array[j].Permute(Perm, i);
};
void mu_1_bitvec_32::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_bitvec_32::Canonicalize(PermSet& Perm){};
void mu_1_bitvec_32::SimpleLimit(PermSet& Perm){}
void mu_1_bitvec_32::ArrayLimit(PermSet& Perm) {}
void mu_1_bitvec_32::Limit(PermSet& Perm){}
void mu_1_bitvec_32::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu__subrange_11::Permute(PermSet& Perm, int i) {};
void mu__subrange_11::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_11::Canonicalize(PermSet& Perm) {};
void mu__subrange_11::SimpleLimit(PermSet& Perm) {};
void mu__subrange_11::ArrayLimit(PermSet& Perm) {};
void mu__subrange_11::Limit(PermSet& Perm) {};
void mu__subrange_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_array_2_2::Permute(PermSet& Perm, int i)
{
  static mu_1_array_2_2 temp("Permute_mu_1_array_2_2",-1);
  int j;
  for (j=0; j<4; j++)
    array[j].Permute(Perm, i);
};
void mu_1_array_2_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_array_2_2::Canonicalize(PermSet& Perm){};
void mu_1_array_2_2::SimpleLimit(PermSet& Perm){}
void mu_1_array_2_2::ArrayLimit(PermSet& Perm) {}
void mu_1_array_2_2::Limit(PermSet& Perm){}
void mu_1_array_2_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_int_4::Permute(PermSet& Perm, int i) {};
void mu_1_int_4::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_int_4::Canonicalize(PermSet& Perm) {};
void mu_1_int_4::SimpleLimit(PermSet& Perm) {};
void mu_1_int_4::ArrayLimit(PermSet& Perm) {};
void mu_1_int_4::Limit(PermSet& Perm) {};
void mu_1_int_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_14::Permute(PermSet& Perm, int i) {};
void mu__subrange_14::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_14::Canonicalize(PermSet& Perm) {};
void mu__subrange_14::SimpleLimit(PermSet& Perm) {};
void mu__subrange_14::ArrayLimit(PermSet& Perm) {};
void mu__subrange_14::Limit(PermSet& Perm) {};
void mu__subrange_14::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_bitvec_3::Permute(PermSet& Perm, int i)
{
  static mu_1_bitvec_3 temp("Permute_mu_1_bitvec_3",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1_bitvec_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_bitvec_3::Canonicalize(PermSet& Perm){};
void mu_1_bitvec_3::SimpleLimit(PermSet& Perm){}
void mu_1_bitvec_3::ArrayLimit(PermSet& Perm) {}
void mu_1_bitvec_3::Limit(PermSet& Perm){}
void mu_1_bitvec_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_int_2::Permute(PermSet& Perm, int i) {};
void mu_1_int_2::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_int_2::Canonicalize(PermSet& Perm) {};
void mu_1_int_2::SimpleLimit(PermSet& Perm) {};
void mu_1_int_2::ArrayLimit(PermSet& Perm) {};
void mu_1_int_2::Limit(PermSet& Perm) {};
void mu_1_int_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_int_1::Permute(PermSet& Perm, int i) {};
void mu_1_int_1::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_int_1::Canonicalize(PermSet& Perm) {};
void mu_1_int_1::SimpleLimit(PermSet& Perm) {};
void mu_1_int_1::ArrayLimit(PermSet& Perm) {};
void mu_1_int_1::Limit(PermSet& Perm) {};
void mu_1_int_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_18::Permute(PermSet& Perm, int i) {};
void mu__subrange_18::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_18::Canonicalize(PermSet& Perm) {};
void mu__subrange_18::SimpleLimit(PermSet& Perm) {};
void mu__subrange_18::ArrayLimit(PermSet& Perm) {};
void mu__subrange_18::Limit(PermSet& Perm) {};
void mu__subrange_18::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_19::Permute(PermSet& Perm, int i) {};
void mu__subrange_19::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_19::Canonicalize(PermSet& Perm) {};
void mu__subrange_19::SimpleLimit(PermSet& Perm) {};
void mu__subrange_19::ArrayLimit(PermSet& Perm) {};
void mu__subrange_19::Limit(PermSet& Perm) {};
void mu__subrange_19::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_20::Permute(PermSet& Perm, int i) {};
void mu__subrange_20::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_20::Canonicalize(PermSet& Perm) {};
void mu__subrange_20::SimpleLimit(PermSet& Perm) {};
void mu__subrange_20::ArrayLimit(PermSet& Perm) {};
void mu__subrange_20::Limit(PermSet& Perm) {};
void mu__subrange_20::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_21::Permute(PermSet& Perm, int i) {};
void mu__subrange_21::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_21::Canonicalize(PermSet& Perm) {};
void mu__subrange_21::SimpleLimit(PermSet& Perm) {};
void mu__subrange_21::ArrayLimit(PermSet& Perm) {};
void mu__subrange_21::Limit(PermSet& Perm) {};
void mu__subrange_21::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_22::Permute(PermSet& Perm, int i) {};
void mu__subrange_22::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_22::Canonicalize(PermSet& Perm) {};
void mu__subrange_22::SimpleLimit(PermSet& Perm) {};
void mu__subrange_22::ArrayLimit(PermSet& Perm) {};
void mu__subrange_22::Limit(PermSet& Perm) {};
void mu__subrange_22::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_23::Permute(PermSet& Perm, int i) {};
void mu__subrange_23::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_23::Canonicalize(PermSet& Perm) {};
void mu__subrange_23::SimpleLimit(PermSet& Perm) {};
void mu__subrange_23::ArrayLimit(PermSet& Perm) {};
void mu__subrange_23::Limit(PermSet& Perm) {};
void mu__subrange_23::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_24::Permute(PermSet& Perm, int i) {};
void mu__subrange_24::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_24::Canonicalize(PermSet& Perm) {};
void mu__subrange_24::SimpleLimit(PermSet& Perm) {};
void mu__subrange_24::ArrayLimit(PermSet& Perm) {};
void mu__subrange_24::Limit(PermSet& Perm) {};
void mu__subrange_24::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_25::Permute(PermSet& Perm, int i) {};
void mu__subrange_25::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_25::Canonicalize(PermSet& Perm) {};
void mu__subrange_25::SimpleLimit(PermSet& Perm) {};
void mu__subrange_25::ArrayLimit(PermSet& Perm) {};
void mu__subrange_25::Limit(PermSet& Perm) {};
void mu__subrange_25::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_26::Permute(PermSet& Perm, int i) {};
void mu__subrange_26::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_26::Canonicalize(PermSet& Perm) {};
void mu__subrange_26::SimpleLimit(PermSet& Perm) {};
void mu__subrange_26::ArrayLimit(PermSet& Perm) {};
void mu__subrange_26::Limit(PermSet& Perm) {};
void mu__subrange_26::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_27::Permute(PermSet& Perm, int i) {};
void mu__subrange_27::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_27::Canonicalize(PermSet& Perm) {};
void mu__subrange_27::SimpleLimit(PermSet& Perm) {};
void mu__subrange_27::ArrayLimit(PermSet& Perm) {};
void mu__subrange_27::Limit(PermSet& Perm) {};
void mu__subrange_27::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_28::Permute(PermSet& Perm, int i) {};
void mu__subrange_28::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_28::Canonicalize(PermSet& Perm) {};
void mu__subrange_28::SimpleLimit(PermSet& Perm) {};
void mu__subrange_28::ArrayLimit(PermSet& Perm) {};
void mu__subrange_28::Limit(PermSet& Perm) {};
void mu__subrange_28::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_29::Permute(PermSet& Perm, int i) {};
void mu__subrange_29::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_29::Canonicalize(PermSet& Perm) {};
void mu__subrange_29::SimpleLimit(PermSet& Perm) {};
void mu__subrange_29::ArrayLimit(PermSet& Perm) {};
void mu__subrange_29::Limit(PermSet& Perm) {};
void mu__subrange_29::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_30::Permute(PermSet& Perm, int i) {};
void mu__subrange_30::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_30::Canonicalize(PermSet& Perm) {};
void mu__subrange_30::SimpleLimit(PermSet& Perm) {};
void mu__subrange_30::ArrayLimit(PermSet& Perm) {};
void mu__subrange_30::Limit(PermSet& Perm) {};
void mu__subrange_30::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_31::Permute(PermSet& Perm, int i) {};
void mu__subrange_31::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_31::Canonicalize(PermSet& Perm) {};
void mu__subrange_31::SimpleLimit(PermSet& Perm) {};
void mu__subrange_31::ArrayLimit(PermSet& Perm) {};
void mu__subrange_31::Limit(PermSet& Perm) {};
void mu__subrange_31::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_32::Permute(PermSet& Perm, int i) {};
void mu__subrange_32::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_32::Canonicalize(PermSet& Perm) {};
void mu__subrange_32::SimpleLimit(PermSet& Perm) {};
void mu__subrange_32::ArrayLimit(PermSet& Perm) {};
void mu__subrange_32::Limit(PermSet& Perm) {};
void mu__subrange_32::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_33::Permute(PermSet& Perm, int i) {};
void mu__subrange_33::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_33::Canonicalize(PermSet& Perm) {};
void mu__subrange_33::SimpleLimit(PermSet& Perm) {};
void mu__subrange_33::ArrayLimit(PermSet& Perm) {};
void mu__subrange_33::Limit(PermSet& Perm) {};
void mu__subrange_33::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_34::Permute(PermSet& Perm, int i) {};
void mu__subrange_34::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_34::Canonicalize(PermSet& Perm) {};
void mu__subrange_34::SimpleLimit(PermSet& Perm) {};
void mu__subrange_34::ArrayLimit(PermSet& Perm) {};
void mu__subrange_34::Limit(PermSet& Perm) {};
void mu__subrange_34::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_35::Permute(PermSet& Perm, int i) {};
void mu__subrange_35::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_35::Canonicalize(PermSet& Perm) {};
void mu__subrange_35::SimpleLimit(PermSet& Perm) {};
void mu__subrange_35::ArrayLimit(PermSet& Perm) {};
void mu__subrange_35::Limit(PermSet& Perm) {};
void mu__subrange_35::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_36::Permute(PermSet& Perm, int i) {};
void mu__subrange_36::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_36::Canonicalize(PermSet& Perm) {};
void mu__subrange_36::SimpleLimit(PermSet& Perm) {};
void mu__subrange_36::ArrayLimit(PermSet& Perm) {};
void mu__subrange_36::Limit(PermSet& Perm) {};
void mu__subrange_36::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_37::Permute(PermSet& Perm, int i) {};
void mu__subrange_37::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_37::Canonicalize(PermSet& Perm) {};
void mu__subrange_37::SimpleLimit(PermSet& Perm) {};
void mu__subrange_37::ArrayLimit(PermSet& Perm) {};
void mu__subrange_37::Limit(PermSet& Perm) {};
void mu__subrange_37::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_38::Permute(PermSet& Perm, int i) {};
void mu__subrange_38::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_38::Canonicalize(PermSet& Perm) {};
void mu__subrange_38::SimpleLimit(PermSet& Perm) {};
void mu__subrange_38::ArrayLimit(PermSet& Perm) {};
void mu__subrange_38::Limit(PermSet& Perm) {};
void mu__subrange_38::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_39::Permute(PermSet& Perm, int i) {};
void mu__subrange_39::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_39::Canonicalize(PermSet& Perm) {};
void mu__subrange_39::SimpleLimit(PermSet& Perm) {};
void mu__subrange_39::ArrayLimit(PermSet& Perm) {};
void mu__subrange_39::Limit(PermSet& Perm) {};
void mu__subrange_39::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_40::Permute(PermSet& Perm, int i) {};
void mu__subrange_40::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_40::Canonicalize(PermSet& Perm) {};
void mu__subrange_40::SimpleLimit(PermSet& Perm) {};
void mu__subrange_40::ArrayLimit(PermSet& Perm) {};
void mu__subrange_40::Limit(PermSet& Perm) {};
void mu__subrange_40::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_41::Permute(PermSet& Perm, int i) {};
void mu__subrange_41::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_41::Canonicalize(PermSet& Perm) {};
void mu__subrange_41::SimpleLimit(PermSet& Perm) {};
void mu__subrange_41::ArrayLimit(PermSet& Perm) {};
void mu__subrange_41::Limit(PermSet& Perm) {};
void mu__subrange_41::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_42::Permute(PermSet& Perm, int i) {};
void mu__subrange_42::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_42::Canonicalize(PermSet& Perm) {};
void mu__subrange_42::SimpleLimit(PermSet& Perm) {};
void mu__subrange_42::ArrayLimit(PermSet& Perm) {};
void mu__subrange_42::Limit(PermSet& Perm) {};
void mu__subrange_42::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_43::Permute(PermSet& Perm, int i) {};
void mu__subrange_43::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_43::Canonicalize(PermSet& Perm) {};
void mu__subrange_43::SimpleLimit(PermSet& Perm) {};
void mu__subrange_43::ArrayLimit(PermSet& Perm) {};
void mu__subrange_43::Limit(PermSet& Perm) {};
void mu__subrange_43::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu__subrange_44::Permute(PermSet& Perm, int i) {};
void mu__subrange_44::SimpleCanonicalize(PermSet& Perm) {};
void mu__subrange_44::Canonicalize(PermSet& Perm) {};
void mu__subrange_44::SimpleLimit(PermSet& Perm) {};
void mu__subrange_44::ArrayLimit(PermSet& Perm) {};
void mu__subrange_44::Limit(PermSet& Perm) {};
void mu__subrange_44::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };

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
              
              mu_node121.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node121.MultisetSort();
              mu_node88.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node88.MultisetSort();
              mu_node31.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node31.MultisetSort();
              mu_node12.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node12.MultisetSort();
              mu_random_data.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_random_data.MultisetSort();
              mu_out_data.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_out_data.MultisetSort();
              mu_flag.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_flag.MultisetSort();
              mu_node18.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node18.MultisetSort();
              mu_node11.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node11.MultisetSort();
              mu_node13.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node13.MultisetSort();
              mu_node19.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node19.MultisetSort();
              mu_node37.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node37.MultisetSort();
              mu_node52.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node52.MultisetSort();
              mu_mem.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_mem.MultisetSort();
              mu_node26.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node26.MultisetSort();
              mu_node78.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node78.MultisetSort();
              mu_node104.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node104.MultisetSort();
              mu_badNode.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_badNode.MultisetSort();
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

          mu_node121.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node121.MultisetSort();
          mu_node88.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node88.MultisetSort();
          mu_node31.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node31.MultisetSort();
          mu_node12.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node12.MultisetSort();
          mu_random_data.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_random_data.MultisetSort();
          mu_out_data.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_out_data.MultisetSort();
          mu_flag.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_flag.MultisetSort();
          mu_node18.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node18.MultisetSort();
          mu_node11.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node11.MultisetSort();
          mu_node13.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node13.MultisetSort();
          mu_node19.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node19.MultisetSort();
          mu_node37.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node37.MultisetSort();
          mu_node52.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node52.MultisetSort();
          mu_mem.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_mem.MultisetSort();
          mu_node26.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node26.MultisetSort();
          mu_node78.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node78.MultisetSort();
          mu_node104.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node104.MultisetSort();
          mu_badNode.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_badNode.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_node121.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node121.MultisetSort();
              mu_node88.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node88.MultisetSort();
              mu_node31.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node31.MultisetSort();
              mu_node12.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node12.MultisetSort();
              mu_random_data.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_random_data.MultisetSort();
              mu_out_data.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_out_data.MultisetSort();
              mu_flag.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_flag.MultisetSort();
              mu_node18.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node18.MultisetSort();
              mu_node11.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node11.MultisetSort();
              mu_node13.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node13.MultisetSort();
              mu_node19.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node19.MultisetSort();
              mu_node37.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node37.MultisetSort();
              mu_node52.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node52.MultisetSort();
              mu_mem.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_mem.MultisetSort();
              mu_node26.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node26.MultisetSort();
              mu_node78.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node78.MultisetSort();
              mu_node104.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node104.MultisetSort();
              mu_badNode.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_badNode.MultisetSort();
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
      mu_node121.MultisetSort();
      mu_node88.MultisetSort();
      mu_node31.MultisetSort();
      mu_node12.MultisetSort();
      mu_random_data.MultisetSort();
      mu_out_data.MultisetSort();
      mu_flag.MultisetSort();
      mu_node18.MultisetSort();
      mu_node11.MultisetSort();
      mu_node13.MultisetSort();
      mu_node19.MultisetSort();
      mu_node37.MultisetSort();
      mu_node52.MultisetSort();
      mu_mem.MultisetSort();
      mu_node26.MultisetSort();
      mu_node78.MultisetSort();
      mu_node104.MultisetSort();
      mu_badNode.MultisetSort();
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
        mu_node121.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node121.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node88.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node88.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node31.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node31.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node12.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node12.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_random_data.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_random_data.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_out_data.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_out_data.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_flag.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_flag.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node18.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node18.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node11.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node11.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node13.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node13.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node19.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node19.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node37.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node37.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node52.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node52.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_mem.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_mem.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node26.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node26.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node78.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node78.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_node104.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_node104.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_badNode.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_badNode.MultisetSort();
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
