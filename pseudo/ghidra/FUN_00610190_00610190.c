// FUN_00610190  00610190

void * __thiscall FUN_00610190(void *param_1,uint param_2)

{
  FUN_0060f400();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

