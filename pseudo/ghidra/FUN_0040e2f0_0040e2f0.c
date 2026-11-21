// FUN_0040e2f0  0040e2f0

void __fastcall FUN_0040e2f0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char local_40 [52];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(param_1 + 4) != 4) || (iVar2 = FUN_00419530(4,0), 2 < iVar2)) ||
     (iVar2 = FUN_005eb220(), iVar2 != 0x35)) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
    }
    local_8 = 0;
    while (iVar2 = FUN_004194c0(*(undefined4 *)(param_1 + 4)), local_8 < iVar2) {
      iVar2 = FUN_004198d0(*(undefined4 *)(param_1 + 4),local_8);
      iVar3 = FUN_004197d0(*(undefined4 *)(param_1 + 4),local_8);
      if (*(int *)(param_1 + 4) == 4) {
        uVar4 = FUN_00419980(4,0);
        sprintf(local_40,"%d",uVar4);
      }
      else if ((iVar2 == iVar3) || (0x15 < iVar3)) {
        sprintf(local_40,"%d",iVar2);
      }
      else {
        sprintf(local_40,"%d/%d",iVar3,iVar2);
      }
      (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0xb4))(local_40);
      uVar4 = FUN_0040e2a0(local_8);
      uVar5 = FUN_0040e250(local_8);
      (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x44))(uVar5,uVar4);
      cVar1 = FUN_00418460();
      if (((cVar1 == '\0') ||
          (iVar2 = FUN_00419530(*(undefined4 *)(param_1 + 4),local_8), iVar2 < 2)) ||
         (iVar2 = FUN_005eb220(), iVar2 == 0x35)) {
        (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x74))();
      }
      local_8 = local_8 + 1;
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

