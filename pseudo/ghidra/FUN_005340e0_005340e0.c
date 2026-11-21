// FUN_005340e0  005340e0

void __thiscall FUN_005340e0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined8 local_c;
  
  local_c = FUN_0064c8a0(0,0,param_1);
  *param_3 = local_c;
  puVar2 = (undefined4 *)FUN_005d0cd0(local_14);
  puVar2 = (undefined4 *)FUN_0064c5c0(local_1c,*puVar2,puVar2[1]);
  uVar1 = puVar2[1];
  *(undefined4 *)param_3 = *puVar2;
  *(undefined4 *)((int)param_3 + 4) = uVar1;
  return;
}

