// FUN_005a1c90  005a1c90

void * __thiscall FUN_005a1c90(void *param_1,uint param_2)

{
  FUN_005a13e0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

