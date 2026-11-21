// FUN_00406af0  00406af0

undefined4 __thiscall FUN_00406af0(undefined4 param_1,undefined1 *param_2)

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
    uVar2 = 1;
  }
  return uVar2;
}

