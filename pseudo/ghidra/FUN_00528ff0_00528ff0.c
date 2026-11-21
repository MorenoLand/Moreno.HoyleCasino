// FUN_00528ff0  00528ff0

void __thiscall FUN_00528ff0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  local_14 = FUN_0064c8a0(0,0);
  local_8 = (**(code **)(*DAT_007947e4 + 0x2b4))();
  bVar1 = false;
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0xd38);
  }
  FUN_005dcb00(param_2);
  iVar3 = FUN_005d5a50();
  iVar4 = (**(code **)(*DAT_00793370 + 0x2b0))();
  if (iVar4 <= iVar3) {
    for (local_c = 0; local_c < 0xa1; local_c = local_c + 1) {
      if (*(int *)(param_1 + 0x288 + param_2 * 0x284 + local_c * 4) != 0) {
        cVar2 = (**(code **)(**(int **)(param_1 + 4 + local_c * 4) + 0xb0))();
        if (cVar2 != '\0') {
          local_14._0_4_ = *(int *)(param_1 + 0x288 + param_2 * 0x284 + local_c * 4);
          FUN_005dcb00(param_2);
          iVar3 = FUN_005d5a50();
          if (iVar3 < (int)local_14) {
            uVar5 = FUN_00630f40("SID_ROULETTE_RESTORELASTBETS",0);
            uVar5 = FUN_00630f40("SID_ROULETTE_INSUFFICIENTFUNDS",uVar5);
            FUN_0062ff10(uVar5);
            return;
          }
          if (*(int *)(*(int *)(param_1 + 4 + local_c * 4) + 0x48 + param_2 * 0x20) == local_8) {
            if (!bVar1) {
              uVar5 = FUN_00630f40("SID_CASINO_MAXBET",0);
              uVar5 = FUN_00630f40("SID_CASINO_BETMAXIMUM",uVar5);
              FUN_0062ff10(uVar5);
            }
            bVar1 = true;
          }
          else {
            (**(code **)(**(int **)(param_1 + 4 + local_c * 4) + 0xc4))(&local_14,0,1);
          }
        }
      }
    }
  }
  return;
}

