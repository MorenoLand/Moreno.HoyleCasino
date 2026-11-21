// FUN_00583190  00583190

void * __thiscall FUN_00583190(void *param_1,uint param_2)

{
  FUN_00582f70();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

