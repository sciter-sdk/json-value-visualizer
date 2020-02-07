
#include <sciter-x.h>

typedef std::pair<sciter::value, sciter::value> json_value_pair;

extern json_value_pair __visualize_json_value_pair = {};

int test() {
  sciter::value jempty;
  sciter::value jnull = sciter::value::null();
  sciter::value jbool(true);
  sciter::value jint(1);
  sciter::value jfloat(3.5);
  sciter::value jstring(L"string value");
  sciter::value jsymbol = sciter::value::symbol(aux::chars_of(L"symbol value"));
  sciter::value jerrro = sciter::value::make_error(L"error value");
  sciter::value jsecure = sciter::value::secure_string(L"secured value", 13);
  sciter::value jbytes(aux::bytes((unsigned char*)"bytes", 5));

  sciter::value jcolor = sciter::value::color(0x00FF0000);
  sciter::value jduration = sciter::value::duration(10);
  sciter::value jangle = sciter::value::angle(90);
  sciter::value jcurrency = sciter::value::currency(1);

  sciter::value jarray = sciter::value::make_array(7);
  jarray[0] = jint;
  jarray[1] = jfloat;
  jarray[2] = jstring;

  sciter::value jmap = sciter::value::make_map();
  jmap[L"one"] = 1;
  jmap[L"two"] = 2;
  jmap[L"s"] = jstring;

  sciter::value(*pf)() = []() { return sciter::value(false); };
  sciter::value jfunc = sciter::vfunc(pf);

  return 0;
}
