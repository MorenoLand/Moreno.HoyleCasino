// FUN_00656230  00656230

undefined1 FUN_00656230(undefined4 param_1,int *param_2)

{
  char cVar1;
  
  if ((param_2 != (int *)0x0) && (cVar1 = (**(code **)(*param_2 + 0x84))(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

