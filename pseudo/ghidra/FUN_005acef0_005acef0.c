// FUN_005acef0  005acef0

void * __thiscall FUN_005acef0(void *param_1,uint param_2)

{
  FUN_005abda0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

