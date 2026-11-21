// FUN_005d7b00  005d7b00

void * __thiscall FUN_005d7b00(void *param_1,uint param_2)

{
  FUN_005d4f50();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

