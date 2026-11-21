// FUN_00404680  00404680

void __thiscall FUN_00404680(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_114 [260];
  uint local_10;
  undefined8 local_c;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_00401bc0();
  FUN_00407bb0();
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = FUN_005df700(0xffffffff);
    if (cVar2 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(6,&DAT_00705308);
    }
    cVar2 = FUN_00407de0(param_2);
    if (cVar2 == '\0') {
      FUN_005dcb00(param_2);
      iVar4 = FUN_005d5a50();
      iVar5 = (**(code **)(*DAT_007902ec + 0x2b0))();
      if (iVar4 < iVar5) {
        cVar2 = FUN_005da7b0();
        if (cVar2 == '\0') {
          uVar6 = FUN_005dcb00(param_2);
          FUN_005dbb70(uVar6);
        }
        else {
          iVar4 = FUN_005dcb00(param_2);
          *(undefined1 *)(iVar4 + 0x4a1) = 1;
          FUN_00404200();
        }
        goto LAB_00404aba;
      }
    }
    FUN_00401fb0();
  }
  else if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    uVar6 = FUN_00637810(2);
    FUN_005da360(uVar6);
  }
  else {
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_005dcb00(param_2);
    iVar4 = FUN_005d5a50();
    iVar5 = (**(code **)(*DAT_007902ec + 0x2b0))();
    if (iVar4 < iVar5) {
      cVar2 = FUN_005da7b0();
      if (cVar2 == '\0') {
        FUN_005d9570(param_2);
      }
      else {
        iVar4 = FUN_005dcb00(param_2);
        *(undefined1 *)(iVar4 + 0x4a1) = 1;
      }
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
    }
    else {
      uVar7 = 0;
      uVar6 = FUN_00401040(param_2);
      local_c = FUN_0064c8a0(uVar6,uVar7);
      iVar5 = FUN_0062fc30(0,100);
      iVar4 = DAT_007902f0;
      if (iVar5 < 0x5a) {
        iVar5 = FUN_0062fc30(0,100);
        iVar4 = DAT_007902f0;
        if (iVar5 < 0x32) {
          *(undefined4 *)(DAT_007902f0 + 0x10e0) = 5;
          *(int *)(iVar4 + 0x10e4) = param_2;
          (**(code **)(**(int **)(DAT_007902f0 + 0xc + param_2 * 0xc) + 0xc4))(&local_c,0,1);
        }
        else {
          *(undefined4 *)(DAT_007902f0 + 0x10e0) = 4;
          *(int *)(iVar4 + 0x10e4) = param_2;
          (**(code **)(**(int **)(DAT_007902f0 + 8 + param_2 * 0xc) + 0xc4))(&local_c,0,1);
        }
      }
      else {
        *(undefined4 *)(DAT_007902f0 + 0x10e0) = 6;
        *(int *)(iVar4 + 0x10e4) = param_2;
        (**(code **)(**(int **)(DAT_007902f0 + 4 + param_2 * 0xc) + 0xc4))(&local_c,0,1);
      }
      sprintf(local_114,"AI player %d added %d to bet\n",param_2,(undefined4)local_c);
      FUN_0062fde0(local_114);
      iVar4 = FUN_00407bb0();
      *(undefined1 *)(iVar4 + 0x4a0) = 1;
      (**(code **)(*(int *)DAT_007902ec[1] + 8))(1,0);
    }
  }
LAB_00404aba:
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

