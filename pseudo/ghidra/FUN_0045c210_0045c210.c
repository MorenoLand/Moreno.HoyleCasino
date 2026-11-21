// FUN_0045c210  0045c210

void FUN_0045c210(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 local_12c [8];
  undefined1 local_124 [8];
  undefined1 local_11c [8];
  char local_114 [260];
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_114,"Resolving player bet for player %d\n",param_1);
  FUN_0062fde0(local_114);
  if (*(int *)(DAT_00790738 + 0x10c) == 4) {
    FUN_005dcb00(param_1);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(undefined4 *)(DAT_00790738 + 300) =
           *(undefined4 *)(*(int *)(DAT_00790738 + 4) + 0x48 + param_1 * 0x20);
    }
  }
  else {
    *(undefined1 *)(DAT_00790738 + *(int *)(DAT_00790738 + 0x10c) + 0xe0) = 1;
  }
  *(undefined1 *)(DAT_00790738 + param_1 + 0xe0) = 1;
  FUN_004587e0();
  uVar5 = (undefined2)((uint)local_12c >> 0x10);
  FUN_00452fd0(CONCAT22(uVar5,*(undefined2 *)
                               (DAT_00790738 + 0xa2 + *(int *)(DAT_00790738 + 0x10c) * 2)),
               CONCAT22(uVar5,*(undefined2 *)
                               (DAT_00790738 + 0xac + *(int *)(DAT_00790738 + 0x10c) * 2)),local_12c
              );
  uVar5 = (undefined2)((uint)local_10 >> 0x10);
  FUN_004530b0(*(undefined4 *)(DAT_00790738 + 0x10c),
               CONCAT22(uVar5,*(undefined2 *)
                               (DAT_00790738 + 0xa2 + *(int *)(DAT_00790738 + 0x10c) * 2)),
               CONCAT22(uVar5,*(undefined2 *)
                               (DAT_00790738 + 0xac + *(int *)(DAT_00790738 + 0x10c) * 2)),local_10)
  ;
  uVar5 = (undefined2)((uint)local_124 >> 0x10);
  FUN_00452fd0(CONCAT22(uVar5,*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2)),
               CONCAT22(uVar5,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)),local_124);
  uVar5 = (undefined2)((uint)local_11c >> 0x10);
  FUN_004530b0(param_1,CONCAT22(uVar5,*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2)),
               CONCAT22(uVar5,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)),local_11c);
  cVar2 = FUN_004534b0(local_12c,local_124);
  *(bool *)(DAT_00790738 + param_1 + 0xea) = cVar2 == '\0';
  cVar2 = FUN_00453550(local_10,local_11c);
  *(bool *)(DAT_00790738 + param_1 + 0xef) = cVar2 == '\0';
  FUN_00461600(param_1);
  if (param_1 == 4) {
    *(undefined1 *)(DAT_00790738 + 0x115) = 1;
  }
  else {
    iVar4 = FUN_005dcb00(param_1);
    *(undefined1 *)(iVar4 + 0x4a2) = 1;
    iVar4 = DAT_00790738;
    *(undefined4 *)(DAT_00790738 + 0x124) = 5;
    *(undefined4 *)(iVar4 + 0x128) = 4;
  }
  (**(code **)(**(int **)(DAT_00790734 + 4) + 8))(1,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

