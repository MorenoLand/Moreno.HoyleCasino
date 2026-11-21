// FUN_0062d710  0062d710

uint __fastcall FUN_0062d710(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = alGetError(param_1);
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar2 = alGetString(iVar1);
    uVar3 = FUN_0062fde0("OpenAL error was raised:\n%s\n",uVar2);
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}

