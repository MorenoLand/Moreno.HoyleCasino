// FUN_0043d140  0043d140

void * __thiscall FUN_0043d140(void *param_1,uint param_2)

{
  FUN_0043bbb0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

