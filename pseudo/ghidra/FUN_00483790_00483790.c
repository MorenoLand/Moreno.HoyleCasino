// FUN_00483790  00483790

void __fastcall FUN_00483790(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_24;
  undefined4 local_18;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_11 = 0;
  local_18 = 0xffffffff;
  cVar1 = FUN_00480f80();
  piVar2 = (int *)FUN_005f2a60(0x30e7a3,0);
  uVar3 = FUN_00630f40((&PTR_s_SID_POKERTOURNAMENT_LEAVE_0071e860)[cVar1 == '\0']);
  (**(code **)(*piVar2 + 0xe0))(uVar3);
  cVar1 = FUN_00480ea0();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(DAT_00791eb8 + 4) + 0x1c))(0);
  }
  else {
    iVar4 = FUN_00480c80();
    cVar1 = FUN_00480f80();
    if (cVar1 == '\0') {
      cVar1 = FUN_004810c0(iVar4);
      if (cVar1 == '\0') {
        local_11 = 1;
        local_18 = 0xffffffff;
      }
    }
    else {
      local_11 = 1;
      local_18 = *(undefined4 *)(param_1 + 0x400);
    }
    FUN_00481500(iVar4,&local_8,&local_10,&local_c);
    FUN_005dcb00(0);
    iVar5 = FUN_0063aac0();
    FUN_004fc950(iVar4 + -1,local_11,local_18,iVar5 + 4,local_8,local_10,local_c);
    for (local_24 = 0; local_24 < 7; local_24 = local_24 + 1) {
      *(undefined4 *)(param_1 + 0x3e4 + local_24 * 4) = 0xffffffff;
    }
  }
  return;
}

