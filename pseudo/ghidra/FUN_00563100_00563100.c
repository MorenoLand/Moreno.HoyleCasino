// FUN_00563100  00563100

void __thiscall FUN_00563100(int *param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(DAT_0079343c + 0x3c) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (cVar1 == '\0') {
      if ((char)param_1[0x78] == '\0') {
        (**(code **)(*param_1 + 0xb0))(0);
      }
      else {
        (**(code **)(*param_1 + 0xb0))(3);
      }
    }
    else {
      *(undefined1 *)(param_2 + 4) = 1;
      if ((char)param_1[0x78] == '\0') {
        (**(code **)(*param_1 + 0xb0))(2);
      }
    }
  }
  FUN_005f4fc0(param_2);
  return;
}

