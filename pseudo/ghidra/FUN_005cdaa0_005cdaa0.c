// FUN_005cdaa0  005cdaa0

void * __thiscall FUN_005cdaa0(void *param_1,uint param_2)

{
  FUN_005cd390();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

