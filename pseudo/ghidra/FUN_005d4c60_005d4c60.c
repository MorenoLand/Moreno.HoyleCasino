// FUN_005d4c60  005d4c60

void * __thiscall FUN_005d4c60(void *param_1,uint param_2)

{
  FUN_005d15e0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

