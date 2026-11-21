// FUN_00583830  00583830

void __fastcall FUN_00583830(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  
  FUN_00583aa0();
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  FUN_00583ae0();
  local_8 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) {
      FUN_00583900();
      return;
    }
    FUN_005dcb00(local_8);
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 2) {
LAB_005838c7:
      bVar1 = true;
    }
    else {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 3) goto LAB_005838c7;
      bVar1 = false;
    }
    if (bVar1) {
      FUN_005e1410(local_8);
    }
    local_8 = local_8 + 1;
  } while( true );
}

