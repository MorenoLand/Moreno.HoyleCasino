// FUN_00521a30  00521a30

void __thiscall FUN_00521a30(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_2c [8];
  undefined8 local_24;
  undefined8 local_1c;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_24 = FUN_0064c8a0(0,0,param_1);
  local_1c = local_24;
  local_8 = FUN_00528000();
  local_14 = (**(code **)(*DAT_00793370 + 0x2b0))();
  local_c = (**(code **)(*DAT_00793370 + 0x2b4))();
  piVar1 = (int *)FUN_005d5a90(local_2c);
  local_10 = *piVar1;
  iVar2 = FUN_00521660(param_2);
  local_1c._0_4_ = iVar2;
  if ((((param_3 != 0) && (param_3 < local_10)) && (param_3 < local_c)) && (local_14 < param_3)) {
    local_1c._0_4_ = param_3;
  }
  iVar3 = FUN_0063aac0();
  iVar2 = param_2;
  iVar4 = FUN_00521900(param_2);
  FUN_0062fde0("%s: bets $%d.00 on %s [%d]\n",iVar3 + 4,(int)local_1c,(&PTR_DAT_00721c78)[iVar4],
               iVar2);
  (**(code **)(**(int **)(DAT_00793374 + 4 + param_2 * 4) + 0xc4))(&local_1c,0,1);
  return;
}

