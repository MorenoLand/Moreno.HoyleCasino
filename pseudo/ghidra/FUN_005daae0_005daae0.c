// FUN_005daae0  005daae0

undefined4 * __thiscall FUN_005daae0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  local_10 = FUN_00636610(param_1);
  FUN_005daa20(&local_20);
  local_c = 0;
  do {
    if (local_10 <= local_c) {
LAB_005dab5b:
      local_18 = local_20;
      local_14 = local_1c;
      for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
        if (local_8 != local_c) {
          FUN_005dcb00(local_c);
          cVar1 = FUN_005d5840();
          if (cVar1 != '\0') {
            puVar3 = local_30;
            FUN_005dcb00(local_c,puVar3);
            puVar2 = (undefined4 *)FUN_005d5a90(puVar3);
            puVar2 = (undefined4 *)FUN_0064c630(local_38,*puVar2,puVar2[1]);
            cVar1 = FUN_0064c6e0(*puVar2,puVar2[1]);
            if (cVar1 != '\0') {
              puVar3 = local_40;
              FUN_005dcb00(local_c,puVar3);
              puVar2 = (undefined4 *)FUN_005d5a90(puVar3);
              puVar2 = (undefined4 *)FUN_0064c630(local_48,*puVar2,puVar2[1]);
              local_18 = *puVar2;
              local_14 = puVar2[1];
            }
          }
        }
      }
      *param_2 = local_18;
      param_2[1] = local_14;
      return param_2;
    }
    puVar3 = local_28;
    FUN_005dcb00(local_c,puVar3);
    puVar2 = (undefined4 *)FUN_005d5a90(puVar3);
    cVar1 = FUN_0064c720(*puVar2,puVar2[1]);
    if (cVar1 != '\0') {
      local_8 = local_c;
      goto LAB_005dab5b;
    }
    local_c = local_c + 1;
  } while( true );
}

