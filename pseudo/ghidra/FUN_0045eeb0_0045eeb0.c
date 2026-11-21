// FUN_0045eeb0  0045eeb0

undefined4 __thiscall FUN_0045eeb0(undefined4 param_1,undefined1 *param_2)

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
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    uVar2 = 1;
  }
  return uVar2;
}

