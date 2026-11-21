// FUN_005fc000  005fc000

void * __thiscall FUN_005fc000(void *param_1,uint param_2)

{
  FUN_005f79f0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

