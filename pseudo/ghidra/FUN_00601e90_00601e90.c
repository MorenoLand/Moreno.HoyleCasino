// FUN_00601e90  00601e90

void __thiscall FUN_00601e90(int *param_1,int param_2)

{
  char cVar1;
  
  FUN_005f89f0(0);
  FUN_005f5df0(0);
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,0);
    (**(code **)(*param_1 + 0xd8))(0);
  }
  else {
    (**(code **)(*param_1 + 0xd8))(3);
    (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,3);
    (**(code **)(*param_1 + 0xc0))();
  }
  return;
}

