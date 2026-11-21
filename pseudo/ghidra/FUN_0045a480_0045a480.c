// FUN_0045a480  0045a480

void __thiscall FUN_0045a480(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0x2b8] == *(int *)(DAT_00790738 + 0x104)) {
    FUN_005f4f50(param_2);
    cVar1 = FUN_005f56a0(param_2);
    if (cVar1 != '\0') {
      iVar3 = param_1[0x2b9];
      iVar2 = param_1[0x2b8];
      __RTDynamicCast(param_1[0x5e],0,&CasinoBet::RTTI_Type_Descriptor,
                      &PaiGowBet::RTTI_Type_Descriptor,0,iVar2,iVar3);
      cVar1 = FUN_00462730(iVar2,iVar3);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x18))(param_2);
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
  }
  return;
}

