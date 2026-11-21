// FUN_005d0db0  005d0db0

int * __thiscall FUN_005d0db0(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 4) + param_3;
  FUN_005d0c30(&local_10,param_3);
  local_20 = FUN_0064c8a0(0,0);
  local_18 = local_20;
  cVar1 = FUN_005d0d60(param_3);
  if (cVar1 == '\0') {
    puVar4 = local_28;
    FUN_005dcb00(0,puVar4);
    puVar2 = (undefined4 *)FUN_005d5a90(puVar4);
    param_3 = FUN_005d0d30(*puVar2,puVar2[1]);
    local_8 = *(int *)(param_1 + 4) + param_3;
    piVar3 = (int *)FUN_005d0c30(local_30,param_3);
    local_10 = *piVar3;
    local_c = piVar3[1];
  }
  if (0xf423e < local_8) {
    param_3 = param_3 - (local_8 + -999999);
    local_8 = 999999;
    piVar3 = (int *)FUN_005d0c30(local_38,param_3);
    local_10 = *piVar3;
    local_c = piVar3[1];
  }
  local_18._0_4_ = local_10;
  local_18._4_4_ = local_c;
  if (param_3 != 0) {
    local_10 = -local_10;
    local_c = -local_c;
    FUN_005d1420(local_10,local_c);
    FUN_005d0a20(local_8);
  }
  *param_2 = (int)local_18;
  param_2[1] = local_18._4_4_;
  return param_2;
}

