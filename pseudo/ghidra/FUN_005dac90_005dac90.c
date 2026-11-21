// FUN_005dac90  005dac90

int __fastcall FUN_005dac90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  local_10 = FUN_00636610(param_1);
  local_20 = FUN_0064c8a0(0,0);
  local_18 = local_20;
  iVar2 = FUN_005daf50();
  if (iVar2 == -1) {
    local_c = 0;
    while( true ) {
      if (local_10 <= local_c) break;
      puVar4 = local_28;
      uVar5 = local_18;
      FUN_005dcb00(local_c,puVar4,local_18);
      FUN_005d5a90(puVar4);
      cVar1 = FUN_0064c6e0(uVar5);
      if (cVar1 == '\0') {
        puVar4 = local_38;
        uVar5 = local_18;
        FUN_005dcb00(local_c,puVar4,local_18);
        FUN_005d5a90(puVar4);
        cVar1 = FUN_0064c720(uVar5);
        if (cVar1 != '\0') {
          local_8 = -1;
        }
      }
      else {
        puVar4 = local_30;
        FUN_005dcb00(local_c,puVar4);
        puVar3 = (undefined8 *)FUN_005d5a90(puVar4);
        local_18 = *puVar3;
        local_8 = local_c;
      }
      local_c = local_c + 1;
    }
  }
  else {
    local_8 = FUN_005daf50();
  }
  return local_8;
}

