// FUN_0054a050  0054a050

uint __thiscall FUN_0054a050(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00548f80(param_2);
  if (uVar1 == 2) {
    iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 0x28 + param_2 * 0xc));
    iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 0x2a + param_2 * 0xc));
    uVar1 = (uint)(iVar2 == iVar3);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

