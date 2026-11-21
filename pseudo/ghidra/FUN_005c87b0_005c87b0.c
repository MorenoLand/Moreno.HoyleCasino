// FUN_005c87b0  005c87b0

bool __thiscall FUN_005c87b0(int *param_1,char *param_2)

{
  char *_Source;
  
  if (param_2 != (char *)0x0) {
    _Source = (char *)(**(code **)(*param_1 + 8))();
    strcpy(param_2,_Source);
  }
  return param_2 != (char *)0x0;
}

