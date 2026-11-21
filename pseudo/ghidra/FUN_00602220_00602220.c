// FUN_00602220  00602220

void __thiscall FUN_00602220(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = tolower((int)*(char *)(param_2 + 0x14));
  if (iVar2 != *(char *)((int)param_1 + 0x1a9)) {
    iVar2 = tolower((int)*(char *)(param_2 + 0x14));
    if (iVar2 != *(char *)((int)param_1 + 0x1aa)) {
      bVar1 = false;
      goto LAB_00602277;
    }
  }
  bVar1 = true;
LAB_00602277:
  (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,1);
  (**(code **)(*param_1 + 0xd8))(1);
  FUN_00613f80();
  FUN_005e9f00(100);
  (**(code **)(*DAT_015e55e8 + 0x7c))(param_1,0);
  (**(code **)(*param_1 + 0xd8))(0);
  *(undefined1 *)(param_2 + 4) = 1;
  if (bVar1) {
    (**(code **)(*param_1 + 0xc0))();
  }
  else {
    (**(code **)(*param_1 + 0xc4))();
  }
  return;
}

