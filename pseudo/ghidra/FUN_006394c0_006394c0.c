// FUN_006394c0  006394c0

undefined4 __thiscall FUN_006394c0(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [12];
  undefined1 local_10 [12];
  
  if (param_3 == '\0') {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x1ec))(local_1c,param_2,param_1);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x1ec))(local_10,param_2);
    uVar3 = *puVar1;
  }
  return uVar3;
}

