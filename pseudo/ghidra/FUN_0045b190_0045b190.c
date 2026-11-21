// FUN_0045b190  0045b190

void * __thiscall FUN_0045b190(void *param_1,uint param_2)

{
  FUN_0045a160();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

