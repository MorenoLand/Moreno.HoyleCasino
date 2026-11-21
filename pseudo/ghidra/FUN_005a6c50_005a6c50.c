// FUN_005a6c50  005a6c50

void * __thiscall FUN_005a6c50(void *param_1,uint param_2)

{
  FUN_005a4940();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

