#include <nan.h>
#include <node.h>
#include <v8.h>

using v8::String;
using v8::FunctionTemplate;
using v8::Value;
using v8::Local;
using Nan::GetFunction;
using Nan::New;
using Nan::Set;

NAN_METHOD(Hello) {
  info.GetReturnValue().Set(0);
}

NAN_MODULE_INIT(Init) {
  Set(target, New<String>("hello").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(Hello)).ToLocalChecked());
}

NODE_MODULE({{basename}}, Init)
