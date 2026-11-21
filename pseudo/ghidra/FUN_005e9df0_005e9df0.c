// FUN_005e9df0  005e9df0

void * __thiscall FUN_005e9df0(void *param_1,uint param_2)

{
  FUN_005e88b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

