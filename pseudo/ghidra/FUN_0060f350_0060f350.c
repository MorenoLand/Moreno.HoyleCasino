// FUN_0060f350  0060f350

void * __thiscall FUN_0060f350(void *param_1,uint param_2)

{
  FUN_0060d010();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

