// FUN_00602020  00602020

void __thiscall FUN_00602020(int *param_1,int param_2)

{
  char cVar1;
  
  if (((char)param_1[2] == '\0') &&
     ((*(char *)((int)param_1 + 0x1b5) == '\0' || (*(char *)((int)param_1 + 9) == '\0')))) {
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (cVar1 == '\0') {
      (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,0);
      (**(code **)(*param_1 + 0xd8))(0);
    }
    else if (*(char *)(param_2 + 4) == '\0') {
      (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,3);
      (**(code **)(*param_1 + 0xd8))(3);
      *(undefined1 *)(param_2 + 4) = 1;
    }
    else {
      (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,0);
      (**(code **)(*param_1 + 0xd8))(0);
    }
  }
  else {
    *(undefined1 *)(param_2 + 4) = 1;
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (cVar1 == '\0') {
      (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,0);
      (**(code **)(*param_1 + 0xd8))(0);
      FUN_005f5df0(0);
    }
    else {
      (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,1);
      (**(code **)(*param_1 + 0xd8))(1);
    }
  }
  return;
}

