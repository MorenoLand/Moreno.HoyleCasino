// FUN_005dcb00  005dcb00

undefined4 __thiscall FUN_005dcb00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((DAT_0162ee84 != (int *)0x0) && (DAT_0162ee84[0x16] != 0)) && (-1 < param_2)) &&
     (iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1), param_2 < iVar1)) {
    uVar2 = __RTDynamicCast(*(undefined4 *)(DAT_0162ee84[0x16] + param_2 * 4),0,
                            &Player::RTTI_Type_Descriptor,&CasinoPlayer::RTTI_Type_Descriptor,0);
    return uVar2;
  }
  return 0;
}

