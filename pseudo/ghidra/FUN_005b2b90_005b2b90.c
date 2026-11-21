// FUN_005b2b90  005b2b90

undefined4 __thiscall FUN_005b2b90(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  FUN_005de600(0xffffffff,param_1);
  puVar1 = (undefined1 *)FUN_0063aae0(uVar2);
  if ((param_2 == (undefined1 *)0x0) || (puVar1 == (undefined1 *)0x0)) {
    uVar2 = 0;
  }
  else {
    puVar1[0xd] = param_2[0xd];
    puVar1[9] = param_2[9];
    puVar1[0xc] = param_2[0xc];
    puVar1[2] = param_2[2];
    puVar1[0xb] = param_2[0xb];
    puVar1[3] = param_2[3];
    puVar1[10] = param_2[10];
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[8] = param_2[8];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[7];
    uVar2 = 1;
  }
  return uVar2;
}

