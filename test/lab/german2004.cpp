/******************************
  Program "./lab/german2004.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Aug 14 2022"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Aug 14 2022"
#define PROTOCOL_NAME "./lab/german2004"
#define BITS_IN_WORLD 20976
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_opcode: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_opcode& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_opcode& val)
  {
    if (val.defined())
      return ( s << mu_1_opcode::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_opcode (const char *name, int os): mu__byte(1, 9, 4, name, os) {};
  mu_1_opcode (void): mu__byte(1, 9, 4) {};
  mu_1_opcode (int val): mu__byte(1, 9, 4, "Parameter or function result.", 0)
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

const char *mu_1_opcode::values[] = {"op_invalid","read_shared","read_exclusive","req_upgrade","invalidate","invalidate_ack","grant_shared","grant_upgrade","grant_exclusive",NULL };

/*** end of enum declaration ***/
mu_1_opcode mu_1_opcode_undefined_var;

class mu_1_request_opcode: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_request_opcode& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_request_opcode& val)
  {
    if (val.defined())
      return ( s << mu_1_request_opcode::values[ int(val) - 10] );
    else return ( s << "Undefined" );
  };

  mu_1_request_opcode (const char *name, int os): mu__byte(10, 12, 2, name, os) {};
  mu_1_request_opcode (void): mu__byte(10, 12, 2) {};
  mu_1_request_opcode (int val): mu__byte(10, 12, 2, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -10] << '\n';
attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_request_opcode::values[] = {"req_read_shared","req_read_exclusive","req_req_upgrade",NULL };

/*** end of enum declaration ***/
mu_1_request_opcode mu_1_request_opcode_undefined_var;

class mu_1_cache_state: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_cache_state& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_cache_state& val)
  {
    if (val.defined())
      return ( s << mu_1_cache_state::values[ int(val) - 13] );
    else return ( s << "Undefined" );
  };

  mu_1_cache_state (const char *name, int os): mu__byte(13, 15, 2, name, os) {};
  mu_1_cache_state (void): mu__byte(13, 15, 2) {};
  mu_1_cache_state (int val): mu__byte(13, 15, 2, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -13] << '\n';
attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_cache_state::values[] = {"cache_invalid","cache_shared","cache_exclusive",NULL };

/*** end of enum declaration ***/
mu_1_cache_state mu_1_cache_state_undefined_var;

class mu_1_addr_type: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_addr_type& val) { return mu__byte::operator=((int) val); };
  mu_1_addr_type (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_addr_type (void): mu__byte(0, 3, 3) {};
  mu_1_addr_type (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu_1_addr_type mu_1_addr_type_undefined_var;

class mu_1_num_data_type: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_num_data_type& val) { return mu__byte::operator=((int) val); };
  mu_1_num_data_type (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_num_data_type (void): mu__byte(0, 3, 3) {};
  mu_1_num_data_type (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
mu_1_num_data_type mu_1_num_data_type_undefined_var;

class mu_1__type_0
{
 public:
  mu_0_boolean array[ 4 ];
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
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
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
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_data_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_0 mu_values;
  mu_1_data_type ( const char *n, int os ) { set_self(n,os); };
  mu_1_data_type ( void ) {};

  virtual ~mu_1_data_type(); 
friend int CompareWeight(mu_1_data_type& a, mu_1_data_type& b)
  {
    int w;
    w = CompareWeight(a.mu_values, b.mu_values);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_data_type& a, mu_1_data_type& b)
  {
    int w;
    w = Compare(a.mu_values, b.mu_values);
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
    mu_values.MultisetSort();
  }
  void print_statistic()
  {
    mu_values.print_statistic();
  }
  void clear() {
    mu_values.clear();
 };
  void undefine() {
    mu_values.undefine();
 };
  void reset() {
    mu_values.reset();
 };
  void print() {
    mu_values.print();
  };
  void print_diff(state *prevstate) {
    mu_values.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_values.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_data_type& operator= (const mu_1_data_type& from) {
    mu_values = from.mu_values;
    return *this;
  };
};

  void mu_1_data_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_data_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_data_type::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_values.set_self_2(name, ".values", os + 0 ); else mu_values.set_self_2(NULL, NULL, 0);
}

mu_1_data_type::~mu_1_data_type()
{
}

/*** end record declaration ***/
mu_1_data_type mu_1_data_type_undefined_var;

class mu_1_cache_record
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_cache_state mu_state;
  mu_1_data_type mu_data;
  mu_1_cache_record ( const char *n, int os ) { set_self(n,os); };
  mu_1_cache_record ( void ) {};

  virtual ~mu_1_cache_record(); 
friend int CompareWeight(mu_1_cache_record& a, mu_1_cache_record& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_cache_record& a, mu_1_cache_record& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
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
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_data.reset();
 };
  void print() {
    mu_state.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_cache_record& operator= (const mu_1_cache_record& from) {
    mu_state.value(from.mu_state.value());
    mu_data = from.mu_data;
    return *this;
  };
};

  void mu_1_cache_record::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_cache_record::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_cache_record::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_state.set_self_2(name, ".state", os + 0 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 8 ); else mu_data.set_self_2(NULL, NULL, 0);
}

mu_1_cache_record::~mu_1_cache_record()
{
}

/*** end record declaration ***/
mu_1_cache_record mu_1_cache_record_undefined_var;

class mu_1_node_id: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_node_id& val) { return mu__byte::operator=((int) val); };
  mu_1_node_id (const char *name, int os): mu__byte(0, 10, 4, name, os) {};
  mu_1_node_id (void): mu__byte(0, 10, 4) {};
  mu_1_node_id (int val): mu__byte(0, 10, 4, "Parameter or function result.", 0)
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
mu_1_node_id mu_1_node_id_undefined_var;

class mu_1_channel_id: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_channel_id& val) { return mu__byte::operator=((int) val); };
  mu_1_channel_id (const char *name, int os): mu__byte(1, 3, 2, name, os) {};
  mu_1_channel_id (void): mu__byte(1, 3, 2) {};
  mu_1_channel_id (int val): mu__byte(1, 3, 2, "Parameter or function result.", 0)
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
mu_1_channel_id mu_1_channel_id_undefined_var;

class mu_1_message_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_node_id mu_source;
  mu_1_node_id mu_dest;
  mu_1_opcode mu_op;
  mu_1_addr_type mu_addr;
  mu_1_data_type mu_data;
  mu_1_message_type ( const char *n, int os ) { set_self(n,os); };
  mu_1_message_type ( void ) {};

  virtual ~mu_1_message_type(); 
friend int CompareWeight(mu_1_message_type& a, mu_1_message_type& b)
  {
    int w;
    w = CompareWeight(a.mu_source, b.mu_source);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dest, b.mu_dest);
    if (w!=0) return w;
    w = CompareWeight(a.mu_op, b.mu_op);
    if (w!=0) return w;
    w = CompareWeight(a.mu_addr, b.mu_addr);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_message_type& a, mu_1_message_type& b)
  {
    int w;
    w = Compare(a.mu_source, b.mu_source);
    if (w!=0) return w;
    w = Compare(a.mu_dest, b.mu_dest);
    if (w!=0) return w;
    w = Compare(a.mu_op, b.mu_op);
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
    mu_source.MultisetSort();
    mu_dest.MultisetSort();
    mu_op.MultisetSort();
    mu_addr.MultisetSort();
    mu_data.MultisetSort();
  }
  void print_statistic()
  {
    mu_source.print_statistic();
    mu_dest.print_statistic();
    mu_op.print_statistic();
    mu_addr.print_statistic();
    mu_data.print_statistic();
  }
  void clear() {
    mu_source.clear();
    mu_dest.clear();
    mu_op.clear();
    mu_addr.clear();
    mu_data.clear();
 };
  void undefine() {
    mu_source.undefine();
    mu_dest.undefine();
    mu_op.undefine();
    mu_addr.undefine();
    mu_data.undefine();
 };
  void reset() {
    mu_source.reset();
    mu_dest.reset();
    mu_op.reset();
    mu_addr.reset();
    mu_data.reset();
 };
  void print() {
    mu_source.print();
    mu_dest.print();
    mu_op.print();
    mu_addr.print();
    mu_data.print();
  };
  void print_diff(state *prevstate) {
    mu_source.print_diff(prevstate);
    mu_dest.print_diff(prevstate);
    mu_op.print_diff(prevstate);
    mu_addr.print_diff(prevstate);
    mu_data.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_source.to_state(thestate);
    mu_dest.to_state(thestate);
    mu_op.to_state(thestate);
    mu_addr.to_state(thestate);
    mu_data.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_message_type& operator= (const mu_1_message_type& from) {
    mu_source.value(from.mu_source.value());
    mu_dest.value(from.mu_dest.value());
    mu_op.value(from.mu_op.value());
    mu_addr.value(from.mu_addr.value());
    mu_data = from.mu_data;
    return *this;
  };
};

  void mu_1_message_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_message_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_message_type::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_source.set_self_2(name, ".source", os + 0 ); else mu_source.set_self_2(NULL, NULL, 0);
  if (name) mu_dest.set_self_2(name, ".dest", os + 8 ); else mu_dest.set_self_2(NULL, NULL, 0);
  if (name) mu_op.set_self_2(name, ".op", os + 16 ); else mu_op.set_self_2(NULL, NULL, 0);
  if (name) mu_addr.set_self_2(name, ".addr", os + 24 ); else mu_addr.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 32 ); else mu_data.set_self_2(NULL, NULL, 0);
}

mu_1_message_type::~mu_1_message_type()
{
}

/*** end record declaration ***/
mu_1_message_type mu_1_message_type_undefined_var;

class mu_1_message_buf_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_message_type mu_msg;
  mu_0_boolean mu_valid;
  mu_1_message_buf_type ( const char *n, int os ) { set_self(n,os); };
  mu_1_message_buf_type ( void ) {};

  virtual ~mu_1_message_buf_type(); 
friend int CompareWeight(mu_1_message_buf_type& a, mu_1_message_buf_type& b)
  {
    int w;
    w = CompareWeight(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_valid, b.mu_valid);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_message_buf_type& a, mu_1_message_buf_type& b)
  {
    int w;
    w = Compare(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = Compare(a.mu_valid, b.mu_valid);
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
    mu_msg.MultisetSort();
    mu_valid.MultisetSort();
  }
  void print_statistic()
  {
    mu_msg.print_statistic();
    mu_valid.print_statistic();
  }
  void clear() {
    mu_msg.clear();
    mu_valid.clear();
 };
  void undefine() {
    mu_msg.undefine();
    mu_valid.undefine();
 };
  void reset() {
    mu_msg.reset();
    mu_valid.reset();
 };
  void print() {
    mu_msg.print();
    mu_valid.print();
  };
  void print_diff(state *prevstate) {
    mu_msg.print_diff(prevstate);
    mu_valid.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msg.to_state(thestate);
    mu_valid.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_message_buf_type& operator= (const mu_1_message_buf_type& from) {
    mu_msg = from.mu_msg;
    mu_valid.value(from.mu_valid.value());
    return *this;
  };
};

  void mu_1_message_buf_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_message_buf_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_message_buf_type::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msg.set_self_2(name, ".msg", os + 0 ); else mu_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_valid.set_self_2(name, ".valid", os + 64 ); else mu_valid.set_self_2(NULL, NULL, 0);
}

mu_1_message_buf_type::~mu_1_message_buf_type()
{
}

/*** end record declaration ***/
mu_1_message_buf_type mu_1_message_buf_type_undefined_var;

class mu_1_status_type: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_status_type& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_status_type& val)
  {
    if (val.defined())
      return ( s << mu_1_status_type::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_status_type (const char *name, int os): mu__byte(16, 18, 2, name, os) {};
  mu_1_status_type (void): mu__byte(16, 18, 2) {};
  mu_1_status_type (int val): mu__byte(16, 18, 2, "Parameter or function result.", 0)
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
    if (defined()){
      cout << name << ":" << values[ value() -16] << '\n';
attr_list.push_back(make_pair<int&, string>(offset, name));}
    else{
      cout << name << ":Undefined\n";}
  };
};

const char *mu_1_status_type::values[] = {"inactive","pending","completed",NULL };

/*** end of enum declaration ***/
mu_1_status_type mu_1_status_type_undefined_var;

class mu_1_addr_request_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_node_id mu_home;
  mu_1_opcode mu_op;
  mu_1_data_type mu_data;
  mu_1_status_type mu_status;
  mu_1_addr_request_type ( const char *n, int os ) { set_self(n,os); };
  mu_1_addr_request_type ( void ) {};

  virtual ~mu_1_addr_request_type(); 
friend int CompareWeight(mu_1_addr_request_type& a, mu_1_addr_request_type& b)
  {
    int w;
    w = CompareWeight(a.mu_home, b.mu_home);
    if (w!=0) return w;
    w = CompareWeight(a.mu_op, b.mu_op);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = CompareWeight(a.mu_status, b.mu_status);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_addr_request_type& a, mu_1_addr_request_type& b)
  {
    int w;
    w = Compare(a.mu_home, b.mu_home);
    if (w!=0) return w;
    w = Compare(a.mu_op, b.mu_op);
    if (w!=0) return w;
    w = Compare(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = Compare(a.mu_status, b.mu_status);
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
    mu_home.MultisetSort();
    mu_op.MultisetSort();
    mu_data.MultisetSort();
    mu_status.MultisetSort();
  }
  void print_statistic()
  {
    mu_home.print_statistic();
    mu_op.print_statistic();
    mu_data.print_statistic();
    mu_status.print_statistic();
  }
  void clear() {
    mu_home.clear();
    mu_op.clear();
    mu_data.clear();
    mu_status.clear();
 };
  void undefine() {
    mu_home.undefine();
    mu_op.undefine();
    mu_data.undefine();
    mu_status.undefine();
 };
  void reset() {
    mu_home.reset();
    mu_op.reset();
    mu_data.reset();
    mu_status.reset();
 };
  void print() {
    mu_home.print();
    mu_op.print();
    mu_data.print();
    mu_status.print();
  };
  void print_diff(state *prevstate) {
    mu_home.print_diff(prevstate);
    mu_op.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_status.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_home.to_state(thestate);
    mu_op.to_state(thestate);
    mu_data.to_state(thestate);
    mu_status.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_addr_request_type& operator= (const mu_1_addr_request_type& from) {
    mu_home.value(from.mu_home.value());
    mu_op.value(from.mu_op.value());
    mu_data = from.mu_data;
    mu_status.value(from.mu_status.value());
    return *this;
  };
};

  void mu_1_addr_request_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_addr_request_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_addr_request_type::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_home.set_self_2(name, ".home", os + 0 ); else mu_home.set_self_2(NULL, NULL, 0);
  if (name) mu_op.set_self_2(name, ".op", os + 8 ); else mu_op.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_status.set_self_2(name, ".status", os + 48 ); else mu_status.set_self_2(NULL, NULL, 0);
}

mu_1_addr_request_type::~mu_1_addr_request_type()
{
}

/*** end record declaration ***/
mu_1_addr_request_type mu_1_addr_request_type_undefined_var;

class mu_1__type_1
{
 public:
  mu_0_boolean array[ 11 ];
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
    if ( ( index >= 0 ) && ( index <= 10 ) )
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
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 11; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 11; i++)
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
  for(int i = 0; i < 11; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_home_request_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_node_id mu_source;
  mu_1_opcode mu_op;
  mu_1_data_type mu_data;
  mu_1__type_1 mu_invalidate_list;
  mu_1_status_type mu_status;
  mu_1_home_request_type ( const char *n, int os ) { set_self(n,os); };
  mu_1_home_request_type ( void ) {};

  virtual ~mu_1_home_request_type(); 
friend int CompareWeight(mu_1_home_request_type& a, mu_1_home_request_type& b)
  {
    int w;
    w = CompareWeight(a.mu_source, b.mu_source);
    if (w!=0) return w;
    w = CompareWeight(a.mu_op, b.mu_op);
    if (w!=0) return w;
    w = CompareWeight(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = CompareWeight(a.mu_invalidate_list, b.mu_invalidate_list);
    if (w!=0) return w;
    w = CompareWeight(a.mu_status, b.mu_status);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_home_request_type& a, mu_1_home_request_type& b)
  {
    int w;
    w = Compare(a.mu_source, b.mu_source);
    if (w!=0) return w;
    w = Compare(a.mu_op, b.mu_op);
    if (w!=0) return w;
    w = Compare(a.mu_data, b.mu_data);
    if (w!=0) return w;
    w = Compare(a.mu_invalidate_list, b.mu_invalidate_list);
    if (w!=0) return w;
    w = Compare(a.mu_status, b.mu_status);
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
    mu_source.MultisetSort();
    mu_op.MultisetSort();
    mu_data.MultisetSort();
    mu_invalidate_list.MultisetSort();
    mu_status.MultisetSort();
  }
  void print_statistic()
  {
    mu_source.print_statistic();
    mu_op.print_statistic();
    mu_data.print_statistic();
    mu_invalidate_list.print_statistic();
    mu_status.print_statistic();
  }
  void clear() {
    mu_source.clear();
    mu_op.clear();
    mu_data.clear();
    mu_invalidate_list.clear();
    mu_status.clear();
 };
  void undefine() {
    mu_source.undefine();
    mu_op.undefine();
    mu_data.undefine();
    mu_invalidate_list.undefine();
    mu_status.undefine();
 };
  void reset() {
    mu_source.reset();
    mu_op.reset();
    mu_data.reset();
    mu_invalidate_list.reset();
    mu_status.reset();
 };
  void print() {
    mu_source.print();
    mu_op.print();
    mu_data.print();
    mu_invalidate_list.print();
    mu_status.print();
  };
  void print_diff(state *prevstate) {
    mu_source.print_diff(prevstate);
    mu_op.print_diff(prevstate);
    mu_data.print_diff(prevstate);
    mu_invalidate_list.print_diff(prevstate);
    mu_status.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_source.to_state(thestate);
    mu_op.to_state(thestate);
    mu_data.to_state(thestate);
    mu_invalidate_list.to_state(thestate);
    mu_status.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_home_request_type& operator= (const mu_1_home_request_type& from) {
    mu_source.value(from.mu_source.value());
    mu_op.value(from.mu_op.value());
    mu_data = from.mu_data;
    mu_invalidate_list = from.mu_invalidate_list;
    mu_status.value(from.mu_status.value());
    return *this;
  };
};

  void mu_1_home_request_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_home_request_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_home_request_type::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_source.set_self_2(name, ".source", os + 0 ); else mu_source.set_self_2(NULL, NULL, 0);
  if (name) mu_op.set_self_2(name, ".op", os + 8 ); else mu_op.set_self_2(NULL, NULL, 0);
  if (name) mu_data.set_self_2(name, ".data", os + 16 ); else mu_data.set_self_2(NULL, NULL, 0);
  if (name) mu_invalidate_list.set_self_2(name, ".invalidate_list", os + 48 ); else mu_invalidate_list.set_self_2(NULL, NULL, 0);
  if (name) mu_status.set_self_2(name, ".status", os + 136 ); else mu_status.set_self_2(NULL, NULL, 0);
}

mu_1_home_request_type::~mu_1_home_request_type()
{
}

/*** end record declaration ***/
mu_1_home_request_type mu_1_home_request_type_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_data_type array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_data_type& operator[] (int index) /* const */
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
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
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
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 32 + os);
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
  mu_1_cache_record array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_cache_record& operator[] (int index) /* const */
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
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
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
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 40 + os);
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
  mu_1_cache_state array[ 11 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_cache_state& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 10 ) )
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
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 11; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 11; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 11; i++)
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
  for(int i = 0; i < 11; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
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
  mu_1__type_4 array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1__type_4& operator[] (int index) /* const */
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
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
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 88 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_0_boolean array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_0_boolean& operator[] (int index) /* const */
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
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
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

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7
{
 public:
  mu_1_home_request_type array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_1_home_request_type& operator[] (int index) /* const */
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
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
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

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 144 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_addr_request_type array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_addr_request_type& operator[] (int index) /* const */
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
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 4; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
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

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 56 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_1_message_buf_type array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1_message_buf_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 3 ) )
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
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
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

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_9::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 72 + os);
    delete[] s;
  }
};
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10
{
 public:
  mu_1_message_buf_type array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1_message_buf_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 3 ) )
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
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
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

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_10::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 72 + os);
    delete[] s;
  }
};
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1_node_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_2 mu_memory;
  mu_1__type_3 mu_cache;
  mu_1__type_5 mu_directory;
  mu_1__type_6 mu_local_requests;
  mu_1__type_7 mu_home_requests;
  mu_1__type_8 mu_remote_requests;
  mu_1__type_9 mu_inchan;
  mu_1__type_10 mu_outchan;
  mu_1_node_type ( const char *n, int os ) { set_self(n,os); };
  mu_1_node_type ( void ) {};

  virtual ~mu_1_node_type(); 
friend int CompareWeight(mu_1_node_type& a, mu_1_node_type& b)
  {
    int w;
    w = CompareWeight(a.mu_memory, b.mu_memory);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = CompareWeight(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
    w = CompareWeight(a.mu_local_requests, b.mu_local_requests);
    if (w!=0) return w;
    w = CompareWeight(a.mu_home_requests, b.mu_home_requests);
    if (w!=0) return w;
    w = CompareWeight(a.mu_remote_requests, b.mu_remote_requests);
    if (w!=0) return w;
    w = CompareWeight(a.mu_inchan, b.mu_inchan);
    if (w!=0) return w;
    w = CompareWeight(a.mu_outchan, b.mu_outchan);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_node_type& a, mu_1_node_type& b)
  {
    int w;
    w = Compare(a.mu_memory, b.mu_memory);
    if (w!=0) return w;
    w = Compare(a.mu_cache, b.mu_cache);
    if (w!=0) return w;
    w = Compare(a.mu_directory, b.mu_directory);
    if (w!=0) return w;
    w = Compare(a.mu_local_requests, b.mu_local_requests);
    if (w!=0) return w;
    w = Compare(a.mu_home_requests, b.mu_home_requests);
    if (w!=0) return w;
    w = Compare(a.mu_remote_requests, b.mu_remote_requests);
    if (w!=0) return w;
    w = Compare(a.mu_inchan, b.mu_inchan);
    if (w!=0) return w;
    w = Compare(a.mu_outchan, b.mu_outchan);
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
    mu_memory.MultisetSort();
    mu_cache.MultisetSort();
    mu_directory.MultisetSort();
    mu_local_requests.MultisetSort();
    mu_home_requests.MultisetSort();
    mu_remote_requests.MultisetSort();
    mu_inchan.MultisetSort();
    mu_outchan.MultisetSort();
  }
  void print_statistic()
  {
    mu_memory.print_statistic();
    mu_cache.print_statistic();
    mu_directory.print_statistic();
    mu_local_requests.print_statistic();
    mu_home_requests.print_statistic();
    mu_remote_requests.print_statistic();
    mu_inchan.print_statistic();
    mu_outchan.print_statistic();
  }
  void clear() {
    mu_memory.clear();
    mu_cache.clear();
    mu_directory.clear();
    mu_local_requests.clear();
    mu_home_requests.clear();
    mu_remote_requests.clear();
    mu_inchan.clear();
    mu_outchan.clear();
 };
  void undefine() {
    mu_memory.undefine();
    mu_cache.undefine();
    mu_directory.undefine();
    mu_local_requests.undefine();
    mu_home_requests.undefine();
    mu_remote_requests.undefine();
    mu_inchan.undefine();
    mu_outchan.undefine();
 };
  void reset() {
    mu_memory.reset();
    mu_cache.reset();
    mu_directory.reset();
    mu_local_requests.reset();
    mu_home_requests.reset();
    mu_remote_requests.reset();
    mu_inchan.reset();
    mu_outchan.reset();
 };
  void print() {
    mu_memory.print();
    mu_cache.print();
    mu_directory.print();
    mu_local_requests.print();
    mu_home_requests.print();
    mu_remote_requests.print();
    mu_inchan.print();
    mu_outchan.print();
  };
  void print_diff(state *prevstate) {
    mu_memory.print_diff(prevstate);
    mu_cache.print_diff(prevstate);
    mu_directory.print_diff(prevstate);
    mu_local_requests.print_diff(prevstate);
    mu_home_requests.print_diff(prevstate);
    mu_remote_requests.print_diff(prevstate);
    mu_inchan.print_diff(prevstate);
    mu_outchan.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_memory.to_state(thestate);
    mu_cache.to_state(thestate);
    mu_directory.to_state(thestate);
    mu_local_requests.to_state(thestate);
    mu_home_requests.to_state(thestate);
    mu_remote_requests.to_state(thestate);
    mu_inchan.to_state(thestate);
    mu_outchan.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_node_type& operator= (const mu_1_node_type& from) {
    mu_memory = from.mu_memory;
    mu_cache = from.mu_cache;
    mu_directory = from.mu_directory;
    mu_local_requests = from.mu_local_requests;
    mu_home_requests = from.mu_home_requests;
    mu_remote_requests = from.mu_remote_requests;
    mu_inchan = from.mu_inchan;
    mu_outchan = from.mu_outchan;
    return *this;
  };
};

  void mu_1_node_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_node_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_node_type::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_memory.set_self_2(name, ".memory", os + 0 ); else mu_memory.set_self_2(NULL, NULL, 0);
  if (name) mu_cache.set_self_2(name, ".cache", os + 128 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 288 ); else mu_directory.set_self_2(NULL, NULL, 0);
  if (name) mu_local_requests.set_self_2(name, ".local_requests", os + 640 ); else mu_local_requests.set_self_2(NULL, NULL, 0);
  if (name) mu_home_requests.set_self_2(name, ".home_requests", os + 672 ); else mu_home_requests.set_self_2(NULL, NULL, 0);
  if (name) mu_remote_requests.set_self_2(name, ".remote_requests", os + 1248 ); else mu_remote_requests.set_self_2(NULL, NULL, 0);
  if (name) mu_inchan.set_self_2(name, ".inchan", os + 1472 ); else mu_inchan.set_self_2(NULL, NULL, 0);
  if (name) mu_outchan.set_self_2(name, ".outchan", os + 1688 ); else mu_outchan.set_self_2(NULL, NULL, 0);
}

mu_1_node_type::~mu_1_node_type()
{
}

/*** end record declaration ***/
mu_1_node_type mu_1_node_type_undefined_var;

class mu_1__type_11
{
 public:
  mu_1_node_type array[ 11 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_1_node_type& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 10 ) )
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
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 11; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<11; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<11; i++) {
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
    for (int i=0; i<11; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<11; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 11; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 11; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 11; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 11; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 11; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 11; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_11::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 11; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 1904 + os);
    delete[] s;
  }
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

const int mu_num_nodes = 10;
const int mu_num_addr = 3;
const int mu_num_data = 3;
const int mu_op_invalid = 1;
const int mu_read_shared = 2;
const int mu_read_exclusive = 3;
const int mu_req_upgrade = 4;
const int mu_invalidate = 5;
const int mu_invalidate_ack = 6;
const int mu_grant_shared = 7;
const int mu_grant_upgrade = 8;
const int mu_grant_exclusive = 9;
const int mu_req_read_shared = 10;
const int mu_req_read_exclusive = 11;
const int mu_req_req_upgrade = 12;
const int mu_cache_invalid = 13;
const int mu_cache_shared = 14;
const int mu_cache_exclusive = 15;
const int mu_inactive = 16;
const int mu_pending = 17;
const int mu_completed = 18;
/*** Variable declaration ***/
mu_1__type_11 mu_node("node",0);

/*** Variable declaration ***/
mu_1_data_type mu_auxdata("auxdata",20944);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_node.clear();
  mu_auxdata.clear();
}
void world_class::undefine()
{
  mu_node.undefine();
  mu_auxdata.undefine();
}
void world_class::reset()
{
  mu_node.reset();
  mu_auxdata.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_node.print();
  mu_auxdata.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_node.print_statistic();
  mu_auxdata.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_node.print_diff(prevstate);
    mu_auxdata.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_node.to_state( newstate );
  mu_auxdata.to_state( newstate );
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
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`home' sends grant for `addr', channel2:%s, source:%s, addr:%s, home:%s", mu_channel2.Name(), mu_source.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr12;
bool mu__boolexpr13;
bool mu__boolexpr14;
  if (!((mu_channel2) == (2))) mu__boolexpr14 = FALSE ;
  else {
  mu__boolexpr14 = ((mu_source) == (mu_node[mu_home].mu_home_requests[mu_addr].mu_source)) ; 
}
  if (!(mu__boolexpr14)) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_completed)) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
  mu__boolexpr12 = (!(mu_node[mu_home].mu_outchan[mu_channel2].mu_valid)) ; 
}
    return mu__boolexpr12;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 1452 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
  if (!((mu_channel2) == (2))) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = ((mu_source) == (mu_node[mu_home].mu_home_requests[mu_addr].mu_source)) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_completed)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = (!(mu_node[mu_home].mu_outchan[mu_channel2].mu_valid)) ; 
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
    r = what_rule - 0;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_source = mu_home;
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_dest = mu_node[mu_home].mu_home_requests[mu_addr].mu_source;
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_read_shared) )
{
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_op = mu_grant_shared;
mu_node[mu_home].mu_directory[mu_addr][mu_source] = mu_cache_shared;
}
else
{
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_req_upgrade) )
{
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_op = mu_grant_upgrade;
mu_node[mu_home].mu_directory[mu_addr][mu_source] = mu_cache_exclusive;
}
else
{
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_read_exclusive) )
{
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_op = mu_grant_exclusive;
mu_node[mu_home].mu_directory[mu_addr][mu_source] = mu_cache_exclusive;
}
}
}
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_data.mu_values[mu_i] = mu_node[mu_home].mu_home_requests[mu_addr].mu_data.mu_values[mu_i];
};
};
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_addr = mu_addr;
mu_node[mu_home].mu_outchan[mu_channel2].mu_valid = mu_true;
mu_node[mu_home].mu_home_requests[mu_addr].mu_source = 0;
mu_node[mu_home].mu_home_requests[mu_addr].mu_op = mu_op_invalid;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_home].mu_home_requests[mu_addr].mu_data.mu_values[mu_k] = mu_false;
};
};
{
for(int mu_k = 0; mu_k <= 10; mu_k++) {
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_k] = mu_false;
};
};
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_inactive;
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
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`home' processes invalidate ack, channel3:%s, source:%s, addr:%s, home:%s", mu_channel3.Name(), mu_source.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!((mu_channel3) == (3))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = (mu_node[mu_home].mu_inchan[mu_channel3].mu_valid) ; 
}
  if (!(mu__boolexpr20)) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_op) == (mu_invalidate_ack)) ; 
}
    return mu__boolexpr18;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1452;
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 2904 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr23;
bool mu__boolexpr24;
bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_channel3) == (3))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = (mu_node[mu_home].mu_inchan[mu_channel3].mu_valid) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_op) == (mu_invalidate_ack)) ; 
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
    r = what_rule - 1452;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
if ( (mu_node[mu_home].mu_directory[mu_addr][mu_source]) == (mu_cache_exclusive) )
{
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_home].mu_memory[mu_addr].mu_values[mu_i] = mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_data.mu_values[mu_i];
};
};
}
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_home].mu_home_requests[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_data.mu_values[mu_i];
};
};
mu_node[mu_home].mu_directory[mu_addr][mu_source] = mu_cache_invalid;
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_read_shared) )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
else
{
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_req_upgrade) )
{
bool mu__quant28; 
mu__quant28 = TRUE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
bool mu__boolexpr29;
  if (!((mu_n) != (mu_node[mu_home].mu_home_requests[mu_addr].mu_source))) mu__boolexpr29 = TRUE ;
  else {
  mu__boolexpr29 = ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_invalid)) ; 
}
if ( !(mu__boolexpr29) )
  { mu__quant28 = FALSE; break; }
};
};
if ( mu__quant28 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
}
else
{
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_read_exclusive) )
{
bool mu__quant30; 
mu__quant30 = TRUE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( !((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_invalid)) )
  { mu__quant30 = FALSE; break; }
};
};
if ( mu__quant30 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
}
}
}
mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_source = 0;
mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_dest = 0;
mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_op = mu_op_invalid;
mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_addr = 0;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_home].mu_inchan[mu_channel3].mu_valid = mu_false;
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
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`home' prepares invalidate for `addr', channel2:%s, dest:%s, addr:%s, home:%s", mu_channel2.Name(), mu_dest.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr31;
bool mu__boolexpr32;
bool mu__boolexpr33;
bool mu__boolexpr34;
  if (!((mu_channel2) == (2))) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_dest]) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr33)) mu__boolexpr32 = FALSE ;
  else {
bool mu__quant35; 
mu__quant35 = FALSE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n]) )
  { mu__quant35 = TRUE; break; }
};
};
  mu__boolexpr32 = (mu__quant35) ; 
}
  if (!(mu__boolexpr32)) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = (!(mu_node[mu_home].mu_outchan[mu_channel2].mu_valid)) ; 
}
    return mu__boolexpr31;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 2904;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 4356 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr36;
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
  if (!((mu_channel2) == (2))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_dest]) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
bool mu__quant40; 
mu__quant40 = FALSE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n]) )
  { mu__quant40 = TRUE; break; }
};
};
  mu__boolexpr37 = (mu__quant40) ; 
}
  if (!(mu__boolexpr37)) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = (!(mu_node[mu_home].mu_outchan[mu_channel2].mu_valid)) ; 
}
	      if (mu__boolexpr36) {
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
    r = what_rule - 2904;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_addr = mu_addr;
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_op = mu_invalidate;
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_source = mu_home;
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_dest = mu_dest;
mu_node[mu_home].mu_outchan[mu_channel2].mu_valid = mu_true;
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_dest] = mu_false;
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
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`home' accepts a request message, channel1:%s, source:%s, addr:%s, home:%s", mu_channel1.Name(), mu_source.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr41;
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
  if (!((mu_channel1) == (1))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = (mu_node[mu_home].mu_inchan[mu_channel1].mu_valid) ; 
}
  if (!(mu__boolexpr42)) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_inactive)) ; 
}
    return mu__boolexpr41;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 4356;
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 5808 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr45;
bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!((mu_channel1) == (1))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = (mu_node[mu_home].mu_inchan[mu_channel1].mu_valid) ; 
}
  if (!(mu__boolexpr46)) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_inactive)) ; 
}
	      if (mu__boolexpr45) {
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
    r = what_rule - 4356;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_home.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_home;
    mu_home.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr49;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_req_upgrade))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_node[mu_home].mu_directory[mu_addr][mu_source]) == (mu_cache_invalid)) ; 
}
if ( mu__boolexpr49 )
{
mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op = mu_read_exclusive;
}
mu_node[mu_home].mu_home_requests[mu_addr].mu_source = mu_source;
mu_node[mu_home].mu_home_requests[mu_addr].mu_op = mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op;
bool mu__boolexpr50;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_read_shared))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_node[mu_home].mu_directory[mu_addr][mu_home]) == (mu_cache_shared)) ; 
}
if ( mu__boolexpr50 )
{
if ( (mu_node[mu_home].mu_cache[mu_addr].mu_state) == (mu_cache_shared) )
{
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_home].mu_home_requests[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_home].mu_cache[mu_addr].mu_data.mu_values[mu_i];
};
};
}
else
{
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_home].mu_home_requests[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_home].mu_memory[mu_addr].mu_values[mu_i];
};
};
}
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
else
{
bool mu__boolexpr51;
bool mu__boolexpr52;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_read_shared))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_node[mu_home].mu_directory[mu_addr][mu_home]) == (mu_cache_invalid)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
bool mu__quant53; 
mu__quant53 = FALSE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_exclusive)) )
  { mu__quant53 = TRUE; break; }
};
};
  mu__boolexpr51 = (!(mu__quant53)) ; 
}
if ( mu__boolexpr51 )
{
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_home].mu_home_requests[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_home].mu_memory[mu_addr].mu_values[mu_i];
};
};
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
else
{
bool mu__boolexpr54;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_read_shared))) mu__boolexpr54 = FALSE ;
  else {
bool mu__quant55; 
mu__quant55 = FALSE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_exclusive)) )
  { mu__quant55 = TRUE; break; }
};
};
  mu__boolexpr54 = (mu__quant55) ; 
}
if ( mu__boolexpr54 )
{
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( (mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid) )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_true;
}
else
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_false;
}
};
};
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_pending;
}
else
{
if ( (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_req_upgrade) )
{
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
bool mu__boolexpr56;
  if (!((mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_n) != (mu_source)) ; 
}
if ( mu__boolexpr56 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_true;
}
else
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_false;
}
};
};
bool mu__quant57; 
mu__quant57 = FALSE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
bool mu__boolexpr58;
  if (!((mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_n) != (mu_source)) ; 
}
if ( (mu__boolexpr58) )
  { mu__quant57 = TRUE; break; }
};
};
if ( mu__quant57 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_pending;
}
else
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
}
else
{
if ( (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_read_exclusive) )
{
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( (mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid) )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_true;
}
else
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_false;
}
};
};
bool mu__quant59; 
mu__quant59 = FALSE;
{
for(int mu_n = 0; mu_n <= 10; mu_n++) {
if ( ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid)) )
  { mu__quant59 = TRUE; break; }
};
};
if ( mu__quant59 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_pending;
}
else
{
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_home].mu_home_requests[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_home].mu_memory[mu_addr].mu_values[mu_i];
};
};
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
}
}
}
}
}
mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_source = 0;
mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_dest = 0;
mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op = mu_op_invalid;
mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_addr = 0;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_home].mu_inchan[mu_channel1].mu_valid = mu_false;
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
    static mu_0_boolean mu_data;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    static mu_1_num_data_type mu_data_n;
    mu_data_n.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`client' stores data in cache for `addr', data:%s, data_n:%s, addr:%s, client:%s", mu_data.Name(), mu_data_n.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_0_boolean mu_data;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    static mu_1_num_data_type mu_data_n;
    mu_data_n.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr60;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) != (mu_pending))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_exclusive)) ; 
}
    return mu__boolexpr60;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 5808;
    static mu_0_boolean mu_data;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    static mu_1_num_data_type mu_data_n;
    mu_data_n.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 6160 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr61;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) != (mu_pending))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_exclusive)) ; 
}
	      if (mu__boolexpr61) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 8;
	}
	else
	  what_rule += 8;
    r = what_rule - 5808;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    mu_data_n.value((r % 4) + 0);
    r = r / 4;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_0_boolean mu_data;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    static mu_1_num_data_type mu_data_n;
    mu_data_n.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
mu_node[mu_client].mu_cache[mu_addr].mu_data.mu_values[mu_data_n] = mu_data;
mu_auxdata.mu_values[mu_data_n] = mu_data;
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
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`client' receives reply from home, channel2:%s, addr:%s, client:%s", mu_channel2.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr62;
bool mu__boolexpr63;
bool mu__boolexpr64;
  if (!((mu_channel2) == (2))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
bool mu__boolexpr65;
bool mu__boolexpr66;
  if ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_shared)) mu__boolexpr66 = TRUE ;
  else {
  mu__boolexpr66 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_upgrade)) ; 
}
  if (mu__boolexpr66) mu__boolexpr65 = TRUE ;
  else {
  mu__boolexpr65 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_exclusive)) ; 
}
  mu__boolexpr62 = (mu__boolexpr65) ; 
}
    return mu__boolexpr62;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6160;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 6292 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!((mu_channel2) == (2))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
bool mu__boolexpr70;
bool mu__boolexpr71;
  if ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_shared)) mu__boolexpr71 = TRUE ;
  else {
  mu__boolexpr71 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_upgrade)) ; 
}
  if (mu__boolexpr71) mu__boolexpr70 = TRUE ;
  else {
  mu__boolexpr70 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_exclusive)) ; 
}
  mu__boolexpr67 = (mu__boolexpr70) ; 
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
    r = what_rule - 6160;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
if ( (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_shared) )
{
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_client].mu_cache[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_data.mu_values[mu_i];
};
};
mu_node[mu_client].mu_cache[mu_addr].mu_state = mu_cache_shared;
}
else
{
if ( (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_upgrade) )
{
mu_node[mu_client].mu_cache[mu_addr].mu_state = mu_cache_exclusive;
}
else
{
if ( (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_exclusive) )
{
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_client].mu_cache[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_data.mu_values[mu_i];
};
};
mu_node[mu_client].mu_cache[mu_addr].mu_state = mu_cache_exclusive;
}
}
}
mu_node[mu_client].mu_local_requests[mu_addr] = mu_false;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_source = 0;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_dest = 0;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op = mu_op_invalid;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr = 0;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_client].mu_inchan[mu_channel2].mu_valid = mu_false;
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
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`client' prepares invalidate ack for `addr', channel3:%s, addr:%s, client:%s", mu_channel3.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr72;
bool mu__boolexpr73;
bool mu__boolexpr74;
  if (!((mu_channel3) == (3))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_completed)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_op) == (mu_invalidate)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = (!(mu_node[mu_client].mu_outchan[mu_channel3].mu_valid)) ; 
}
    return mu__boolexpr72;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6292;
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 6424 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr75;
bool mu__boolexpr76;
bool mu__boolexpr77;
  if (!((mu_channel3) == (3))) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_completed)) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_op) == (mu_invalidate)) ; 
}
  if (!(mu__boolexpr76)) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = (!(mu_node[mu_client].mu_outchan[mu_channel3].mu_valid)) ; 
}
	      if (mu__boolexpr75) {
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
    r = what_rule - 6292;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_op = mu_invalidate_ack;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_source = mu_client;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_dest = mu_node[mu_client].mu_remote_requests[mu_addr].mu_home;
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_data.mu_values[mu_i] = mu_node[mu_client].mu_remote_requests[mu_addr].mu_data.mu_values[mu_i];
};
};
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_addr = mu_addr;
mu_node[mu_client].mu_outchan[mu_channel3].mu_valid = mu_true;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_home = 0;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_op = mu_op_invalid;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_client].mu_remote_requests[mu_addr].mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_client].mu_remote_requests[mu_addr].mu_status = mu_inactive;
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
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`client' processes invalidate request for `addr', addr:%s, client:%s", mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr78;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_pending))) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_op) == (mu_invalidate)) ; 
}
    return mu__boolexpr78;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6424;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 6468 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr79;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_pending))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_op) == (mu_invalidate)) ; 
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
    r = what_rule - 6424;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_client].mu_remote_requests[mu_addr].mu_data.mu_values[mu_i] = mu_node[mu_client].mu_cache[mu_addr].mu_data.mu_values[mu_i];
};
};
mu_node[mu_client].mu_remote_requests[mu_addr].mu_status = mu_completed;
mu_node[mu_client].mu_cache[mu_addr].mu_state = mu_cache_invalid;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_client].mu_cache[mu_addr].mu_data.mu_values[mu_k] = mu_false;
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
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`client' accepts invalidate request, channel2:%s, addr:%s, client:%s", mu_channel2.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_channel2) == (2))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_invalidate)) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_inactive)) ; 
}
    return mu__boolexpr80;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6468;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 6600 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
  if (!((mu_channel2) == (2))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_invalidate)) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_inactive)) ; 
}
	      if (mu__boolexpr84) {
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
    r = what_rule - 6468;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_home = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_source;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_op = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_status = mu_pending;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_source = 0;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_dest = 0;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op = mu_op_invalid;
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr = 0;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_client].mu_inchan[mu_channel2].mu_valid = mu_false;
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
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("`client' generates new `req' for `addr', channel1:%s, addr:%s, req:%s, client:%s", mu_channel1.Name(), mu_addr.Name(), mu_req.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!((mu_channel1) == (1))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = (!(mu_node[mu_client].mu_local_requests[mu_addr])) ; 
}
  if (!(mu__boolexpr90)) mu__boolexpr89 = FALSE ;
  else {
bool mu__boolexpr91;
bool mu__boolexpr92;
bool mu__boolexpr93;
  if (!((mu_req) == (mu_req_read_shared))) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  if (mu__boolexpr93) mu__boolexpr92 = TRUE ;
  else {
bool mu__boolexpr94;
  if (!((mu_req) == (mu_req_read_exclusive))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  mu__boolexpr92 = (mu__boolexpr94) ; 
}
  if (mu__boolexpr92) mu__boolexpr91 = TRUE ;
  else {
bool mu__boolexpr95;
  if (!((mu_req) == (mu_req_req_upgrade))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_shared)) ; 
}
  mu__boolexpr91 = (mu__boolexpr95) ; 
}
  mu__boolexpr89 = (mu__boolexpr91) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = (!(mu_node[mu_client].mu_outchan[mu_channel1].mu_valid)) ; 
}
    return mu__boolexpr88;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6600;
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 6996 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!((mu_channel1) == (1))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = (!(mu_node[mu_client].mu_local_requests[mu_addr])) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
bool mu__boolexpr99;
bool mu__boolexpr100;
bool mu__boolexpr101;
  if (!((mu_req) == (mu_req_read_shared))) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  if (mu__boolexpr101) mu__boolexpr100 = TRUE ;
  else {
bool mu__boolexpr102;
  if (!((mu_req) == (mu_req_read_exclusive))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  mu__boolexpr100 = (mu__boolexpr102) ; 
}
  if (mu__boolexpr100) mu__boolexpr99 = TRUE ;
  else {
bool mu__boolexpr103;
  if (!((mu_req) == (mu_req_req_upgrade))) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_shared)) ; 
}
  mu__boolexpr99 = (mu__boolexpr103) ; 
}
  mu__boolexpr97 = (mu__boolexpr99) ; 
}
  if (!(mu__boolexpr97)) mu__boolexpr96 = FALSE ;
  else {
  mu__boolexpr96 = (!(mu_node[mu_client].mu_outchan[mu_channel1].mu_valid)) ; 
}
	      if (mu__boolexpr96) {
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
    r = what_rule - 6600;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    mu_client.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 4) + 0);
    r = r / 4;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 11) + 0);
    r = r / 11;
mu_node[mu_client].mu_outchan[mu_channel1].mu_msg.mu_source = mu_client;
if ( (mu_addr) == (0) )
{
mu_node[mu_client].mu_outchan[mu_channel1].mu_msg.mu_dest = 0;
}
else
{
mu_node[mu_client].mu_outchan[mu_channel1].mu_msg.mu_dest = 1;
}
if ( (mu_req) == (mu_req_read_shared) )
{
mu_node[mu_client].mu_outchan[mu_channel1].mu_msg.mu_op = mu_read_shared;
}
else
{
if ( (mu_req) == (mu_req_read_exclusive) )
{
mu_node[mu_client].mu_outchan[mu_channel1].mu_msg.mu_op = mu_read_exclusive;
}
else
{
mu_node[mu_client].mu_outchan[mu_channel1].mu_msg.mu_op = mu_req_upgrade;
}
}
mu_node[mu_client].mu_outchan[mu_channel1].mu_msg.mu_addr = mu_addr;
mu_node[mu_client].mu_outchan[mu_channel1].mu_valid = mu_true;
mu_node[mu_client].mu_local_requests[mu_addr] = mu_true;
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
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    return tsprintf("Transfer message from `source' via `ch', dest:%s, ch:%s, source:%s", mu_dest.Name(), mu_ch.Name(), mu_source.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!((mu_dest) == (mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_dest))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = (mu_node[mu_source].mu_outchan[mu_ch].mu_valid) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (!(mu_node[mu_dest].mu_inchan[mu_ch].mu_valid)) ; 
}
    return mu__boolexpr104;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 6996;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    while (what_rule < 7359 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr106;
bool mu__boolexpr107;
  if (!((mu_dest) == (mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_dest))) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = (mu_node[mu_source].mu_outchan[mu_ch].mu_valid) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = (!(mu_node[mu_dest].mu_inchan[mu_ch].mu_valid)) ; 
}
	      if (mu__boolexpr106) {
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
    r = what_rule - 6996;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    mu_source.value((r % 11) + 0);
    r = r / 11;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 11) + 0);
    r = r / 11;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 11) + 0);
    r = r / 11;
mu_node[mu_dest].mu_inchan[mu_ch].mu_msg.mu_source = mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_source;
mu_node[mu_dest].mu_inchan[mu_ch].mu_msg.mu_dest = mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_dest;
mu_node[mu_dest].mu_inchan[mu_ch].mu_msg.mu_op = mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_op;
mu_node[mu_dest].mu_inchan[mu_ch].mu_msg.mu_addr = mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_addr;
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_node[mu_dest].mu_inchan[mu_ch].mu_msg.mu_data.mu_values[mu_i] = mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_data.mu_values[mu_i];
};
};
mu_node[mu_dest].mu_inchan[mu_ch].mu_valid = mu_node[mu_source].mu_outchan[mu_ch].mu_valid;
mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_source = 0;
mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_dest = 0;
mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_op = mu_op_invalid;
mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_addr = 0;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_source].mu_outchan[mu_ch].mu_valid = mu_false;
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
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<1452)
    { R0.NextRule(what_rule);
      if (what_rule<1452) return; }
  if (what_rule>=1452 && what_rule<2904)
    { R1.NextRule(what_rule);
      if (what_rule<2904) return; }
  if (what_rule>=2904 && what_rule<4356)
    { R2.NextRule(what_rule);
      if (what_rule<4356) return; }
  if (what_rule>=4356 && what_rule<5808)
    { R3.NextRule(what_rule);
      if (what_rule<5808) return; }
  if (what_rule>=5808 && what_rule<6160)
    { R4.NextRule(what_rule);
      if (what_rule<6160) return; }
  if (what_rule>=6160 && what_rule<6292)
    { R5.NextRule(what_rule);
      if (what_rule<6292) return; }
  if (what_rule>=6292 && what_rule<6424)
    { R6.NextRule(what_rule);
      if (what_rule<6424) return; }
  if (what_rule>=6424 && what_rule<6468)
    { R7.NextRule(what_rule);
      if (what_rule<6468) return; }
  if (what_rule>=6468 && what_rule<6600)
    { R8.NextRule(what_rule);
      if (what_rule<6600) return; }
  if (what_rule>=6600 && what_rule<6996)
    { R9.NextRule(what_rule);
      if (what_rule<6996) return; }
  if (what_rule>=6996 && what_rule<7359)
    { R10.NextRule(what_rule);
      if (what_rule<7359) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=1451) return R0.Condition(r-0);
  if (r>=1452 && r<=2903) return R1.Condition(r-1452);
  if (r>=2904 && r<=4355) return R2.Condition(r-2904);
  if (r>=4356 && r<=5807) return R3.Condition(r-4356);
  if (r>=5808 && r<=6159) return R4.Condition(r-5808);
  if (r>=6160 && r<=6291) return R5.Condition(r-6160);
  if (r>=6292 && r<=6423) return R6.Condition(r-6292);
  if (r>=6424 && r<=6467) return R7.Condition(r-6424);
  if (r>=6468 && r<=6599) return R8.Condition(r-6468);
  if (r>=6600 && r<=6995) return R9.Condition(r-6600);
  if (r>=6996 && r<=7358) return R10.Condition(r-6996);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=1451) { R0.Code(r-0); return; } 
  if (r>=1452 && r<=2903) { R1.Code(r-1452); return; } 
  if (r>=2904 && r<=4355) { R2.Code(r-2904); return; } 
  if (r>=4356 && r<=5807) { R3.Code(r-4356); return; } 
  if (r>=5808 && r<=6159) { R4.Code(r-5808); return; } 
  if (r>=6160 && r<=6291) { R5.Code(r-6160); return; } 
  if (r>=6292 && r<=6423) { R6.Code(r-6292); return; } 
  if (r>=6424 && r<=6467) { R7.Code(r-6424); return; } 
  if (r>=6468 && r<=6599) { R8.Code(r-6468); return; } 
  if (r>=6600 && r<=6995) { R9.Code(r-6600); return; } 
  if (r>=6996 && r<=7358) { R10.Code(r-6996); return; } 
}
int Priority(unsigned short r)
{
  if (r<=1451) { return R0.Priority(); } 
  if (r>=1452 && r<=2903) { return R1.Priority(); } 
  if (r>=2904 && r<=4355) { return R2.Priority(); } 
  if (r>=4356 && r<=5807) { return R3.Priority(); } 
  if (r>=5808 && r<=6159) { return R4.Priority(); } 
  if (r>=6160 && r<=6291) { return R5.Priority(); } 
  if (r>=6292 && r<=6423) { return R6.Priority(); } 
  if (r>=6424 && r<=6467) { return R7.Priority(); } 
  if (r>=6468 && r<=6599) { return R8.Priority(); } 
  if (r>=6600 && r<=6995) { return R9.Priority(); } 
  if (r>=6996 && r<=7358) { return R10.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=1451) return R0.Name(r-0);
  if (r>=1452 && r<=2903) return R1.Name(r-1452);
  if (r>=2904 && r<=4355) return R2.Name(r-2904);
  if (r>=4356 && r<=5807) return R3.Name(r-4356);
  if (r>=5808 && r<=6159) return R4.Name(r-5808);
  if (r>=6160 && r<=6291) return R5.Name(r-6160);
  if (r>=6292 && r<=6423) return R6.Name(r-6292);
  if (r>=6424 && r<=6467) return R7.Name(r-6424);
  if (r>=6468 && r<=6599) return R8.Name(r-6468);
  if (r>=6600 && r<=6995) return R9.Name(r-6600);
  if (r>=6996 && r<=7358) return R10.Name(r-6996);
  return NULL;
}
};
const unsigned numrules = 7359;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 7359


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
{
for(int mu_i = 0; mu_i <= 10; mu_i++) {
{
for(int mu_j = 0; mu_j <= 3; mu_j++) {
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_i].mu_memory[mu_j].mu_values[mu_k] = mu_false;
};
};
mu_node[mu_i].mu_cache[mu_j].mu_state = mu_cache_invalid;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_i].mu_cache[mu_j].mu_data.mu_values[mu_k] = mu_false;
};
};
{
for(int mu_k = 0; mu_k <= 10; mu_k++) {
mu_node[mu_i].mu_directory[mu_j][mu_k] = mu_cache_invalid;
};
};
mu_node[mu_i].mu_local_requests[mu_j] = mu_false;
mu_node[mu_i].mu_home_requests[mu_j].mu_source = 0;
mu_node[mu_i].mu_home_requests[mu_j].mu_op = mu_op_invalid;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_i].mu_home_requests[mu_j].mu_data.mu_values[mu_k] = mu_false;
};
};
{
for(int mu_k = 0; mu_k <= 10; mu_k++) {
mu_node[mu_i].mu_home_requests[mu_j].mu_invalidate_list[mu_k] = mu_false;
};
};
mu_node[mu_i].mu_home_requests[mu_j].mu_status = mu_inactive;
mu_node[mu_i].mu_remote_requests[mu_j].mu_home = 0;
mu_node[mu_i].mu_remote_requests[mu_j].mu_op = mu_op_invalid;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_i].mu_remote_requests[mu_j].mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_i].mu_remote_requests[mu_j].mu_status = mu_inactive;
};
};
{
for(int mu_j = 1; mu_j <= 3; mu_j++) {
mu_node[mu_i].mu_inchan[mu_j].mu_msg.mu_source = 0;
mu_node[mu_i].mu_inchan[mu_j].mu_msg.mu_dest = 0;
mu_node[mu_i].mu_inchan[mu_j].mu_msg.mu_op = mu_op_invalid;
mu_node[mu_i].mu_inchan[mu_j].mu_msg.mu_addr = 0;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_i].mu_inchan[mu_j].mu_msg.mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_i].mu_inchan[mu_j].mu_valid = mu_false;
mu_node[mu_i].mu_outchan[mu_j].mu_msg.mu_source = 0;
mu_node[mu_i].mu_outchan[mu_j].mu_msg.mu_dest = 0;
mu_node[mu_i].mu_outchan[mu_j].mu_msg.mu_op = mu_op_invalid;
mu_node[mu_i].mu_outchan[mu_j].mu_msg.mu_addr = 0;
{
for(int mu_k = 0; mu_k <= 3; mu_k++) {
mu_node[mu_i].mu_outchan[mu_j].mu_msg.mu_data.mu_values[mu_k] = mu_false;
};
};
mu_node[mu_i].mu_outchan[mu_j].mu_valid = mu_false;
};
};
};
};
{
for(int mu_i = 0; mu_i <= 3; mu_i++) {
mu_auxdata.mu_values[mu_i] = mu_false;
};
};
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
void Goal_value() {  // makun: set goalstate
    // static mu_1_client mu_i;

    // r-value is int type: mu_i.goal_value(1);
    mu_node[1].mu_cache[1].mu_state.value(mu_cache_shared);
    mu_node[2].mu_cache[1].mu_state.value(mu_cache_shared);


    // r-value is other type: mu_n[1].goal_value(mu_E);

    // set carelist 
    carelist.push_back("node[1].cache[1].state");
    carelist.push_back("node[2].cache[1].state");
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
int mu__invariant_108( const mu_1_num_data_type &mu_d, const mu_1_addr_type &mu_addr, const mu_1_node_id &mu_client) // Invariant "data consistency property"
{
bool mu__boolexpr109;
  if (!((mu_node[mu_client].mu_cache[mu_addr].mu_state) != (mu_cache_invalid))) mu__boolexpr109 = TRUE ;
  else {
  mu__boolexpr109 = ((mu_node[mu_client].mu_cache[mu_addr].mu_data.mu_values[mu_d]) == (mu_auxdata.mu_values[mu_d])) ; 
}
return mu__boolexpr109;
};

bool mu__condition_113() // Condition for Rule "data consistency property, d:0, addr:0, client:0"
{
  return mu__invariant_108( 0, 0, 0 );
}

bool mu__condition_114() // Condition for Rule "data consistency property, d:0, addr:0, client:1"
{
  return mu__invariant_108( 0, 0, 1 );
}

bool mu__condition_115() // Condition for Rule "data consistency property, d:0, addr:0, client:2"
{
  return mu__invariant_108( 0, 0, 2 );
}

bool mu__condition_116() // Condition for Rule "data consistency property, d:0, addr:0, client:3"
{
  return mu__invariant_108( 0, 0, 3 );
}

bool mu__condition_117() // Condition for Rule "data consistency property, d:0, addr:0, client:4"
{
  return mu__invariant_108( 0, 0, 4 );
}

bool mu__condition_118() // Condition for Rule "data consistency property, d:0, addr:0, client:5"
{
  return mu__invariant_108( 0, 0, 5 );
}

bool mu__condition_119() // Condition for Rule "data consistency property, d:0, addr:0, client:6"
{
  return mu__invariant_108( 0, 0, 6 );
}

bool mu__condition_120() // Condition for Rule "data consistency property, d:0, addr:0, client:7"
{
  return mu__invariant_108( 0, 0, 7 );
}

bool mu__condition_121() // Condition for Rule "data consistency property, d:0, addr:0, client:8"
{
  return mu__invariant_108( 0, 0, 8 );
}

bool mu__condition_122() // Condition for Rule "data consistency property, d:0, addr:0, client:9"
{
  return mu__invariant_108( 0, 0, 9 );
}

bool mu__condition_123() // Condition for Rule "data consistency property, d:0, addr:0, client:10"
{
  return mu__invariant_108( 0, 0, 10 );
}

bool mu__condition_125() // Condition for Rule "data consistency property, d:0, addr:1, client:0"
{
  return mu__invariant_108( 0, 1, 0 );
}

bool mu__condition_126() // Condition for Rule "data consistency property, d:0, addr:1, client:1"
{
  return mu__invariant_108( 0, 1, 1 );
}

bool mu__condition_127() // Condition for Rule "data consistency property, d:0, addr:1, client:2"
{
  return mu__invariant_108( 0, 1, 2 );
}

bool mu__condition_128() // Condition for Rule "data consistency property, d:0, addr:1, client:3"
{
  return mu__invariant_108( 0, 1, 3 );
}

bool mu__condition_129() // Condition for Rule "data consistency property, d:0, addr:1, client:4"
{
  return mu__invariant_108( 0, 1, 4 );
}

bool mu__condition_130() // Condition for Rule "data consistency property, d:0, addr:1, client:5"
{
  return mu__invariant_108( 0, 1, 5 );
}

bool mu__condition_131() // Condition for Rule "data consistency property, d:0, addr:1, client:6"
{
  return mu__invariant_108( 0, 1, 6 );
}

bool mu__condition_132() // Condition for Rule "data consistency property, d:0, addr:1, client:7"
{
  return mu__invariant_108( 0, 1, 7 );
}

bool mu__condition_133() // Condition for Rule "data consistency property, d:0, addr:1, client:8"
{
  return mu__invariant_108( 0, 1, 8 );
}

bool mu__condition_134() // Condition for Rule "data consistency property, d:0, addr:1, client:9"
{
  return mu__invariant_108( 0, 1, 9 );
}

bool mu__condition_135() // Condition for Rule "data consistency property, d:0, addr:1, client:10"
{
  return mu__invariant_108( 0, 1, 10 );
}

bool mu__condition_137() // Condition for Rule "data consistency property, d:0, addr:2, client:0"
{
  return mu__invariant_108( 0, 2, 0 );
}

bool mu__condition_138() // Condition for Rule "data consistency property, d:0, addr:2, client:1"
{
  return mu__invariant_108( 0, 2, 1 );
}

bool mu__condition_139() // Condition for Rule "data consistency property, d:0, addr:2, client:2"
{
  return mu__invariant_108( 0, 2, 2 );
}

bool mu__condition_140() // Condition for Rule "data consistency property, d:0, addr:2, client:3"
{
  return mu__invariant_108( 0, 2, 3 );
}

bool mu__condition_141() // Condition for Rule "data consistency property, d:0, addr:2, client:4"
{
  return mu__invariant_108( 0, 2, 4 );
}

bool mu__condition_142() // Condition for Rule "data consistency property, d:0, addr:2, client:5"
{
  return mu__invariant_108( 0, 2, 5 );
}

bool mu__condition_143() // Condition for Rule "data consistency property, d:0, addr:2, client:6"
{
  return mu__invariant_108( 0, 2, 6 );
}

bool mu__condition_144() // Condition for Rule "data consistency property, d:0, addr:2, client:7"
{
  return mu__invariant_108( 0, 2, 7 );
}

bool mu__condition_145() // Condition for Rule "data consistency property, d:0, addr:2, client:8"
{
  return mu__invariant_108( 0, 2, 8 );
}

bool mu__condition_146() // Condition for Rule "data consistency property, d:0, addr:2, client:9"
{
  return mu__invariant_108( 0, 2, 9 );
}

bool mu__condition_147() // Condition for Rule "data consistency property, d:0, addr:2, client:10"
{
  return mu__invariant_108( 0, 2, 10 );
}

bool mu__condition_149() // Condition for Rule "data consistency property, d:0, addr:3, client:0"
{
  return mu__invariant_108( 0, 3, 0 );
}

bool mu__condition_150() // Condition for Rule "data consistency property, d:0, addr:3, client:1"
{
  return mu__invariant_108( 0, 3, 1 );
}

bool mu__condition_151() // Condition for Rule "data consistency property, d:0, addr:3, client:2"
{
  return mu__invariant_108( 0, 3, 2 );
}

bool mu__condition_152() // Condition for Rule "data consistency property, d:0, addr:3, client:3"
{
  return mu__invariant_108( 0, 3, 3 );
}

bool mu__condition_153() // Condition for Rule "data consistency property, d:0, addr:3, client:4"
{
  return mu__invariant_108( 0, 3, 4 );
}

bool mu__condition_154() // Condition for Rule "data consistency property, d:0, addr:3, client:5"
{
  return mu__invariant_108( 0, 3, 5 );
}

bool mu__condition_155() // Condition for Rule "data consistency property, d:0, addr:3, client:6"
{
  return mu__invariant_108( 0, 3, 6 );
}

bool mu__condition_156() // Condition for Rule "data consistency property, d:0, addr:3, client:7"
{
  return mu__invariant_108( 0, 3, 7 );
}

bool mu__condition_157() // Condition for Rule "data consistency property, d:0, addr:3, client:8"
{
  return mu__invariant_108( 0, 3, 8 );
}

bool mu__condition_158() // Condition for Rule "data consistency property, d:0, addr:3, client:9"
{
  return mu__invariant_108( 0, 3, 9 );
}

bool mu__condition_159() // Condition for Rule "data consistency property, d:0, addr:3, client:10"
{
  return mu__invariant_108( 0, 3, 10 );
}

bool mu__condition_162() // Condition for Rule "data consistency property, d:1, addr:0, client:0"
{
  return mu__invariant_108( 1, 0, 0 );
}

bool mu__condition_163() // Condition for Rule "data consistency property, d:1, addr:0, client:1"
{
  return mu__invariant_108( 1, 0, 1 );
}

bool mu__condition_164() // Condition for Rule "data consistency property, d:1, addr:0, client:2"
{
  return mu__invariant_108( 1, 0, 2 );
}

bool mu__condition_165() // Condition for Rule "data consistency property, d:1, addr:0, client:3"
{
  return mu__invariant_108( 1, 0, 3 );
}

bool mu__condition_166() // Condition for Rule "data consistency property, d:1, addr:0, client:4"
{
  return mu__invariant_108( 1, 0, 4 );
}

bool mu__condition_167() // Condition for Rule "data consistency property, d:1, addr:0, client:5"
{
  return mu__invariant_108( 1, 0, 5 );
}

bool mu__condition_168() // Condition for Rule "data consistency property, d:1, addr:0, client:6"
{
  return mu__invariant_108( 1, 0, 6 );
}

bool mu__condition_169() // Condition for Rule "data consistency property, d:1, addr:0, client:7"
{
  return mu__invariant_108( 1, 0, 7 );
}

bool mu__condition_170() // Condition for Rule "data consistency property, d:1, addr:0, client:8"
{
  return mu__invariant_108( 1, 0, 8 );
}

bool mu__condition_171() // Condition for Rule "data consistency property, d:1, addr:0, client:9"
{
  return mu__invariant_108( 1, 0, 9 );
}

bool mu__condition_172() // Condition for Rule "data consistency property, d:1, addr:0, client:10"
{
  return mu__invariant_108( 1, 0, 10 );
}

bool mu__condition_174() // Condition for Rule "data consistency property, d:1, addr:1, client:0"
{
  return mu__invariant_108( 1, 1, 0 );
}

bool mu__condition_175() // Condition for Rule "data consistency property, d:1, addr:1, client:1"
{
  return mu__invariant_108( 1, 1, 1 );
}

bool mu__condition_176() // Condition for Rule "data consistency property, d:1, addr:1, client:2"
{
  return mu__invariant_108( 1, 1, 2 );
}

bool mu__condition_177() // Condition for Rule "data consistency property, d:1, addr:1, client:3"
{
  return mu__invariant_108( 1, 1, 3 );
}

bool mu__condition_178() // Condition for Rule "data consistency property, d:1, addr:1, client:4"
{
  return mu__invariant_108( 1, 1, 4 );
}

bool mu__condition_179() // Condition for Rule "data consistency property, d:1, addr:1, client:5"
{
  return mu__invariant_108( 1, 1, 5 );
}

bool mu__condition_180() // Condition for Rule "data consistency property, d:1, addr:1, client:6"
{
  return mu__invariant_108( 1, 1, 6 );
}

bool mu__condition_181() // Condition for Rule "data consistency property, d:1, addr:1, client:7"
{
  return mu__invariant_108( 1, 1, 7 );
}

bool mu__condition_182() // Condition for Rule "data consistency property, d:1, addr:1, client:8"
{
  return mu__invariant_108( 1, 1, 8 );
}

bool mu__condition_183() // Condition for Rule "data consistency property, d:1, addr:1, client:9"
{
  return mu__invariant_108( 1, 1, 9 );
}

bool mu__condition_184() // Condition for Rule "data consistency property, d:1, addr:1, client:10"
{
  return mu__invariant_108( 1, 1, 10 );
}

bool mu__condition_186() // Condition for Rule "data consistency property, d:1, addr:2, client:0"
{
  return mu__invariant_108( 1, 2, 0 );
}

bool mu__condition_187() // Condition for Rule "data consistency property, d:1, addr:2, client:1"
{
  return mu__invariant_108( 1, 2, 1 );
}

bool mu__condition_188() // Condition for Rule "data consistency property, d:1, addr:2, client:2"
{
  return mu__invariant_108( 1, 2, 2 );
}

bool mu__condition_189() // Condition for Rule "data consistency property, d:1, addr:2, client:3"
{
  return mu__invariant_108( 1, 2, 3 );
}

bool mu__condition_190() // Condition for Rule "data consistency property, d:1, addr:2, client:4"
{
  return mu__invariant_108( 1, 2, 4 );
}

bool mu__condition_191() // Condition for Rule "data consistency property, d:1, addr:2, client:5"
{
  return mu__invariant_108( 1, 2, 5 );
}

bool mu__condition_192() // Condition for Rule "data consistency property, d:1, addr:2, client:6"
{
  return mu__invariant_108( 1, 2, 6 );
}

bool mu__condition_193() // Condition for Rule "data consistency property, d:1, addr:2, client:7"
{
  return mu__invariant_108( 1, 2, 7 );
}

bool mu__condition_194() // Condition for Rule "data consistency property, d:1, addr:2, client:8"
{
  return mu__invariant_108( 1, 2, 8 );
}

bool mu__condition_195() // Condition for Rule "data consistency property, d:1, addr:2, client:9"
{
  return mu__invariant_108( 1, 2, 9 );
}

bool mu__condition_196() // Condition for Rule "data consistency property, d:1, addr:2, client:10"
{
  return mu__invariant_108( 1, 2, 10 );
}

bool mu__condition_198() // Condition for Rule "data consistency property, d:1, addr:3, client:0"
{
  return mu__invariant_108( 1, 3, 0 );
}

bool mu__condition_199() // Condition for Rule "data consistency property, d:1, addr:3, client:1"
{
  return mu__invariant_108( 1, 3, 1 );
}

bool mu__condition_200() // Condition for Rule "data consistency property, d:1, addr:3, client:2"
{
  return mu__invariant_108( 1, 3, 2 );
}

bool mu__condition_201() // Condition for Rule "data consistency property, d:1, addr:3, client:3"
{
  return mu__invariant_108( 1, 3, 3 );
}

bool mu__condition_202() // Condition for Rule "data consistency property, d:1, addr:3, client:4"
{
  return mu__invariant_108( 1, 3, 4 );
}

bool mu__condition_203() // Condition for Rule "data consistency property, d:1, addr:3, client:5"
{
  return mu__invariant_108( 1, 3, 5 );
}

bool mu__condition_204() // Condition for Rule "data consistency property, d:1, addr:3, client:6"
{
  return mu__invariant_108( 1, 3, 6 );
}

bool mu__condition_205() // Condition for Rule "data consistency property, d:1, addr:3, client:7"
{
  return mu__invariant_108( 1, 3, 7 );
}

bool mu__condition_206() // Condition for Rule "data consistency property, d:1, addr:3, client:8"
{
  return mu__invariant_108( 1, 3, 8 );
}

bool mu__condition_207() // Condition for Rule "data consistency property, d:1, addr:3, client:9"
{
  return mu__invariant_108( 1, 3, 9 );
}

bool mu__condition_208() // Condition for Rule "data consistency property, d:1, addr:3, client:10"
{
  return mu__invariant_108( 1, 3, 10 );
}

bool mu__condition_211() // Condition for Rule "data consistency property, d:2, addr:0, client:0"
{
  return mu__invariant_108( 2, 0, 0 );
}

bool mu__condition_212() // Condition for Rule "data consistency property, d:2, addr:0, client:1"
{
  return mu__invariant_108( 2, 0, 1 );
}

bool mu__condition_213() // Condition for Rule "data consistency property, d:2, addr:0, client:2"
{
  return mu__invariant_108( 2, 0, 2 );
}

bool mu__condition_214() // Condition for Rule "data consistency property, d:2, addr:0, client:3"
{
  return mu__invariant_108( 2, 0, 3 );
}

bool mu__condition_215() // Condition for Rule "data consistency property, d:2, addr:0, client:4"
{
  return mu__invariant_108( 2, 0, 4 );
}

bool mu__condition_216() // Condition for Rule "data consistency property, d:2, addr:0, client:5"
{
  return mu__invariant_108( 2, 0, 5 );
}

bool mu__condition_217() // Condition for Rule "data consistency property, d:2, addr:0, client:6"
{
  return mu__invariant_108( 2, 0, 6 );
}

bool mu__condition_218() // Condition for Rule "data consistency property, d:2, addr:0, client:7"
{
  return mu__invariant_108( 2, 0, 7 );
}

bool mu__condition_219() // Condition for Rule "data consistency property, d:2, addr:0, client:8"
{
  return mu__invariant_108( 2, 0, 8 );
}

bool mu__condition_220() // Condition for Rule "data consistency property, d:2, addr:0, client:9"
{
  return mu__invariant_108( 2, 0, 9 );
}

bool mu__condition_221() // Condition for Rule "data consistency property, d:2, addr:0, client:10"
{
  return mu__invariant_108( 2, 0, 10 );
}

bool mu__condition_223() // Condition for Rule "data consistency property, d:2, addr:1, client:0"
{
  return mu__invariant_108( 2, 1, 0 );
}

bool mu__condition_224() // Condition for Rule "data consistency property, d:2, addr:1, client:1"
{
  return mu__invariant_108( 2, 1, 1 );
}

bool mu__condition_225() // Condition for Rule "data consistency property, d:2, addr:1, client:2"
{
  return mu__invariant_108( 2, 1, 2 );
}

bool mu__condition_226() // Condition for Rule "data consistency property, d:2, addr:1, client:3"
{
  return mu__invariant_108( 2, 1, 3 );
}

bool mu__condition_227() // Condition for Rule "data consistency property, d:2, addr:1, client:4"
{
  return mu__invariant_108( 2, 1, 4 );
}

bool mu__condition_228() // Condition for Rule "data consistency property, d:2, addr:1, client:5"
{
  return mu__invariant_108( 2, 1, 5 );
}

bool mu__condition_229() // Condition for Rule "data consistency property, d:2, addr:1, client:6"
{
  return mu__invariant_108( 2, 1, 6 );
}

bool mu__condition_230() // Condition for Rule "data consistency property, d:2, addr:1, client:7"
{
  return mu__invariant_108( 2, 1, 7 );
}

bool mu__condition_231() // Condition for Rule "data consistency property, d:2, addr:1, client:8"
{
  return mu__invariant_108( 2, 1, 8 );
}

bool mu__condition_232() // Condition for Rule "data consistency property, d:2, addr:1, client:9"
{
  return mu__invariant_108( 2, 1, 9 );
}

bool mu__condition_233() // Condition for Rule "data consistency property, d:2, addr:1, client:10"
{
  return mu__invariant_108( 2, 1, 10 );
}

bool mu__condition_235() // Condition for Rule "data consistency property, d:2, addr:2, client:0"
{
  return mu__invariant_108( 2, 2, 0 );
}

bool mu__condition_236() // Condition for Rule "data consistency property, d:2, addr:2, client:1"
{
  return mu__invariant_108( 2, 2, 1 );
}

bool mu__condition_237() // Condition for Rule "data consistency property, d:2, addr:2, client:2"
{
  return mu__invariant_108( 2, 2, 2 );
}

bool mu__condition_238() // Condition for Rule "data consistency property, d:2, addr:2, client:3"
{
  return mu__invariant_108( 2, 2, 3 );
}

bool mu__condition_239() // Condition for Rule "data consistency property, d:2, addr:2, client:4"
{
  return mu__invariant_108( 2, 2, 4 );
}

bool mu__condition_240() // Condition for Rule "data consistency property, d:2, addr:2, client:5"
{
  return mu__invariant_108( 2, 2, 5 );
}

bool mu__condition_241() // Condition for Rule "data consistency property, d:2, addr:2, client:6"
{
  return mu__invariant_108( 2, 2, 6 );
}

bool mu__condition_242() // Condition for Rule "data consistency property, d:2, addr:2, client:7"
{
  return mu__invariant_108( 2, 2, 7 );
}

bool mu__condition_243() // Condition for Rule "data consistency property, d:2, addr:2, client:8"
{
  return mu__invariant_108( 2, 2, 8 );
}

bool mu__condition_244() // Condition for Rule "data consistency property, d:2, addr:2, client:9"
{
  return mu__invariant_108( 2, 2, 9 );
}

bool mu__condition_245() // Condition for Rule "data consistency property, d:2, addr:2, client:10"
{
  return mu__invariant_108( 2, 2, 10 );
}

bool mu__condition_247() // Condition for Rule "data consistency property, d:2, addr:3, client:0"
{
  return mu__invariant_108( 2, 3, 0 );
}

bool mu__condition_248() // Condition for Rule "data consistency property, d:2, addr:3, client:1"
{
  return mu__invariant_108( 2, 3, 1 );
}

bool mu__condition_249() // Condition for Rule "data consistency property, d:2, addr:3, client:2"
{
  return mu__invariant_108( 2, 3, 2 );
}

bool mu__condition_250() // Condition for Rule "data consistency property, d:2, addr:3, client:3"
{
  return mu__invariant_108( 2, 3, 3 );
}

bool mu__condition_251() // Condition for Rule "data consistency property, d:2, addr:3, client:4"
{
  return mu__invariant_108( 2, 3, 4 );
}

bool mu__condition_252() // Condition for Rule "data consistency property, d:2, addr:3, client:5"
{
  return mu__invariant_108( 2, 3, 5 );
}

bool mu__condition_253() // Condition for Rule "data consistency property, d:2, addr:3, client:6"
{
  return mu__invariant_108( 2, 3, 6 );
}

bool mu__condition_254() // Condition for Rule "data consistency property, d:2, addr:3, client:7"
{
  return mu__invariant_108( 2, 3, 7 );
}

bool mu__condition_255() // Condition for Rule "data consistency property, d:2, addr:3, client:8"
{
  return mu__invariant_108( 2, 3, 8 );
}

bool mu__condition_256() // Condition for Rule "data consistency property, d:2, addr:3, client:9"
{
  return mu__invariant_108( 2, 3, 9 );
}

bool mu__condition_257() // Condition for Rule "data consistency property, d:2, addr:3, client:10"
{
  return mu__invariant_108( 2, 3, 10 );
}

bool mu__condition_260() // Condition for Rule "data consistency property, d:3, addr:0, client:0"
{
  return mu__invariant_108( 3, 0, 0 );
}

bool mu__condition_261() // Condition for Rule "data consistency property, d:3, addr:0, client:1"
{
  return mu__invariant_108( 3, 0, 1 );
}

bool mu__condition_262() // Condition for Rule "data consistency property, d:3, addr:0, client:2"
{
  return mu__invariant_108( 3, 0, 2 );
}

bool mu__condition_263() // Condition for Rule "data consistency property, d:3, addr:0, client:3"
{
  return mu__invariant_108( 3, 0, 3 );
}

bool mu__condition_264() // Condition for Rule "data consistency property, d:3, addr:0, client:4"
{
  return mu__invariant_108( 3, 0, 4 );
}

bool mu__condition_265() // Condition for Rule "data consistency property, d:3, addr:0, client:5"
{
  return mu__invariant_108( 3, 0, 5 );
}

bool mu__condition_266() // Condition for Rule "data consistency property, d:3, addr:0, client:6"
{
  return mu__invariant_108( 3, 0, 6 );
}

bool mu__condition_267() // Condition for Rule "data consistency property, d:3, addr:0, client:7"
{
  return mu__invariant_108( 3, 0, 7 );
}

bool mu__condition_268() // Condition for Rule "data consistency property, d:3, addr:0, client:8"
{
  return mu__invariant_108( 3, 0, 8 );
}

bool mu__condition_269() // Condition for Rule "data consistency property, d:3, addr:0, client:9"
{
  return mu__invariant_108( 3, 0, 9 );
}

bool mu__condition_270() // Condition for Rule "data consistency property, d:3, addr:0, client:10"
{
  return mu__invariant_108( 3, 0, 10 );
}

bool mu__condition_272() // Condition for Rule "data consistency property, d:3, addr:1, client:0"
{
  return mu__invariant_108( 3, 1, 0 );
}

bool mu__condition_273() // Condition for Rule "data consistency property, d:3, addr:1, client:1"
{
  return mu__invariant_108( 3, 1, 1 );
}

bool mu__condition_274() // Condition for Rule "data consistency property, d:3, addr:1, client:2"
{
  return mu__invariant_108( 3, 1, 2 );
}

bool mu__condition_275() // Condition for Rule "data consistency property, d:3, addr:1, client:3"
{
  return mu__invariant_108( 3, 1, 3 );
}

bool mu__condition_276() // Condition for Rule "data consistency property, d:3, addr:1, client:4"
{
  return mu__invariant_108( 3, 1, 4 );
}

bool mu__condition_277() // Condition for Rule "data consistency property, d:3, addr:1, client:5"
{
  return mu__invariant_108( 3, 1, 5 );
}

bool mu__condition_278() // Condition for Rule "data consistency property, d:3, addr:1, client:6"
{
  return mu__invariant_108( 3, 1, 6 );
}

bool mu__condition_279() // Condition for Rule "data consistency property, d:3, addr:1, client:7"
{
  return mu__invariant_108( 3, 1, 7 );
}

bool mu__condition_280() // Condition for Rule "data consistency property, d:3, addr:1, client:8"
{
  return mu__invariant_108( 3, 1, 8 );
}

bool mu__condition_281() // Condition for Rule "data consistency property, d:3, addr:1, client:9"
{
  return mu__invariant_108( 3, 1, 9 );
}

bool mu__condition_282() // Condition for Rule "data consistency property, d:3, addr:1, client:10"
{
  return mu__invariant_108( 3, 1, 10 );
}

bool mu__condition_284() // Condition for Rule "data consistency property, d:3, addr:2, client:0"
{
  return mu__invariant_108( 3, 2, 0 );
}

bool mu__condition_285() // Condition for Rule "data consistency property, d:3, addr:2, client:1"
{
  return mu__invariant_108( 3, 2, 1 );
}

bool mu__condition_286() // Condition for Rule "data consistency property, d:3, addr:2, client:2"
{
  return mu__invariant_108( 3, 2, 2 );
}

bool mu__condition_287() // Condition for Rule "data consistency property, d:3, addr:2, client:3"
{
  return mu__invariant_108( 3, 2, 3 );
}

bool mu__condition_288() // Condition for Rule "data consistency property, d:3, addr:2, client:4"
{
  return mu__invariant_108( 3, 2, 4 );
}

bool mu__condition_289() // Condition for Rule "data consistency property, d:3, addr:2, client:5"
{
  return mu__invariant_108( 3, 2, 5 );
}

bool mu__condition_290() // Condition for Rule "data consistency property, d:3, addr:2, client:6"
{
  return mu__invariant_108( 3, 2, 6 );
}

bool mu__condition_291() // Condition for Rule "data consistency property, d:3, addr:2, client:7"
{
  return mu__invariant_108( 3, 2, 7 );
}

bool mu__condition_292() // Condition for Rule "data consistency property, d:3, addr:2, client:8"
{
  return mu__invariant_108( 3, 2, 8 );
}

bool mu__condition_293() // Condition for Rule "data consistency property, d:3, addr:2, client:9"
{
  return mu__invariant_108( 3, 2, 9 );
}

bool mu__condition_294() // Condition for Rule "data consistency property, d:3, addr:2, client:10"
{
  return mu__invariant_108( 3, 2, 10 );
}

bool mu__condition_296() // Condition for Rule "data consistency property, d:3, addr:3, client:0"
{
  return mu__invariant_108( 3, 3, 0 );
}

bool mu__condition_297() // Condition for Rule "data consistency property, d:3, addr:3, client:1"
{
  return mu__invariant_108( 3, 3, 1 );
}

bool mu__condition_298() // Condition for Rule "data consistency property, d:3, addr:3, client:2"
{
  return mu__invariant_108( 3, 3, 2 );
}

bool mu__condition_299() // Condition for Rule "data consistency property, d:3, addr:3, client:3"
{
  return mu__invariant_108( 3, 3, 3 );
}

bool mu__condition_300() // Condition for Rule "data consistency property, d:3, addr:3, client:4"
{
  return mu__invariant_108( 3, 3, 4 );
}

bool mu__condition_301() // Condition for Rule "data consistency property, d:3, addr:3, client:5"
{
  return mu__invariant_108( 3, 3, 5 );
}

bool mu__condition_302() // Condition for Rule "data consistency property, d:3, addr:3, client:6"
{
  return mu__invariant_108( 3, 3, 6 );
}

bool mu__condition_303() // Condition for Rule "data consistency property, d:3, addr:3, client:7"
{
  return mu__invariant_108( 3, 3, 7 );
}

bool mu__condition_304() // Condition for Rule "data consistency property, d:3, addr:3, client:8"
{
  return mu__invariant_108( 3, 3, 8 );
}

bool mu__condition_305() // Condition for Rule "data consistency property, d:3, addr:3, client:9"
{
  return mu__invariant_108( 3, 3, 9 );
}

bool mu__condition_306() // Condition for Rule "data consistency property, d:3, addr:3, client:10"
{
  return mu__invariant_108( 3, 3, 10 );
}

/**** end rule declaration ****/

int mu__invariant_307( const mu_1_addr_type &mu_addr, const mu_1_node_id &mu_n2, const mu_1_node_id &mu_n1) // Invariant "coherent"
{
bool mu__boolexpr308;
bool mu__boolexpr309;
  if (!((mu_n1) != (mu_n2))) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = ((mu_node[mu_n1].mu_cache[mu_addr].mu_state) == (mu_cache_shared)) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = TRUE ;
  else {
  mu__boolexpr308 = ((mu_node[mu_n2].mu_cache[mu_addr].mu_state) == (mu_cache_shared)) ; 
}
return mu__boolexpr308;
};

bool mu__condition_313() // Condition for Rule "coherent, addr:0, n2:0, n1:0"
{
  return mu__invariant_307( 0, 0, 0 );
}

bool mu__condition_314() // Condition for Rule "coherent, addr:0, n2:0, n1:1"
{
  return mu__invariant_307( 0, 0, 1 );
}

bool mu__condition_315() // Condition for Rule "coherent, addr:0, n2:0, n1:2"
{
  return mu__invariant_307( 0, 0, 2 );
}

bool mu__condition_316() // Condition for Rule "coherent, addr:0, n2:0, n1:3"
{
  return mu__invariant_307( 0, 0, 3 );
}

bool mu__condition_317() // Condition for Rule "coherent, addr:0, n2:0, n1:4"
{
  return mu__invariant_307( 0, 0, 4 );
}

bool mu__condition_318() // Condition for Rule "coherent, addr:0, n2:0, n1:5"
{
  return mu__invariant_307( 0, 0, 5 );
}

bool mu__condition_319() // Condition for Rule "coherent, addr:0, n2:0, n1:6"
{
  return mu__invariant_307( 0, 0, 6 );
}

bool mu__condition_320() // Condition for Rule "coherent, addr:0, n2:0, n1:7"
{
  return mu__invariant_307( 0, 0, 7 );
}

bool mu__condition_321() // Condition for Rule "coherent, addr:0, n2:0, n1:8"
{
  return mu__invariant_307( 0, 0, 8 );
}

bool mu__condition_322() // Condition for Rule "coherent, addr:0, n2:0, n1:9"
{
  return mu__invariant_307( 0, 0, 9 );
}

bool mu__condition_323() // Condition for Rule "coherent, addr:0, n2:0, n1:10"
{
  return mu__invariant_307( 0, 0, 10 );
}

bool mu__condition_325() // Condition for Rule "coherent, addr:0, n2:1, n1:0"
{
  return mu__invariant_307( 0, 1, 0 );
}

bool mu__condition_326() // Condition for Rule "coherent, addr:0, n2:1, n1:1"
{
  return mu__invariant_307( 0, 1, 1 );
}

bool mu__condition_327() // Condition for Rule "coherent, addr:0, n2:1, n1:2"
{
  return mu__invariant_307( 0, 1, 2 );
}

bool mu__condition_328() // Condition for Rule "coherent, addr:0, n2:1, n1:3"
{
  return mu__invariant_307( 0, 1, 3 );
}

bool mu__condition_329() // Condition for Rule "coherent, addr:0, n2:1, n1:4"
{
  return mu__invariant_307( 0, 1, 4 );
}

bool mu__condition_330() // Condition for Rule "coherent, addr:0, n2:1, n1:5"
{
  return mu__invariant_307( 0, 1, 5 );
}

bool mu__condition_331() // Condition for Rule "coherent, addr:0, n2:1, n1:6"
{
  return mu__invariant_307( 0, 1, 6 );
}

bool mu__condition_332() // Condition for Rule "coherent, addr:0, n2:1, n1:7"
{
  return mu__invariant_307( 0, 1, 7 );
}

bool mu__condition_333() // Condition for Rule "coherent, addr:0, n2:1, n1:8"
{
  return mu__invariant_307( 0, 1, 8 );
}

bool mu__condition_334() // Condition for Rule "coherent, addr:0, n2:1, n1:9"
{
  return mu__invariant_307( 0, 1, 9 );
}

bool mu__condition_335() // Condition for Rule "coherent, addr:0, n2:1, n1:10"
{
  return mu__invariant_307( 0, 1, 10 );
}

bool mu__condition_337() // Condition for Rule "coherent, addr:0, n2:2, n1:0"
{
  return mu__invariant_307( 0, 2, 0 );
}

bool mu__condition_338() // Condition for Rule "coherent, addr:0, n2:2, n1:1"
{
  return mu__invariant_307( 0, 2, 1 );
}

bool mu__condition_339() // Condition for Rule "coherent, addr:0, n2:2, n1:2"
{
  return mu__invariant_307( 0, 2, 2 );
}

bool mu__condition_340() // Condition for Rule "coherent, addr:0, n2:2, n1:3"
{
  return mu__invariant_307( 0, 2, 3 );
}

bool mu__condition_341() // Condition for Rule "coherent, addr:0, n2:2, n1:4"
{
  return mu__invariant_307( 0, 2, 4 );
}

bool mu__condition_342() // Condition for Rule "coherent, addr:0, n2:2, n1:5"
{
  return mu__invariant_307( 0, 2, 5 );
}

bool mu__condition_343() // Condition for Rule "coherent, addr:0, n2:2, n1:6"
{
  return mu__invariant_307( 0, 2, 6 );
}

bool mu__condition_344() // Condition for Rule "coherent, addr:0, n2:2, n1:7"
{
  return mu__invariant_307( 0, 2, 7 );
}

bool mu__condition_345() // Condition for Rule "coherent, addr:0, n2:2, n1:8"
{
  return mu__invariant_307( 0, 2, 8 );
}

bool mu__condition_346() // Condition for Rule "coherent, addr:0, n2:2, n1:9"
{
  return mu__invariant_307( 0, 2, 9 );
}

bool mu__condition_347() // Condition for Rule "coherent, addr:0, n2:2, n1:10"
{
  return mu__invariant_307( 0, 2, 10 );
}

bool mu__condition_349() // Condition for Rule "coherent, addr:0, n2:3, n1:0"
{
  return mu__invariant_307( 0, 3, 0 );
}

bool mu__condition_350() // Condition for Rule "coherent, addr:0, n2:3, n1:1"
{
  return mu__invariant_307( 0, 3, 1 );
}

bool mu__condition_351() // Condition for Rule "coherent, addr:0, n2:3, n1:2"
{
  return mu__invariant_307( 0, 3, 2 );
}

bool mu__condition_352() // Condition for Rule "coherent, addr:0, n2:3, n1:3"
{
  return mu__invariant_307( 0, 3, 3 );
}

bool mu__condition_353() // Condition for Rule "coherent, addr:0, n2:3, n1:4"
{
  return mu__invariant_307( 0, 3, 4 );
}

bool mu__condition_354() // Condition for Rule "coherent, addr:0, n2:3, n1:5"
{
  return mu__invariant_307( 0, 3, 5 );
}

bool mu__condition_355() // Condition for Rule "coherent, addr:0, n2:3, n1:6"
{
  return mu__invariant_307( 0, 3, 6 );
}

bool mu__condition_356() // Condition for Rule "coherent, addr:0, n2:3, n1:7"
{
  return mu__invariant_307( 0, 3, 7 );
}

bool mu__condition_357() // Condition for Rule "coherent, addr:0, n2:3, n1:8"
{
  return mu__invariant_307( 0, 3, 8 );
}

bool mu__condition_358() // Condition for Rule "coherent, addr:0, n2:3, n1:9"
{
  return mu__invariant_307( 0, 3, 9 );
}

bool mu__condition_359() // Condition for Rule "coherent, addr:0, n2:3, n1:10"
{
  return mu__invariant_307( 0, 3, 10 );
}

bool mu__condition_361() // Condition for Rule "coherent, addr:0, n2:4, n1:0"
{
  return mu__invariant_307( 0, 4, 0 );
}

bool mu__condition_362() // Condition for Rule "coherent, addr:0, n2:4, n1:1"
{
  return mu__invariant_307( 0, 4, 1 );
}

bool mu__condition_363() // Condition for Rule "coherent, addr:0, n2:4, n1:2"
{
  return mu__invariant_307( 0, 4, 2 );
}

bool mu__condition_364() // Condition for Rule "coherent, addr:0, n2:4, n1:3"
{
  return mu__invariant_307( 0, 4, 3 );
}

bool mu__condition_365() // Condition for Rule "coherent, addr:0, n2:4, n1:4"
{
  return mu__invariant_307( 0, 4, 4 );
}

bool mu__condition_366() // Condition for Rule "coherent, addr:0, n2:4, n1:5"
{
  return mu__invariant_307( 0, 4, 5 );
}

bool mu__condition_367() // Condition for Rule "coherent, addr:0, n2:4, n1:6"
{
  return mu__invariant_307( 0, 4, 6 );
}

bool mu__condition_368() // Condition for Rule "coherent, addr:0, n2:4, n1:7"
{
  return mu__invariant_307( 0, 4, 7 );
}

bool mu__condition_369() // Condition for Rule "coherent, addr:0, n2:4, n1:8"
{
  return mu__invariant_307( 0, 4, 8 );
}

bool mu__condition_370() // Condition for Rule "coherent, addr:0, n2:4, n1:9"
{
  return mu__invariant_307( 0, 4, 9 );
}

bool mu__condition_371() // Condition for Rule "coherent, addr:0, n2:4, n1:10"
{
  return mu__invariant_307( 0, 4, 10 );
}

bool mu__condition_373() // Condition for Rule "coherent, addr:0, n2:5, n1:0"
{
  return mu__invariant_307( 0, 5, 0 );
}

bool mu__condition_374() // Condition for Rule "coherent, addr:0, n2:5, n1:1"
{
  return mu__invariant_307( 0, 5, 1 );
}

bool mu__condition_375() // Condition for Rule "coherent, addr:0, n2:5, n1:2"
{
  return mu__invariant_307( 0, 5, 2 );
}

bool mu__condition_376() // Condition for Rule "coherent, addr:0, n2:5, n1:3"
{
  return mu__invariant_307( 0, 5, 3 );
}

bool mu__condition_377() // Condition for Rule "coherent, addr:0, n2:5, n1:4"
{
  return mu__invariant_307( 0, 5, 4 );
}

bool mu__condition_378() // Condition for Rule "coherent, addr:0, n2:5, n1:5"
{
  return mu__invariant_307( 0, 5, 5 );
}

bool mu__condition_379() // Condition for Rule "coherent, addr:0, n2:5, n1:6"
{
  return mu__invariant_307( 0, 5, 6 );
}

bool mu__condition_380() // Condition for Rule "coherent, addr:0, n2:5, n1:7"
{
  return mu__invariant_307( 0, 5, 7 );
}

bool mu__condition_381() // Condition for Rule "coherent, addr:0, n2:5, n1:8"
{
  return mu__invariant_307( 0, 5, 8 );
}

bool mu__condition_382() // Condition for Rule "coherent, addr:0, n2:5, n1:9"
{
  return mu__invariant_307( 0, 5, 9 );
}

bool mu__condition_383() // Condition for Rule "coherent, addr:0, n2:5, n1:10"
{
  return mu__invariant_307( 0, 5, 10 );
}

bool mu__condition_385() // Condition for Rule "coherent, addr:0, n2:6, n1:0"
{
  return mu__invariant_307( 0, 6, 0 );
}

bool mu__condition_386() // Condition for Rule "coherent, addr:0, n2:6, n1:1"
{
  return mu__invariant_307( 0, 6, 1 );
}

bool mu__condition_387() // Condition for Rule "coherent, addr:0, n2:6, n1:2"
{
  return mu__invariant_307( 0, 6, 2 );
}

bool mu__condition_388() // Condition for Rule "coherent, addr:0, n2:6, n1:3"
{
  return mu__invariant_307( 0, 6, 3 );
}

bool mu__condition_389() // Condition for Rule "coherent, addr:0, n2:6, n1:4"
{
  return mu__invariant_307( 0, 6, 4 );
}

bool mu__condition_390() // Condition for Rule "coherent, addr:0, n2:6, n1:5"
{
  return mu__invariant_307( 0, 6, 5 );
}

bool mu__condition_391() // Condition for Rule "coherent, addr:0, n2:6, n1:6"
{
  return mu__invariant_307( 0, 6, 6 );
}

bool mu__condition_392() // Condition for Rule "coherent, addr:0, n2:6, n1:7"
{
  return mu__invariant_307( 0, 6, 7 );
}

bool mu__condition_393() // Condition for Rule "coherent, addr:0, n2:6, n1:8"
{
  return mu__invariant_307( 0, 6, 8 );
}

bool mu__condition_394() // Condition for Rule "coherent, addr:0, n2:6, n1:9"
{
  return mu__invariant_307( 0, 6, 9 );
}

bool mu__condition_395() // Condition for Rule "coherent, addr:0, n2:6, n1:10"
{
  return mu__invariant_307( 0, 6, 10 );
}

bool mu__condition_397() // Condition for Rule "coherent, addr:0, n2:7, n1:0"
{
  return mu__invariant_307( 0, 7, 0 );
}

bool mu__condition_398() // Condition for Rule "coherent, addr:0, n2:7, n1:1"
{
  return mu__invariant_307( 0, 7, 1 );
}

bool mu__condition_399() // Condition for Rule "coherent, addr:0, n2:7, n1:2"
{
  return mu__invariant_307( 0, 7, 2 );
}

bool mu__condition_400() // Condition for Rule "coherent, addr:0, n2:7, n1:3"
{
  return mu__invariant_307( 0, 7, 3 );
}

bool mu__condition_401() // Condition for Rule "coherent, addr:0, n2:7, n1:4"
{
  return mu__invariant_307( 0, 7, 4 );
}

bool mu__condition_402() // Condition for Rule "coherent, addr:0, n2:7, n1:5"
{
  return mu__invariant_307( 0, 7, 5 );
}

bool mu__condition_403() // Condition for Rule "coherent, addr:0, n2:7, n1:6"
{
  return mu__invariant_307( 0, 7, 6 );
}

bool mu__condition_404() // Condition for Rule "coherent, addr:0, n2:7, n1:7"
{
  return mu__invariant_307( 0, 7, 7 );
}

bool mu__condition_405() // Condition for Rule "coherent, addr:0, n2:7, n1:8"
{
  return mu__invariant_307( 0, 7, 8 );
}

bool mu__condition_406() // Condition for Rule "coherent, addr:0, n2:7, n1:9"
{
  return mu__invariant_307( 0, 7, 9 );
}

bool mu__condition_407() // Condition for Rule "coherent, addr:0, n2:7, n1:10"
{
  return mu__invariant_307( 0, 7, 10 );
}

bool mu__condition_409() // Condition for Rule "coherent, addr:0, n2:8, n1:0"
{
  return mu__invariant_307( 0, 8, 0 );
}

bool mu__condition_410() // Condition for Rule "coherent, addr:0, n2:8, n1:1"
{
  return mu__invariant_307( 0, 8, 1 );
}

bool mu__condition_411() // Condition for Rule "coherent, addr:0, n2:8, n1:2"
{
  return mu__invariant_307( 0, 8, 2 );
}

bool mu__condition_412() // Condition for Rule "coherent, addr:0, n2:8, n1:3"
{
  return mu__invariant_307( 0, 8, 3 );
}

bool mu__condition_413() // Condition for Rule "coherent, addr:0, n2:8, n1:4"
{
  return mu__invariant_307( 0, 8, 4 );
}

bool mu__condition_414() // Condition for Rule "coherent, addr:0, n2:8, n1:5"
{
  return mu__invariant_307( 0, 8, 5 );
}

bool mu__condition_415() // Condition for Rule "coherent, addr:0, n2:8, n1:6"
{
  return mu__invariant_307( 0, 8, 6 );
}

bool mu__condition_416() // Condition for Rule "coherent, addr:0, n2:8, n1:7"
{
  return mu__invariant_307( 0, 8, 7 );
}

bool mu__condition_417() // Condition for Rule "coherent, addr:0, n2:8, n1:8"
{
  return mu__invariant_307( 0, 8, 8 );
}

bool mu__condition_418() // Condition for Rule "coherent, addr:0, n2:8, n1:9"
{
  return mu__invariant_307( 0, 8, 9 );
}

bool mu__condition_419() // Condition for Rule "coherent, addr:0, n2:8, n1:10"
{
  return mu__invariant_307( 0, 8, 10 );
}

bool mu__condition_421() // Condition for Rule "coherent, addr:0, n2:9, n1:0"
{
  return mu__invariant_307( 0, 9, 0 );
}

bool mu__condition_422() // Condition for Rule "coherent, addr:0, n2:9, n1:1"
{
  return mu__invariant_307( 0, 9, 1 );
}

bool mu__condition_423() // Condition for Rule "coherent, addr:0, n2:9, n1:2"
{
  return mu__invariant_307( 0, 9, 2 );
}

bool mu__condition_424() // Condition for Rule "coherent, addr:0, n2:9, n1:3"
{
  return mu__invariant_307( 0, 9, 3 );
}

bool mu__condition_425() // Condition for Rule "coherent, addr:0, n2:9, n1:4"
{
  return mu__invariant_307( 0, 9, 4 );
}

bool mu__condition_426() // Condition for Rule "coherent, addr:0, n2:9, n1:5"
{
  return mu__invariant_307( 0, 9, 5 );
}

bool mu__condition_427() // Condition for Rule "coherent, addr:0, n2:9, n1:6"
{
  return mu__invariant_307( 0, 9, 6 );
}

bool mu__condition_428() // Condition for Rule "coherent, addr:0, n2:9, n1:7"
{
  return mu__invariant_307( 0, 9, 7 );
}

bool mu__condition_429() // Condition for Rule "coherent, addr:0, n2:9, n1:8"
{
  return mu__invariant_307( 0, 9, 8 );
}

bool mu__condition_430() // Condition for Rule "coherent, addr:0, n2:9, n1:9"
{
  return mu__invariant_307( 0, 9, 9 );
}

bool mu__condition_431() // Condition for Rule "coherent, addr:0, n2:9, n1:10"
{
  return mu__invariant_307( 0, 9, 10 );
}

bool mu__condition_433() // Condition for Rule "coherent, addr:0, n2:10, n1:0"
{
  return mu__invariant_307( 0, 10, 0 );
}

bool mu__condition_434() // Condition for Rule "coherent, addr:0, n2:10, n1:1"
{
  return mu__invariant_307( 0, 10, 1 );
}

bool mu__condition_435() // Condition for Rule "coherent, addr:0, n2:10, n1:2"
{
  return mu__invariant_307( 0, 10, 2 );
}

bool mu__condition_436() // Condition for Rule "coherent, addr:0, n2:10, n1:3"
{
  return mu__invariant_307( 0, 10, 3 );
}

bool mu__condition_437() // Condition for Rule "coherent, addr:0, n2:10, n1:4"
{
  return mu__invariant_307( 0, 10, 4 );
}

bool mu__condition_438() // Condition for Rule "coherent, addr:0, n2:10, n1:5"
{
  return mu__invariant_307( 0, 10, 5 );
}

bool mu__condition_439() // Condition for Rule "coherent, addr:0, n2:10, n1:6"
{
  return mu__invariant_307( 0, 10, 6 );
}

bool mu__condition_440() // Condition for Rule "coherent, addr:0, n2:10, n1:7"
{
  return mu__invariant_307( 0, 10, 7 );
}

bool mu__condition_441() // Condition for Rule "coherent, addr:0, n2:10, n1:8"
{
  return mu__invariant_307( 0, 10, 8 );
}

bool mu__condition_442() // Condition for Rule "coherent, addr:0, n2:10, n1:9"
{
  return mu__invariant_307( 0, 10, 9 );
}

bool mu__condition_443() // Condition for Rule "coherent, addr:0, n2:10, n1:10"
{
  return mu__invariant_307( 0, 10, 10 );
}

bool mu__condition_446() // Condition for Rule "coherent, addr:1, n2:0, n1:0"
{
  return mu__invariant_307( 1, 0, 0 );
}

bool mu__condition_447() // Condition for Rule "coherent, addr:1, n2:0, n1:1"
{
  return mu__invariant_307( 1, 0, 1 );
}

bool mu__condition_448() // Condition for Rule "coherent, addr:1, n2:0, n1:2"
{
  return mu__invariant_307( 1, 0, 2 );
}

bool mu__condition_449() // Condition for Rule "coherent, addr:1, n2:0, n1:3"
{
  return mu__invariant_307( 1, 0, 3 );
}

bool mu__condition_450() // Condition for Rule "coherent, addr:1, n2:0, n1:4"
{
  return mu__invariant_307( 1, 0, 4 );
}

bool mu__condition_451() // Condition for Rule "coherent, addr:1, n2:0, n1:5"
{
  return mu__invariant_307( 1, 0, 5 );
}

bool mu__condition_452() // Condition for Rule "coherent, addr:1, n2:0, n1:6"
{
  return mu__invariant_307( 1, 0, 6 );
}

bool mu__condition_453() // Condition for Rule "coherent, addr:1, n2:0, n1:7"
{
  return mu__invariant_307( 1, 0, 7 );
}

bool mu__condition_454() // Condition for Rule "coherent, addr:1, n2:0, n1:8"
{
  return mu__invariant_307( 1, 0, 8 );
}

bool mu__condition_455() // Condition for Rule "coherent, addr:1, n2:0, n1:9"
{
  return mu__invariant_307( 1, 0, 9 );
}

bool mu__condition_456() // Condition for Rule "coherent, addr:1, n2:0, n1:10"
{
  return mu__invariant_307( 1, 0, 10 );
}

bool mu__condition_458() // Condition for Rule "coherent, addr:1, n2:1, n1:0"
{
  return mu__invariant_307( 1, 1, 0 );
}

bool mu__condition_459() // Condition for Rule "coherent, addr:1, n2:1, n1:1"
{
  return mu__invariant_307( 1, 1, 1 );
}

bool mu__condition_460() // Condition for Rule "coherent, addr:1, n2:1, n1:2"
{
  return mu__invariant_307( 1, 1, 2 );
}

bool mu__condition_461() // Condition for Rule "coherent, addr:1, n2:1, n1:3"
{
  return mu__invariant_307( 1, 1, 3 );
}

bool mu__condition_462() // Condition for Rule "coherent, addr:1, n2:1, n1:4"
{
  return mu__invariant_307( 1, 1, 4 );
}

bool mu__condition_463() // Condition for Rule "coherent, addr:1, n2:1, n1:5"
{
  return mu__invariant_307( 1, 1, 5 );
}

bool mu__condition_464() // Condition for Rule "coherent, addr:1, n2:1, n1:6"
{
  return mu__invariant_307( 1, 1, 6 );
}

bool mu__condition_465() // Condition for Rule "coherent, addr:1, n2:1, n1:7"
{
  return mu__invariant_307( 1, 1, 7 );
}

bool mu__condition_466() // Condition for Rule "coherent, addr:1, n2:1, n1:8"
{
  return mu__invariant_307( 1, 1, 8 );
}

bool mu__condition_467() // Condition for Rule "coherent, addr:1, n2:1, n1:9"
{
  return mu__invariant_307( 1, 1, 9 );
}

bool mu__condition_468() // Condition for Rule "coherent, addr:1, n2:1, n1:10"
{
  return mu__invariant_307( 1, 1, 10 );
}

bool mu__condition_470() // Condition for Rule "coherent, addr:1, n2:2, n1:0"
{
  return mu__invariant_307( 1, 2, 0 );
}

bool mu__condition_471() // Condition for Rule "coherent, addr:1, n2:2, n1:1"
{
  return mu__invariant_307( 1, 2, 1 );
}

bool mu__condition_472() // Condition for Rule "coherent, addr:1, n2:2, n1:2"
{
  return mu__invariant_307( 1, 2, 2 );
}

bool mu__condition_473() // Condition for Rule "coherent, addr:1, n2:2, n1:3"
{
  return mu__invariant_307( 1, 2, 3 );
}

bool mu__condition_474() // Condition for Rule "coherent, addr:1, n2:2, n1:4"
{
  return mu__invariant_307( 1, 2, 4 );
}

bool mu__condition_475() // Condition for Rule "coherent, addr:1, n2:2, n1:5"
{
  return mu__invariant_307( 1, 2, 5 );
}

bool mu__condition_476() // Condition for Rule "coherent, addr:1, n2:2, n1:6"
{
  return mu__invariant_307( 1, 2, 6 );
}

bool mu__condition_477() // Condition for Rule "coherent, addr:1, n2:2, n1:7"
{
  return mu__invariant_307( 1, 2, 7 );
}

bool mu__condition_478() // Condition for Rule "coherent, addr:1, n2:2, n1:8"
{
  return mu__invariant_307( 1, 2, 8 );
}

bool mu__condition_479() // Condition for Rule "coherent, addr:1, n2:2, n1:9"
{
  return mu__invariant_307( 1, 2, 9 );
}

bool mu__condition_480() // Condition for Rule "coherent, addr:1, n2:2, n1:10"
{
  return mu__invariant_307( 1, 2, 10 );
}

bool mu__condition_482() // Condition for Rule "coherent, addr:1, n2:3, n1:0"
{
  return mu__invariant_307( 1, 3, 0 );
}

bool mu__condition_483() // Condition for Rule "coherent, addr:1, n2:3, n1:1"
{
  return mu__invariant_307( 1, 3, 1 );
}

bool mu__condition_484() // Condition for Rule "coherent, addr:1, n2:3, n1:2"
{
  return mu__invariant_307( 1, 3, 2 );
}

bool mu__condition_485() // Condition for Rule "coherent, addr:1, n2:3, n1:3"
{
  return mu__invariant_307( 1, 3, 3 );
}

bool mu__condition_486() // Condition for Rule "coherent, addr:1, n2:3, n1:4"
{
  return mu__invariant_307( 1, 3, 4 );
}

bool mu__condition_487() // Condition for Rule "coherent, addr:1, n2:3, n1:5"
{
  return mu__invariant_307( 1, 3, 5 );
}

bool mu__condition_488() // Condition for Rule "coherent, addr:1, n2:3, n1:6"
{
  return mu__invariant_307( 1, 3, 6 );
}

bool mu__condition_489() // Condition for Rule "coherent, addr:1, n2:3, n1:7"
{
  return mu__invariant_307( 1, 3, 7 );
}

bool mu__condition_490() // Condition for Rule "coherent, addr:1, n2:3, n1:8"
{
  return mu__invariant_307( 1, 3, 8 );
}

bool mu__condition_491() // Condition for Rule "coherent, addr:1, n2:3, n1:9"
{
  return mu__invariant_307( 1, 3, 9 );
}

bool mu__condition_492() // Condition for Rule "coherent, addr:1, n2:3, n1:10"
{
  return mu__invariant_307( 1, 3, 10 );
}

bool mu__condition_494() // Condition for Rule "coherent, addr:1, n2:4, n1:0"
{
  return mu__invariant_307( 1, 4, 0 );
}

bool mu__condition_495() // Condition for Rule "coherent, addr:1, n2:4, n1:1"
{
  return mu__invariant_307( 1, 4, 1 );
}

bool mu__condition_496() // Condition for Rule "coherent, addr:1, n2:4, n1:2"
{
  return mu__invariant_307( 1, 4, 2 );
}

bool mu__condition_497() // Condition for Rule "coherent, addr:1, n2:4, n1:3"
{
  return mu__invariant_307( 1, 4, 3 );
}

bool mu__condition_498() // Condition for Rule "coherent, addr:1, n2:4, n1:4"
{
  return mu__invariant_307( 1, 4, 4 );
}

bool mu__condition_499() // Condition for Rule "coherent, addr:1, n2:4, n1:5"
{
  return mu__invariant_307( 1, 4, 5 );
}

bool mu__condition_500() // Condition for Rule "coherent, addr:1, n2:4, n1:6"
{
  return mu__invariant_307( 1, 4, 6 );
}

bool mu__condition_501() // Condition for Rule "coherent, addr:1, n2:4, n1:7"
{
  return mu__invariant_307( 1, 4, 7 );
}

bool mu__condition_502() // Condition for Rule "coherent, addr:1, n2:4, n1:8"
{
  return mu__invariant_307( 1, 4, 8 );
}

bool mu__condition_503() // Condition for Rule "coherent, addr:1, n2:4, n1:9"
{
  return mu__invariant_307( 1, 4, 9 );
}

bool mu__condition_504() // Condition for Rule "coherent, addr:1, n2:4, n1:10"
{
  return mu__invariant_307( 1, 4, 10 );
}

bool mu__condition_506() // Condition for Rule "coherent, addr:1, n2:5, n1:0"
{
  return mu__invariant_307( 1, 5, 0 );
}

bool mu__condition_507() // Condition for Rule "coherent, addr:1, n2:5, n1:1"
{
  return mu__invariant_307( 1, 5, 1 );
}

bool mu__condition_508() // Condition for Rule "coherent, addr:1, n2:5, n1:2"
{
  return mu__invariant_307( 1, 5, 2 );
}

bool mu__condition_509() // Condition for Rule "coherent, addr:1, n2:5, n1:3"
{
  return mu__invariant_307( 1, 5, 3 );
}

bool mu__condition_510() // Condition for Rule "coherent, addr:1, n2:5, n1:4"
{
  return mu__invariant_307( 1, 5, 4 );
}

bool mu__condition_511() // Condition for Rule "coherent, addr:1, n2:5, n1:5"
{
  return mu__invariant_307( 1, 5, 5 );
}

bool mu__condition_512() // Condition for Rule "coherent, addr:1, n2:5, n1:6"
{
  return mu__invariant_307( 1, 5, 6 );
}

bool mu__condition_513() // Condition for Rule "coherent, addr:1, n2:5, n1:7"
{
  return mu__invariant_307( 1, 5, 7 );
}

bool mu__condition_514() // Condition for Rule "coherent, addr:1, n2:5, n1:8"
{
  return mu__invariant_307( 1, 5, 8 );
}

bool mu__condition_515() // Condition for Rule "coherent, addr:1, n2:5, n1:9"
{
  return mu__invariant_307( 1, 5, 9 );
}

bool mu__condition_516() // Condition for Rule "coherent, addr:1, n2:5, n1:10"
{
  return mu__invariant_307( 1, 5, 10 );
}

bool mu__condition_518() // Condition for Rule "coherent, addr:1, n2:6, n1:0"
{
  return mu__invariant_307( 1, 6, 0 );
}

bool mu__condition_519() // Condition for Rule "coherent, addr:1, n2:6, n1:1"
{
  return mu__invariant_307( 1, 6, 1 );
}

bool mu__condition_520() // Condition for Rule "coherent, addr:1, n2:6, n1:2"
{
  return mu__invariant_307( 1, 6, 2 );
}

bool mu__condition_521() // Condition for Rule "coherent, addr:1, n2:6, n1:3"
{
  return mu__invariant_307( 1, 6, 3 );
}

bool mu__condition_522() // Condition for Rule "coherent, addr:1, n2:6, n1:4"
{
  return mu__invariant_307( 1, 6, 4 );
}

bool mu__condition_523() // Condition for Rule "coherent, addr:1, n2:6, n1:5"
{
  return mu__invariant_307( 1, 6, 5 );
}

bool mu__condition_524() // Condition for Rule "coherent, addr:1, n2:6, n1:6"
{
  return mu__invariant_307( 1, 6, 6 );
}

bool mu__condition_525() // Condition for Rule "coherent, addr:1, n2:6, n1:7"
{
  return mu__invariant_307( 1, 6, 7 );
}

bool mu__condition_526() // Condition for Rule "coherent, addr:1, n2:6, n1:8"
{
  return mu__invariant_307( 1, 6, 8 );
}

bool mu__condition_527() // Condition for Rule "coherent, addr:1, n2:6, n1:9"
{
  return mu__invariant_307( 1, 6, 9 );
}

bool mu__condition_528() // Condition for Rule "coherent, addr:1, n2:6, n1:10"
{
  return mu__invariant_307( 1, 6, 10 );
}

bool mu__condition_530() // Condition for Rule "coherent, addr:1, n2:7, n1:0"
{
  return mu__invariant_307( 1, 7, 0 );
}

bool mu__condition_531() // Condition for Rule "coherent, addr:1, n2:7, n1:1"
{
  return mu__invariant_307( 1, 7, 1 );
}

bool mu__condition_532() // Condition for Rule "coherent, addr:1, n2:7, n1:2"
{
  return mu__invariant_307( 1, 7, 2 );
}

bool mu__condition_533() // Condition for Rule "coherent, addr:1, n2:7, n1:3"
{
  return mu__invariant_307( 1, 7, 3 );
}

bool mu__condition_534() // Condition for Rule "coherent, addr:1, n2:7, n1:4"
{
  return mu__invariant_307( 1, 7, 4 );
}

bool mu__condition_535() // Condition for Rule "coherent, addr:1, n2:7, n1:5"
{
  return mu__invariant_307( 1, 7, 5 );
}

bool mu__condition_536() // Condition for Rule "coherent, addr:1, n2:7, n1:6"
{
  return mu__invariant_307( 1, 7, 6 );
}

bool mu__condition_537() // Condition for Rule "coherent, addr:1, n2:7, n1:7"
{
  return mu__invariant_307( 1, 7, 7 );
}

bool mu__condition_538() // Condition for Rule "coherent, addr:1, n2:7, n1:8"
{
  return mu__invariant_307( 1, 7, 8 );
}

bool mu__condition_539() // Condition for Rule "coherent, addr:1, n2:7, n1:9"
{
  return mu__invariant_307( 1, 7, 9 );
}

bool mu__condition_540() // Condition for Rule "coherent, addr:1, n2:7, n1:10"
{
  return mu__invariant_307( 1, 7, 10 );
}

bool mu__condition_542() // Condition for Rule "coherent, addr:1, n2:8, n1:0"
{
  return mu__invariant_307( 1, 8, 0 );
}

bool mu__condition_543() // Condition for Rule "coherent, addr:1, n2:8, n1:1"
{
  return mu__invariant_307( 1, 8, 1 );
}

bool mu__condition_544() // Condition for Rule "coherent, addr:1, n2:8, n1:2"
{
  return mu__invariant_307( 1, 8, 2 );
}

bool mu__condition_545() // Condition for Rule "coherent, addr:1, n2:8, n1:3"
{
  return mu__invariant_307( 1, 8, 3 );
}

bool mu__condition_546() // Condition for Rule "coherent, addr:1, n2:8, n1:4"
{
  return mu__invariant_307( 1, 8, 4 );
}

bool mu__condition_547() // Condition for Rule "coherent, addr:1, n2:8, n1:5"
{
  return mu__invariant_307( 1, 8, 5 );
}

bool mu__condition_548() // Condition for Rule "coherent, addr:1, n2:8, n1:6"
{
  return mu__invariant_307( 1, 8, 6 );
}

bool mu__condition_549() // Condition for Rule "coherent, addr:1, n2:8, n1:7"
{
  return mu__invariant_307( 1, 8, 7 );
}

bool mu__condition_550() // Condition for Rule "coherent, addr:1, n2:8, n1:8"
{
  return mu__invariant_307( 1, 8, 8 );
}

bool mu__condition_551() // Condition for Rule "coherent, addr:1, n2:8, n1:9"
{
  return mu__invariant_307( 1, 8, 9 );
}

bool mu__condition_552() // Condition for Rule "coherent, addr:1, n2:8, n1:10"
{
  return mu__invariant_307( 1, 8, 10 );
}

bool mu__condition_554() // Condition for Rule "coherent, addr:1, n2:9, n1:0"
{
  return mu__invariant_307( 1, 9, 0 );
}

bool mu__condition_555() // Condition for Rule "coherent, addr:1, n2:9, n1:1"
{
  return mu__invariant_307( 1, 9, 1 );
}

bool mu__condition_556() // Condition for Rule "coherent, addr:1, n2:9, n1:2"
{
  return mu__invariant_307( 1, 9, 2 );
}

bool mu__condition_557() // Condition for Rule "coherent, addr:1, n2:9, n1:3"
{
  return mu__invariant_307( 1, 9, 3 );
}

bool mu__condition_558() // Condition for Rule "coherent, addr:1, n2:9, n1:4"
{
  return mu__invariant_307( 1, 9, 4 );
}

bool mu__condition_559() // Condition for Rule "coherent, addr:1, n2:9, n1:5"
{
  return mu__invariant_307( 1, 9, 5 );
}

bool mu__condition_560() // Condition for Rule "coherent, addr:1, n2:9, n1:6"
{
  return mu__invariant_307( 1, 9, 6 );
}

bool mu__condition_561() // Condition for Rule "coherent, addr:1, n2:9, n1:7"
{
  return mu__invariant_307( 1, 9, 7 );
}

bool mu__condition_562() // Condition for Rule "coherent, addr:1, n2:9, n1:8"
{
  return mu__invariant_307( 1, 9, 8 );
}

bool mu__condition_563() // Condition for Rule "coherent, addr:1, n2:9, n1:9"
{
  return mu__invariant_307( 1, 9, 9 );
}

bool mu__condition_564() // Condition for Rule "coherent, addr:1, n2:9, n1:10"
{
  return mu__invariant_307( 1, 9, 10 );
}

bool mu__condition_566() // Condition for Rule "coherent, addr:1, n2:10, n1:0"
{
  return mu__invariant_307( 1, 10, 0 );
}

bool mu__condition_567() // Condition for Rule "coherent, addr:1, n2:10, n1:1"
{
  return mu__invariant_307( 1, 10, 1 );
}

bool mu__condition_568() // Condition for Rule "coherent, addr:1, n2:10, n1:2"
{
  return mu__invariant_307( 1, 10, 2 );
}

bool mu__condition_569() // Condition for Rule "coherent, addr:1, n2:10, n1:3"
{
  return mu__invariant_307( 1, 10, 3 );
}

bool mu__condition_570() // Condition for Rule "coherent, addr:1, n2:10, n1:4"
{
  return mu__invariant_307( 1, 10, 4 );
}

bool mu__condition_571() // Condition for Rule "coherent, addr:1, n2:10, n1:5"
{
  return mu__invariant_307( 1, 10, 5 );
}

bool mu__condition_572() // Condition for Rule "coherent, addr:1, n2:10, n1:6"
{
  return mu__invariant_307( 1, 10, 6 );
}

bool mu__condition_573() // Condition for Rule "coherent, addr:1, n2:10, n1:7"
{
  return mu__invariant_307( 1, 10, 7 );
}

bool mu__condition_574() // Condition for Rule "coherent, addr:1, n2:10, n1:8"
{
  return mu__invariant_307( 1, 10, 8 );
}

bool mu__condition_575() // Condition for Rule "coherent, addr:1, n2:10, n1:9"
{
  return mu__invariant_307( 1, 10, 9 );
}

bool mu__condition_576() // Condition for Rule "coherent, addr:1, n2:10, n1:10"
{
  return mu__invariant_307( 1, 10, 10 );
}

bool mu__condition_579() // Condition for Rule "coherent, addr:2, n2:0, n1:0"
{
  return mu__invariant_307( 2, 0, 0 );
}

bool mu__condition_580() // Condition for Rule "coherent, addr:2, n2:0, n1:1"
{
  return mu__invariant_307( 2, 0, 1 );
}

bool mu__condition_581() // Condition for Rule "coherent, addr:2, n2:0, n1:2"
{
  return mu__invariant_307( 2, 0, 2 );
}

bool mu__condition_582() // Condition for Rule "coherent, addr:2, n2:0, n1:3"
{
  return mu__invariant_307( 2, 0, 3 );
}

bool mu__condition_583() // Condition for Rule "coherent, addr:2, n2:0, n1:4"
{
  return mu__invariant_307( 2, 0, 4 );
}

bool mu__condition_584() // Condition for Rule "coherent, addr:2, n2:0, n1:5"
{
  return mu__invariant_307( 2, 0, 5 );
}

bool mu__condition_585() // Condition for Rule "coherent, addr:2, n2:0, n1:6"
{
  return mu__invariant_307( 2, 0, 6 );
}

bool mu__condition_586() // Condition for Rule "coherent, addr:2, n2:0, n1:7"
{
  return mu__invariant_307( 2, 0, 7 );
}

bool mu__condition_587() // Condition for Rule "coherent, addr:2, n2:0, n1:8"
{
  return mu__invariant_307( 2, 0, 8 );
}

bool mu__condition_588() // Condition for Rule "coherent, addr:2, n2:0, n1:9"
{
  return mu__invariant_307( 2, 0, 9 );
}

bool mu__condition_589() // Condition for Rule "coherent, addr:2, n2:0, n1:10"
{
  return mu__invariant_307( 2, 0, 10 );
}

bool mu__condition_591() // Condition for Rule "coherent, addr:2, n2:1, n1:0"
{
  return mu__invariant_307( 2, 1, 0 );
}

bool mu__condition_592() // Condition for Rule "coherent, addr:2, n2:1, n1:1"
{
  return mu__invariant_307( 2, 1, 1 );
}

bool mu__condition_593() // Condition for Rule "coherent, addr:2, n2:1, n1:2"
{
  return mu__invariant_307( 2, 1, 2 );
}

bool mu__condition_594() // Condition for Rule "coherent, addr:2, n2:1, n1:3"
{
  return mu__invariant_307( 2, 1, 3 );
}

bool mu__condition_595() // Condition for Rule "coherent, addr:2, n2:1, n1:4"
{
  return mu__invariant_307( 2, 1, 4 );
}

bool mu__condition_596() // Condition for Rule "coherent, addr:2, n2:1, n1:5"
{
  return mu__invariant_307( 2, 1, 5 );
}

bool mu__condition_597() // Condition for Rule "coherent, addr:2, n2:1, n1:6"
{
  return mu__invariant_307( 2, 1, 6 );
}

bool mu__condition_598() // Condition for Rule "coherent, addr:2, n2:1, n1:7"
{
  return mu__invariant_307( 2, 1, 7 );
}

bool mu__condition_599() // Condition for Rule "coherent, addr:2, n2:1, n1:8"
{
  return mu__invariant_307( 2, 1, 8 );
}

bool mu__condition_600() // Condition for Rule "coherent, addr:2, n2:1, n1:9"
{
  return mu__invariant_307( 2, 1, 9 );
}

bool mu__condition_601() // Condition for Rule "coherent, addr:2, n2:1, n1:10"
{
  return mu__invariant_307( 2, 1, 10 );
}

bool mu__condition_603() // Condition for Rule "coherent, addr:2, n2:2, n1:0"
{
  return mu__invariant_307( 2, 2, 0 );
}

bool mu__condition_604() // Condition for Rule "coherent, addr:2, n2:2, n1:1"
{
  return mu__invariant_307( 2, 2, 1 );
}

bool mu__condition_605() // Condition for Rule "coherent, addr:2, n2:2, n1:2"
{
  return mu__invariant_307( 2, 2, 2 );
}

bool mu__condition_606() // Condition for Rule "coherent, addr:2, n2:2, n1:3"
{
  return mu__invariant_307( 2, 2, 3 );
}

bool mu__condition_607() // Condition for Rule "coherent, addr:2, n2:2, n1:4"
{
  return mu__invariant_307( 2, 2, 4 );
}

bool mu__condition_608() // Condition for Rule "coherent, addr:2, n2:2, n1:5"
{
  return mu__invariant_307( 2, 2, 5 );
}

bool mu__condition_609() // Condition for Rule "coherent, addr:2, n2:2, n1:6"
{
  return mu__invariant_307( 2, 2, 6 );
}

bool mu__condition_610() // Condition for Rule "coherent, addr:2, n2:2, n1:7"
{
  return mu__invariant_307( 2, 2, 7 );
}

bool mu__condition_611() // Condition for Rule "coherent, addr:2, n2:2, n1:8"
{
  return mu__invariant_307( 2, 2, 8 );
}

bool mu__condition_612() // Condition for Rule "coherent, addr:2, n2:2, n1:9"
{
  return mu__invariant_307( 2, 2, 9 );
}

bool mu__condition_613() // Condition for Rule "coherent, addr:2, n2:2, n1:10"
{
  return mu__invariant_307( 2, 2, 10 );
}

bool mu__condition_615() // Condition for Rule "coherent, addr:2, n2:3, n1:0"
{
  return mu__invariant_307( 2, 3, 0 );
}

bool mu__condition_616() // Condition for Rule "coherent, addr:2, n2:3, n1:1"
{
  return mu__invariant_307( 2, 3, 1 );
}

bool mu__condition_617() // Condition for Rule "coherent, addr:2, n2:3, n1:2"
{
  return mu__invariant_307( 2, 3, 2 );
}

bool mu__condition_618() // Condition for Rule "coherent, addr:2, n2:3, n1:3"
{
  return mu__invariant_307( 2, 3, 3 );
}

bool mu__condition_619() // Condition for Rule "coherent, addr:2, n2:3, n1:4"
{
  return mu__invariant_307( 2, 3, 4 );
}

bool mu__condition_620() // Condition for Rule "coherent, addr:2, n2:3, n1:5"
{
  return mu__invariant_307( 2, 3, 5 );
}

bool mu__condition_621() // Condition for Rule "coherent, addr:2, n2:3, n1:6"
{
  return mu__invariant_307( 2, 3, 6 );
}

bool mu__condition_622() // Condition for Rule "coherent, addr:2, n2:3, n1:7"
{
  return mu__invariant_307( 2, 3, 7 );
}

bool mu__condition_623() // Condition for Rule "coherent, addr:2, n2:3, n1:8"
{
  return mu__invariant_307( 2, 3, 8 );
}

bool mu__condition_624() // Condition for Rule "coherent, addr:2, n2:3, n1:9"
{
  return mu__invariant_307( 2, 3, 9 );
}

bool mu__condition_625() // Condition for Rule "coherent, addr:2, n2:3, n1:10"
{
  return mu__invariant_307( 2, 3, 10 );
}

bool mu__condition_627() // Condition for Rule "coherent, addr:2, n2:4, n1:0"
{
  return mu__invariant_307( 2, 4, 0 );
}

bool mu__condition_628() // Condition for Rule "coherent, addr:2, n2:4, n1:1"
{
  return mu__invariant_307( 2, 4, 1 );
}

bool mu__condition_629() // Condition for Rule "coherent, addr:2, n2:4, n1:2"
{
  return mu__invariant_307( 2, 4, 2 );
}

bool mu__condition_630() // Condition for Rule "coherent, addr:2, n2:4, n1:3"
{
  return mu__invariant_307( 2, 4, 3 );
}

bool mu__condition_631() // Condition for Rule "coherent, addr:2, n2:4, n1:4"
{
  return mu__invariant_307( 2, 4, 4 );
}

bool mu__condition_632() // Condition for Rule "coherent, addr:2, n2:4, n1:5"
{
  return mu__invariant_307( 2, 4, 5 );
}

bool mu__condition_633() // Condition for Rule "coherent, addr:2, n2:4, n1:6"
{
  return mu__invariant_307( 2, 4, 6 );
}

bool mu__condition_634() // Condition for Rule "coherent, addr:2, n2:4, n1:7"
{
  return mu__invariant_307( 2, 4, 7 );
}

bool mu__condition_635() // Condition for Rule "coherent, addr:2, n2:4, n1:8"
{
  return mu__invariant_307( 2, 4, 8 );
}

bool mu__condition_636() // Condition for Rule "coherent, addr:2, n2:4, n1:9"
{
  return mu__invariant_307( 2, 4, 9 );
}

bool mu__condition_637() // Condition for Rule "coherent, addr:2, n2:4, n1:10"
{
  return mu__invariant_307( 2, 4, 10 );
}

bool mu__condition_639() // Condition for Rule "coherent, addr:2, n2:5, n1:0"
{
  return mu__invariant_307( 2, 5, 0 );
}

bool mu__condition_640() // Condition for Rule "coherent, addr:2, n2:5, n1:1"
{
  return mu__invariant_307( 2, 5, 1 );
}

bool mu__condition_641() // Condition for Rule "coherent, addr:2, n2:5, n1:2"
{
  return mu__invariant_307( 2, 5, 2 );
}

bool mu__condition_642() // Condition for Rule "coherent, addr:2, n2:5, n1:3"
{
  return mu__invariant_307( 2, 5, 3 );
}

bool mu__condition_643() // Condition for Rule "coherent, addr:2, n2:5, n1:4"
{
  return mu__invariant_307( 2, 5, 4 );
}

bool mu__condition_644() // Condition for Rule "coherent, addr:2, n2:5, n1:5"
{
  return mu__invariant_307( 2, 5, 5 );
}

bool mu__condition_645() // Condition for Rule "coherent, addr:2, n2:5, n1:6"
{
  return mu__invariant_307( 2, 5, 6 );
}

bool mu__condition_646() // Condition for Rule "coherent, addr:2, n2:5, n1:7"
{
  return mu__invariant_307( 2, 5, 7 );
}

bool mu__condition_647() // Condition for Rule "coherent, addr:2, n2:5, n1:8"
{
  return mu__invariant_307( 2, 5, 8 );
}

bool mu__condition_648() // Condition for Rule "coherent, addr:2, n2:5, n1:9"
{
  return mu__invariant_307( 2, 5, 9 );
}

bool mu__condition_649() // Condition for Rule "coherent, addr:2, n2:5, n1:10"
{
  return mu__invariant_307( 2, 5, 10 );
}

bool mu__condition_651() // Condition for Rule "coherent, addr:2, n2:6, n1:0"
{
  return mu__invariant_307( 2, 6, 0 );
}

bool mu__condition_652() // Condition for Rule "coherent, addr:2, n2:6, n1:1"
{
  return mu__invariant_307( 2, 6, 1 );
}

bool mu__condition_653() // Condition for Rule "coherent, addr:2, n2:6, n1:2"
{
  return mu__invariant_307( 2, 6, 2 );
}

bool mu__condition_654() // Condition for Rule "coherent, addr:2, n2:6, n1:3"
{
  return mu__invariant_307( 2, 6, 3 );
}

bool mu__condition_655() // Condition for Rule "coherent, addr:2, n2:6, n1:4"
{
  return mu__invariant_307( 2, 6, 4 );
}

bool mu__condition_656() // Condition for Rule "coherent, addr:2, n2:6, n1:5"
{
  return mu__invariant_307( 2, 6, 5 );
}

bool mu__condition_657() // Condition for Rule "coherent, addr:2, n2:6, n1:6"
{
  return mu__invariant_307( 2, 6, 6 );
}

bool mu__condition_658() // Condition for Rule "coherent, addr:2, n2:6, n1:7"
{
  return mu__invariant_307( 2, 6, 7 );
}

bool mu__condition_659() // Condition for Rule "coherent, addr:2, n2:6, n1:8"
{
  return mu__invariant_307( 2, 6, 8 );
}

bool mu__condition_660() // Condition for Rule "coherent, addr:2, n2:6, n1:9"
{
  return mu__invariant_307( 2, 6, 9 );
}

bool mu__condition_661() // Condition for Rule "coherent, addr:2, n2:6, n1:10"
{
  return mu__invariant_307( 2, 6, 10 );
}

bool mu__condition_663() // Condition for Rule "coherent, addr:2, n2:7, n1:0"
{
  return mu__invariant_307( 2, 7, 0 );
}

bool mu__condition_664() // Condition for Rule "coherent, addr:2, n2:7, n1:1"
{
  return mu__invariant_307( 2, 7, 1 );
}

bool mu__condition_665() // Condition for Rule "coherent, addr:2, n2:7, n1:2"
{
  return mu__invariant_307( 2, 7, 2 );
}

bool mu__condition_666() // Condition for Rule "coherent, addr:2, n2:7, n1:3"
{
  return mu__invariant_307( 2, 7, 3 );
}

bool mu__condition_667() // Condition for Rule "coherent, addr:2, n2:7, n1:4"
{
  return mu__invariant_307( 2, 7, 4 );
}

bool mu__condition_668() // Condition for Rule "coherent, addr:2, n2:7, n1:5"
{
  return mu__invariant_307( 2, 7, 5 );
}

bool mu__condition_669() // Condition for Rule "coherent, addr:2, n2:7, n1:6"
{
  return mu__invariant_307( 2, 7, 6 );
}

bool mu__condition_670() // Condition for Rule "coherent, addr:2, n2:7, n1:7"
{
  return mu__invariant_307( 2, 7, 7 );
}

bool mu__condition_671() // Condition for Rule "coherent, addr:2, n2:7, n1:8"
{
  return mu__invariant_307( 2, 7, 8 );
}

bool mu__condition_672() // Condition for Rule "coherent, addr:2, n2:7, n1:9"
{
  return mu__invariant_307( 2, 7, 9 );
}

bool mu__condition_673() // Condition for Rule "coherent, addr:2, n2:7, n1:10"
{
  return mu__invariant_307( 2, 7, 10 );
}

bool mu__condition_675() // Condition for Rule "coherent, addr:2, n2:8, n1:0"
{
  return mu__invariant_307( 2, 8, 0 );
}

bool mu__condition_676() // Condition for Rule "coherent, addr:2, n2:8, n1:1"
{
  return mu__invariant_307( 2, 8, 1 );
}

bool mu__condition_677() // Condition for Rule "coherent, addr:2, n2:8, n1:2"
{
  return mu__invariant_307( 2, 8, 2 );
}

bool mu__condition_678() // Condition for Rule "coherent, addr:2, n2:8, n1:3"
{
  return mu__invariant_307( 2, 8, 3 );
}

bool mu__condition_679() // Condition for Rule "coherent, addr:2, n2:8, n1:4"
{
  return mu__invariant_307( 2, 8, 4 );
}

bool mu__condition_680() // Condition for Rule "coherent, addr:2, n2:8, n1:5"
{
  return mu__invariant_307( 2, 8, 5 );
}

bool mu__condition_681() // Condition for Rule "coherent, addr:2, n2:8, n1:6"
{
  return mu__invariant_307( 2, 8, 6 );
}

bool mu__condition_682() // Condition for Rule "coherent, addr:2, n2:8, n1:7"
{
  return mu__invariant_307( 2, 8, 7 );
}

bool mu__condition_683() // Condition for Rule "coherent, addr:2, n2:8, n1:8"
{
  return mu__invariant_307( 2, 8, 8 );
}

bool mu__condition_684() // Condition for Rule "coherent, addr:2, n2:8, n1:9"
{
  return mu__invariant_307( 2, 8, 9 );
}

bool mu__condition_685() // Condition for Rule "coherent, addr:2, n2:8, n1:10"
{
  return mu__invariant_307( 2, 8, 10 );
}

bool mu__condition_687() // Condition for Rule "coherent, addr:2, n2:9, n1:0"
{
  return mu__invariant_307( 2, 9, 0 );
}

bool mu__condition_688() // Condition for Rule "coherent, addr:2, n2:9, n1:1"
{
  return mu__invariant_307( 2, 9, 1 );
}

bool mu__condition_689() // Condition for Rule "coherent, addr:2, n2:9, n1:2"
{
  return mu__invariant_307( 2, 9, 2 );
}

bool mu__condition_690() // Condition for Rule "coherent, addr:2, n2:9, n1:3"
{
  return mu__invariant_307( 2, 9, 3 );
}

bool mu__condition_691() // Condition for Rule "coherent, addr:2, n2:9, n1:4"
{
  return mu__invariant_307( 2, 9, 4 );
}

bool mu__condition_692() // Condition for Rule "coherent, addr:2, n2:9, n1:5"
{
  return mu__invariant_307( 2, 9, 5 );
}

bool mu__condition_693() // Condition for Rule "coherent, addr:2, n2:9, n1:6"
{
  return mu__invariant_307( 2, 9, 6 );
}

bool mu__condition_694() // Condition for Rule "coherent, addr:2, n2:9, n1:7"
{
  return mu__invariant_307( 2, 9, 7 );
}

bool mu__condition_695() // Condition for Rule "coherent, addr:2, n2:9, n1:8"
{
  return mu__invariant_307( 2, 9, 8 );
}

bool mu__condition_696() // Condition for Rule "coherent, addr:2, n2:9, n1:9"
{
  return mu__invariant_307( 2, 9, 9 );
}

bool mu__condition_697() // Condition for Rule "coherent, addr:2, n2:9, n1:10"
{
  return mu__invariant_307( 2, 9, 10 );
}

bool mu__condition_699() // Condition for Rule "coherent, addr:2, n2:10, n1:0"
{
  return mu__invariant_307( 2, 10, 0 );
}

bool mu__condition_700() // Condition for Rule "coherent, addr:2, n2:10, n1:1"
{
  return mu__invariant_307( 2, 10, 1 );
}

bool mu__condition_701() // Condition for Rule "coherent, addr:2, n2:10, n1:2"
{
  return mu__invariant_307( 2, 10, 2 );
}

bool mu__condition_702() // Condition for Rule "coherent, addr:2, n2:10, n1:3"
{
  return mu__invariant_307( 2, 10, 3 );
}

bool mu__condition_703() // Condition for Rule "coherent, addr:2, n2:10, n1:4"
{
  return mu__invariant_307( 2, 10, 4 );
}

bool mu__condition_704() // Condition for Rule "coherent, addr:2, n2:10, n1:5"
{
  return mu__invariant_307( 2, 10, 5 );
}

bool mu__condition_705() // Condition for Rule "coherent, addr:2, n2:10, n1:6"
{
  return mu__invariant_307( 2, 10, 6 );
}

bool mu__condition_706() // Condition for Rule "coherent, addr:2, n2:10, n1:7"
{
  return mu__invariant_307( 2, 10, 7 );
}

bool mu__condition_707() // Condition for Rule "coherent, addr:2, n2:10, n1:8"
{
  return mu__invariant_307( 2, 10, 8 );
}

bool mu__condition_708() // Condition for Rule "coherent, addr:2, n2:10, n1:9"
{
  return mu__invariant_307( 2, 10, 9 );
}

bool mu__condition_709() // Condition for Rule "coherent, addr:2, n2:10, n1:10"
{
  return mu__invariant_307( 2, 10, 10 );
}

bool mu__condition_712() // Condition for Rule "coherent, addr:3, n2:0, n1:0"
{
  return mu__invariant_307( 3, 0, 0 );
}

bool mu__condition_713() // Condition for Rule "coherent, addr:3, n2:0, n1:1"
{
  return mu__invariant_307( 3, 0, 1 );
}

bool mu__condition_714() // Condition for Rule "coherent, addr:3, n2:0, n1:2"
{
  return mu__invariant_307( 3, 0, 2 );
}

bool mu__condition_715() // Condition for Rule "coherent, addr:3, n2:0, n1:3"
{
  return mu__invariant_307( 3, 0, 3 );
}

bool mu__condition_716() // Condition for Rule "coherent, addr:3, n2:0, n1:4"
{
  return mu__invariant_307( 3, 0, 4 );
}

bool mu__condition_717() // Condition for Rule "coherent, addr:3, n2:0, n1:5"
{
  return mu__invariant_307( 3, 0, 5 );
}

bool mu__condition_718() // Condition for Rule "coherent, addr:3, n2:0, n1:6"
{
  return mu__invariant_307( 3, 0, 6 );
}

bool mu__condition_719() // Condition for Rule "coherent, addr:3, n2:0, n1:7"
{
  return mu__invariant_307( 3, 0, 7 );
}

bool mu__condition_720() // Condition for Rule "coherent, addr:3, n2:0, n1:8"
{
  return mu__invariant_307( 3, 0, 8 );
}

bool mu__condition_721() // Condition for Rule "coherent, addr:3, n2:0, n1:9"
{
  return mu__invariant_307( 3, 0, 9 );
}

bool mu__condition_722() // Condition for Rule "coherent, addr:3, n2:0, n1:10"
{
  return mu__invariant_307( 3, 0, 10 );
}

bool mu__condition_724() // Condition for Rule "coherent, addr:3, n2:1, n1:0"
{
  return mu__invariant_307( 3, 1, 0 );
}

bool mu__condition_725() // Condition for Rule "coherent, addr:3, n2:1, n1:1"
{
  return mu__invariant_307( 3, 1, 1 );
}

bool mu__condition_726() // Condition for Rule "coherent, addr:3, n2:1, n1:2"
{
  return mu__invariant_307( 3, 1, 2 );
}

bool mu__condition_727() // Condition for Rule "coherent, addr:3, n2:1, n1:3"
{
  return mu__invariant_307( 3, 1, 3 );
}

bool mu__condition_728() // Condition for Rule "coherent, addr:3, n2:1, n1:4"
{
  return mu__invariant_307( 3, 1, 4 );
}

bool mu__condition_729() // Condition for Rule "coherent, addr:3, n2:1, n1:5"
{
  return mu__invariant_307( 3, 1, 5 );
}

bool mu__condition_730() // Condition for Rule "coherent, addr:3, n2:1, n1:6"
{
  return mu__invariant_307( 3, 1, 6 );
}

bool mu__condition_731() // Condition for Rule "coherent, addr:3, n2:1, n1:7"
{
  return mu__invariant_307( 3, 1, 7 );
}

bool mu__condition_732() // Condition for Rule "coherent, addr:3, n2:1, n1:8"
{
  return mu__invariant_307( 3, 1, 8 );
}

bool mu__condition_733() // Condition for Rule "coherent, addr:3, n2:1, n1:9"
{
  return mu__invariant_307( 3, 1, 9 );
}

bool mu__condition_734() // Condition for Rule "coherent, addr:3, n2:1, n1:10"
{
  return mu__invariant_307( 3, 1, 10 );
}

bool mu__condition_736() // Condition for Rule "coherent, addr:3, n2:2, n1:0"
{
  return mu__invariant_307( 3, 2, 0 );
}

bool mu__condition_737() // Condition for Rule "coherent, addr:3, n2:2, n1:1"
{
  return mu__invariant_307( 3, 2, 1 );
}

bool mu__condition_738() // Condition for Rule "coherent, addr:3, n2:2, n1:2"
{
  return mu__invariant_307( 3, 2, 2 );
}

bool mu__condition_739() // Condition for Rule "coherent, addr:3, n2:2, n1:3"
{
  return mu__invariant_307( 3, 2, 3 );
}

bool mu__condition_740() // Condition for Rule "coherent, addr:3, n2:2, n1:4"
{
  return mu__invariant_307( 3, 2, 4 );
}

bool mu__condition_741() // Condition for Rule "coherent, addr:3, n2:2, n1:5"
{
  return mu__invariant_307( 3, 2, 5 );
}

bool mu__condition_742() // Condition for Rule "coherent, addr:3, n2:2, n1:6"
{
  return mu__invariant_307( 3, 2, 6 );
}

bool mu__condition_743() // Condition for Rule "coherent, addr:3, n2:2, n1:7"
{
  return mu__invariant_307( 3, 2, 7 );
}

bool mu__condition_744() // Condition for Rule "coherent, addr:3, n2:2, n1:8"
{
  return mu__invariant_307( 3, 2, 8 );
}

bool mu__condition_745() // Condition for Rule "coherent, addr:3, n2:2, n1:9"
{
  return mu__invariant_307( 3, 2, 9 );
}

bool mu__condition_746() // Condition for Rule "coherent, addr:3, n2:2, n1:10"
{
  return mu__invariant_307( 3, 2, 10 );
}

bool mu__condition_748() // Condition for Rule "coherent, addr:3, n2:3, n1:0"
{
  return mu__invariant_307( 3, 3, 0 );
}

bool mu__condition_749() // Condition for Rule "coherent, addr:3, n2:3, n1:1"
{
  return mu__invariant_307( 3, 3, 1 );
}

bool mu__condition_750() // Condition for Rule "coherent, addr:3, n2:3, n1:2"
{
  return mu__invariant_307( 3, 3, 2 );
}

bool mu__condition_751() // Condition for Rule "coherent, addr:3, n2:3, n1:3"
{
  return mu__invariant_307( 3, 3, 3 );
}

bool mu__condition_752() // Condition for Rule "coherent, addr:3, n2:3, n1:4"
{
  return mu__invariant_307( 3, 3, 4 );
}

bool mu__condition_753() // Condition for Rule "coherent, addr:3, n2:3, n1:5"
{
  return mu__invariant_307( 3, 3, 5 );
}

bool mu__condition_754() // Condition for Rule "coherent, addr:3, n2:3, n1:6"
{
  return mu__invariant_307( 3, 3, 6 );
}

bool mu__condition_755() // Condition for Rule "coherent, addr:3, n2:3, n1:7"
{
  return mu__invariant_307( 3, 3, 7 );
}

bool mu__condition_756() // Condition for Rule "coherent, addr:3, n2:3, n1:8"
{
  return mu__invariant_307( 3, 3, 8 );
}

bool mu__condition_757() // Condition for Rule "coherent, addr:3, n2:3, n1:9"
{
  return mu__invariant_307( 3, 3, 9 );
}

bool mu__condition_758() // Condition for Rule "coherent, addr:3, n2:3, n1:10"
{
  return mu__invariant_307( 3, 3, 10 );
}

bool mu__condition_760() // Condition for Rule "coherent, addr:3, n2:4, n1:0"
{
  return mu__invariant_307( 3, 4, 0 );
}

bool mu__condition_761() // Condition for Rule "coherent, addr:3, n2:4, n1:1"
{
  return mu__invariant_307( 3, 4, 1 );
}

bool mu__condition_762() // Condition for Rule "coherent, addr:3, n2:4, n1:2"
{
  return mu__invariant_307( 3, 4, 2 );
}

bool mu__condition_763() // Condition for Rule "coherent, addr:3, n2:4, n1:3"
{
  return mu__invariant_307( 3, 4, 3 );
}

bool mu__condition_764() // Condition for Rule "coherent, addr:3, n2:4, n1:4"
{
  return mu__invariant_307( 3, 4, 4 );
}

bool mu__condition_765() // Condition for Rule "coherent, addr:3, n2:4, n1:5"
{
  return mu__invariant_307( 3, 4, 5 );
}

bool mu__condition_766() // Condition for Rule "coherent, addr:3, n2:4, n1:6"
{
  return mu__invariant_307( 3, 4, 6 );
}

bool mu__condition_767() // Condition for Rule "coherent, addr:3, n2:4, n1:7"
{
  return mu__invariant_307( 3, 4, 7 );
}

bool mu__condition_768() // Condition for Rule "coherent, addr:3, n2:4, n1:8"
{
  return mu__invariant_307( 3, 4, 8 );
}

bool mu__condition_769() // Condition for Rule "coherent, addr:3, n2:4, n1:9"
{
  return mu__invariant_307( 3, 4, 9 );
}

bool mu__condition_770() // Condition for Rule "coherent, addr:3, n2:4, n1:10"
{
  return mu__invariant_307( 3, 4, 10 );
}

bool mu__condition_772() // Condition for Rule "coherent, addr:3, n2:5, n1:0"
{
  return mu__invariant_307( 3, 5, 0 );
}

bool mu__condition_773() // Condition for Rule "coherent, addr:3, n2:5, n1:1"
{
  return mu__invariant_307( 3, 5, 1 );
}

bool mu__condition_774() // Condition for Rule "coherent, addr:3, n2:5, n1:2"
{
  return mu__invariant_307( 3, 5, 2 );
}

bool mu__condition_775() // Condition for Rule "coherent, addr:3, n2:5, n1:3"
{
  return mu__invariant_307( 3, 5, 3 );
}

bool mu__condition_776() // Condition for Rule "coherent, addr:3, n2:5, n1:4"
{
  return mu__invariant_307( 3, 5, 4 );
}

bool mu__condition_777() // Condition for Rule "coherent, addr:3, n2:5, n1:5"
{
  return mu__invariant_307( 3, 5, 5 );
}

bool mu__condition_778() // Condition for Rule "coherent, addr:3, n2:5, n1:6"
{
  return mu__invariant_307( 3, 5, 6 );
}

bool mu__condition_779() // Condition for Rule "coherent, addr:3, n2:5, n1:7"
{
  return mu__invariant_307( 3, 5, 7 );
}

bool mu__condition_780() // Condition for Rule "coherent, addr:3, n2:5, n1:8"
{
  return mu__invariant_307( 3, 5, 8 );
}

bool mu__condition_781() // Condition for Rule "coherent, addr:3, n2:5, n1:9"
{
  return mu__invariant_307( 3, 5, 9 );
}

bool mu__condition_782() // Condition for Rule "coherent, addr:3, n2:5, n1:10"
{
  return mu__invariant_307( 3, 5, 10 );
}

bool mu__condition_784() // Condition for Rule "coherent, addr:3, n2:6, n1:0"
{
  return mu__invariant_307( 3, 6, 0 );
}

bool mu__condition_785() // Condition for Rule "coherent, addr:3, n2:6, n1:1"
{
  return mu__invariant_307( 3, 6, 1 );
}

bool mu__condition_786() // Condition for Rule "coherent, addr:3, n2:6, n1:2"
{
  return mu__invariant_307( 3, 6, 2 );
}

bool mu__condition_787() // Condition for Rule "coherent, addr:3, n2:6, n1:3"
{
  return mu__invariant_307( 3, 6, 3 );
}

bool mu__condition_788() // Condition for Rule "coherent, addr:3, n2:6, n1:4"
{
  return mu__invariant_307( 3, 6, 4 );
}

bool mu__condition_789() // Condition for Rule "coherent, addr:3, n2:6, n1:5"
{
  return mu__invariant_307( 3, 6, 5 );
}

bool mu__condition_790() // Condition for Rule "coherent, addr:3, n2:6, n1:6"
{
  return mu__invariant_307( 3, 6, 6 );
}

bool mu__condition_791() // Condition for Rule "coherent, addr:3, n2:6, n1:7"
{
  return mu__invariant_307( 3, 6, 7 );
}

bool mu__condition_792() // Condition for Rule "coherent, addr:3, n2:6, n1:8"
{
  return mu__invariant_307( 3, 6, 8 );
}

bool mu__condition_793() // Condition for Rule "coherent, addr:3, n2:6, n1:9"
{
  return mu__invariant_307( 3, 6, 9 );
}

bool mu__condition_794() // Condition for Rule "coherent, addr:3, n2:6, n1:10"
{
  return mu__invariant_307( 3, 6, 10 );
}

bool mu__condition_796() // Condition for Rule "coherent, addr:3, n2:7, n1:0"
{
  return mu__invariant_307( 3, 7, 0 );
}

bool mu__condition_797() // Condition for Rule "coherent, addr:3, n2:7, n1:1"
{
  return mu__invariant_307( 3, 7, 1 );
}

bool mu__condition_798() // Condition for Rule "coherent, addr:3, n2:7, n1:2"
{
  return mu__invariant_307( 3, 7, 2 );
}

bool mu__condition_799() // Condition for Rule "coherent, addr:3, n2:7, n1:3"
{
  return mu__invariant_307( 3, 7, 3 );
}

bool mu__condition_800() // Condition for Rule "coherent, addr:3, n2:7, n1:4"
{
  return mu__invariant_307( 3, 7, 4 );
}

bool mu__condition_801() // Condition for Rule "coherent, addr:3, n2:7, n1:5"
{
  return mu__invariant_307( 3, 7, 5 );
}

bool mu__condition_802() // Condition for Rule "coherent, addr:3, n2:7, n1:6"
{
  return mu__invariant_307( 3, 7, 6 );
}

bool mu__condition_803() // Condition for Rule "coherent, addr:3, n2:7, n1:7"
{
  return mu__invariant_307( 3, 7, 7 );
}

bool mu__condition_804() // Condition for Rule "coherent, addr:3, n2:7, n1:8"
{
  return mu__invariant_307( 3, 7, 8 );
}

bool mu__condition_805() // Condition for Rule "coherent, addr:3, n2:7, n1:9"
{
  return mu__invariant_307( 3, 7, 9 );
}

bool mu__condition_806() // Condition for Rule "coherent, addr:3, n2:7, n1:10"
{
  return mu__invariant_307( 3, 7, 10 );
}

bool mu__condition_808() // Condition for Rule "coherent, addr:3, n2:8, n1:0"
{
  return mu__invariant_307( 3, 8, 0 );
}

bool mu__condition_809() // Condition for Rule "coherent, addr:3, n2:8, n1:1"
{
  return mu__invariant_307( 3, 8, 1 );
}

bool mu__condition_810() // Condition for Rule "coherent, addr:3, n2:8, n1:2"
{
  return mu__invariant_307( 3, 8, 2 );
}

bool mu__condition_811() // Condition for Rule "coherent, addr:3, n2:8, n1:3"
{
  return mu__invariant_307( 3, 8, 3 );
}

bool mu__condition_812() // Condition for Rule "coherent, addr:3, n2:8, n1:4"
{
  return mu__invariant_307( 3, 8, 4 );
}

bool mu__condition_813() // Condition for Rule "coherent, addr:3, n2:8, n1:5"
{
  return mu__invariant_307( 3, 8, 5 );
}

bool mu__condition_814() // Condition for Rule "coherent, addr:3, n2:8, n1:6"
{
  return mu__invariant_307( 3, 8, 6 );
}

bool mu__condition_815() // Condition for Rule "coherent, addr:3, n2:8, n1:7"
{
  return mu__invariant_307( 3, 8, 7 );
}

bool mu__condition_816() // Condition for Rule "coherent, addr:3, n2:8, n1:8"
{
  return mu__invariant_307( 3, 8, 8 );
}

bool mu__condition_817() // Condition for Rule "coherent, addr:3, n2:8, n1:9"
{
  return mu__invariant_307( 3, 8, 9 );
}

bool mu__condition_818() // Condition for Rule "coherent, addr:3, n2:8, n1:10"
{
  return mu__invariant_307( 3, 8, 10 );
}

bool mu__condition_820() // Condition for Rule "coherent, addr:3, n2:9, n1:0"
{
  return mu__invariant_307( 3, 9, 0 );
}

bool mu__condition_821() // Condition for Rule "coherent, addr:3, n2:9, n1:1"
{
  return mu__invariant_307( 3, 9, 1 );
}

bool mu__condition_822() // Condition for Rule "coherent, addr:3, n2:9, n1:2"
{
  return mu__invariant_307( 3, 9, 2 );
}

bool mu__condition_823() // Condition for Rule "coherent, addr:3, n2:9, n1:3"
{
  return mu__invariant_307( 3, 9, 3 );
}

bool mu__condition_824() // Condition for Rule "coherent, addr:3, n2:9, n1:4"
{
  return mu__invariant_307( 3, 9, 4 );
}

bool mu__condition_825() // Condition for Rule "coherent, addr:3, n2:9, n1:5"
{
  return mu__invariant_307( 3, 9, 5 );
}

bool mu__condition_826() // Condition for Rule "coherent, addr:3, n2:9, n1:6"
{
  return mu__invariant_307( 3, 9, 6 );
}

bool mu__condition_827() // Condition for Rule "coherent, addr:3, n2:9, n1:7"
{
  return mu__invariant_307( 3, 9, 7 );
}

bool mu__condition_828() // Condition for Rule "coherent, addr:3, n2:9, n1:8"
{
  return mu__invariant_307( 3, 9, 8 );
}

bool mu__condition_829() // Condition for Rule "coherent, addr:3, n2:9, n1:9"
{
  return mu__invariant_307( 3, 9, 9 );
}

bool mu__condition_830() // Condition for Rule "coherent, addr:3, n2:9, n1:10"
{
  return mu__invariant_307( 3, 9, 10 );
}

bool mu__condition_832() // Condition for Rule "coherent, addr:3, n2:10, n1:0"
{
  return mu__invariant_307( 3, 10, 0 );
}

bool mu__condition_833() // Condition for Rule "coherent, addr:3, n2:10, n1:1"
{
  return mu__invariant_307( 3, 10, 1 );
}

bool mu__condition_834() // Condition for Rule "coherent, addr:3, n2:10, n1:2"
{
  return mu__invariant_307( 3, 10, 2 );
}

bool mu__condition_835() // Condition for Rule "coherent, addr:3, n2:10, n1:3"
{
  return mu__invariant_307( 3, 10, 3 );
}

bool mu__condition_836() // Condition for Rule "coherent, addr:3, n2:10, n1:4"
{
  return mu__invariant_307( 3, 10, 4 );
}

bool mu__condition_837() // Condition for Rule "coherent, addr:3, n2:10, n1:5"
{
  return mu__invariant_307( 3, 10, 5 );
}

bool mu__condition_838() // Condition for Rule "coherent, addr:3, n2:10, n1:6"
{
  return mu__invariant_307( 3, 10, 6 );
}

bool mu__condition_839() // Condition for Rule "coherent, addr:3, n2:10, n1:7"
{
  return mu__invariant_307( 3, 10, 7 );
}

bool mu__condition_840() // Condition for Rule "coherent, addr:3, n2:10, n1:8"
{
  return mu__invariant_307( 3, 10, 8 );
}

bool mu__condition_841() // Condition for Rule "coherent, addr:3, n2:10, n1:9"
{
  return mu__invariant_307( 3, 10, 9 );
}

bool mu__condition_842() // Condition for Rule "coherent, addr:3, n2:10, n1:10"
{
  return mu__invariant_307( 3, 10, 10 );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"coherent, addr:3, n2:10, n1:10", &mu__condition_842, NULL, },
{"coherent, addr:3, n2:10, n1:9", &mu__condition_841, NULL, },
{"coherent, addr:3, n2:10, n1:8", &mu__condition_840, NULL, },
{"coherent, addr:3, n2:10, n1:7", &mu__condition_839, NULL, },
{"coherent, addr:3, n2:10, n1:6", &mu__condition_838, NULL, },
{"coherent, addr:3, n2:10, n1:5", &mu__condition_837, NULL, },
{"coherent, addr:3, n2:10, n1:4", &mu__condition_836, NULL, },
{"coherent, addr:3, n2:10, n1:3", &mu__condition_835, NULL, },
{"coherent, addr:3, n2:10, n1:2", &mu__condition_834, NULL, },
{"coherent, addr:3, n2:10, n1:1", &mu__condition_833, NULL, },
{"coherent, addr:3, n2:10, n1:0", &mu__condition_832, NULL, },
{"coherent, addr:3, n2:9, n1:10", &mu__condition_830, NULL, },
{"coherent, addr:3, n2:9, n1:9", &mu__condition_829, NULL, },
{"coherent, addr:3, n2:9, n1:8", &mu__condition_828, NULL, },
{"coherent, addr:3, n2:9, n1:7", &mu__condition_827, NULL, },
{"coherent, addr:3, n2:9, n1:6", &mu__condition_826, NULL, },
{"coherent, addr:3, n2:9, n1:5", &mu__condition_825, NULL, },
{"coherent, addr:3, n2:9, n1:4", &mu__condition_824, NULL, },
{"coherent, addr:3, n2:9, n1:3", &mu__condition_823, NULL, },
{"coherent, addr:3, n2:9, n1:2", &mu__condition_822, NULL, },
{"coherent, addr:3, n2:9, n1:1", &mu__condition_821, NULL, },
{"coherent, addr:3, n2:9, n1:0", &mu__condition_820, NULL, },
{"coherent, addr:3, n2:8, n1:10", &mu__condition_818, NULL, },
{"coherent, addr:3, n2:8, n1:9", &mu__condition_817, NULL, },
{"coherent, addr:3, n2:8, n1:8", &mu__condition_816, NULL, },
{"coherent, addr:3, n2:8, n1:7", &mu__condition_815, NULL, },
{"coherent, addr:3, n2:8, n1:6", &mu__condition_814, NULL, },
{"coherent, addr:3, n2:8, n1:5", &mu__condition_813, NULL, },
{"coherent, addr:3, n2:8, n1:4", &mu__condition_812, NULL, },
{"coherent, addr:3, n2:8, n1:3", &mu__condition_811, NULL, },
{"coherent, addr:3, n2:8, n1:2", &mu__condition_810, NULL, },
{"coherent, addr:3, n2:8, n1:1", &mu__condition_809, NULL, },
{"coherent, addr:3, n2:8, n1:0", &mu__condition_808, NULL, },
{"coherent, addr:3, n2:7, n1:10", &mu__condition_806, NULL, },
{"coherent, addr:3, n2:7, n1:9", &mu__condition_805, NULL, },
{"coherent, addr:3, n2:7, n1:8", &mu__condition_804, NULL, },
{"coherent, addr:3, n2:7, n1:7", &mu__condition_803, NULL, },
{"coherent, addr:3, n2:7, n1:6", &mu__condition_802, NULL, },
{"coherent, addr:3, n2:7, n1:5", &mu__condition_801, NULL, },
{"coherent, addr:3, n2:7, n1:4", &mu__condition_800, NULL, },
{"coherent, addr:3, n2:7, n1:3", &mu__condition_799, NULL, },
{"coherent, addr:3, n2:7, n1:2", &mu__condition_798, NULL, },
{"coherent, addr:3, n2:7, n1:1", &mu__condition_797, NULL, },
{"coherent, addr:3, n2:7, n1:0", &mu__condition_796, NULL, },
{"coherent, addr:3, n2:6, n1:10", &mu__condition_794, NULL, },
{"coherent, addr:3, n2:6, n1:9", &mu__condition_793, NULL, },
{"coherent, addr:3, n2:6, n1:8", &mu__condition_792, NULL, },
{"coherent, addr:3, n2:6, n1:7", &mu__condition_791, NULL, },
{"coherent, addr:3, n2:6, n1:6", &mu__condition_790, NULL, },
{"coherent, addr:3, n2:6, n1:5", &mu__condition_789, NULL, },
{"coherent, addr:3, n2:6, n1:4", &mu__condition_788, NULL, },
{"coherent, addr:3, n2:6, n1:3", &mu__condition_787, NULL, },
{"coherent, addr:3, n2:6, n1:2", &mu__condition_786, NULL, },
{"coherent, addr:3, n2:6, n1:1", &mu__condition_785, NULL, },
{"coherent, addr:3, n2:6, n1:0", &mu__condition_784, NULL, },
{"coherent, addr:3, n2:5, n1:10", &mu__condition_782, NULL, },
{"coherent, addr:3, n2:5, n1:9", &mu__condition_781, NULL, },
{"coherent, addr:3, n2:5, n1:8", &mu__condition_780, NULL, },
{"coherent, addr:3, n2:5, n1:7", &mu__condition_779, NULL, },
{"coherent, addr:3, n2:5, n1:6", &mu__condition_778, NULL, },
{"coherent, addr:3, n2:5, n1:5", &mu__condition_777, NULL, },
{"coherent, addr:3, n2:5, n1:4", &mu__condition_776, NULL, },
{"coherent, addr:3, n2:5, n1:3", &mu__condition_775, NULL, },
{"coherent, addr:3, n2:5, n1:2", &mu__condition_774, NULL, },
{"coherent, addr:3, n2:5, n1:1", &mu__condition_773, NULL, },
{"coherent, addr:3, n2:5, n1:0", &mu__condition_772, NULL, },
{"coherent, addr:3, n2:4, n1:10", &mu__condition_770, NULL, },
{"coherent, addr:3, n2:4, n1:9", &mu__condition_769, NULL, },
{"coherent, addr:3, n2:4, n1:8", &mu__condition_768, NULL, },
{"coherent, addr:3, n2:4, n1:7", &mu__condition_767, NULL, },
{"coherent, addr:3, n2:4, n1:6", &mu__condition_766, NULL, },
{"coherent, addr:3, n2:4, n1:5", &mu__condition_765, NULL, },
{"coherent, addr:3, n2:4, n1:4", &mu__condition_764, NULL, },
{"coherent, addr:3, n2:4, n1:3", &mu__condition_763, NULL, },
{"coherent, addr:3, n2:4, n1:2", &mu__condition_762, NULL, },
{"coherent, addr:3, n2:4, n1:1", &mu__condition_761, NULL, },
{"coherent, addr:3, n2:4, n1:0", &mu__condition_760, NULL, },
{"coherent, addr:3, n2:3, n1:10", &mu__condition_758, NULL, },
{"coherent, addr:3, n2:3, n1:9", &mu__condition_757, NULL, },
{"coherent, addr:3, n2:3, n1:8", &mu__condition_756, NULL, },
{"coherent, addr:3, n2:3, n1:7", &mu__condition_755, NULL, },
{"coherent, addr:3, n2:3, n1:6", &mu__condition_754, NULL, },
{"coherent, addr:3, n2:3, n1:5", &mu__condition_753, NULL, },
{"coherent, addr:3, n2:3, n1:4", &mu__condition_752, NULL, },
{"coherent, addr:3, n2:3, n1:3", &mu__condition_751, NULL, },
{"coherent, addr:3, n2:3, n1:2", &mu__condition_750, NULL, },
{"coherent, addr:3, n2:3, n1:1", &mu__condition_749, NULL, },
{"coherent, addr:3, n2:3, n1:0", &mu__condition_748, NULL, },
{"coherent, addr:3, n2:2, n1:10", &mu__condition_746, NULL, },
{"coherent, addr:3, n2:2, n1:9", &mu__condition_745, NULL, },
{"coherent, addr:3, n2:2, n1:8", &mu__condition_744, NULL, },
{"coherent, addr:3, n2:2, n1:7", &mu__condition_743, NULL, },
{"coherent, addr:3, n2:2, n1:6", &mu__condition_742, NULL, },
{"coherent, addr:3, n2:2, n1:5", &mu__condition_741, NULL, },
{"coherent, addr:3, n2:2, n1:4", &mu__condition_740, NULL, },
{"coherent, addr:3, n2:2, n1:3", &mu__condition_739, NULL, },
{"coherent, addr:3, n2:2, n1:2", &mu__condition_738, NULL, },
{"coherent, addr:3, n2:2, n1:1", &mu__condition_737, NULL, },
{"coherent, addr:3, n2:2, n1:0", &mu__condition_736, NULL, },
{"coherent, addr:3, n2:1, n1:10", &mu__condition_734, NULL, },
{"coherent, addr:3, n2:1, n1:9", &mu__condition_733, NULL, },
{"coherent, addr:3, n2:1, n1:8", &mu__condition_732, NULL, },
{"coherent, addr:3, n2:1, n1:7", &mu__condition_731, NULL, },
{"coherent, addr:3, n2:1, n1:6", &mu__condition_730, NULL, },
{"coherent, addr:3, n2:1, n1:5", &mu__condition_729, NULL, },
{"coherent, addr:3, n2:1, n1:4", &mu__condition_728, NULL, },
{"coherent, addr:3, n2:1, n1:3", &mu__condition_727, NULL, },
{"coherent, addr:3, n2:1, n1:2", &mu__condition_726, NULL, },
{"coherent, addr:3, n2:1, n1:1", &mu__condition_725, NULL, },
{"coherent, addr:3, n2:1, n1:0", &mu__condition_724, NULL, },
{"coherent, addr:3, n2:0, n1:10", &mu__condition_722, NULL, },
{"coherent, addr:3, n2:0, n1:9", &mu__condition_721, NULL, },
{"coherent, addr:3, n2:0, n1:8", &mu__condition_720, NULL, },
{"coherent, addr:3, n2:0, n1:7", &mu__condition_719, NULL, },
{"coherent, addr:3, n2:0, n1:6", &mu__condition_718, NULL, },
{"coherent, addr:3, n2:0, n1:5", &mu__condition_717, NULL, },
{"coherent, addr:3, n2:0, n1:4", &mu__condition_716, NULL, },
{"coherent, addr:3, n2:0, n1:3", &mu__condition_715, NULL, },
{"coherent, addr:3, n2:0, n1:2", &mu__condition_714, NULL, },
{"coherent, addr:3, n2:0, n1:1", &mu__condition_713, NULL, },
{"coherent, addr:3, n2:0, n1:0", &mu__condition_712, NULL, },
{"coherent, addr:2, n2:10, n1:10", &mu__condition_709, NULL, },
{"coherent, addr:2, n2:10, n1:9", &mu__condition_708, NULL, },
{"coherent, addr:2, n2:10, n1:8", &mu__condition_707, NULL, },
{"coherent, addr:2, n2:10, n1:7", &mu__condition_706, NULL, },
{"coherent, addr:2, n2:10, n1:6", &mu__condition_705, NULL, },
{"coherent, addr:2, n2:10, n1:5", &mu__condition_704, NULL, },
{"coherent, addr:2, n2:10, n1:4", &mu__condition_703, NULL, },
{"coherent, addr:2, n2:10, n1:3", &mu__condition_702, NULL, },
{"coherent, addr:2, n2:10, n1:2", &mu__condition_701, NULL, },
{"coherent, addr:2, n2:10, n1:1", &mu__condition_700, NULL, },
{"coherent, addr:2, n2:10, n1:0", &mu__condition_699, NULL, },
{"coherent, addr:2, n2:9, n1:10", &mu__condition_697, NULL, },
{"coherent, addr:2, n2:9, n1:9", &mu__condition_696, NULL, },
{"coherent, addr:2, n2:9, n1:8", &mu__condition_695, NULL, },
{"coherent, addr:2, n2:9, n1:7", &mu__condition_694, NULL, },
{"coherent, addr:2, n2:9, n1:6", &mu__condition_693, NULL, },
{"coherent, addr:2, n2:9, n1:5", &mu__condition_692, NULL, },
{"coherent, addr:2, n2:9, n1:4", &mu__condition_691, NULL, },
{"coherent, addr:2, n2:9, n1:3", &mu__condition_690, NULL, },
{"coherent, addr:2, n2:9, n1:2", &mu__condition_689, NULL, },
{"coherent, addr:2, n2:9, n1:1", &mu__condition_688, NULL, },
{"coherent, addr:2, n2:9, n1:0", &mu__condition_687, NULL, },
{"coherent, addr:2, n2:8, n1:10", &mu__condition_685, NULL, },
{"coherent, addr:2, n2:8, n1:9", &mu__condition_684, NULL, },
{"coherent, addr:2, n2:8, n1:8", &mu__condition_683, NULL, },
{"coherent, addr:2, n2:8, n1:7", &mu__condition_682, NULL, },
{"coherent, addr:2, n2:8, n1:6", &mu__condition_681, NULL, },
{"coherent, addr:2, n2:8, n1:5", &mu__condition_680, NULL, },
{"coherent, addr:2, n2:8, n1:4", &mu__condition_679, NULL, },
{"coherent, addr:2, n2:8, n1:3", &mu__condition_678, NULL, },
{"coherent, addr:2, n2:8, n1:2", &mu__condition_677, NULL, },
{"coherent, addr:2, n2:8, n1:1", &mu__condition_676, NULL, },
{"coherent, addr:2, n2:8, n1:0", &mu__condition_675, NULL, },
{"coherent, addr:2, n2:7, n1:10", &mu__condition_673, NULL, },
{"coherent, addr:2, n2:7, n1:9", &mu__condition_672, NULL, },
{"coherent, addr:2, n2:7, n1:8", &mu__condition_671, NULL, },
{"coherent, addr:2, n2:7, n1:7", &mu__condition_670, NULL, },
{"coherent, addr:2, n2:7, n1:6", &mu__condition_669, NULL, },
{"coherent, addr:2, n2:7, n1:5", &mu__condition_668, NULL, },
{"coherent, addr:2, n2:7, n1:4", &mu__condition_667, NULL, },
{"coherent, addr:2, n2:7, n1:3", &mu__condition_666, NULL, },
{"coherent, addr:2, n2:7, n1:2", &mu__condition_665, NULL, },
{"coherent, addr:2, n2:7, n1:1", &mu__condition_664, NULL, },
{"coherent, addr:2, n2:7, n1:0", &mu__condition_663, NULL, },
{"coherent, addr:2, n2:6, n1:10", &mu__condition_661, NULL, },
{"coherent, addr:2, n2:6, n1:9", &mu__condition_660, NULL, },
{"coherent, addr:2, n2:6, n1:8", &mu__condition_659, NULL, },
{"coherent, addr:2, n2:6, n1:7", &mu__condition_658, NULL, },
{"coherent, addr:2, n2:6, n1:6", &mu__condition_657, NULL, },
{"coherent, addr:2, n2:6, n1:5", &mu__condition_656, NULL, },
{"coherent, addr:2, n2:6, n1:4", &mu__condition_655, NULL, },
{"coherent, addr:2, n2:6, n1:3", &mu__condition_654, NULL, },
{"coherent, addr:2, n2:6, n1:2", &mu__condition_653, NULL, },
{"coherent, addr:2, n2:6, n1:1", &mu__condition_652, NULL, },
{"coherent, addr:2, n2:6, n1:0", &mu__condition_651, NULL, },
{"coherent, addr:2, n2:5, n1:10", &mu__condition_649, NULL, },
{"coherent, addr:2, n2:5, n1:9", &mu__condition_648, NULL, },
{"coherent, addr:2, n2:5, n1:8", &mu__condition_647, NULL, },
{"coherent, addr:2, n2:5, n1:7", &mu__condition_646, NULL, },
{"coherent, addr:2, n2:5, n1:6", &mu__condition_645, NULL, },
{"coherent, addr:2, n2:5, n1:5", &mu__condition_644, NULL, },
{"coherent, addr:2, n2:5, n1:4", &mu__condition_643, NULL, },
{"coherent, addr:2, n2:5, n1:3", &mu__condition_642, NULL, },
{"coherent, addr:2, n2:5, n1:2", &mu__condition_641, NULL, },
{"coherent, addr:2, n2:5, n1:1", &mu__condition_640, NULL, },
{"coherent, addr:2, n2:5, n1:0", &mu__condition_639, NULL, },
{"coherent, addr:2, n2:4, n1:10", &mu__condition_637, NULL, },
{"coherent, addr:2, n2:4, n1:9", &mu__condition_636, NULL, },
{"coherent, addr:2, n2:4, n1:8", &mu__condition_635, NULL, },
{"coherent, addr:2, n2:4, n1:7", &mu__condition_634, NULL, },
{"coherent, addr:2, n2:4, n1:6", &mu__condition_633, NULL, },
{"coherent, addr:2, n2:4, n1:5", &mu__condition_632, NULL, },
{"coherent, addr:2, n2:4, n1:4", &mu__condition_631, NULL, },
{"coherent, addr:2, n2:4, n1:3", &mu__condition_630, NULL, },
{"coherent, addr:2, n2:4, n1:2", &mu__condition_629, NULL, },
{"coherent, addr:2, n2:4, n1:1", &mu__condition_628, NULL, },
{"coherent, addr:2, n2:4, n1:0", &mu__condition_627, NULL, },
{"coherent, addr:2, n2:3, n1:10", &mu__condition_625, NULL, },
{"coherent, addr:2, n2:3, n1:9", &mu__condition_624, NULL, },
{"coherent, addr:2, n2:3, n1:8", &mu__condition_623, NULL, },
{"coherent, addr:2, n2:3, n1:7", &mu__condition_622, NULL, },
{"coherent, addr:2, n2:3, n1:6", &mu__condition_621, NULL, },
{"coherent, addr:2, n2:3, n1:5", &mu__condition_620, NULL, },
{"coherent, addr:2, n2:3, n1:4", &mu__condition_619, NULL, },
{"coherent, addr:2, n2:3, n1:3", &mu__condition_618, NULL, },
{"coherent, addr:2, n2:3, n1:2", &mu__condition_617, NULL, },
{"coherent, addr:2, n2:3, n1:1", &mu__condition_616, NULL, },
{"coherent, addr:2, n2:3, n1:0", &mu__condition_615, NULL, },
{"coherent, addr:2, n2:2, n1:10", &mu__condition_613, NULL, },
{"coherent, addr:2, n2:2, n1:9", &mu__condition_612, NULL, },
{"coherent, addr:2, n2:2, n1:8", &mu__condition_611, NULL, },
{"coherent, addr:2, n2:2, n1:7", &mu__condition_610, NULL, },
{"coherent, addr:2, n2:2, n1:6", &mu__condition_609, NULL, },
{"coherent, addr:2, n2:2, n1:5", &mu__condition_608, NULL, },
{"coherent, addr:2, n2:2, n1:4", &mu__condition_607, NULL, },
{"coherent, addr:2, n2:2, n1:3", &mu__condition_606, NULL, },
{"coherent, addr:2, n2:2, n1:2", &mu__condition_605, NULL, },
{"coherent, addr:2, n2:2, n1:1", &mu__condition_604, NULL, },
{"coherent, addr:2, n2:2, n1:0", &mu__condition_603, NULL, },
{"coherent, addr:2, n2:1, n1:10", &mu__condition_601, NULL, },
{"coherent, addr:2, n2:1, n1:9", &mu__condition_600, NULL, },
{"coherent, addr:2, n2:1, n1:8", &mu__condition_599, NULL, },
{"coherent, addr:2, n2:1, n1:7", &mu__condition_598, NULL, },
{"coherent, addr:2, n2:1, n1:6", &mu__condition_597, NULL, },
{"coherent, addr:2, n2:1, n1:5", &mu__condition_596, NULL, },
{"coherent, addr:2, n2:1, n1:4", &mu__condition_595, NULL, },
{"coherent, addr:2, n2:1, n1:3", &mu__condition_594, NULL, },
{"coherent, addr:2, n2:1, n1:2", &mu__condition_593, NULL, },
{"coherent, addr:2, n2:1, n1:1", &mu__condition_592, NULL, },
{"coherent, addr:2, n2:1, n1:0", &mu__condition_591, NULL, },
{"coherent, addr:2, n2:0, n1:10", &mu__condition_589, NULL, },
{"coherent, addr:2, n2:0, n1:9", &mu__condition_588, NULL, },
{"coherent, addr:2, n2:0, n1:8", &mu__condition_587, NULL, },
{"coherent, addr:2, n2:0, n1:7", &mu__condition_586, NULL, },
{"coherent, addr:2, n2:0, n1:6", &mu__condition_585, NULL, },
{"coherent, addr:2, n2:0, n1:5", &mu__condition_584, NULL, },
{"coherent, addr:2, n2:0, n1:4", &mu__condition_583, NULL, },
{"coherent, addr:2, n2:0, n1:3", &mu__condition_582, NULL, },
{"coherent, addr:2, n2:0, n1:2", &mu__condition_581, NULL, },
{"coherent, addr:2, n2:0, n1:1", &mu__condition_580, NULL, },
{"coherent, addr:2, n2:0, n1:0", &mu__condition_579, NULL, },
{"coherent, addr:1, n2:10, n1:10", &mu__condition_576, NULL, },
{"coherent, addr:1, n2:10, n1:9", &mu__condition_575, NULL, },
{"coherent, addr:1, n2:10, n1:8", &mu__condition_574, NULL, },
{"coherent, addr:1, n2:10, n1:7", &mu__condition_573, NULL, },
{"coherent, addr:1, n2:10, n1:6", &mu__condition_572, NULL, },
{"coherent, addr:1, n2:10, n1:5", &mu__condition_571, NULL, },
{"coherent, addr:1, n2:10, n1:4", &mu__condition_570, NULL, },
{"coherent, addr:1, n2:10, n1:3", &mu__condition_569, NULL, },
{"coherent, addr:1, n2:10, n1:2", &mu__condition_568, NULL, },
{"coherent, addr:1, n2:10, n1:1", &mu__condition_567, NULL, },
{"coherent, addr:1, n2:10, n1:0", &mu__condition_566, NULL, },
{"coherent, addr:1, n2:9, n1:10", &mu__condition_564, NULL, },
{"coherent, addr:1, n2:9, n1:9", &mu__condition_563, NULL, },
{"coherent, addr:1, n2:9, n1:8", &mu__condition_562, NULL, },
{"coherent, addr:1, n2:9, n1:7", &mu__condition_561, NULL, },
{"coherent, addr:1, n2:9, n1:6", &mu__condition_560, NULL, },
{"coherent, addr:1, n2:9, n1:5", &mu__condition_559, NULL, },
{"coherent, addr:1, n2:9, n1:4", &mu__condition_558, NULL, },
{"coherent, addr:1, n2:9, n1:3", &mu__condition_557, NULL, },
{"coherent, addr:1, n2:9, n1:2", &mu__condition_556, NULL, },
{"coherent, addr:1, n2:9, n1:1", &mu__condition_555, NULL, },
{"coherent, addr:1, n2:9, n1:0", &mu__condition_554, NULL, },
{"coherent, addr:1, n2:8, n1:10", &mu__condition_552, NULL, },
{"coherent, addr:1, n2:8, n1:9", &mu__condition_551, NULL, },
{"coherent, addr:1, n2:8, n1:8", &mu__condition_550, NULL, },
{"coherent, addr:1, n2:8, n1:7", &mu__condition_549, NULL, },
{"coherent, addr:1, n2:8, n1:6", &mu__condition_548, NULL, },
{"coherent, addr:1, n2:8, n1:5", &mu__condition_547, NULL, },
{"coherent, addr:1, n2:8, n1:4", &mu__condition_546, NULL, },
{"coherent, addr:1, n2:8, n1:3", &mu__condition_545, NULL, },
{"coherent, addr:1, n2:8, n1:2", &mu__condition_544, NULL, },
{"coherent, addr:1, n2:8, n1:1", &mu__condition_543, NULL, },
{"coherent, addr:1, n2:8, n1:0", &mu__condition_542, NULL, },
{"coherent, addr:1, n2:7, n1:10", &mu__condition_540, NULL, },
{"coherent, addr:1, n2:7, n1:9", &mu__condition_539, NULL, },
{"coherent, addr:1, n2:7, n1:8", &mu__condition_538, NULL, },
{"coherent, addr:1, n2:7, n1:7", &mu__condition_537, NULL, },
{"coherent, addr:1, n2:7, n1:6", &mu__condition_536, NULL, },
{"coherent, addr:1, n2:7, n1:5", &mu__condition_535, NULL, },
{"coherent, addr:1, n2:7, n1:4", &mu__condition_534, NULL, },
{"coherent, addr:1, n2:7, n1:3", &mu__condition_533, NULL, },
{"coherent, addr:1, n2:7, n1:2", &mu__condition_532, NULL, },
{"coherent, addr:1, n2:7, n1:1", &mu__condition_531, NULL, },
{"coherent, addr:1, n2:7, n1:0", &mu__condition_530, NULL, },
{"coherent, addr:1, n2:6, n1:10", &mu__condition_528, NULL, },
{"coherent, addr:1, n2:6, n1:9", &mu__condition_527, NULL, },
{"coherent, addr:1, n2:6, n1:8", &mu__condition_526, NULL, },
{"coherent, addr:1, n2:6, n1:7", &mu__condition_525, NULL, },
{"coherent, addr:1, n2:6, n1:6", &mu__condition_524, NULL, },
{"coherent, addr:1, n2:6, n1:5", &mu__condition_523, NULL, },
{"coherent, addr:1, n2:6, n1:4", &mu__condition_522, NULL, },
{"coherent, addr:1, n2:6, n1:3", &mu__condition_521, NULL, },
{"coherent, addr:1, n2:6, n1:2", &mu__condition_520, NULL, },
{"coherent, addr:1, n2:6, n1:1", &mu__condition_519, NULL, },
{"coherent, addr:1, n2:6, n1:0", &mu__condition_518, NULL, },
{"coherent, addr:1, n2:5, n1:10", &mu__condition_516, NULL, },
{"coherent, addr:1, n2:5, n1:9", &mu__condition_515, NULL, },
{"coherent, addr:1, n2:5, n1:8", &mu__condition_514, NULL, },
{"coherent, addr:1, n2:5, n1:7", &mu__condition_513, NULL, },
{"coherent, addr:1, n2:5, n1:6", &mu__condition_512, NULL, },
{"coherent, addr:1, n2:5, n1:5", &mu__condition_511, NULL, },
{"coherent, addr:1, n2:5, n1:4", &mu__condition_510, NULL, },
{"coherent, addr:1, n2:5, n1:3", &mu__condition_509, NULL, },
{"coherent, addr:1, n2:5, n1:2", &mu__condition_508, NULL, },
{"coherent, addr:1, n2:5, n1:1", &mu__condition_507, NULL, },
{"coherent, addr:1, n2:5, n1:0", &mu__condition_506, NULL, },
{"coherent, addr:1, n2:4, n1:10", &mu__condition_504, NULL, },
{"coherent, addr:1, n2:4, n1:9", &mu__condition_503, NULL, },
{"coherent, addr:1, n2:4, n1:8", &mu__condition_502, NULL, },
{"coherent, addr:1, n2:4, n1:7", &mu__condition_501, NULL, },
{"coherent, addr:1, n2:4, n1:6", &mu__condition_500, NULL, },
{"coherent, addr:1, n2:4, n1:5", &mu__condition_499, NULL, },
{"coherent, addr:1, n2:4, n1:4", &mu__condition_498, NULL, },
{"coherent, addr:1, n2:4, n1:3", &mu__condition_497, NULL, },
{"coherent, addr:1, n2:4, n1:2", &mu__condition_496, NULL, },
{"coherent, addr:1, n2:4, n1:1", &mu__condition_495, NULL, },
{"coherent, addr:1, n2:4, n1:0", &mu__condition_494, NULL, },
{"coherent, addr:1, n2:3, n1:10", &mu__condition_492, NULL, },
{"coherent, addr:1, n2:3, n1:9", &mu__condition_491, NULL, },
{"coherent, addr:1, n2:3, n1:8", &mu__condition_490, NULL, },
{"coherent, addr:1, n2:3, n1:7", &mu__condition_489, NULL, },
{"coherent, addr:1, n2:3, n1:6", &mu__condition_488, NULL, },
{"coherent, addr:1, n2:3, n1:5", &mu__condition_487, NULL, },
{"coherent, addr:1, n2:3, n1:4", &mu__condition_486, NULL, },
{"coherent, addr:1, n2:3, n1:3", &mu__condition_485, NULL, },
{"coherent, addr:1, n2:3, n1:2", &mu__condition_484, NULL, },
{"coherent, addr:1, n2:3, n1:1", &mu__condition_483, NULL, },
{"coherent, addr:1, n2:3, n1:0", &mu__condition_482, NULL, },
{"coherent, addr:1, n2:2, n1:10", &mu__condition_480, NULL, },
{"coherent, addr:1, n2:2, n1:9", &mu__condition_479, NULL, },
{"coherent, addr:1, n2:2, n1:8", &mu__condition_478, NULL, },
{"coherent, addr:1, n2:2, n1:7", &mu__condition_477, NULL, },
{"coherent, addr:1, n2:2, n1:6", &mu__condition_476, NULL, },
{"coherent, addr:1, n2:2, n1:5", &mu__condition_475, NULL, },
{"coherent, addr:1, n2:2, n1:4", &mu__condition_474, NULL, },
{"coherent, addr:1, n2:2, n1:3", &mu__condition_473, NULL, },
{"coherent, addr:1, n2:2, n1:2", &mu__condition_472, NULL, },
{"coherent, addr:1, n2:2, n1:1", &mu__condition_471, NULL, },
{"coherent, addr:1, n2:2, n1:0", &mu__condition_470, NULL, },
{"coherent, addr:1, n2:1, n1:10", &mu__condition_468, NULL, },
{"coherent, addr:1, n2:1, n1:9", &mu__condition_467, NULL, },
{"coherent, addr:1, n2:1, n1:8", &mu__condition_466, NULL, },
{"coherent, addr:1, n2:1, n1:7", &mu__condition_465, NULL, },
{"coherent, addr:1, n2:1, n1:6", &mu__condition_464, NULL, },
{"coherent, addr:1, n2:1, n1:5", &mu__condition_463, NULL, },
{"coherent, addr:1, n2:1, n1:4", &mu__condition_462, NULL, },
{"coherent, addr:1, n2:1, n1:3", &mu__condition_461, NULL, },
{"coherent, addr:1, n2:1, n1:2", &mu__condition_460, NULL, },
{"coherent, addr:1, n2:1, n1:1", &mu__condition_459, NULL, },
{"coherent, addr:1, n2:1, n1:0", &mu__condition_458, NULL, },
{"coherent, addr:1, n2:0, n1:10", &mu__condition_456, NULL, },
{"coherent, addr:1, n2:0, n1:9", &mu__condition_455, NULL, },
{"coherent, addr:1, n2:0, n1:8", &mu__condition_454, NULL, },
{"coherent, addr:1, n2:0, n1:7", &mu__condition_453, NULL, },
{"coherent, addr:1, n2:0, n1:6", &mu__condition_452, NULL, },
{"coherent, addr:1, n2:0, n1:5", &mu__condition_451, NULL, },
{"coherent, addr:1, n2:0, n1:4", &mu__condition_450, NULL, },
{"coherent, addr:1, n2:0, n1:3", &mu__condition_449, NULL, },
{"coherent, addr:1, n2:0, n1:2", &mu__condition_448, NULL, },
{"coherent, addr:1, n2:0, n1:1", &mu__condition_447, NULL, },
{"coherent, addr:1, n2:0, n1:0", &mu__condition_446, NULL, },
{"coherent, addr:0, n2:10, n1:10", &mu__condition_443, NULL, },
{"coherent, addr:0, n2:10, n1:9", &mu__condition_442, NULL, },
{"coherent, addr:0, n2:10, n1:8", &mu__condition_441, NULL, },
{"coherent, addr:0, n2:10, n1:7", &mu__condition_440, NULL, },
{"coherent, addr:0, n2:10, n1:6", &mu__condition_439, NULL, },
{"coherent, addr:0, n2:10, n1:5", &mu__condition_438, NULL, },
{"coherent, addr:0, n2:10, n1:4", &mu__condition_437, NULL, },
{"coherent, addr:0, n2:10, n1:3", &mu__condition_436, NULL, },
{"coherent, addr:0, n2:10, n1:2", &mu__condition_435, NULL, },
{"coherent, addr:0, n2:10, n1:1", &mu__condition_434, NULL, },
{"coherent, addr:0, n2:10, n1:0", &mu__condition_433, NULL, },
{"coherent, addr:0, n2:9, n1:10", &mu__condition_431, NULL, },
{"coherent, addr:0, n2:9, n1:9", &mu__condition_430, NULL, },
{"coherent, addr:0, n2:9, n1:8", &mu__condition_429, NULL, },
{"coherent, addr:0, n2:9, n1:7", &mu__condition_428, NULL, },
{"coherent, addr:0, n2:9, n1:6", &mu__condition_427, NULL, },
{"coherent, addr:0, n2:9, n1:5", &mu__condition_426, NULL, },
{"coherent, addr:0, n2:9, n1:4", &mu__condition_425, NULL, },
{"coherent, addr:0, n2:9, n1:3", &mu__condition_424, NULL, },
{"coherent, addr:0, n2:9, n1:2", &mu__condition_423, NULL, },
{"coherent, addr:0, n2:9, n1:1", &mu__condition_422, NULL, },
{"coherent, addr:0, n2:9, n1:0", &mu__condition_421, NULL, },
{"coherent, addr:0, n2:8, n1:10", &mu__condition_419, NULL, },
{"coherent, addr:0, n2:8, n1:9", &mu__condition_418, NULL, },
{"coherent, addr:0, n2:8, n1:8", &mu__condition_417, NULL, },
{"coherent, addr:0, n2:8, n1:7", &mu__condition_416, NULL, },
{"coherent, addr:0, n2:8, n1:6", &mu__condition_415, NULL, },
{"coherent, addr:0, n2:8, n1:5", &mu__condition_414, NULL, },
{"coherent, addr:0, n2:8, n1:4", &mu__condition_413, NULL, },
{"coherent, addr:0, n2:8, n1:3", &mu__condition_412, NULL, },
{"coherent, addr:0, n2:8, n1:2", &mu__condition_411, NULL, },
{"coherent, addr:0, n2:8, n1:1", &mu__condition_410, NULL, },
{"coherent, addr:0, n2:8, n1:0", &mu__condition_409, NULL, },
{"coherent, addr:0, n2:7, n1:10", &mu__condition_407, NULL, },
{"coherent, addr:0, n2:7, n1:9", &mu__condition_406, NULL, },
{"coherent, addr:0, n2:7, n1:8", &mu__condition_405, NULL, },
{"coherent, addr:0, n2:7, n1:7", &mu__condition_404, NULL, },
{"coherent, addr:0, n2:7, n1:6", &mu__condition_403, NULL, },
{"coherent, addr:0, n2:7, n1:5", &mu__condition_402, NULL, },
{"coherent, addr:0, n2:7, n1:4", &mu__condition_401, NULL, },
{"coherent, addr:0, n2:7, n1:3", &mu__condition_400, NULL, },
{"coherent, addr:0, n2:7, n1:2", &mu__condition_399, NULL, },
{"coherent, addr:0, n2:7, n1:1", &mu__condition_398, NULL, },
{"coherent, addr:0, n2:7, n1:0", &mu__condition_397, NULL, },
{"coherent, addr:0, n2:6, n1:10", &mu__condition_395, NULL, },
{"coherent, addr:0, n2:6, n1:9", &mu__condition_394, NULL, },
{"coherent, addr:0, n2:6, n1:8", &mu__condition_393, NULL, },
{"coherent, addr:0, n2:6, n1:7", &mu__condition_392, NULL, },
{"coherent, addr:0, n2:6, n1:6", &mu__condition_391, NULL, },
{"coherent, addr:0, n2:6, n1:5", &mu__condition_390, NULL, },
{"coherent, addr:0, n2:6, n1:4", &mu__condition_389, NULL, },
{"coherent, addr:0, n2:6, n1:3", &mu__condition_388, NULL, },
{"coherent, addr:0, n2:6, n1:2", &mu__condition_387, NULL, },
{"coherent, addr:0, n2:6, n1:1", &mu__condition_386, NULL, },
{"coherent, addr:0, n2:6, n1:0", &mu__condition_385, NULL, },
{"coherent, addr:0, n2:5, n1:10", &mu__condition_383, NULL, },
{"coherent, addr:0, n2:5, n1:9", &mu__condition_382, NULL, },
{"coherent, addr:0, n2:5, n1:8", &mu__condition_381, NULL, },
{"coherent, addr:0, n2:5, n1:7", &mu__condition_380, NULL, },
{"coherent, addr:0, n2:5, n1:6", &mu__condition_379, NULL, },
{"coherent, addr:0, n2:5, n1:5", &mu__condition_378, NULL, },
{"coherent, addr:0, n2:5, n1:4", &mu__condition_377, NULL, },
{"coherent, addr:0, n2:5, n1:3", &mu__condition_376, NULL, },
{"coherent, addr:0, n2:5, n1:2", &mu__condition_375, NULL, },
{"coherent, addr:0, n2:5, n1:1", &mu__condition_374, NULL, },
{"coherent, addr:0, n2:5, n1:0", &mu__condition_373, NULL, },
{"coherent, addr:0, n2:4, n1:10", &mu__condition_371, NULL, },
{"coherent, addr:0, n2:4, n1:9", &mu__condition_370, NULL, },
{"coherent, addr:0, n2:4, n1:8", &mu__condition_369, NULL, },
{"coherent, addr:0, n2:4, n1:7", &mu__condition_368, NULL, },
{"coherent, addr:0, n2:4, n1:6", &mu__condition_367, NULL, },
{"coherent, addr:0, n2:4, n1:5", &mu__condition_366, NULL, },
{"coherent, addr:0, n2:4, n1:4", &mu__condition_365, NULL, },
{"coherent, addr:0, n2:4, n1:3", &mu__condition_364, NULL, },
{"coherent, addr:0, n2:4, n1:2", &mu__condition_363, NULL, },
{"coherent, addr:0, n2:4, n1:1", &mu__condition_362, NULL, },
{"coherent, addr:0, n2:4, n1:0", &mu__condition_361, NULL, },
{"coherent, addr:0, n2:3, n1:10", &mu__condition_359, NULL, },
{"coherent, addr:0, n2:3, n1:9", &mu__condition_358, NULL, },
{"coherent, addr:0, n2:3, n1:8", &mu__condition_357, NULL, },
{"coherent, addr:0, n2:3, n1:7", &mu__condition_356, NULL, },
{"coherent, addr:0, n2:3, n1:6", &mu__condition_355, NULL, },
{"coherent, addr:0, n2:3, n1:5", &mu__condition_354, NULL, },
{"coherent, addr:0, n2:3, n1:4", &mu__condition_353, NULL, },
{"coherent, addr:0, n2:3, n1:3", &mu__condition_352, NULL, },
{"coherent, addr:0, n2:3, n1:2", &mu__condition_351, NULL, },
{"coherent, addr:0, n2:3, n1:1", &mu__condition_350, NULL, },
{"coherent, addr:0, n2:3, n1:0", &mu__condition_349, NULL, },
{"coherent, addr:0, n2:2, n1:10", &mu__condition_347, NULL, },
{"coherent, addr:0, n2:2, n1:9", &mu__condition_346, NULL, },
{"coherent, addr:0, n2:2, n1:8", &mu__condition_345, NULL, },
{"coherent, addr:0, n2:2, n1:7", &mu__condition_344, NULL, },
{"coherent, addr:0, n2:2, n1:6", &mu__condition_343, NULL, },
{"coherent, addr:0, n2:2, n1:5", &mu__condition_342, NULL, },
{"coherent, addr:0, n2:2, n1:4", &mu__condition_341, NULL, },
{"coherent, addr:0, n2:2, n1:3", &mu__condition_340, NULL, },
{"coherent, addr:0, n2:2, n1:2", &mu__condition_339, NULL, },
{"coherent, addr:0, n2:2, n1:1", &mu__condition_338, NULL, },
{"coherent, addr:0, n2:2, n1:0", &mu__condition_337, NULL, },
{"coherent, addr:0, n2:1, n1:10", &mu__condition_335, NULL, },
{"coherent, addr:0, n2:1, n1:9", &mu__condition_334, NULL, },
{"coherent, addr:0, n2:1, n1:8", &mu__condition_333, NULL, },
{"coherent, addr:0, n2:1, n1:7", &mu__condition_332, NULL, },
{"coherent, addr:0, n2:1, n1:6", &mu__condition_331, NULL, },
{"coherent, addr:0, n2:1, n1:5", &mu__condition_330, NULL, },
{"coherent, addr:0, n2:1, n1:4", &mu__condition_329, NULL, },
{"coherent, addr:0, n2:1, n1:3", &mu__condition_328, NULL, },
{"coherent, addr:0, n2:1, n1:2", &mu__condition_327, NULL, },
{"coherent, addr:0, n2:1, n1:1", &mu__condition_326, NULL, },
{"coherent, addr:0, n2:1, n1:0", &mu__condition_325, NULL, },
{"coherent, addr:0, n2:0, n1:10", &mu__condition_323, NULL, },
{"coherent, addr:0, n2:0, n1:9", &mu__condition_322, NULL, },
{"coherent, addr:0, n2:0, n1:8", &mu__condition_321, NULL, },
{"coherent, addr:0, n2:0, n1:7", &mu__condition_320, NULL, },
{"coherent, addr:0, n2:0, n1:6", &mu__condition_319, NULL, },
{"coherent, addr:0, n2:0, n1:5", &mu__condition_318, NULL, },
{"coherent, addr:0, n2:0, n1:4", &mu__condition_317, NULL, },
{"coherent, addr:0, n2:0, n1:3", &mu__condition_316, NULL, },
{"coherent, addr:0, n2:0, n1:2", &mu__condition_315, NULL, },
{"coherent, addr:0, n2:0, n1:1", &mu__condition_314, NULL, },
{"coherent, addr:0, n2:0, n1:0", &mu__condition_313, NULL, },
{"data consistency property, d:3, addr:3, client:10", &mu__condition_306, NULL, },
{"data consistency property, d:3, addr:3, client:9", &mu__condition_305, NULL, },
{"data consistency property, d:3, addr:3, client:8", &mu__condition_304, NULL, },
{"data consistency property, d:3, addr:3, client:7", &mu__condition_303, NULL, },
{"data consistency property, d:3, addr:3, client:6", &mu__condition_302, NULL, },
{"data consistency property, d:3, addr:3, client:5", &mu__condition_301, NULL, },
{"data consistency property, d:3, addr:3, client:4", &mu__condition_300, NULL, },
{"data consistency property, d:3, addr:3, client:3", &mu__condition_299, NULL, },
{"data consistency property, d:3, addr:3, client:2", &mu__condition_298, NULL, },
{"data consistency property, d:3, addr:3, client:1", &mu__condition_297, NULL, },
{"data consistency property, d:3, addr:3, client:0", &mu__condition_296, NULL, },
{"data consistency property, d:3, addr:2, client:10", &mu__condition_294, NULL, },
{"data consistency property, d:3, addr:2, client:9", &mu__condition_293, NULL, },
{"data consistency property, d:3, addr:2, client:8", &mu__condition_292, NULL, },
{"data consistency property, d:3, addr:2, client:7", &mu__condition_291, NULL, },
{"data consistency property, d:3, addr:2, client:6", &mu__condition_290, NULL, },
{"data consistency property, d:3, addr:2, client:5", &mu__condition_289, NULL, },
{"data consistency property, d:3, addr:2, client:4", &mu__condition_288, NULL, },
{"data consistency property, d:3, addr:2, client:3", &mu__condition_287, NULL, },
{"data consistency property, d:3, addr:2, client:2", &mu__condition_286, NULL, },
{"data consistency property, d:3, addr:2, client:1", &mu__condition_285, NULL, },
{"data consistency property, d:3, addr:2, client:0", &mu__condition_284, NULL, },
{"data consistency property, d:3, addr:1, client:10", &mu__condition_282, NULL, },
{"data consistency property, d:3, addr:1, client:9", &mu__condition_281, NULL, },
{"data consistency property, d:3, addr:1, client:8", &mu__condition_280, NULL, },
{"data consistency property, d:3, addr:1, client:7", &mu__condition_279, NULL, },
{"data consistency property, d:3, addr:1, client:6", &mu__condition_278, NULL, },
{"data consistency property, d:3, addr:1, client:5", &mu__condition_277, NULL, },
{"data consistency property, d:3, addr:1, client:4", &mu__condition_276, NULL, },
{"data consistency property, d:3, addr:1, client:3", &mu__condition_275, NULL, },
{"data consistency property, d:3, addr:1, client:2", &mu__condition_274, NULL, },
{"data consistency property, d:3, addr:1, client:1", &mu__condition_273, NULL, },
{"data consistency property, d:3, addr:1, client:0", &mu__condition_272, NULL, },
{"data consistency property, d:3, addr:0, client:10", &mu__condition_270, NULL, },
{"data consistency property, d:3, addr:0, client:9", &mu__condition_269, NULL, },
{"data consistency property, d:3, addr:0, client:8", &mu__condition_268, NULL, },
{"data consistency property, d:3, addr:0, client:7", &mu__condition_267, NULL, },
{"data consistency property, d:3, addr:0, client:6", &mu__condition_266, NULL, },
{"data consistency property, d:3, addr:0, client:5", &mu__condition_265, NULL, },
{"data consistency property, d:3, addr:0, client:4", &mu__condition_264, NULL, },
{"data consistency property, d:3, addr:0, client:3", &mu__condition_263, NULL, },
{"data consistency property, d:3, addr:0, client:2", &mu__condition_262, NULL, },
{"data consistency property, d:3, addr:0, client:1", &mu__condition_261, NULL, },
{"data consistency property, d:3, addr:0, client:0", &mu__condition_260, NULL, },
{"data consistency property, d:2, addr:3, client:10", &mu__condition_257, NULL, },
{"data consistency property, d:2, addr:3, client:9", &mu__condition_256, NULL, },
{"data consistency property, d:2, addr:3, client:8", &mu__condition_255, NULL, },
{"data consistency property, d:2, addr:3, client:7", &mu__condition_254, NULL, },
{"data consistency property, d:2, addr:3, client:6", &mu__condition_253, NULL, },
{"data consistency property, d:2, addr:3, client:5", &mu__condition_252, NULL, },
{"data consistency property, d:2, addr:3, client:4", &mu__condition_251, NULL, },
{"data consistency property, d:2, addr:3, client:3", &mu__condition_250, NULL, },
{"data consistency property, d:2, addr:3, client:2", &mu__condition_249, NULL, },
{"data consistency property, d:2, addr:3, client:1", &mu__condition_248, NULL, },
{"data consistency property, d:2, addr:3, client:0", &mu__condition_247, NULL, },
{"data consistency property, d:2, addr:2, client:10", &mu__condition_245, NULL, },
{"data consistency property, d:2, addr:2, client:9", &mu__condition_244, NULL, },
{"data consistency property, d:2, addr:2, client:8", &mu__condition_243, NULL, },
{"data consistency property, d:2, addr:2, client:7", &mu__condition_242, NULL, },
{"data consistency property, d:2, addr:2, client:6", &mu__condition_241, NULL, },
{"data consistency property, d:2, addr:2, client:5", &mu__condition_240, NULL, },
{"data consistency property, d:2, addr:2, client:4", &mu__condition_239, NULL, },
{"data consistency property, d:2, addr:2, client:3", &mu__condition_238, NULL, },
{"data consistency property, d:2, addr:2, client:2", &mu__condition_237, NULL, },
{"data consistency property, d:2, addr:2, client:1", &mu__condition_236, NULL, },
{"data consistency property, d:2, addr:2, client:0", &mu__condition_235, NULL, },
{"data consistency property, d:2, addr:1, client:10", &mu__condition_233, NULL, },
{"data consistency property, d:2, addr:1, client:9", &mu__condition_232, NULL, },
{"data consistency property, d:2, addr:1, client:8", &mu__condition_231, NULL, },
{"data consistency property, d:2, addr:1, client:7", &mu__condition_230, NULL, },
{"data consistency property, d:2, addr:1, client:6", &mu__condition_229, NULL, },
{"data consistency property, d:2, addr:1, client:5", &mu__condition_228, NULL, },
{"data consistency property, d:2, addr:1, client:4", &mu__condition_227, NULL, },
{"data consistency property, d:2, addr:1, client:3", &mu__condition_226, NULL, },
{"data consistency property, d:2, addr:1, client:2", &mu__condition_225, NULL, },
{"data consistency property, d:2, addr:1, client:1", &mu__condition_224, NULL, },
{"data consistency property, d:2, addr:1, client:0", &mu__condition_223, NULL, },
{"data consistency property, d:2, addr:0, client:10", &mu__condition_221, NULL, },
{"data consistency property, d:2, addr:0, client:9", &mu__condition_220, NULL, },
{"data consistency property, d:2, addr:0, client:8", &mu__condition_219, NULL, },
{"data consistency property, d:2, addr:0, client:7", &mu__condition_218, NULL, },
{"data consistency property, d:2, addr:0, client:6", &mu__condition_217, NULL, },
{"data consistency property, d:2, addr:0, client:5", &mu__condition_216, NULL, },
{"data consistency property, d:2, addr:0, client:4", &mu__condition_215, NULL, },
{"data consistency property, d:2, addr:0, client:3", &mu__condition_214, NULL, },
{"data consistency property, d:2, addr:0, client:2", &mu__condition_213, NULL, },
{"data consistency property, d:2, addr:0, client:1", &mu__condition_212, NULL, },
{"data consistency property, d:2, addr:0, client:0", &mu__condition_211, NULL, },
{"data consistency property, d:1, addr:3, client:10", &mu__condition_208, NULL, },
{"data consistency property, d:1, addr:3, client:9", &mu__condition_207, NULL, },
{"data consistency property, d:1, addr:3, client:8", &mu__condition_206, NULL, },
{"data consistency property, d:1, addr:3, client:7", &mu__condition_205, NULL, },
{"data consistency property, d:1, addr:3, client:6", &mu__condition_204, NULL, },
{"data consistency property, d:1, addr:3, client:5", &mu__condition_203, NULL, },
{"data consistency property, d:1, addr:3, client:4", &mu__condition_202, NULL, },
{"data consistency property, d:1, addr:3, client:3", &mu__condition_201, NULL, },
{"data consistency property, d:1, addr:3, client:2", &mu__condition_200, NULL, },
{"data consistency property, d:1, addr:3, client:1", &mu__condition_199, NULL, },
{"data consistency property, d:1, addr:3, client:0", &mu__condition_198, NULL, },
{"data consistency property, d:1, addr:2, client:10", &mu__condition_196, NULL, },
{"data consistency property, d:1, addr:2, client:9", &mu__condition_195, NULL, },
{"data consistency property, d:1, addr:2, client:8", &mu__condition_194, NULL, },
{"data consistency property, d:1, addr:2, client:7", &mu__condition_193, NULL, },
{"data consistency property, d:1, addr:2, client:6", &mu__condition_192, NULL, },
{"data consistency property, d:1, addr:2, client:5", &mu__condition_191, NULL, },
{"data consistency property, d:1, addr:2, client:4", &mu__condition_190, NULL, },
{"data consistency property, d:1, addr:2, client:3", &mu__condition_189, NULL, },
{"data consistency property, d:1, addr:2, client:2", &mu__condition_188, NULL, },
{"data consistency property, d:1, addr:2, client:1", &mu__condition_187, NULL, },
{"data consistency property, d:1, addr:2, client:0", &mu__condition_186, NULL, },
{"data consistency property, d:1, addr:1, client:10", &mu__condition_184, NULL, },
{"data consistency property, d:1, addr:1, client:9", &mu__condition_183, NULL, },
{"data consistency property, d:1, addr:1, client:8", &mu__condition_182, NULL, },
{"data consistency property, d:1, addr:1, client:7", &mu__condition_181, NULL, },
{"data consistency property, d:1, addr:1, client:6", &mu__condition_180, NULL, },
{"data consistency property, d:1, addr:1, client:5", &mu__condition_179, NULL, },
{"data consistency property, d:1, addr:1, client:4", &mu__condition_178, NULL, },
{"data consistency property, d:1, addr:1, client:3", &mu__condition_177, NULL, },
{"data consistency property, d:1, addr:1, client:2", &mu__condition_176, NULL, },
{"data consistency property, d:1, addr:1, client:1", &mu__condition_175, NULL, },
{"data consistency property, d:1, addr:1, client:0", &mu__condition_174, NULL, },
{"data consistency property, d:1, addr:0, client:10", &mu__condition_172, NULL, },
{"data consistency property, d:1, addr:0, client:9", &mu__condition_171, NULL, },
{"data consistency property, d:1, addr:0, client:8", &mu__condition_170, NULL, },
{"data consistency property, d:1, addr:0, client:7", &mu__condition_169, NULL, },
{"data consistency property, d:1, addr:0, client:6", &mu__condition_168, NULL, },
{"data consistency property, d:1, addr:0, client:5", &mu__condition_167, NULL, },
{"data consistency property, d:1, addr:0, client:4", &mu__condition_166, NULL, },
{"data consistency property, d:1, addr:0, client:3", &mu__condition_165, NULL, },
{"data consistency property, d:1, addr:0, client:2", &mu__condition_164, NULL, },
{"data consistency property, d:1, addr:0, client:1", &mu__condition_163, NULL, },
{"data consistency property, d:1, addr:0, client:0", &mu__condition_162, NULL, },
{"data consistency property, d:0, addr:3, client:10", &mu__condition_159, NULL, },
{"data consistency property, d:0, addr:3, client:9", &mu__condition_158, NULL, },
{"data consistency property, d:0, addr:3, client:8", &mu__condition_157, NULL, },
{"data consistency property, d:0, addr:3, client:7", &mu__condition_156, NULL, },
{"data consistency property, d:0, addr:3, client:6", &mu__condition_155, NULL, },
{"data consistency property, d:0, addr:3, client:5", &mu__condition_154, NULL, },
{"data consistency property, d:0, addr:3, client:4", &mu__condition_153, NULL, },
{"data consistency property, d:0, addr:3, client:3", &mu__condition_152, NULL, },
{"data consistency property, d:0, addr:3, client:2", &mu__condition_151, NULL, },
{"data consistency property, d:0, addr:3, client:1", &mu__condition_150, NULL, },
{"data consistency property, d:0, addr:3, client:0", &mu__condition_149, NULL, },
{"data consistency property, d:0, addr:2, client:10", &mu__condition_147, NULL, },
{"data consistency property, d:0, addr:2, client:9", &mu__condition_146, NULL, },
{"data consistency property, d:0, addr:2, client:8", &mu__condition_145, NULL, },
{"data consistency property, d:0, addr:2, client:7", &mu__condition_144, NULL, },
{"data consistency property, d:0, addr:2, client:6", &mu__condition_143, NULL, },
{"data consistency property, d:0, addr:2, client:5", &mu__condition_142, NULL, },
{"data consistency property, d:0, addr:2, client:4", &mu__condition_141, NULL, },
{"data consistency property, d:0, addr:2, client:3", &mu__condition_140, NULL, },
{"data consistency property, d:0, addr:2, client:2", &mu__condition_139, NULL, },
{"data consistency property, d:0, addr:2, client:1", &mu__condition_138, NULL, },
{"data consistency property, d:0, addr:2, client:0", &mu__condition_137, NULL, },
{"data consistency property, d:0, addr:1, client:10", &mu__condition_135, NULL, },
{"data consistency property, d:0, addr:1, client:9", &mu__condition_134, NULL, },
{"data consistency property, d:0, addr:1, client:8", &mu__condition_133, NULL, },
{"data consistency property, d:0, addr:1, client:7", &mu__condition_132, NULL, },
{"data consistency property, d:0, addr:1, client:6", &mu__condition_131, NULL, },
{"data consistency property, d:0, addr:1, client:5", &mu__condition_130, NULL, },
{"data consistency property, d:0, addr:1, client:4", &mu__condition_129, NULL, },
{"data consistency property, d:0, addr:1, client:3", &mu__condition_128, NULL, },
{"data consistency property, d:0, addr:1, client:2", &mu__condition_127, NULL, },
{"data consistency property, d:0, addr:1, client:1", &mu__condition_126, NULL, },
{"data consistency property, d:0, addr:1, client:0", &mu__condition_125, NULL, },
{"data consistency property, d:0, addr:0, client:10", &mu__condition_123, NULL, },
{"data consistency property, d:0, addr:0, client:9", &mu__condition_122, NULL, },
{"data consistency property, d:0, addr:0, client:8", &mu__condition_121, NULL, },
{"data consistency property, d:0, addr:0, client:7", &mu__condition_120, NULL, },
{"data consistency property, d:0, addr:0, client:6", &mu__condition_119, NULL, },
{"data consistency property, d:0, addr:0, client:5", &mu__condition_118, NULL, },
{"data consistency property, d:0, addr:0, client:4", &mu__condition_117, NULL, },
{"data consistency property, d:0, addr:0, client:3", &mu__condition_116, NULL, },
{"data consistency property, d:0, addr:0, client:2", &mu__condition_115, NULL, },
{"data consistency property, d:0, addr:0, client:1", &mu__condition_114, NULL, },
{"data consistency property, d:0, addr:0, client:0", &mu__condition_113, NULL, },
};
const unsigned short numinvariants = 660;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
node:NoScalarset
auxdata:NoScalarset
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
        mu_node.MultisetSort();
        mu_auxdata.MultisetSort();
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
void mu_1_opcode::Permute(PermSet& Perm, int i) {};
void mu_1_opcode::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_opcode::Canonicalize(PermSet& Perm) {};
void mu_1_opcode::SimpleLimit(PermSet& Perm) {};
void mu_1_opcode::ArrayLimit(PermSet& Perm) {};
void mu_1_opcode::Limit(PermSet& Perm) {};
void mu_1_opcode::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_request_opcode::Permute(PermSet& Perm, int i) {};
void mu_1_request_opcode::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_request_opcode::Canonicalize(PermSet& Perm) {};
void mu_1_request_opcode::SimpleLimit(PermSet& Perm) {};
void mu_1_request_opcode::ArrayLimit(PermSet& Perm) {};
void mu_1_request_opcode::Limit(PermSet& Perm) {};
void mu_1_request_opcode::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_cache_state::Permute(PermSet& Perm, int i) {};
void mu_1_cache_state::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_cache_state::Canonicalize(PermSet& Perm) {};
void mu_1_cache_state::SimpleLimit(PermSet& Perm) {};
void mu_1_cache_state::ArrayLimit(PermSet& Perm) {};
void mu_1_cache_state::Limit(PermSet& Perm) {};
void mu_1_cache_state::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_addr_type::Permute(PermSet& Perm, int i) {};
void mu_1_addr_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_addr_type::Canonicalize(PermSet& Perm) {};
void mu_1_addr_type::SimpleLimit(PermSet& Perm) {};
void mu_1_addr_type::ArrayLimit(PermSet& Perm) {};
void mu_1_addr_type::Limit(PermSet& Perm) {};
void mu_1_addr_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_num_data_type::Permute(PermSet& Perm, int i) {};
void mu_1_num_data_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_num_data_type::Canonicalize(PermSet& Perm) {};
void mu_1_num_data_type::SimpleLimit(PermSet& Perm) {};
void mu_1_num_data_type::ArrayLimit(PermSet& Perm) {};
void mu_1_num_data_type::Limit(PermSet& Perm) {};
void mu_1_num_data_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<4; j++)
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
void mu_1_data_type::Permute(PermSet& Perm, int i)
{
};
void mu_1_data_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_data_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_data_type::SimpleLimit(PermSet& Perm){}
void mu_1_data_type::ArrayLimit(PermSet& Perm){}
void mu_1_data_type::Limit(PermSet& Perm)
{
};
void mu_1_data_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1_cache_record::Permute(PermSet& Perm, int i)
{
};
void mu_1_cache_record::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_cache_record::Canonicalize(PermSet& Perm)
{
};
void mu_1_cache_record::SimpleLimit(PermSet& Perm){}
void mu_1_cache_record::ArrayLimit(PermSet& Perm){}
void mu_1_cache_record::Limit(PermSet& Perm)
{
};
void mu_1_cache_record::MultisetLimit(PermSet& Perm)
{
};
void mu_1_node_id::Permute(PermSet& Perm, int i) {};
void mu_1_node_id::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_node_id::Canonicalize(PermSet& Perm) {};
void mu_1_node_id::SimpleLimit(PermSet& Perm) {};
void mu_1_node_id::ArrayLimit(PermSet& Perm) {};
void mu_1_node_id::Limit(PermSet& Perm) {};
void mu_1_node_id::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_channel_id::Permute(PermSet& Perm, int i) {};
void mu_1_channel_id::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_channel_id::Canonicalize(PermSet& Perm) {};
void mu_1_channel_id::SimpleLimit(PermSet& Perm) {};
void mu_1_channel_id::ArrayLimit(PermSet& Perm) {};
void mu_1_channel_id::Limit(PermSet& Perm) {};
void mu_1_channel_id::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_message_type::Permute(PermSet& Perm, int i)
{
};
void mu_1_message_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_message_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_message_type::SimpleLimit(PermSet& Perm){}
void mu_1_message_type::ArrayLimit(PermSet& Perm){}
void mu_1_message_type::Limit(PermSet& Perm)
{
};
void mu_1_message_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1_message_buf_type::Permute(PermSet& Perm, int i)
{
};
void mu_1_message_buf_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_message_buf_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_message_buf_type::SimpleLimit(PermSet& Perm){}
void mu_1_message_buf_type::ArrayLimit(PermSet& Perm){}
void mu_1_message_buf_type::Limit(PermSet& Perm)
{
};
void mu_1_message_buf_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1_status_type::Permute(PermSet& Perm, int i) {};
void mu_1_status_type::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_status_type::Canonicalize(PermSet& Perm) {};
void mu_1_status_type::SimpleLimit(PermSet& Perm) {};
void mu_1_status_type::ArrayLimit(PermSet& Perm) {};
void mu_1_status_type::Limit(PermSet& Perm) {};
void mu_1_status_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_addr_request_type::Permute(PermSet& Perm, int i)
{
};
void mu_1_addr_request_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_addr_request_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_addr_request_type::SimpleLimit(PermSet& Perm){}
void mu_1_addr_request_type::ArrayLimit(PermSet& Perm){}
void mu_1_addr_request_type::Limit(PermSet& Perm)
{
};
void mu_1_addr_request_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<11; j++)
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
void mu_1_home_request_type::Permute(PermSet& Perm, int i)
{
};
void mu_1_home_request_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_home_request_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_home_request_type::SimpleLimit(PermSet& Perm){}
void mu_1_home_request_type::ArrayLimit(PermSet& Perm){}
void mu_1_home_request_type::Limit(PermSet& Perm)
{
};
void mu_1_home_request_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<4; j++)
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
  for (j=0; j<4; j++)
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
  for (j=0; j<11; j++)
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
  for (j=0; j<4; j++)
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
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<4; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<4; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<4; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm){};
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_node_type::Permute(PermSet& Perm, int i)
{
};
void mu_1_node_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_node_type::Canonicalize(PermSet& Perm)
{
};
void mu_1_node_type::SimpleLimit(PermSet& Perm){}
void mu_1_node_type::ArrayLimit(PermSet& Perm){}
void mu_1_node_type::Limit(PermSet& Perm)
{
};
void mu_1_node_type::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<11; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm) {}
void mu_1__type_11::Limit(PermSet& Perm){}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
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
              
              mu_node.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_node.MultisetSort();
              mu_auxdata.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_auxdata.MultisetSort();
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

          mu_node.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_node.MultisetSort();
          mu_auxdata.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_auxdata.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_node.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_node.MultisetSort();
              mu_auxdata.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_auxdata.MultisetSort();
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
      mu_node.MultisetSort();
      mu_auxdata.MultisetSort();
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
        mu_auxdata.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_auxdata.MultisetSort();
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