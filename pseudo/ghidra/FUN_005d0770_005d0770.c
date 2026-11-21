// FUN_005d0770  005d0770

void * __thiscall FUN_005d0770(void *param_1,uint param_2)

{
  FUN_005cdc00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

