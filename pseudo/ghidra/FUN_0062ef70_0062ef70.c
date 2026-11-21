// FUN_0062ef70  0062ef70

undefined1 __thiscall FUN_0062ef70(int *param_1,int param_2)

{
  char cVar1;
  
  if (((param_2 != 0x20) && (param_2 != 9)) &&
     (cVar1 = (**(code **)(*param_1 + 0x1c))(param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

