// FUN_005ac620  005ac620

void __fastcall FUN_005ac620(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char local_44 [52];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (((*(int *)(param_1 + 4) != 4) || (iVar2 = FUN_005b5830(4,0), 2 < iVar2)) ||
     (iVar2 = FUN_005eb220(), iVar2 != 0x35)) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x70))();
    }
    local_c = 0;
    while (iVar2 = FUN_005b58f0(*(undefined4 *)(param_1 + 4)), local_c < iVar2) {
      iVar2 = FUN_005b5260(*(undefined4 *)(param_1 + 4),local_c);
      iVar3 = FUN_005b4f50(*(undefined4 *)(param_1 + 4),local_c);
      if (*(int *)(param_1 + 4) == 4) {
        uVar4 = FUN_005b4f50(4,0);
        sprintf(local_44,"%d",uVar4);
      }
      else if ((iVar2 == iVar3) || (0x15 < iVar3)) {
        sprintf(local_44,"%d",iVar2);
      }
      else {
        sprintf(local_44,"%d/%d",iVar3,iVar2);
      }
      (**(code **)(**(int **)(param_1 + 8 + local_c * 4) + 0xb4))(local_44);
      uVar4 = FUN_005ac1f0(local_c);
      uVar5 = FUN_005ac1a0(local_c);
      (**(code **)(**(int **)(param_1 + 8 + local_c * 4) + 0x44))(uVar5,uVar4);
      cVar1 = FUN_005b7d50();
      if (((cVar1 == '\0') ||
          (iVar2 = FUN_005b5830(*(undefined4 *)(param_1 + 4),local_c), iVar2 < 2)) ||
         (iVar2 = FUN_005eb220(), iVar2 == 0x35)) {
        (**(code **)(**(int **)(param_1 + 8 + local_c * 4) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 8 + local_c * 4) + 0x74))();
      }
      local_c = local_c + 1;
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

