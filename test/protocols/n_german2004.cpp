/******************************
  Program "./protocols/n_german2004.m" compiled by "Caching Murphi Release 5.5.0"

  Murphi Last Compiled date: "Jul 20 2022"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.5.0"
#define MURPHI_DATE "Jul 20 2022"
#define PROTOCOL_NAME "./protocols/n_german2004"
#define BITS_IN_WORLD 1800
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
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
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
    if (defined())
      cout << name << ":" << values[ value() -10] << '\n';
    else
      cout << name << ":Undefined\n";
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
    if (defined())
      cout << name << ":" << values[ value() -13] << '\n';
    else
      cout << name << ":Undefined\n";
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
  mu_1_addr_type (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu_1_addr_type (void): mu__byte(0, 0, 1) {};
  mu_1_addr_type (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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
  mu_1_num_data_type (const char *name, int os): mu__byte(0, 0, 1, name, os) {};
  mu_1_num_data_type (void): mu__byte(0, 0, 1) {};
  mu_1_num_data_type (int val): mu__byte(0, 0, 1, "Parameter or function result.", 0)
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

class mu_1_data_type
{
 public:
  mu_0_boolean array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_data_type (const char *n, int os) { set_self(n, os); };
  mu_1_data_type ( void ) {};
  virtual ~mu_1_data_type ();
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
  mu_1_data_type& operator= (const mu_1_data_type& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1_data_type& a, mu_1_data_type& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_data_type& a, mu_1_data_type& b)
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
void mu_1_data_type::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_data_type::~mu_1_data_type()
{
}
/*** end array declaration ***/
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
  mu_1_node_id (const char *name, int os): mu__byte(0, 3, 3, name, os) {};
  mu_1_node_id (void): mu__byte(0, 3, 3) {};
  mu_1_node_id (int val): mu__byte(0, 3, 3, "Parameter or function result.", 0)
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
  if (name) mu_valid.set_self_2(name, ".valid", os + 40 ); else mu_valid.set_self_2(NULL, NULL, 0);
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
    if (defined())
      cout << name << ":" << values[ value() -16] << '\n';
    else
      cout << name << ":Undefined\n";
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
  if (name) mu_status.set_self_2(name, ".status", os + 24 ); else mu_status.set_self_2(NULL, NULL, 0);
}

mu_1_addr_request_type::~mu_1_addr_request_type()
{
}

/*** end record declaration ***/
mu_1_addr_request_type mu_1_addr_request_type_undefined_var;

class mu_1_line_dir_type
{
 public:
  mu_1_cache_state array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_line_dir_type (const char *n, int os) { set_self(n, os); };
  mu_1_line_dir_type ( void ) {};
  virtual ~mu_1_line_dir_type ();
  mu_1_cache_state& operator[] (int index) /* const */
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
  mu_1_line_dir_type& operator= (const mu_1_line_dir_type& from)
  {
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_line_dir_type& a, mu_1_line_dir_type& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_line_dir_type& a, mu_1_line_dir_type& b)
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

  void mu_1_line_dir_type::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_line_dir_type::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_line_dir_type::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_line_dir_type::~mu_1_line_dir_type()
{
}
/*** end array declaration ***/
mu_1_line_dir_type mu_1_line_dir_type_undefined_var;

class mu_1_node_bool_array
{
 public:
  mu_0_boolean array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1_node_bool_array (const char *n, int os) { set_self(n, os); };
  mu_1_node_bool_array ( void ) {};
  virtual ~mu_1_node_bool_array ();
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
  mu_1_node_bool_array& operator= (const mu_1_node_bool_array& from)
  {
    for (int i = 0; i < 4; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1_node_bool_array& a, mu_1_node_bool_array& b)
  {
    int w;
    for (int i=0; i<4; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1_node_bool_array& a, mu_1_node_bool_array& b)
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

  void mu_1_node_bool_array::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_node_bool_array::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_node_bool_array::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 4; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1_node_bool_array::~mu_1_node_bool_array()
{
}
/*** end array declaration ***/
mu_1_node_bool_array mu_1_node_bool_array_undefined_var;

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
  mu_1_node_bool_array mu_invalidate_list;
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
  if (name) mu_invalidate_list.set_self_2(name, ".invalidate_list", os + 24 ); else mu_invalidate_list.set_self_2(NULL, NULL, 0);
  if (name) mu_status.set_self_2(name, ".status", os + 56 ); else mu_status.set_self_2(NULL, NULL, 0);
}

mu_1_home_request_type::~mu_1_home_request_type()
{
}

/*** end record declaration ***/
mu_1_home_request_type mu_1_home_request_type_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_data_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_data_type& operator[] (int index) /* const */
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
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
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
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
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
  mu_1_cache_record array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_cache_record& operator[] (int index) /* const */
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
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
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
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 16 + os);
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
  mu_1_line_dir_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_line_dir_type& operator[] (int index) /* const */
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
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
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
  for(int i = 0; i < 1; i++) {
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
  mu_0_boolean array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
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
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
      array[0].value(from.array[0].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
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
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
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
  mu_1_home_request_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_home_request_type& operator[] (int index) /* const */
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
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
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
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 64 + os);
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
  mu_1_addr_request_type array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_addr_request_type& operator[] (int index) /* const */
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
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
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
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 32 + os);
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
  mu_1_message_buf_type array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
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
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
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
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 48 + os);
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
  mu_1_message_buf_type array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
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
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 3; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
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
  for(int i = 0; i < 3; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 48 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1_node_type
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_0 mu_memory;
  mu_1__type_1 mu_cache;
  mu_1__type_2 mu_directory;
  mu_1__type_3 mu_local_requests;
  mu_1__type_4 mu_home_requests;
  mu_1__type_5 mu_remote_requests;
  mu_1__type_6 mu_inchan;
  mu_1__type_7 mu_outchan;
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
  if (name) mu_cache.set_self_2(name, ".cache", os + 8 ); else mu_cache.set_self_2(NULL, NULL, 0);
  if (name) mu_directory.set_self_2(name, ".directory", os + 24 ); else mu_directory.set_self_2(NULL, NULL, 0);
  if (name) mu_local_requests.set_self_2(name, ".local_requests", os + 56 ); else mu_local_requests.set_self_2(NULL, NULL, 0);
  if (name) mu_home_requests.set_self_2(name, ".home_requests", os + 64 ); else mu_home_requests.set_self_2(NULL, NULL, 0);
  if (name) mu_remote_requests.set_self_2(name, ".remote_requests", os + 128 ); else mu_remote_requests.set_self_2(NULL, NULL, 0);
  if (name) mu_inchan.set_self_2(name, ".inchan", os + 160 ); else mu_inchan.set_self_2(NULL, NULL, 0);
  if (name) mu_outchan.set_self_2(name, ".outchan", os + 304 ); else mu_outchan.set_self_2(NULL, NULL, 0);
}

mu_1_node_type::~mu_1_node_type()
{
}

/*** end record declaration ***/
mu_1_node_type mu_1_node_type_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_node_type array[ 4 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_node_type& operator[] (int index) /* const */
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
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 448 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

const int mu_num_nodes = 3;
const int mu_num_addr = 0;
const int mu_num_data = 0;
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
mu_1__type_8 mu_node("node",0);

/*** Variable declaration ***/
mu_1_data_type mu_auxdata("auxdata",1792);





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
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`home' sends grant for `addr', channel2:%s, source:%s, addr:%s, home:%s", mu_channel2.Name(), mu_source.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr9;
bool mu__boolexpr10;
bool mu__boolexpr11;
  if (!((mu_channel2) == (2))) mu__boolexpr11 = FALSE ;
  else {
  mu__boolexpr11 = ((mu_source) == (mu_node[mu_home].mu_home_requests[mu_addr].mu_source)) ; 
}
  if (!(mu__boolexpr11)) mu__boolexpr10 = FALSE ;
  else {
  mu__boolexpr10 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_completed)) ; 
}
  if (!(mu__boolexpr10)) mu__boolexpr9 = FALSE ;
  else {
  mu__boolexpr9 = (!(mu_node[mu_home].mu_outchan[mu_channel2].mu_valid)) ; 
}
    return mu__boolexpr9;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 48 )
      {
	if ( ( TRUE  ) ) {
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
	      if (mu__boolexpr12) {
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
    mu_source.value((r % 4) + 0);
    r = r / 4;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
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
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_data = mu_node[mu_home].mu_home_requests[mu_addr].mu_data;
mu_node[mu_home].mu_outchan[mu_channel2].mu_msg.mu_addr = mu_addr;
mu_node[mu_home].mu_home_requests[mu_addr].clear();
mu_node[mu_home].mu_outchan[mu_channel2].mu_valid = mu_true;
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
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`home' processes invalidate ack, channel3:%s, source:%s, addr:%s, home:%s", mu_channel3.Name(), mu_source.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
  if (!((mu_channel3) == (3))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
  mu__boolexpr18 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr18)) mu__boolexpr17 = FALSE ;
  else {
  mu__boolexpr17 = (mu_node[mu_home].mu_inchan[mu_channel3].mu_valid) ; 
}
  if (!(mu__boolexpr17)) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
  mu__boolexpr15 = ((mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_op) == (mu_invalidate_ack)) ; 
}
    return mu__boolexpr15;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 48;
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 96 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr20;
bool mu__boolexpr21;
bool mu__boolexpr22;
bool mu__boolexpr23;
bool mu__boolexpr24;
  if (!((mu_channel3) == (3))) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr24)) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr23)) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = (mu_node[mu_home].mu_inchan[mu_channel3].mu_valid) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr21)) mu__boolexpr20 = FALSE ;
  else {
  mu__boolexpr20 = ((mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_op) == (mu_invalidate_ack)) ; 
}
	      if (mu__boolexpr20) {
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
    r = what_rule - 48;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
if ( (mu_node[mu_home].mu_directory[mu_addr][mu_source]) == (mu_cache_exclusive) )
{
mu_node[mu_home].mu_memory[mu_addr] = mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_data;
}
mu_node[mu_home].mu_home_requests[mu_addr].mu_data = mu_node[mu_home].mu_inchan[mu_channel3].mu_msg.mu_data;
mu_node[mu_home].mu_directory[mu_addr][mu_source] = mu_cache_invalid;
mu_node[mu_home].mu_inchan[mu_channel3].clear();
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_read_shared) )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
else
{
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_req_upgrade) )
{
bool mu__quant25; 
mu__quant25 = TRUE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
bool mu__boolexpr26;
  if (!((mu_n) != (mu_node[mu_home].mu_home_requests[mu_addr].mu_source))) mu__boolexpr26 = TRUE ;
  else {
  mu__boolexpr26 = ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_invalid)) ; 
}
if ( !(mu__boolexpr26) )
  { mu__quant25 = FALSE; break; }
};
};
if ( mu__quant25 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
}
else
{
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_op) == (mu_read_exclusive) )
{
bool mu__quant27; 
mu__quant27 = TRUE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
if ( !((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_invalid)) )
  { mu__quant27 = FALSE; break; }
};
};
if ( mu__quant27 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
}
}
}
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
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`home' prepares invalidate for `addr', channel2:%s, dest:%s, addr:%s, home:%s", mu_channel2.Name(), mu_dest.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr28;
bool mu__boolexpr29;
bool mu__boolexpr30;
bool mu__boolexpr31;
  if (!((mu_channel2) == (2))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_dest]) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
bool mu__quant32; 
mu__quant32 = FALSE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n]) )
  { mu__quant32 = TRUE; break; }
};
};
  mu__boolexpr29 = (mu__quant32) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = (!(mu_node[mu_home].mu_outchan[mu_channel2].mu_valid)) ; 
}
    return mu__boolexpr28;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 96;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 144 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr33;
bool mu__boolexpr34;
bool mu__boolexpr35;
bool mu__boolexpr36;
  if (!((mu_channel2) == (2))) mu__boolexpr36 = FALSE ;
  else {
  mu__boolexpr36 = (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_dest]) ; 
}
  if (!(mu__boolexpr36)) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_pending)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
bool mu__quant37; 
mu__quant37 = FALSE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
if ( (mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n]) )
  { mu__quant37 = TRUE; break; }
};
};
  mu__boolexpr34 = (mu__quant37) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = (!(mu_node[mu_home].mu_outchan[mu_channel2].mu_valid)) ; 
}
	      if (mu__boolexpr33) {
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
    r = what_rule - 96;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
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
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`home' accepts a request message, channel1:%s, source:%s, addr:%s, home:%s", mu_channel1.Name(), mu_source.Name(), mu_addr.Name(), mu_home.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr38;
bool mu__boolexpr39;
bool mu__boolexpr40;
bool mu__boolexpr41;
  if (!((mu_channel1) == (1))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr41)) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = (mu_node[mu_home].mu_inchan[mu_channel1].mu_valid) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_inactive)) ; 
}
    return mu__boolexpr38;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 144;
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 192 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr42;
bool mu__boolexpr43;
bool mu__boolexpr44;
bool mu__boolexpr45;
  if (!((mu_channel1) == (1))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_addr) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr45)) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_source) == (mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_source)) ; 
}
  if (!(mu__boolexpr44)) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = (mu_node[mu_home].mu_inchan[mu_channel1].mu_valid) ; 
}
  if (!(mu__boolexpr43)) mu__boolexpr42 = FALSE ;
  else {
  mu__boolexpr42 = ((mu_node[mu_home].mu_home_requests[mu_addr].mu_status) == (mu_inactive)) ; 
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
    r = what_rule - 144;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_home.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_home;
    mu_home.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr46;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_req_upgrade))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_node[mu_home].mu_directory[mu_addr][mu_source]) == (mu_cache_invalid)) ; 
}
if ( mu__boolexpr46 )
{
mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op = mu_read_exclusive;
}
mu_node[mu_home].mu_home_requests[mu_addr].mu_source = mu_source;
mu_node[mu_home].mu_home_requests[mu_addr].mu_op = mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op;
bool mu__boolexpr47;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_read_shared))) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_node[mu_home].mu_directory[mu_addr][mu_home]) == (mu_cache_shared)) ; 
}
if ( mu__boolexpr47 )
{
if ( (mu_node[mu_home].mu_cache[mu_addr].mu_state) == (mu_cache_shared) )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_data = mu_node[mu_home].mu_cache[mu_addr].mu_data;
}
else
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_data = mu_node[mu_home].mu_memory[mu_addr];
}
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
else
{
bool mu__boolexpr48;
bool mu__boolexpr49;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_read_shared))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_node[mu_home].mu_directory[mu_addr][mu_home]) == (mu_cache_invalid)) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
bool mu__quant50; 
mu__quant50 = FALSE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
if ( ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_exclusive)) )
  { mu__quant50 = TRUE; break; }
};
};
  mu__boolexpr48 = (!(mu__quant50)) ; 
}
if ( mu__boolexpr48 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_data = mu_node[mu_home].mu_memory[mu_addr];
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
else
{
bool mu__boolexpr51;
  if (!((mu_node[mu_home].mu_inchan[mu_channel1].mu_msg.mu_op) == (mu_read_shared))) mu__boolexpr51 = FALSE ;
  else {
bool mu__quant52; 
mu__quant52 = FALSE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
if ( ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) == (mu_cache_exclusive)) )
  { mu__quant52 = TRUE; break; }
};
};
  mu__boolexpr51 = (mu__quant52) ; 
}
if ( mu__boolexpr51 )
{
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
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
for(int mu_n = 0; mu_n <= 3; mu_n++) {
bool mu__boolexpr53;
  if (!((mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_n) != (mu_source)) ; 
}
if ( mu__boolexpr53 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_true;
}
else
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_invalidate_list[mu_n] = mu_false;
}
};
};
bool mu__quant54; 
mu__quant54 = FALSE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
bool mu__boolexpr55;
  if (!((mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_n) != (mu_source)) ; 
}
if ( (mu__boolexpr55) )
  { mu__quant54 = TRUE; break; }
};
};
if ( mu__quant54 )
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
for(int mu_n = 0; mu_n <= 3; mu_n++) {
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
bool mu__quant56; 
mu__quant56 = FALSE;
{
for(int mu_n = 0; mu_n <= 3; mu_n++) {
if ( ((mu_node[mu_home].mu_directory[mu_addr][mu_n]) != (mu_cache_invalid)) )
  { mu__quant56 = TRUE; break; }
};
};
if ( mu__quant56 )
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_pending;
}
else
{
mu_node[mu_home].mu_home_requests[mu_addr].mu_data = mu_node[mu_home].mu_memory[mu_addr];
mu_node[mu_home].mu_home_requests[mu_addr].mu_status = mu_completed;
}
}
}
}
}
}
mu_node[mu_home].mu_inchan[mu_channel1].clear();
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
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`client' stores data in cache for `addr', data:%s, addr:%s, client:%s", mu_data.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_0_boolean mu_data;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr57;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) != (mu_pending))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_exclusive)) ; 
}
    return mu__boolexpr57;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 192;
    static mu_0_boolean mu_data;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 200 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr58;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) != (mu_pending))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_exclusive)) ; 
}
	      if (mu__boolexpr58) {
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
    mu_data.value((r % 2) + 0);
    r = r / 2;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_0_boolean mu_data;
    mu_data.value((r % 2) + 0);
    r = r / 2;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
mu_node[mu_client].mu_cache[mu_addr].mu_data[0] = mu_data;
mu_auxdata[0] = mu_data;
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
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`client' receives reply from home, channel2:%s, addr:%s, client:%s", mu_channel2.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr59;
bool mu__boolexpr60;
bool mu__boolexpr61;
  if (!((mu_channel2) == (2))) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
bool mu__boolexpr62;
bool mu__boolexpr63;
  if ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_shared)) mu__boolexpr63 = TRUE ;
  else {
  mu__boolexpr63 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_upgrade)) ; 
}
  if (mu__boolexpr63) mu__boolexpr62 = TRUE ;
  else {
  mu__boolexpr62 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_exclusive)) ; 
}
  mu__boolexpr59 = (mu__boolexpr62) ; 
}
    return mu__boolexpr59;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 200;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 212 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr64;
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!((mu_channel2) == (2))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr65)) mu__boolexpr64 = FALSE ;
  else {
bool mu__boolexpr67;
bool mu__boolexpr68;
  if ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_shared)) mu__boolexpr68 = TRUE ;
  else {
  mu__boolexpr68 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_upgrade)) ; 
}
  if (mu__boolexpr68) mu__boolexpr67 = TRUE ;
  else {
  mu__boolexpr67 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_exclusive)) ; 
}
  mu__boolexpr64 = (mu__boolexpr67) ; 
}
	      if (mu__boolexpr64) {
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
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
if ( (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_grant_shared) )
{
mu_node[mu_client].mu_cache[mu_addr].mu_data = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_data;
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
mu_node[mu_client].mu_cache[mu_addr].mu_data = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_data;
mu_node[mu_client].mu_cache[mu_addr].mu_state = mu_cache_exclusive;
}
}
}
mu_node[mu_client].mu_local_requests[mu_addr] = mu_false;
mu_node[mu_client].mu_inchan[mu_channel2].clear();
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
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`client' prepares invalidate ack for `addr', channel3:%s, addr:%s, client:%s", mu_channel3.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr69;
bool mu__boolexpr70;
bool mu__boolexpr71;
  if (!((mu_channel3) == (3))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_completed)) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_op) == (mu_invalidate)) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = (!(mu_node[mu_client].mu_outchan[mu_channel3].mu_valid)) ; 
}
    return mu__boolexpr69;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 212;
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 224 )
      {
	if ( ( TRUE  ) ) {
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
	      if (mu__boolexpr72) {
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
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel3;
    mu_channel3.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_op = mu_invalidate_ack;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_source = mu_client;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_dest = mu_node[mu_client].mu_remote_requests[mu_addr].mu_home;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_data = mu_node[mu_client].mu_remote_requests[mu_addr].mu_data;
mu_node[mu_client].mu_outchan[mu_channel3].mu_msg.mu_addr = mu_addr;
mu_node[mu_client].mu_outchan[mu_channel3].mu_valid = mu_true;
mu_node[mu_client].mu_remote_requests[mu_addr].clear();
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
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`client' processes invalidate request for `addr', addr:%s, client:%s", mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr75;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_pending))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_op) == (mu_invalidate)) ; 
}
    return mu__boolexpr75;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 224;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 228 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr76;
  if (!((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_pending))) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_op) == (mu_invalidate)) ; 
}
	      if (mu__boolexpr76) {
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
    r = what_rule - 224;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_data = mu_node[mu_client].mu_cache[mu_addr].mu_data;
mu_node[mu_client].mu_cache[mu_addr].clear();
mu_node[mu_client].mu_remote_requests[mu_addr].mu_status = mu_completed;
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
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`client' accepts invalidate request, channel2:%s, addr:%s, client:%s", mu_channel2.Name(), mu_addr.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr77;
bool mu__boolexpr78;
bool mu__boolexpr79;
bool mu__boolexpr80;
  if (!((mu_channel2) == (2))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr80)) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_invalidate)) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_inactive)) ; 
}
    return mu__boolexpr77;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 228;
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 240 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
bool mu__boolexpr84;
  if (!((mu_channel2) == (2))) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_addr) == (mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_addr)) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = (mu_node[mu_client].mu_inchan[mu_channel2].mu_valid) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op) == (mu_invalidate)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_node[mu_client].mu_remote_requests[mu_addr].mu_status) == (mu_inactive)) ; 
}
	      if (mu__boolexpr81) {
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
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel2;
    mu_channel2.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_home = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_source;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_op = mu_node[mu_client].mu_inchan[mu_channel2].mu_msg.mu_op;
mu_node[mu_client].mu_remote_requests[mu_addr].mu_status = mu_pending;
mu_node[mu_client].mu_inchan[mu_channel2].clear();
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
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("`client' generates new `req' for `addr', channel1:%s, addr:%s, req:%s, client:%s", mu_channel1.Name(), mu_addr.Name(), mu_req.Name(), mu_client.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr85;
bool mu__boolexpr86;
bool mu__boolexpr87;
  if (!((mu_channel1) == (1))) mu__boolexpr87 = FALSE ;
  else {
  mu__boolexpr87 = (!(mu_node[mu_client].mu_local_requests[mu_addr])) ; 
}
  if (!(mu__boolexpr87)) mu__boolexpr86 = FALSE ;
  else {
bool mu__boolexpr88;
bool mu__boolexpr89;
bool mu__boolexpr90;
  if (!((mu_req) == (mu_req_read_shared))) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  if (mu__boolexpr90) mu__boolexpr89 = TRUE ;
  else {
bool mu__boolexpr91;
  if (!((mu_req) == (mu_req_read_exclusive))) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  mu__boolexpr89 = (mu__boolexpr91) ; 
}
  if (mu__boolexpr89) mu__boolexpr88 = TRUE ;
  else {
bool mu__boolexpr92;
  if (!((mu_req) == (mu_req_req_upgrade))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_shared)) ; 
}
  mu__boolexpr88 = (mu__boolexpr92) ; 
}
  mu__boolexpr86 = (mu__boolexpr88) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (!(mu_node[mu_client].mu_outchan[mu_channel1].mu_valid)) ; 
}
    return mu__boolexpr85;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 240;
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 276 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr93;
bool mu__boolexpr94;
bool mu__boolexpr95;
  if (!((mu_channel1) == (1))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = (!(mu_node[mu_client].mu_local_requests[mu_addr])) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
bool mu__boolexpr96;
bool mu__boolexpr97;
bool mu__boolexpr98;
  if (!((mu_req) == (mu_req_read_shared))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  if (mu__boolexpr98) mu__boolexpr97 = TRUE ;
  else {
bool mu__boolexpr99;
  if (!((mu_req) == (mu_req_read_exclusive))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_invalid)) ; 
}
  mu__boolexpr97 = (mu__boolexpr99) ; 
}
  if (mu__boolexpr97) mu__boolexpr96 = TRUE ;
  else {
bool mu__boolexpr100;
  if (!((mu_req) == (mu_req_req_upgrade))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_node[mu_client].mu_cache[mu_addr].mu_state) == (mu_cache_shared)) ; 
}
  mu__boolexpr96 = (mu__boolexpr100) ; 
}
  mu__boolexpr94 = (mu__boolexpr96) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = (!(mu_node[mu_client].mu_outchan[mu_channel1].mu_valid)) ; 
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
    r = what_rule - 240;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    mu_client.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_channel_id mu_channel1;
    mu_channel1.value((r % 3) + 1);
    r = r / 3;
    static mu_1_addr_type mu_addr;
    mu_addr.value((r % 1) + 0);
    r = r / 1;
    static mu_1_request_opcode mu_req;
    mu_req.value((r % 3) + 10);
    r = r / 3;
    static mu_1_node_id mu_client;
    mu_client.value((r % 4) + 0);
    r = r / 4;
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
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    return tsprintf("Transfer message from `source' via `ch', dest:%s, ch:%s, source:%s", mu_dest.Name(), mu_ch.Name(), mu_source.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
bool mu__boolexpr101;
bool mu__boolexpr102;
  if (!((mu_dest) == (mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_dest))) mu__boolexpr102 = FALSE ;
  else {
  mu__boolexpr102 = (mu_node[mu_source].mu_outchan[mu_ch].mu_valid) ; 
}
  if (!(mu__boolexpr102)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (!(mu_node[mu_dest].mu_inchan[mu_ch].mu_valid)) ; 
}
    return mu__boolexpr101;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 276;
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    while (what_rule < 324 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr103;
bool mu__boolexpr104;
  if (!((mu_dest) == (mu_node[mu_source].mu_outchan[mu_ch].mu_msg.mu_dest))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = (mu_node[mu_source].mu_outchan[mu_ch].mu_valid) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
  mu__boolexpr103 = (!(mu_node[mu_dest].mu_inchan[mu_ch].mu_valid)) ; 
}
	      if (mu__boolexpr103) {
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
    r = what_rule - 276;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    mu_source.value((r % 4) + 0);
    r = r / 4;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_node_id mu_dest;
    mu_dest.value((r % 4) + 0);
    r = r / 4;
    static mu_1_channel_id mu_ch;
    mu_ch.value((r % 3) + 1);
    r = r / 3;
    static mu_1_node_id mu_source;
    mu_source.value((r % 4) + 0);
    r = r / 4;
mu_node[mu_dest].mu_inchan[mu_ch].mu_msg = mu_node[mu_source].mu_outchan[mu_ch].mu_msg;
mu_node[mu_dest].mu_inchan[mu_ch].mu_valid = mu_node[mu_source].mu_outchan[mu_ch].mu_valid;
mu_node[mu_source].mu_outchan[mu_ch].clear();
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
  if (what_rule<48)
    { R0.NextRule(what_rule);
      if (what_rule<48) return; }
  if (what_rule>=48 && what_rule<96)
    { R1.NextRule(what_rule);
      if (what_rule<96) return; }
  if (what_rule>=96 && what_rule<144)
    { R2.NextRule(what_rule);
      if (what_rule<144) return; }
  if (what_rule>=144 && what_rule<192)
    { R3.NextRule(what_rule);
      if (what_rule<192) return; }
  if (what_rule>=192 && what_rule<200)
    { R4.NextRule(what_rule);
      if (what_rule<200) return; }
  if (what_rule>=200 && what_rule<212)
    { R5.NextRule(what_rule);
      if (what_rule<212) return; }
  if (what_rule>=212 && what_rule<224)
    { R6.NextRule(what_rule);
      if (what_rule<224) return; }
  if (what_rule>=224 && what_rule<228)
    { R7.NextRule(what_rule);
      if (what_rule<228) return; }
  if (what_rule>=228 && what_rule<240)
    { R8.NextRule(what_rule);
      if (what_rule<240) return; }
  if (what_rule>=240 && what_rule<276)
    { R9.NextRule(what_rule);
      if (what_rule<276) return; }
  if (what_rule>=276 && what_rule<324)
    { R10.NextRule(what_rule);
      if (what_rule<324) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=47) return R0.Condition(r-0);
  if (r>=48 && r<=95) return R1.Condition(r-48);
  if (r>=96 && r<=143) return R2.Condition(r-96);
  if (r>=144 && r<=191) return R3.Condition(r-144);
  if (r>=192 && r<=199) return R4.Condition(r-192);
  if (r>=200 && r<=211) return R5.Condition(r-200);
  if (r>=212 && r<=223) return R6.Condition(r-212);
  if (r>=224 && r<=227) return R7.Condition(r-224);
  if (r>=228 && r<=239) return R8.Condition(r-228);
  if (r>=240 && r<=275) return R9.Condition(r-240);
  if (r>=276 && r<=323) return R10.Condition(r-276);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=47) { R0.Code(r-0); return; } 
  if (r>=48 && r<=95) { R1.Code(r-48); return; } 
  if (r>=96 && r<=143) { R2.Code(r-96); return; } 
  if (r>=144 && r<=191) { R3.Code(r-144); return; } 
  if (r>=192 && r<=199) { R4.Code(r-192); return; } 
  if (r>=200 && r<=211) { R5.Code(r-200); return; } 
  if (r>=212 && r<=223) { R6.Code(r-212); return; } 
  if (r>=224 && r<=227) { R7.Code(r-224); return; } 
  if (r>=228 && r<=239) { R8.Code(r-228); return; } 
  if (r>=240 && r<=275) { R9.Code(r-240); return; } 
  if (r>=276 && r<=323) { R10.Code(r-276); return; } 
}
int Priority(unsigned short r)
{
  if (r<=47) { return R0.Priority(); } 
  if (r>=48 && r<=95) { return R1.Priority(); } 
  if (r>=96 && r<=143) { return R2.Priority(); } 
  if (r>=144 && r<=191) { return R3.Priority(); } 
  if (r>=192 && r<=199) { return R4.Priority(); } 
  if (r>=200 && r<=211) { return R5.Priority(); } 
  if (r>=212 && r<=223) { return R6.Priority(); } 
  if (r>=224 && r<=227) { return R7.Priority(); } 
  if (r>=228 && r<=239) { return R8.Priority(); } 
  if (r>=240 && r<=275) { return R9.Priority(); } 
  if (r>=276 && r<=323) { return R10.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=47) return R0.Name(r-0);
  if (r>=48 && r<=95) return R1.Name(r-48);
  if (r>=96 && r<=143) return R2.Name(r-96);
  if (r>=144 && r<=191) return R3.Name(r-144);
  if (r>=192 && r<=199) return R4.Name(r-192);
  if (r>=200 && r<=211) return R5.Name(r-200);
  if (r>=212 && r<=223) return R6.Name(r-212);
  if (r>=224 && r<=227) return R7.Name(r-224);
  if (r>=228 && r<=239) return R8.Name(r-228);
  if (r>=240 && r<=275) return R9.Name(r-240);
  if (r>=276 && r<=323) return R10.Name(r-276);
  return NULL;
}
};
const unsigned numrules = 324;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 324


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
mu_node.clear();
mu_auxdata.clear();
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

    // r-value is other type: mu_n[1].goal_value(mu_E);

    // set carelist 
    // carelist.append("mu_i");
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
const rulerec invariants[] = {
{ NULL, NULL, NULL, FALSE }};
const unsigned short numinvariants = 0;

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
void mu_1_data_type::Permute(PermSet& Perm, int i)
{
  static mu_1_data_type temp("Permute_mu_1_data_type",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1_data_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_data_type::Canonicalize(PermSet& Perm){};
void mu_1_data_type::SimpleLimit(PermSet& Perm){}
void mu_1_data_type::ArrayLimit(PermSet& Perm) {}
void mu_1_data_type::Limit(PermSet& Perm){}
void mu_1_data_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
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
void mu_1_line_dir_type::Permute(PermSet& Perm, int i)
{
  static mu_1_line_dir_type temp("Permute_mu_1_line_dir_type",-1);
  int j;
  for (j=0; j<4; j++)
    array[j].Permute(Perm, i);
};
void mu_1_line_dir_type::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_line_dir_type::Canonicalize(PermSet& Perm){};
void mu_1_line_dir_type::SimpleLimit(PermSet& Perm){}
void mu_1_line_dir_type::ArrayLimit(PermSet& Perm) {}
void mu_1_line_dir_type::Limit(PermSet& Perm){}
void mu_1_line_dir_type::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_node_bool_array::Permute(PermSet& Perm, int i)
{
  static mu_1_node_bool_array temp("Permute_mu_1_node_bool_array",-1);
  int j;
  for (j=0; j<4; j++)
    array[j].Permute(Perm, i);
};
void mu_1_node_bool_array::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1_node_bool_array::Canonicalize(PermSet& Perm){};
void mu_1_node_bool_array::SimpleLimit(PermSet& Perm){}
void mu_1_node_bool_array::ArrayLimit(PermSet& Perm) {}
void mu_1_node_bool_array::Limit(PermSet& Perm){}
void mu_1_node_bool_array::MultisetLimit(PermSet& Perm)
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
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<1; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<1; j++)
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
  for (j=0; j<3; j++)
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
  for (j=0; j<3; j++)
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
