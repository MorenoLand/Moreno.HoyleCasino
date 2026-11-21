// FUN_005d5fb0  005d5fb0

void __thiscall FUN_005d5fb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_c [8];
  
  FUN_005d6080(param_2,param_3);
  puVar1 = (undefined4 *)FUN_0064c5c0(local_c,param_2,param_3);
  FUN_005d5f80(*puVar1,puVar1[1]);
  FUN_005e7e40(*(undefined4 *)(param_1 + 4),1,*(undefined4 *)(param_1 + 0x4c4),
               *(undefined4 *)(param_1 + 0x4c8));
  return;
}

