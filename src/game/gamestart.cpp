//������������������������������������������������������������������������������
//
//   HEBORIS [�w�{���X] 2001 Ver1.60��1 / 2000.11.05 (Sun) �` 2001.07.29 (Sun)
//
//                         (c) 1998-2001 Kenji Hoshimoto
//
//   Version 1.60 (02/03/31) ���ړ����C���A�t�B�[���h�̔w�i��������悤��
//                           �u���b�N���ˑR������o�O���C��
//   Version 1.51 (01/12/04) �����Ă��܂��o�O���C��
//   Version 1.50 (01/11/26) �����L���O�@�\�ǉ� (�C���^�[�l�b�g�����L���O�Ή�)
//                           ���v���C�E�|�[�X�ENEXT�B���@�\�ǉ� �f����ʒǉ�
//                           �S�����{�[�i�X�ǉ� �f�r�����[�h�����������ȒP��
//                           ���̑������ς�
//
//������������������������������������������������������������������������������
/*
C7V4EX YGS2K+
�ENEXT�u���b�N�\���̍X�V���A�u���b�N�o���̏u�Ԃ�1�t���x��Ă��������C���i��sHOLD����HOLD�u���b�N���j
�E�n�߂�������Ă���~�b�V�����f�[�^�́Adebug=1�łȂ��ƕҏW�ł��Ȃ��悤�ɂ����B
�E�R���p�C�����A��ʏ㕔�ɕ\�����镶����ύX
�ESETTING > NUMFONT��SHARP�̎��́A�傫�������t�H���g�̃f�U�C����ύX

C7V3.8EX YGS2K+
�E�R���p�C�����ɉ摜��\���ł���YGS2k�����ł�W�������ɁB
�@�R���p�C���J�n���� \SE\welcome.wav ����܂��B�icompiling.ini�ŕύX�j
�EIRS�����ݒ�ŎB�������v���C�̏ڍו\���ł�
�@IRS STYLE �� IRS DISABLED �ƕ\������悤�ɕύX

�EMAX PLAYER �� SINGLE �̂Ƃ��ASETTING >> INPUT > INPUT TEST ��2P�̃L�[�{�[�h���͂�
�@�F������Ȃ����������C��
�E���̑����h���ŐF�X

C7V3.75EX YGS2K
�E�A�C�e���uREFLECT�v�ɒǉ����ʁB
�@�����̏u�ԁA�X�e�[�^�X�ُ���N���A���܂��B
�@1�l�p�A�C�e�����[�h�ł̓t�B�[���h�g�̐F���ς��A���ʎ��Ԃ�3�{�ɂȂ�A�U���A�C�e���̌��ʂ�
�@��x�����h���܂��B�i�h���ƁuGUARD!�v�ƕ\�������j
�E�A�C�e���uFEVER!�v�ōU���A�C�e����h���������uGUARD!�v�ƕ\������悤�ɕύX�B
�E�A�C�e���u180��FIELD�v�������ɐ�����Ԃ𒲐�

C7V3.7EX YGS2K
�E�A�C�e���Ȃǂɂ��u���b�N���������G�t�F�N�g��ύX
�EHOLD(��IHS)�����^�C�~���O�ύX�B�Ăѐ擪�ցB
�@��������ɐ�s�ړ����Ȃ����i�O�ցO�j
�E�A�C�e���u16t�v�̉��o��ύX
�E���̑����h���ŐF�X

C7V3.65EX YGS2K
�EDEVIL���[�h��ITEM MODE�����ցBDEATH+�Ƃ̕��p�͏o���܂���B
�@�ꕔ�̃A�C�e���͎��S�t���O�H
�E�E�C���h�E�^�C�g�����R���p�C�������f�[�^�ǂݍ��ݒ��ɕς���悤�ɂ����B
�E�ꕔ�̃A�C�e���ɂ�鉉�o���̊Ԃ�ARE�ɉ����ĕς���悤�ɂ����B
�@�i���ł�ARE����p���Ă�����̂�A�v���C���[�Ԃ̓������K�v�Ȃ��̂������j
�E���R�������̃u���b�N�c�����A�u��Ɂv�ł͂Ȃ��u1�u���b�N���ȏ㗎���������v�ɕύX

C7V3.6EX YGS2K
�EDEVIL-DOOM���x����
�@�ǂ��݂Ă�300-499�Ԃ��������ł����B�ق�Ƃ���(ry
�E�A�C�e���u�X�J�v�ɒǉ����ʂ������B
�@���x���㏸�Ȃ��A�X�R�A�E���C�������Z�Ȃ��ɂȂ�܂��B�@�A�b�[�I
�E�A�C�e�������x���G�t�F�N�g������
�@�������������g���Ă��܂����A�����������͋[���������i�_�Łj�ɐ؂�ւ��܂��B
�EMISSION�u�f�r�����[�h�v��OOBAKA�m���}����6�ɕύX�B
�@7�u���b�N���������A�o�O�ɂ��J�n�O�Ƀm���}��1�J�E���g����Ă������߁A����6�u���b�N�������B

C7V3.55EX YGS2K
�EVS���[�h�̑��x�ݒ�ɁAPRACTICE���Ɠ���favorits���g����悤�ɂȂ�܂����B
�@����ɔ����AOOBAKA�͉B�����x�ɂ��܂����B�@�����͂��Â���Ɓc�H
�E���v���C�ł̑����蒆�A������{����\������悤�ɂ����B
�E���𑜓x���̃f���ɏ����ǉ�
�EVS��goal�ݒ肪���x���̏ꍇ�A���x���X�g�b�v��goalLv�̎�O�݂̂ɂ����B
�Ehttp://www.tetrisconcept.com/forum/viewtopic.php?t=576�@�Ŏw�E����Ă���
�@�u���ʉ���1�t�������v���́ALITE�����łȂ�C7�n�ɂ�������̂�LITE�ɍ��킹���B

�ED.R.S��20G�̎��A�u���b�N�Œ��AARE���ɉ����ꂵ�����ƁA1�u���b�N���Œ�Ɠ�����
�@���̃u���b�N�܂ŏo�����Ă��������C���B
�ETLS�̋[�����̕��������邷���������C��

C7V3.5EX YGS2K
�E�������Ɠ����Ƀ��v���C�̋L�^���I�������ꍇ�A���v���C�ōŌ�̓���i���������j��
�@�Č�����Ȃ������C���B
�EMISSION��OOBAKA�Ńm���}��1�u���b�N�ɂ�2�J�E���g����Ă��������C��
�@�����[�h�̃X�N�E�F�A�N���A���Ƀ��C���������Ȃ��ꍇ�A�����1���C������オ�鎖�������������C��
�E�R���{�\�����A�C�e���uTIME STOP�v�Ŏ��Ԓ�~����悤�ɁB
�ETAP/TI���u���b�N�����G�t�F�N�g�̃A�j���[�V������2�{���ɂ��邷���𒲐�
�E�~�b�V�����ŁABGM19(tomoyo_eh_final)���g���Ȃ����������C��

C7V3.45EX YGS2K
�EDEVIL-DOOM���x�����B
�@ARE�͒����A�Œ�Ɖ����߂��Z���Ȃ�܂����B���Ղł̔�΂������Ȃ���₷���B
�EMASTER�E20G-#G4��quality cool(���xcool)���o�₷�����܂����B
�@�܂��ASP:rank110�ȍ~�͉������Ȃ��悤�ɂ��܂����B

�Eshowcombos�̗L���Ɋւ�炸�A�K���R���{�\�����o�Ă��������C���B

C7V3.4EX YGS2K
�ESRS-X�̃u���b�N����ύX���܂����B
�ESHOW COMBOS�啝�����B3�R�[�i�[T-spin��Back to Back ���\���ł��܂��B
�@�܂��A�\�������R���{���́u1���C���������܂܂Ȃ��R���{�v�ɕύX
�E��ʃ��t���b�V���̃^�C�~���O���u���������̑O�v�ɕύX�iLITE�Ɠ����j
�EARE + �����߂̍��v�l�����l�ȉ��̏ꍇ�ATAP/TI���u���b�N�����G�t�F�N�g�̃A�j���[�V�������x��2�{���ɂ��܂����B
�@�i���������ł̎��F���̊֌W�Łj
�ETi�̃v���`�i�u���b�N����`�����Ă�ƁA�����Ɍ���A�j���[�V�������m�F�ł����̂Ŕ����Ɍ��点�Ă݂��B
�@���łɃA�C�e���u���b�N�������Ɍ��点�Ă݂��B
�E�u���b�N�o���EIRS�EIHS�̏u�Ԃɔ�������]����1�t���[����Z�k
�E�v���C����NEXT�\������ς����Ȃ��悤�ɂ����B�iVS�ł̃A�C�e���u���b�N�o���ʒu�̊֌W�Łj

�E���x�����J���X�g�����A���[���˓��O�̃u���b�N�������Ă������o���ɁA�����߂𗭂߂��Ȃ������C��

C7V3.3EX YGS2K
�ETOMOYO ACE-TGT�ƃ~�b�V�����̃^�[�Q�b�g�Ńv���`�i�u���b�N�̔z�u�������_���ɂ��܂����B
�@1��ɂ�1�z�u����܂��B
�@���̓~�b�V�����ł�opt�l�Ŏw�肵�܂�(99�ɂ���Ɓc�H)�BTOMOYO-TGT�ł̓X�e�[�W��i�߂�ɂ�Đ��������Ȃ��Ă����܂��B
�EACE-TGT�̃X�e�[�W�������ǉ�

�E���v���C�I����ʂ�VS���v���C��I��������ԂŃ��j���[�ɖ߂�ƁA
�@SOLO���[�h�ł�gameMode��VS�̂܂܂����������C��
�E[buglist�f�ڃo�O]TOMOYO ACE-TGT�̃X�e�[�W21�ɓ��B����ƁA�����IRS��ACE+���ɂȂ�����C��
�@������recStageTime�֐��ł̔z��͈̔͂𒴂����w��ɂ�����

C7V3.2EX YGS2K
�EVS�f���Ō����������ƁA�f���Ȃ̂Ƀ��v���C�ۑ����j���[���o������C��
�EPRACTICE�ŏI��������ݒ肵���ꍇ�A�I�����Ƀu���b�N�������Ȃ��悤��
�E�I�[���h�X�^�C�����͎c���𖳌���
�EORIGINAL���[�h��15�����[�h�ǉ�

C7V3.1EX YGS2K
�Eheboris.ini�ɁABGM�t�F�[�h�A�E�g���x��ݒ�ł���@�\��ǉ��ifade_seed�j
�E���[�h���ɕ\������摜�𒲐�
�E3�R�[�i�[T-spin�����������Ƃ��̕\�����A����������ŕςɂȂ�̂��C���B
�@�Ⴆ�΁ADT�C����T-spin�_�u���E�g���v�����s���ƃg���v�����_�u���ƕ\������铙

C7V3.0EX VS REPLAY AVAILABLE
�EVS���v���C�̂�����C���@�c�ł����ƐM������(�M�E�ցE�L)
�@�iVS���[�h�J�n�̃^�C�~���O���A�v���C���ƃ��v���C���Ńv���C���[�Ԃ�1�t���̌덷���������i���X�e�[�^�XNo.10�j�j
�EVS���E���h�Ԃ�BIG���[�h���ێ�����Ȃ����������C��
�Ehebospr��png�����Ă���A�ǂ����g��k���`�掞�ɓ��ߐF����肭�����Ă��Ȃ������̂ŁA���߂��镔���̐F��ύX

C7V2.9EX VS REPLAY AVAILABLE
�EVS���[�h�̃��v���C���L�^�ł���悤�ɂȂ�܂����B
�@1�̃t�@�C����2�l���̃f�[�^���L�^���܂��B
�@���v���C���Ԃ�10���܂łł��B
�@CPU vs CPU�@�̃v���C�͋L�^�ł��܂���B
�@heboris.ini�́uitem_pro�v��ύX����ƁA�A�C�e���g�p���ɁA����܂��B
�EVS���|�C���g�}�b�`���ɂȂ�܂����BVS���j���[��HOLD+�㉺����ŏ����|�C���g��ύX�ł��܂��B
�E�u���b�N�Œ�̏u�Ԃɔ�������]����1�t���[��������ɒZ�k�iLITE�́uSKIP LOCKFLASH:SUPER�v�ɑ����j
�@D.R.S��ARE�X�L�b�v�\���͒Z�k���܂���i�����ARE�X�L�b�v���������Ă��܂����߁j
�E���v���C��40�܂ŕۑ��ł���悤�ɂ��܂����B
�E���v���C�ۑ����j���[��ǉ��@���v���C�����݂���ꍇ�A������x�̏�񂪕\������܂�
�@���v���C���[�Ƃ��A1�`40�ԂɃ��v���C��ۑ��ł��܂��B
�E�u���b�N�g�O�o������NEXT�x���𒲐�
�E���ۂɃv���C�����̊����x������DOOM���[�����x�𒲐�
�Eblock_spectrum = 1�@�̎��A���ړ��ł��c���𔭂���悤�ɁB�@�t�����j�^���Ƃ��܂�Ӗ��͖����H

�ESIMPLE-40L�E2min�̃��v���C�ŁA���x�������20G�ɂȂ�i����20G�ŎB�������v�������j�����C���B

C7V2.43EX YGS2K
�E���[�h���ɕ\������摜��ύX�@�����_���ŕω����܂�
�EACE-NORMAL�ƃ~�b�V�����̒ʏ탌�x���̑��x��x�߂ɂ���
�@�i�������f�r�����[�h�͋����x���g�p�j
�EROT�����[��1��]�@�����Ƃɔw�i��ς���悤��
�EEXCELLENT�\�����ɁuTRY AGAIN TO�c�v����u�����\������Ȃ������C��
�E�I�[���h�X�^�C����ARCADE�o�[�W������BIG�ɂ���ƃu���b�N�̃O���t�B�b�N���ω����Ȃ����������C��
�E�����[�h��BIG�u���b�N���V����X���[��������C��

�i�o�[�W�����ύX�����j
�E�n�[�h�u���b�N�����������A�n�[�h�u���b�N�������̏��������C������
�@�������Ȃ����������C��
�E����u���b�N���n�[�h�u���b�N�̎��Ƀ��C���������ƁA�A�C�e�����������Ȃ����������C��

C7V2.42EX YGS2K
�ECPU�Ƀ��[�����[���ɑ΂��郊�A�N�V������ǉ��B��]���͂��s��Ȃ��Ȃ�܂��B
�E�unmlroll_bgmloop�v��0���ƁA�ubgnroll_bgmloop�v�̐ݒ肪�������������C���B
�E�n�[�h�u���b�N�����E���ɂ���u���b�N�̏����G�t�F�N�g���o�Ă��Ȃ����������C���B
�ESIMPLE���X�N�E�F�A���[�h�����v���C�ōČ�����Ȃ��\�����������̂𑽕��C��
�E�ΐ�ŁADS-RANDOM����オ��Ɋւ��āAATTACK�̌��ێ�����4���ɕύX�B
�E�X�N�E�F�A��3�R�[�i�[T-SPIN���s�������A�t���[�t�H�[���Ƌ��ɑS�u���b�N��j�Љ�����悤�ɁB
�EBIG�p�������iBigInit�j�͂Ƃ����ɕs�v�ɂȂ��Ă����̂ō폜
�E�~�b�V�����uBIG�v�̎��ŉ��y���ς��ꍇ�ɗ���������ēx�C��

C7V2.41EX YGS2K
�E�ΐ�ŁA���肪DS-RANDOM����オ��̎��̌��ێ������X�^�C�����Ƃɕς���悤�ɂ����B
�@�iNORMAL 6���AATTACK 3���ADEFENCE & ITEM�A7���j
�EGAMEOVER�\����̔w�i�t�F�[�h�Ɋւ�������C��
�E�A�C�e���u���b�N�������A���쒆�̃u���b�N���A�C�e���Ȃ�΁A����𔭓�����悤��
�EDS-RANDOM����オ��̌��ێ�����1�����̊ԈႢ���������̂��C��

C7V2.4EX YGS2K
�E�X�^�b�t���[���iBEGINNER�ȊO�j�ɖ�����]�΍��ǉ�
�@bgm���^�C�~���O�悭�I��点�邽�߂ɂ��A������]�͔����܂��傤
�E�ΐ�Ɂu�X�^�C���v��ǉ��B�ڂ����́u\doc\versus.txt�v���Q��
�E�ΐ�ł́A�A�C�e���uFREE FALL�v�ŏ��������C���𑊎�ɑ��荞�߂�悤�ɂ����B
�@�������A����̂���オ��`�����uMOVE ERASED�v���ƌ���1��ɑ����Ă���̂�
�@Back to Back�w�{���X���ŕԂ���Ȃ��悤�Ɂc
�EPRACTICE�ō������[�����V���~���[�V�����o����悤�ɂȂ�܂����B
�EPRACTICE�Ŏ̂ăQ�[�����Ƃ������S�����l�Ƀ��C������\������悤��
�E���؂肳�ꂽ�Ƃ��A�~�b�V�����ȊO�̓��C�����������u�Ԃɑ��؂艉�o���J�n����悤�ɂ����B
�E���؂莞�́uBut... Let's�c�v�\�����ɉԉ΂������悤�ɂ����B�@�@TI���ۂ�
�E���v���C�ۑ��ɑ��x�����̃e�X�g�B�ݒ�l����FPS��10FPS�ȏ㍷������ƕۑ��ł��Ȃ����Ă݂�B
�Ehebospr��png��������
�E���𑜓x���́uGAME OVER�v�\���Ɂu���́v���b�Z�[�W��ǉ�

C7V2.3EX ROT.RELAY MODE DEBUT
�ESIMPLE��ROT.RELAY�ǉ��B�@���v���C���Ԃ̊֌W��40LINES��ULTRA2min�̂݁B
�@�S�Ẳ�]�@����40L��2MIN�ɒ��킵�܂��B
�@�������Ă��Q�[���I�[�o�[�ɂ͂Ȃ�܂��񂪁A�y�i���e�B������܂��B
�@���x�͍ŏ��ɂ����I�ׂ܂���B
�@���ʕ\���ł̓x�X�g�L�^�ƃ��[�X�g�L�^�������\������܂��B
�ESETTING > DESIGN�́uFONT SIZE�v���uNUMBER FONT�v�ɕύX
�@SHARP�ɂ����small & BIG�t�H���g�̐������ω����܂��B
�E�uquickerase�v�̍��ڂ�p�~�B�����SETTING > DESIGN�Łutop_frame�v��ύX�\��
�@ORIGINAL��quickerase:OFF�̎��́A����ON�̎��̉��o�ɂȂ�܂��B
�EORIGINAL���[�h�̃X�R�A�v�Z�^�C�~���O���I���W�i���łɍ��킹�܂����B
�@�܂��A�����[�h�̃u���b�N�������o��TGM�j��G�t�F�N�g�ɌŒ肵�܂����B
�E�V���O����Ń~�b�V�����̃��v���C���Đ��������A���肪����Ă����̂��C��
�E�ߋ���MASTER #2 & #G3�̃��v���C�݊������C��

C7V2.28EX YGS2K
�E��������낢��ƒǉ�
�EOPTION��ʂ�T-SPIN�^�C�v��2�܂ł����I�ׂȂ������C��
�ET-SPIN�^�C�v3�̂Ƃ��ԉ΃{�[�i�X��Ti��T-SPIN�̏ꍇ�ɂ������Z����Ȃ������C��
�EREPLAY�̂Ƃ��ɕ\�������LINE INFO�̃J�E���g�Ɋւ�������C��

C7V2.25EX YGS2K
�ESOLO MODE��]�@���I����ʂ̎����
�E�l�[���G���g���[���A�}�X�^�[or20G�� #G4�ł͒i�ʂ�\������悤�ɂ��܂����B
�E�l�[���G���g���[���A���i�ʂ��������Ă���Ε\������悤�ɂ��܂����B
�E��𑜓x���̃X�^�b�t���[�����摜�ɂ��܂����B
�E�~�b�V�����̃C���C�T�[�ŏI���C�������̃��C���Əd�Ȃ鎖�������������C��

C7V2.2EX YGSK
�EVS�̃A�C�e���Z�b�g�ɁuTGM�v��ǉ�
�E��𑜓x���̃O���t�B�b�N�𐮔�
�E�A�C�e���uREFLECT�v�������̓t�B�[���h�F��ς��Ȃ��悤�ɂ��܂����B
�@�������蔭�����đ����ɂ��ڂɂ��킹�܂��傤�B
�EC7V2.1��CPU�ɍ����o�����������肪�A���\�o�J�Ȉʒu�ɒu���悤�ɂȂ����̂ō��͖Y�ꂳ�����B
�E�Â��o�[�W�����̃��v���C��������A�A�C�e���̑��������v���C���^�����̂܂܂ɂȂ�����C��
�E��𑜓x����small�t�H���g�̐�����big�t�H���g�̓��ߐF���������ݒ肳��Ă��Ȃ����������C��
�E�A�C�e��(���TGM�n)�o�����̌�����
�@http://blogs.yahoo.co.jp/hr_tgm_pinfu/archive/2007/02/23�@���Q�l�y�[�W

C7V2.1EX YGS2K
�E�u���b�N���Œ肳��āA�X�e�[�^�X�l���ύX���ꂽ�Ɠ����Ɏ��̃X�e�[�^�X�֐������s���鎖�ŗ]���ȊԂ�1�t���Z�k
�@�iLITE��SKIP LOCKFLASH�FON�Ɠ������炢�j�@DOOM����肻����ۂ�
�E�X�^�b�t���[�����ɔ�������ARE�̗]����1�t���[����Z�k
�EDEFAULT�t�H���g�ɂ��X�R�A�\����p�~�B
�@�X�R�A�\���̃��C�A�E�g�����[�h���ƂɕύX
�E���_���̔z�u��ύX�@BEGINNER�`DEVIL���[�h��LINES�\������
�Eheboris.ini�̊e���_���֘A�̏��̕\���̗L����ς���uhide_skill�Ahide_allclear�Ahide_combo�Ahide_rescue�Ahide_ST�v��
�@�umedal_info�v�ɓ���
�E���v���C���Ƀ��C����������\���ł���悤�ɂ��܂����B�ז��Ȏ���HOLD�ŉB���܂��B
�E�����`��֐��ɁuPrintTinyFont�v��ǉ��B1����6x7(��𑜓x��)�Ɣ��ɏ�����
�@���܂̂Ƃ���A�����A/ : < > �A�A���t�@�x�b�g�啶�����g�p�\�@���������l�ߖ���
�E�A�C�e���uGRANDMOTHER BLOCK�v��ǉ��B�S�Ẵu���b�N�i�A�C�e���u���b�N�܂ށj��[ ]�ɂȂ�܂��B
�@DS-WORLD�ł�1�F�ɂȂ�܂��B
�E�A�C�e���u�X�J�v���z�[���h���Ă������Ȃ��悤�ɁB
�@�܂��A�X�J���ʒ��̓u���b�N��u�����тɃt�B�[���h���v���v������悤��
�Espeed.def�X�V�iMASTER�㔼�����j
�E�~�b�V�����̃C���C�T�[�ŁA�Ō�̃��C���͍ŏ�i�ɏo���悤�ɁB
�EDS���[�h�A�f�r�����[�h�A�w�{�}�j�A�A�v���`�i�𒲐�
�Ehidden=8�i�������[����ԁj�Œ���������A�u���b�N�������Ă������o��x�点��悤�ɂ����B
�ETi��T-Spin�ł�b2bcheck=1�ł�Back to Back���s���Ȃ��悤�ɂ����B
�E�A�C�e���uRANDOM�v�ŃX�J�����������ꍇ�A���ʃu���b�N����4����1�ɂ����B
�EF-point�̃c����^�t���b�V���̓d���p�^�[���ɕύX���܂����B
�Emission�ł�T-spin����������I��3�R�[�i�[�ɂ���悤��
�Enovice�����DEVIL-�Ń��[�����ɒ������Ă��X�^�b�t���[�����~�߂Ȃ��悤�ɂ����B�i���̂܂܃N���A�܂��͑��؂�ɂȂ�܂��j
�E�ΐ�ŏ���������LINE���̏ꍇ�A���Ԑ؂ꎞ��LINE���ŏ��s�𔻒肷��悤�ɂ����B
�EDEVIL-Lv1000���[�����x��DOOM 800�ɁB�������Ă��N���A�ɂȂ邩���ݶ��
�E���ꐯ�̑��x�𑬂����܂����B�}�X�^�[�v���C���Ȃǂɗ����Ƃ�����ƌ��Â炭�Ȃ�̂�
�E�A�C�e���uBOOST FIRE�v�̓���������ύX�B���x�̃o�b�N�A�b�v�����Ȃ��Ă��ǂ��Ȃ����B
�E�uSTAMDARD�v���uSIMPLE�v�ɉ���
�E�uACE-OLD�v���uOLD STYLE�v�ɉ���

�E�uST_rankingGet�v�̈����s���ɂ��Z�N�V�����N���A���ɗ���������C��
�EDEVIL���Ń��x��1000�𒴂��Ă����ʕ\������у��v���C�I���ł�Lv999�ƕ\������Ă��������C��
�E�~�b�V�����uBIG�v�̎��ŉ��y���ς��ꍇ�ɗ���������C��
�EOLD-STYLE��Lv15�ȍ~�ɍō����ɂȂ�Ȃ����������C��

C7V1EX YGS2K
�o�O�C��
�EBGM�̃t�F�[�h�A�E�g�Ƃ��F�X����Ă�
�EDEVIL800�ł����ɂ���オ���Ă��܂�
�Egrade�S��m��MASTER��
�Eminiselect�ŕς��ȃt�H���g�����ʂ̂Ƃ��m���}���オ��Ȃ�
�Emini�Z���N�g�ł���オ��̐؂�ւ����o���Ȃ�
�E�x�X�g���R�[�h�������Ԃ�
�E���Z�b�g���Ă�[]�̂܂�
�E�X�N�E�F�A���[�h���}���\���ɓ���
�E�Q�[���I�[�o�[��ɕ\������郉���L���O��ʂ��Ⴄ
�Epractice�ɂ����ăm���}�l��̃G���f�B���O�����؂�p�ɂȂ��Ă�
�E�G���h���X�Ȃ̂Ƀm���}�l���ݒ�ł���
�E����Ȃ����ڂ̎���NODATA
�E�뎚
���Z�b�g�ł��Ȃ�
�Eoriginal�œ_����9999999�ɂȂ�
�EFP��basic�ȏ�Ԃő��̃��[�h���I�ׂĂ��܂�
�Eoriginal�̑��x���[�h�o�O
���̑�
�E40LINES�Ƃ��̃N���A��̉ԉ΂̕\��������������
�EGM��Gm�𕪂���
�EBGM�̐؂�ւ������[�h�ʂƂ�GRADE�ʂƂ��ōׂ����ݒ�ł���悤�ɂ���
�i���̂����wave2�Ƃ�wave5�Ƃ��̕����͊ȒP������Ă�̂Œ���
�����������؂�ւ���BGM�؂�ւ��̕����ŏo���܂��j
�E�A�C�e���o������ini�Őݒ�ł���悤�ɂ���
�Edevil-�ɂ��ʂő��؂�^�C��������
�E����ɔ�����devil�ł̑��؂������������
�Edevil��1000���؂�^�C����500��2�{�ɂ���
�E�F��i�ʂ�STRANKING�t�@�C���ɖ��ߍ��ނ̂���߂�playerdata.sav��V��������Ă���ɖ��ߍ���

C7V0EX�x�[�^ YGS2K
�E���[�h���������L�[�őI���ł���悤�ɂ����B
�E�e���[�h�̃G���h���X���܂Ƃ߂ĉ��Ɉړ��B
�ET-spin���V���v���ɂ����B
�E�V�����L���O�̎��F�X�ȃ��[�h�Ń����N�C������Ȃ������̂𑽕��C���B
�E2P���̕������Ƃ���F�X�C���B
�ESMALL�t�H���g����s�v�Ȃ��炢�����B
�E�摜�t�@�C���͒�𑜓x���Ή�(���͍���ĂȂ�����)
BIGINNER���[�h
�E���[�����̉ԉ΃R���{�������ɒ�������Ɖԉ΂��~�܂�Ȃ��Ȃ�o�O�����Ԃ�C��
MASTER���[�h
�E�i�ʂ��摜���g���ĕ\���B
�EGM�ɂȂ�Ȃ��o�O�C���@�Ȃ�ǂ����߂�Ȃ���
�E�F�莎���̎��͈̔͂��Ԉ���Ďw�肵�����̃G���[�΍�
�E�i�ʔF�莎�����g�����F��i�ʂ̂悤�Ȃ��̂�t�����B
�i���x�̂��Ƃł������V�тł����i�ʂȂ̂ŐM�p���Ă͂����܂���j
DEVIL���[�h
�Edeath+�̒i�ʂ�devil-�̒i�ʂɂ����B
PRACTICE���[�h
�EPRACTICE�ɃS�[���ݒ���l�ǉ�
�ENEXT�������@���m�[�}����PRACTICE�ƕ������B
ACE���[�h
�EACE���[�h�Ŗ��N���A�̏ꍇ�ɂ�LINE����\���B
�EACE-SEGA���I�[���h�X�^�C���d�l�ɂ����B
���O�ɑI�񂾉�]�����[���h�n�Ȃ�GB�ɁA�N���V�b�N�n�Ȃ�ARCADE�ɂȂ�܂��B
�E���̊Ԃ�ACE��BEST TIME�\���������ɂȂ��Ă�o�O�C��
VERSUS���[�h
�E�]�v�ɃA�C�e���ǉ��B
�E�ΐ�����������Ƀ��x���̂ق��ɗ�����ł��t������悤�ɂ����B
�E�A�C�e���o����������ς�d�ݎ��ɂ����B
STANDARD���[�h
�ESTD���[�h�ɂǂ�������������[�h��2�ǉ��B
�ESTD���[�h�Ƀx�X�g�^�C���Ƃ��F�X�\���B
�ESTD�̑��x���[�h�̃o�O�C���B
C7U8EX YGS2K
�E�A�C�e������
���ނ̃A�C�e���Z�b�g
���o���A�C�e���͂��΂炭�o�Ȃ��悤��
�����ȃA�C�e���͏o������Ⴍ��������
�ESQUARE������������������鎞���s���悤�ɂ����B
�EGOLDSQUARE�̎��m���}���オ��Ȃ��o�O���C���B
�EACE-SEGA���[�h��bgm����Ȃ��o�O���C���B
�E�ΐ��ʂŃM�u�A�b�v�{�^���������ƁASPEED��W1�`W3�AWT�̒l���S�ĂO�ɂȂ�o�O���C���B
�EPRACTICE���[�h�̐ݒ�v���Z�b�g��BGM���ڂ�ǉ��B

����ȑO��changelog2.txt�ֈړ�
*/

//������������������������������������������������������������������������������
//  �O�����C�u�����̃C���|�[�g
//������������������������������������������������������������������������������
#include "include.h"

#include "ygs2kfunc.h"
#include "prototypes.h"
#include "inireader.h"

#define		STRING_MAX		200
#define		str				char*
#define		loop			while ( loopFlag )
#define		halt			spriteTime()
#define		time			gametime
#define		ctime			cgametime
#define		stime			sgametime
#define		wait1			gamewait1
#define		wait2			gamewait2
#define		wait3			gamewait3
#define		waitt			gamewaitt

//������������������������������������������������������������������������������
//  �O���[�o���ϐ��̒�`
//������������������������������������������������������������������������������
int		bgmteisiflg = 0;			//bgm teisi
int		count;					// �O���[�o���J�E���^ (�t���[���P�ʁA65535�܂�)
int		backno;					//1�`12 �ʏ�	61 �ΐ�p

int		stat[2], statc[10 * 2];	// ���݂̃X�e�[�^�X�ƃp�����[�^ no + pl * 5
int		sc[2], lv[2], li[2];	// �X�R�A�A���x���A���C����
int		time[2], timeOn[2];		// �Q�[���J�n����̌o�ߎ��� (1/60�b�P��)�A�L��?
int		next[2 * 3];			// next�̕����ɓ����Ă���u���b�N #1.60i
int		fld[10 * 22 * 2];		// �t�B�[���h�̏��  x + y * 10 + pl * 210
int		blk[2];					// �������Ă���u���b�N
int		bx[2], by[2], rt[2];	// �u���b�N�̍��W
int		bs[2], bk[2];			// �u���b�N�̎��R�����Ƃ������̃^�C��
int		mp[2], mpc[2];			// �O��̃p�b�h�̓��͓��e�Ǝ���
int		mps[2 * 2];				// �X�^�[�g����mp��mpc�i���v���C�L�^�p�j
int		erase[22 * 2];			// �������u���b�N
int		obj[100], objx[100], objy[100], objv[100], objw[100], objj[100], objc[100], obja[100];
int		lc[2], sp[2];			// ���x���A�b�v�܂ł̃J�E���^�Ɨ����X�s�[�h
int		upLines[2];				// �㏸���Ă��܂����C����
int		wait1[2], wait2[2];		// �Œ聨���E���Ŏ��̑҂�����
int		wait3[2], waitt[2];		// �ݒu����Œ�܂ł̃^�C���E�����ߎ���
int		nextb[1400 * 2];		// ���̃u���b�N(�ΐ�p) player����#1.60c7m1
int		nextc[2];				// ���ɍ~��u���b�N�J�E���^
int		hole[2];					// �ΐ�̂Ƃ��̌��̈ʒu
int		nextwork[7 * 2];		// ���ɍ~���Ă���u���b�N�̃_�u���h�~�p
// #1.60c�O���[�o���ϐ�
int		hold[2];				// hold���̃~�m
int		dhold[2];				// hold�s��
int		dhold2[2];
int		sw, sh;					// snapshot�p �X�N���[�����E����
int		ssc = 0;				// ss�J�E���^
int		tc[2];					// tgm�V���[�Y���J�E���^
int		tr[2];					// tgmRank
int		start[2];				// �Q�[���J�n���x��
int		kickc[2];				// ���R�蓙�̃J�E���^
//int		kickm = 8;			// World���̍Đڒn�\�ȉ񐔁E�ڒn��Ԃŉ�]�ł����
int		kickc2[2];				// ARS�p���R��J�E���^�i�ڒn��Ԃ̉�]�񐔂͐����Ȃ��j#1.60c7q2ex

// #1.60c6�ǉ��ϐ�
int		ending[2] = {0, 0};
int		onRecord[2] = {0, 0};
int		edrec[2] = {0, 0};

// �A���X�i�b�v
int		capc = 0;		// �J�E���^
int		oncap = 0;		// �擾���t���O
int		capKey = 0x46;	// �J�n/�I���L�[
int		capi = 2;		// �擾�Ԋu(�t���[���P��)
int		capx = 0;		// �擾�̈�̍���X���W
int		capy = 0;		// ����Y���W
int		capw = 320;		// ��
int		caph = 160;		// ����

// #1.60c6.1b�ǉ��ϐ�
int		shirase[2];

// #1.60c6.2c�ǉ��ϐ�
int		p_shirase[2];	// 1����PRACTICE���[�h�ł�20���x�����Ƃ�SHIRASE�̂���オ�������
// #1.60c6.2d�ǉ��ϐ�
int		p_bgmlv = 0;	// PRACTICE�ŗ���BGM�ԍ�

// TA�X�R�A�ϐ�
int		sdrop[2];
int		qdrop[2];
// int		qput[2];	// ���g�p�H
int		cmbpts[2];

// �J�n���x���I����
// lvup == 1�̏ꍇ�A�S���[�h���x��100��(0�`1000)
int		startlvTbl[56] = {
	0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130,	// Beginner
	0,  6, 12, 18, 24, 30, 36, 42, 48, 54,  60,  66,  72,  78,	// Master
	0,  6, 12, 18, 24, 30, 36, 42, 48, 54,  60,  66,  72,  78,	// 20G
	0,  3,  6,  9, 12, 15, 18, 21, 24, 27,  30,  33,  36,  39	// Devil
};
int		slv[2],tlv[2];
// �����܂�
// BGM�t�F�[�h�A�E�g�J�n���x�� *K*
int		bgmlv;					// ���݂�BGM�i�K(0:playwave(50)
int		fadelv[2];					// �t�F�[�h�X�C�b�`���t�F�[�h���x��

// ������ini�Ɉړ] #1.60c7i5 biginner�`devil
int		bgmfadestart[50] = {
	 185, 10000, 10000, 10000, 10000, 10000,	// BEGINNERHANABI
	 285, 10000, 10000, 10000, 10000, 10000,	// BEGINNERSCORE
	 485, 10000, 10000, 10000, 10000, 10000,	// MASTER,20G G1
	 485,   685,   885, 10000, 10000, 10000,	// MASTER,20G G23
	 485,   685, 10000, 10000, 10000, 10000,	// MASTER G4
	  -1,    -1,   485,   685,   985, 10000,	// DEVIL
	  -1,    285,  485, 10000, 10000, 10000		// DEVIL-
};
// ������ini�Ɉړ] #1.60c7i5
int		Replaybgmfadestart[48] = {
	  99,   129,   149, 10000, 10000, 10000,
	  29,    47,    59, 10000, 10000, 10000,
	  -1,    47,    59, 10000, 10000, 10000,
	  -1,     8,    14, 10000, 10000, 10000,

	 185, 10000, 10000, 10000, 10000, 10000,	// BEGINNER
	 485,   685, 10000, 10000, 10000, 10000,	// MASTER
	  -1,   485, 10000, 10000, 10000, 10000,	// 20G
	  -1,    -1,   485,   685,   985, 10000		// DEVIL
};
//ori�t�F�[�h�A�E�g
int		ori_bgmfadestart[16] = {
	  99,   129,   149, 10000,
	  29,    47,    59, 10000,
	  -1,    47,    59, 10000,
	  -1,     8,    14, 10000
};

int		color_tbl_max = 40;
int		color_tbl[40] = {
	10, 10, 9, 9, 8, 8, 8, 7, 7, 7,
	6, 6, 6, 5, 5, 5, 4, 4, 4, 4,
	3, 3, 3, 3, 2, 2, 2, 2, 1, 1,
	1, 1, 0, 0, 0, 0, 0, 0, 0, 0
};
// �����܂�

// hoge�p�b�`�ϐ� ��������
int		tame1 = 25,	// hoge ���E�̓�����ςȂ��ō����ړ�����܂ł̎���
		tame2 = 3,	// hoge �����ړ��̑���(���Ȃ��قǑ���)�B
		tame3 = 25,	// hoge ���̏㉺��
		tame4 = 3;	// hoge ���̏㉺��
int		mp2[2], mpc2[2];	// hoge �O��̃p�b�h�̓��͓��e�Ǝ���(�㉺�L�[�o�[�W����)
		// ���̕ϐ��́A��vs���[�h����wait�ݒ�Ɏg���܂��B(heboris.ini�Őݒ肳���)
char	waitname[25][128] = {"DEFAULT", "DEVIL+", "INFINITY", "..!!?", "DEVIL", "!?", "20G"};	// �ݒ薼
int		syutugen[25] = { 3,  5, -1,  3,  5,  6, 26},	// �u���b�N���Œ肳��Ă���A���̃u���b�N���o������܂ł̎���
		syoukyo[25]  = { 0,  0, -1,  5,  5,  5, 40},	// �u���b�N����񑵂����Ƃ��̏��ł̑҂�����
		settyaku[25] = {13, 13, 99, 14, 13, 14, 28},	// �u���b�N���n�ʂɓ��B���Ă���A�ڒ������܂ł̎��ԁB99�ɂ���Ɩ���
		yokotame[25] = { 7,  7, -1,  7,  7,  7, 12},	// �����߂ɕK�v�Ȏ���
		hiddenlv[25] = {-1, -1, -1, -1, -1, -1, -1},	// HIDDEN LV(8�܂�)
		fps[25]      = {60, 60, 60, 60, 60, 60, 60},	// FPS
		waitkey[25]  = {0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08},	// �V���[�g�J�b�g�L�[
		blind[25]    = {-1, -1, -1, -1, -1, -1, -1},
		p_bgmload[25]    = {-1, -1, -1, -1, -1, -1, -1};//BGM
// �����܂�
// #1.60c6.2c�ǉ��ϐ�
int		speed[25] = {1200, 1200, -1, 1200, 1200, 1200, 1200};	// �u���b�N�̗����X�s�[�h

// #1.60c6.2f�ǉ��ϐ�
int		p_shirase_line = 2;			// SHIRASE�ŉ����C������オ�邩
int		p_shirase_interval = 20;	// SHIRASE�ŉ����x�����ɂ���オ�邩
// #1.60c6.2g�ǉ��ϐ�
int		p_shirase_start_level = 500;	// SHIRASE�ł̂���オ��J�n���x��
int		uplinetype = 0;		// ����オ��^�C�v(0:SHIRASE(�f�t�H���g), 1:TGM+)
int		upLineNo[2];		// ����オ�胉�C��No
int		upLineNoMax = 32;	// ����オ��t�B�[���h�̃��C������
int		upFld[256];			// ����オ��t�B�[���h�z��(����͍��̂Ƃ���128���C��)
// #1.60c7 �ǉ��p�~�ϐ�
// int		padMode;
// �I���p�b�h�ϐ��p�~�B�I���p�b�h�͊O�����C�u��������ύX���ꂤ���
// �l�����R�[�f�B���O���]�܂����B

// #1.60c7c�ǉ��ϐ�
int		p_backno = 9;		// PRACTICE�̔w�i
int		debug = 0;			// �f�o�b�O�t���O

int		p_over1000 = 0;		// PRACTICE�ł�[ ]�u���b�N

// #1.60c7e�ǉ��ϐ�
int		hide_fps = 0;			// 1��FPS���o���Ȃ�
int		hide_wait = 0;			// 1��WAIT���o���Ȃ�

// #1.60c7f3�ǉ��ϐ�
int		hide_score = 1;			// 1�ŃX�R�A�ƃ��C�����\�����o���Ȃ�
int		show_result = 1;		// 1�Ō��ʕ\�����o��

int		fldsizew[2], fldsizeh[2];	// �t�B�[���h�T�C�Y���c �f�t�H���g 10 * 20

int		IsBig[2];					// Big���[�h�t���O

int		startLvback[2] = {0, 0};	// �I���J�n���x���̑ޔ�p�B�ꎞ�L��
//int		IsBigback[2] = {0, 0};	// ����

//int		startnextc[2];		// �J�n���̃l�N�X�g�J�E���g��ۑ�, ���v���C�ɂ��Z�[�u����B

int		flag;				// 1�ɂ���ƃ^�C�g���ɖ߂�
int		overcount;
int		combo[2], hebocombo[2], pinch[2];
int		winr, winc, winu, wink;
int		vslevel[2], hidden[2], hiddentm[2];
int		hiddeny[2], hiddenti[2], hiddenc[2];

int		rksc[40], rkbl[40], rktime[40], rklv[40], rkfl[40];	// �����L���O�p

int		noredraw, fast;
int		csr, cnt, enable[80], category, rankingmode;

int		replayData[60 * 60 * 20 * 2];	// ���v���C�ۑ��p�f�[�^ (�ő�20���܂�)
int		saveBuf[50000];			// �Z�[�u�p�o�b�t�@
int		playback = 0;			// ���v���C����?
int		demo = 0;				// �f�����[�h��?
int		demotime = -1;			// �f���\����(-1�ݒ�Ȃ͍̂ŏ��̃f���Ńr�M�i�[���[�h��\�����邽��)
int		setupBak[27];			// �Z�b�e�B���O���e�̃o�b�N�A�b�v�p

int		pause[2], hnext[2];		// �|�[�Y���Ă邩�[��!?�@hnext��next�ō������Ă鐔

int		gameMode[2];			// ���݂̃Q�[�����[�h 0:BEGINNER 1:MASTER 2:20G 3:DEVIL 4:VERSUS 5:PRACTICE 6:TOMOYO 7:ACE 8:MISSION

int		limit[8] = {0, 20, 30, 30, 40, 40, 50, 1400};	// �c�������p

// #1.60c7f4�ǉ��ϐ�
int		level_shirase_start;	// ���肠����̊J�n���x��
int		raise_shirase_lines;	// ����オ��i��
int		raise_shirase_interval;	// ����オ��Ԋu

// #1.60c7f5�ǉ��ϐ�
int		next_adjust = 1;		// 0�ɂ���Ə���ɉ��F�A���A�΂�����
int		p_next_adjust = 1;

// #1.60c7f6�ǉ��ϐ�
int		bravo = 0;				// 1���ƑS�����G�t�F�N�g����
int		showctrl = 0;			// 1�Ȃ烊�v���C�ȊO�ł�����󋵕\��

// #1.60c7f7�ǉ��ϐ�
int		rotate_snd = 0;			// 1�ŉ�]������

// #1.60c7f9�ǉ��ϐ�
int		down_flag[2];			// 0:�O�񁫂��g���ĂȂ�or���𗣂��� 1:�O�񁫂��g����

// #1.60c7g3�ǉ��ϐ�
char	nextb_list[4096];		// �c�����X�g(heboris.ini)
char	nextdengen_list[4096];	// �d���p�^�[�����X�g(heboris.ini)
char	nextfp_list[4096];		//FP�d���p�^�[��

// #1.60c7g5�ǉ��ϐ�
// GM�����F(999�ɂȂ�����) �X�R�A126000��13��30�b(48600)�ȓ���gmflag1�����ρ�gmflag2������

// ���i�����X�R�A
int		gscore[18] = {         1400,  4200,   8400,  14000,  21000,  29400,  39200,  50400,
					   63000, 70000, 82400, 100000, 117400, 137000, 158000, 180400, 204200,
					  220000};
// �i�ʂ̕\����(geade1,3�Ŏg��)
str		gname[20]  = {"9", "8", "7", "6", "5", "4", "3", "2", "1",
					  "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9",
					  "M","GM"};
// �f�r�����[�h�ł̒i�ʂ̕\����
str		dgname[17]  = {"1", "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13","M","GM","GOD"};

// �i�ʖ� C7T5(geade2,4�Ŏg��)
str		gname2[35] = //�o�O�΍�ɓ����
{
	 "9",  "8",  "7",  "6",  "5",  "4",  "3",  "2",  "1",	//  0�` 8
	"S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9",	//  9�`17
	"M1", "M2", "M3", "M4", "M5", "M6", "M7", "M8", "M9",	// 18�`26
	 "M", "MK", "MV", "MO", "MM", "GM","GM","GM"		// 27�`32
};
// �����I�Ɏg���ϐ�
int		grade[2];			// ���݂̒i��(0:9 27:M 32:GM)
int		gmflag1[2];			// ���x��300�˓����Ɂu�i��1�v �ȏ� �u4��15�b(15300)�v�ȓ���1�ɂȂ�
int		gmflag2[2];			// ���x��500�˓����Ɂu�i��S4�v�ȏ� �u7��30�b(27000)�v�ȓ���1�ɂȂ�
int		gmflag1_e[2];		// gmflag1�̔�����������ǂ����̃t���O
int		gmflag2_e[2];		// gmflag2�̔�����������ǂ����̃t���O
int		gmflag3[2];			//
int		gmflag3_e[2];			//

// #1.60c7g7�ǉ��ϐ�
int		timelimit_devil;	// ������^�C��(devil)
int		timelimit_master;	// ������^�C��(master)
int		timelimit_20G;		// ������^�C��(20G)
int		timelimit[2] = {0,0};			// ���݂̑�����^�C��
int		mpc3[2];			// �O��̃p�b�h�̓��͎���
int		mpc4[2];			// �O��̃p�b�h�̓��͎���

// #1.60c7h2�ǉ��ϐ�
int		repversw;			// ���o�[�W�����̃��v���C�f�[�^���Đ����邽�߂̃X�C�b�`

// #1.60c7h3�ǉ��ϐ�
int		deadtype = 0;		// ���S�A�j�� (0=������u���b�N���� 1=�D�F��)

int		limit15 = 1;		// 15���ȏ�v���C����ƒ����� (0=���� 1=�L��)
							// (���v���C�ɕۑ�����܂�)

// #1.60c7h8�ǉ��ϐ�
//int		flag_over1000[3 * 2];	// NEXT�̏o��LV
int		breaktype = 0;			// ��юU��G�t�F�N�g�̎�� 0:TGM 1:TAP/TI
// int		wblock;
int		shadow_heboris = 0;		// �V���h�E���[��

// #1.60c7i1�ǉ��ϐ�
int		enable_hold_frame = 1;	// HOLD�������ɉ��F�̘g��0=�\�����Ȃ� 1=�\������
int		enable_grade[2];		// �i�ʔF�� 0=�Ȃ� 1=����
int		hold_used[2];			// HOLD���g�������t���O 0:�܂��g���ĂȂ� 1:���� 2:�Q��ڈȍ~

// #1.60c7i2�ǉ��ϐ�
int		bdowncnt[2];			// �~�m�𒅏���������
int		st_bdowncnt[2];			// ST�����L���O�p�ibdowncnt�ƈ���Ē���I�Ƀ��Z�b�g��������j
int		tlsrange = 0;			// PRACTICE�ł�TLS�͈̔� 0:OFF 1:100�܂� 2:ALWAYS
int		gmflag_r[2];			// ���[���N���A��GM�ɂȂ錠���̂悤�Ȃ���
int		semigmflag_r[2];		// �����郍�[���N���A�p

// #1.60c7i6�ǉ��ϐ�
int		giveup_func = 0;		// �̂ăQ�[�������̓���(0=�Q���҂� 1=���[�h�Z���N�g 2=�^�C�g��)
int		giveup_safety = 0;		// 0=�ǂ�ȏ󋵂ł��̂ăQ�[�\ 1=�|�[�Y�������̂ăQ�[�\.
int		mini_select = 0;		// SOLO MODE��TIME TRIAL��p�ɂ���ݒ�(0=���� 1=�L��)

// #1.60c7i8�ǉ��ϐ�
int		IsBigStart[2] = {0, 0};	// BIG�Ŏn�߂����ǂ����̃t���O(DEVIL�̃o�O���p)

// #1.60c7i9�ǉ��ϐ�
int		skip_viewscore = 0;		// �X�R�A�E�^�C���\���Ȃǂ̏��������s���Ȃ�
int		skip_viewbg = 0;		// �w�i��\�����Ȃ�
int		skip_obj = 0;			// �S�Ẳ��o�����Ȃ�
int		hide_hidden = 0;		// HIDDEN LV�\�����B��

// #1.60c7j1�ǉ��ϐ�
//int		time_gmflag1 = 15300;		// ���x��300�˓�����GM�����^�C��
//int		time_gmflag2 = 27000;		// ���x��500�˓�����GM�����^�C��
//int		time_grandmaster = 48600;	// ���x��999�B������GM�����^�C��(810*60)
//int		grade_gmflag1 = 8;			// ���x��300�˓�����GM�����i��
//int		grade_gmflag2 = 12;			// ���x��500�˓�����GM�����i��

// #1.60g7j2�ǉ��ϐ�
int		mirror = 0;					// ������\������ݒ�(0=���� 1=�L��)
int		domirror = 0;				// mirror���L���̎��A������\������t���O

// #1.60c7j5�ǉ��ϐ�
int		p_hold = -1;				// ����HOLD�u���b�N(-1=�Ȃ� 0=��, 1=��, 2=��, 3=��, 4=��, 5=��, 6=��)
int		bakhold = -1;				// �ݒ肳��Ă���HOLD�u���b�N
int		p_nextpass = 0;				// �c������L��
int		pass_flg[2] = {0, 0};		// �c������t���O(�A�����͖h�~�p)
int		fmirror = 0;				// �t�B�[���h�~���[���g����
int		p_fmirror_interval = 3;		// �t�B�[���h�~���[�Ԋu
int		p_fmirror_timer = 20;		// �t�B�[���h�~���[�^�C�}�[(�~���[���ɂ����鎞��)
int		rollroll = 0;				// ���[�����[�����g����
int		p_rollroll_interval = 4;	// ���[�����[���Ԋu
int		p_rollroll_timer = 30;		// ���[�����[���^�C�}�[(��]����܂ł̎���)
int		p_xray_interval = 2;		// X-RAY�Ԋu
int		p_xray_frame = 36;			// X-RAY�����t���[����
int		isrollroll[2] = {0, 0};		// ���݂̃c�������[�����[����
int		xray = 0;					// X-RAY���g����
int		isxray[2] = {0, 0};			// ����X-RAY��Ԃ�
int		xray_counter[2] = {0, 0};	// X-RAY�p�J�E���^
int		color_counter[2] = {0, 0};	// COLOR�p�J�E���^
int		fcolor = 0;					// COLOR���g����
int		iscolor[2] = {0, 0};		// ����COLOR��Ԃ�
int		shadow_timer = 0;			// �V���h�E�^�C�}�[���g����
int		p_shadow_timer = 300;		// �V���h�E�^�C�}�[(�u���b�N��������܂ł̎���)
int		fldt[10 * 22 * 2];			// �t�B�[���h�^�C�}�[
int		fldbuf[10 * 22 * 2];		// �t�B�[���h�o�b�t�@(�~���[�̉��o�Ɏg�p)
int		fldtbuf[10 * 22 * 2];		// �t�B�[���h�^�C�}�[�o�b�t�@(�~���[�̉��o�Ɏg�p)
int		ready_start = 0;			// ready�J�n
int		ready_end = 15;				// ready�I��
int		go_start = 45;				// go�J�n
int		go_end = 60;				// go�I��

// 961�ǉ��ϐ�
int		skill[2];		// 4�i������(15�񖈂�Cu, Ag, Au, Rg(?) medal)
int		start_flag[2];	// �J�n�����x�����オ��Ȃ��悤�ɂ���ׂ�Flag

// #1.60c7j7�ǉ��ϐ�
int		lap_time[100 * 2];			// HeboLv 3-78, TGMLv 50-1300
int		split_time[100 * 2];		// HeboLv 3-78, TGMLv 50-1300
int		st_record_interval_tgm = 5;	// 50TGMLv���Ƀ^�C���X�V�������10�{���Ƀ^�C���X�V
int		st_record_interval_heb = 3;	//  3HebLv���Ƀ^�C���X�V
int		hide_st_record = 1;			// 1�ŋL�^�^�C���������Ȃ�

// #1.60c7j8�ǉ��ϐ�
int		big_block_type = 1;				// BIG�̑��쒆�u���b�N�`����@(0=�ʏ�u���b�N�~4 1=2�{�g��)
int		st_record_force_viewright = 0;	// 1�ŋL�^�^�C�����V���O����ł��E���ɏo��

// #1.60c7j9�ǉ��ϐ�
int		shadow_timer_type = 0;			// �V���h�E�^�C�}�[�̎�� (0=�p�b�Ə����� 1=���X�ɏ�����)
int		shadow_timer_flag[2];			// �V���h�E�^�C�}�[�����ǂ���

// #1.60c7k4�ǉ��ϐ�
int		allclear[2];					// �S����������

// #1.60c7k7�ǉ��ϐ�
int		p_ending = 0;					// PRACTICE�ł̃G���f�B���O
						// (0=�ʏ�v���C 1=BEGINNER���[�� 2=�������[�� 3=�������[�� 4=DEVIL���[��)
int		p_goaltype=0;			//�I�����@;�Ȃ��A���x���A���C���A�u���b�N�A�^�C��
int		p_goaltypenum;		//��Ō��߂��I�����@���ǂ̂̒l�ɂȂ�����I��肩
int		p_goaltypenumlist[10]={5,10,20,30,50,75,100,130,160,200};

// #1.60c7k9�ǉ��ϐ�
//int		limit15_tt = 1;					// �^�C���g���C�A���ł̒x���h�~�̗L��(0=�Ȃ� 1=����)

int		dead_blockframe = 1;			// ���񂾂Ƃ��g��������(0=�����Ȃ� 1=����)

// #1.60c7l1�ǉ��ϐ�
int		objp[100];						// �j��G�t�F�N�g�p�v���C���[�ԍ�

// #1.60c7l2�ǉ��ϐ� [�o�b�N�A�b�v]
int		b_wait1[2]={26,26};		// �Œ聨��
int		b_wait2[2]={40,40};		//���Ŏ��̑҂�����
int		b_wait3[2]={28,28};		//�ݒu����Œ�܂ł̃^�C��
int		b_waitt[2]={15,15};		//�����ߎ���
int		b_sp[2]	= {1,1};
int		b_nextc[2];		// [�o�b�N�A�b�v] �����X�s�[�h,NEXT

// #1.60c7l5�ǉ��ϐ�
int		stage[2];	// �X�e�[�W�ԍ�
int		sclear[2];	// �X�e�[�W�N���A������

int		stime[2];	// �X�e�[�W�^�C��
int		ltime[2];	// ���~�b�g�^�C��
int		ctime[2];	// �N���A�^�C��

// #1.60c7l7�ǉ��ϐ�
int		isfmirror[2];		// ���݂̖ʂ��~���[��
int		rollroll_flag[2];	// ���݂̖ʂ����[�����[����
int		xray_flag[2];		// ���݂̖ʂ�X-RAY��#1.60c7p9ex2
int		color_flag[2];		// ���݂̖ʂ�COLOR��#1.60c7p9ex2
int		rest_pblock[2];		// �c��v���`�i�u���b�N��

int		s_ready_start = 15;			// tomoyo ready�J�n
int		s_ready_end = 30;			// tomoyo ready�I��
int		s_go_start = 135;			// tomoyo go�J�n
int		s_go_end = 150;				// tomoyo go�I��

int		dummy;	// �ݒ�t�@�C�����󂾂�23�s�ڂŔ��������̃G���[��������邽�߂̃_�~�[�ϐ�

// #1.60c7l8�ǉ��ϐ�
int		start_stage[2] = {0,0};		// �X�^�[�g���̃X�e�[�W�ԍ�
int		skipKey = 0x3F;				// �X�e�[�W�X�L�b�v�L�[

// #1.60c7l9�ǉ��ϐ�
int		start_nextc[2] = {0,0};		// �X�^�[�g����NEXTC
int		stage_nextc[2] = {0,0};		// �X�e�[�W�X�^�[�g����NEXTC
int		randommode[2] = {0,0};		// �����_�����[�h

// #1.607m3�ǉ��ϐ�
int		clearnum[2];	//�X�L�b�v�����ɃN���A������
int		clearp[2];		//�N���A��

// #1.60c7m5�ǉ��ϐ�
int		t_noborder[2] = {0,0};		// TOMOYO���[�h�̑��؂�Ȃ����[�h 0=���� 1=�L��

// #1.60c7m6�ǉ��ϐ�
int		BigMove[2];					// BIG���̈ړ��P�� 0=2�}�X�P�ʈړ� 1=1�}�X�P�ʈړ�
int		bigtype = 1;				// ����ini�ݒ�p

// #1.60c7m7�ǉ��ϐ�
int		comboM[2];

// #1.60c7m8�ǉ��ϐ�
int		combo2[2];					// 1��������܂܂Ȃ��R���{

// #1.60c7m9�ǉ��ϐ�
int		medaltype = 0;				// ���_���̊G�̎��
int		world_drop_snd = 0;			// ���[���h���[���ł̐ڒn���̗L��(0=�Ȃ� 1=���� 2=�������ȊO����)
int		super_breakeffect = 0;		// TOMOYO�ȊO�ł��S�u���b�N�ɔj��G�t�F�N�g��\������

int		c_cblk[2];					// ���쒆�e�g���~�m�̐F�i���쒆�j
int		c_cblk_r[2];				// ���쒆�e�g���~�m�̐F�i�u������j
int		c_nblk[6 * 2];				// NEXT�~�m�̐F
int		c_hblk[2];					// HOLD�~�m�̐F

// #1.60c7n1�ǉ��ϐ�
int		vs_match = 0;				// �ΐ��
int		vs_win[2] = {0,0};			// ��������
int		fldi[10 * 22 * 2];			// �t�B�[���h�A�C�e��
									// 1�ł��A�C�e���������ƁA���̃A�C�e���͑S�ď����܂��B
									// 0=�Ȃ� 1=MIRROR 2=ROLL ROLL 3=DEATH BLOCK
int		item[2];					// ���݂̃A�C�e��
int		item_name[2];				// �t�B�[���h�E��ɕ\������A�C�e����
int		item_g[2];					// �A�C�e���Q�[�W
int		fldibuf[10 * 22 * 2];		// �t�B�[���h�A�C�e���o�b�t�@(�~���[�̉��o�Ɏg�p)
int		item_t[2];					// �A�C�e���̌��ʎ���
int		item_interval = 20;			// �A�C�e�����o������Ԋu
int		item_rollroll[2];			// �A�C�e���Ń��[�����[����������
int		item_monochrome[2];			// �A�C�e����[]��������

// #1.60c7n2�ǉ��ϐ�
int		monochrome_mode[2] = {0,0};		// ���m�N�����[�h0
int		p_monochrome_mode;		// 0:���� 1:���m�N�� 2:[]
int		hide_tomoyo_totaltime = 0;	// TOMOYO��TOTAL TIME���B��
// #1.60c7n3�ǉ��ϐ�
int		laststage[2];		//���X�g�X�e�[�W�����l
int		rescue[2];			//RE�J�E���^�[
int		REflag[2];			//�s���`�ɂȂ��1�J�E���g�����0��

int		pinch2[2];


// #1.60c7n6�ǉ��ϐ�
int		tspin_c[2];			// T-SPIN!�c��\���t���[����
int		tspin_flag[2];		// T-SPIN�̌����݂����Ȃ���
							// �s���u���b�N���ڒn������Ԃŉ�]�����1�ɂȂ�A�ړ������0�ɂȂ�
							// 1�̏�ԂŃ��C����������ƁuT-SPIN!�v�ƕ\��

// #1.60c7n7�ǉ��ϐ�
int		disable_hold = 0;	// HOLD�֎~�ݒ�
int		disable_irs  = 0;	// ��s��]�֎~�ݒ�
int		max_fps = 60;		// PRACTICE���[�h��FPS

// #1.60c7n8�ǉ��ϐ�
int		replay_save[2];		// ���v���C�ɃZ�[�u�\���ǂ���
int		time2[2];			// TOMOYO���v���C�p�v���C�^�C��

// #1.60c7o1�ǉ��ϐ�
int		sgrade[2];			// ���i�� �������ɔ���
int		min_sgrade = 4;		// ���̒i�ʂ��痠�i�ʂ�\��

// #1.60c7o2�ǉ��ϐ�
int		cp_x[2];				// �őP���X���W
int		cp_rt[2];				// �őP��̃u���b�N�̌���
int		cp_input[10 * 2];		// �R���s���[�^�̓��͏�
int		cpu_flag[2];			// ���삵�Ă���̂��R���s���[�^���ǂ���

// #1.60c7o3�ǉ��ϐ�
int		cp_hold[2];					// �R���s���[�^��HOLD����Ƃ���1
int		cp_player_1p = 0;			// �R���s���[�^�����삷�邩(1P)
int		cp_player_2p = 1;			// �R���s���[�^�����삷�邩(2P)

// #1.60c7o4�ǉ��ϐ�
int		cp_type = 0;				// �R���s���[�^�̐��i 0=�Ƃɂ������C�������� 1=2���C���ȏ������Ƃ�����
int		cp_rot_c[2];

// #1.60c7o5�ǉ��ϐ�
int		tmp_maxPlay;	// �v���C�l���̃o�b�N�A�b�v �V���O����őΐ킷��Ƃ��Ɏg�p
int		block_rframe = 0;	// �u���b�N�̎���ɔ����l�p�`��\��

// �ȉ�hoge�p�b�`���
int		sevolume = -1500;	//���ʉ��̃{�����[���B0���W���A-10000�Ŗ����B
int		se = 1;			//���ʉ��𗬂����ǂ����B(0�Ȃ痬���Ȃ�)
int		bgm = 1;		//BGM�𗬂����ǂ����B(0�Ȃ痬���Ȃ�)

// #1.60c7o6�ǉ��ϐ�
int		endtime[2];		// �X�^�b�t���[���o�ߎ���

// #1.60c7o7�ǉ��ϐ�
int		t_training[2];	// TOMOYO���[�h��1�ʌ���ŗV�Ԃ��ǂ���

// #1.60c7p1�ǉ��ϐ�
int		up_flag[2];			// 0:�O�񁪂��g���ĂȂ�or���𗣂��� 1:�O�񁪂��g����
int		p_stage = -1;		// PRACTICE�Ŏg���X�e�[�W(0:�Ȃ� 1-27:TOMOYO�X�e�[�W 28-99:PRACTICE�X�e�[�W)

// #1.60c7p2�ǉ��ϐ�
int		bgfadesw = 0;		// �w�i�t�F�[�h�X�C�b�` 0:�ʏ� 1:�t�F�[�h�A�E�g 2:�t�F�[�h�C��
int		bgfadelv = 0;		// �w�i�t�F�[�h���x�� 0-256�܂�
int		enable_bgfade = 0;	// �w�i�t�F�[�h�� 0=�g��Ȃ� 1=�g��
int		bgfade_cnt = 0;	// �w�i�t�F�[�h�̑��� �������傫���قǍ���

// #1.60c7p3�ǉ��ϐ�
//int		bgfade_type = 38;	// �w�i�t�F�[�h�̎��

// #1.60c7p4�ǉ��ϐ�
int		english = 0;		// For English Users

// #1.60c7p8�ǉ��ϐ�
int		bgmvolume = -1500;		// BGM�̃{�����[�� 0���W���A-10000�Ŗ���
int		bg_max = 9;				// �w�i�̍ő吔

// #1.60c7p9ex�ǉ��ϐ�
int		xray_bgblack = 1;		// X-RAY���ɔw�i��^�����ɂ���
int		xray_drawblockframe = 1;// X-RAY���Ƀu���b�N�̘g����`��
int		color_bgblack = 0;		// COLOR���ɔw�i��^�����ɂ���

// #1.60c7q1ex�ǉ��ϐ�
int		stp[2];		//ST�v���`�i���_����
int		stg[2];		//ST�����_����
int		sts[2];		//ST�⃁�_����
int		stb[2];		//ST�����_����

// #1.60c7q2ex�ǉ��ϐ�
int		disable_wallkick = 0;	// 1�ɂ���ƕǏR�薳��

// #1.60c7q5�ǉ��ϐ�
int		item_nblk[6 * 2];
int		item_coming[2];
int		item_waiting[2];

int		hanabi_waiting[2];	// �����҂��ԉΐ�
int		hanabi_frame[2];	// ��������܂ł̃t���[����

int		noitem = 0;			// 1�ɂ���ƃA�C�e���������ɂȂ�܂���VERSUS MODE
int		no_hanabi = 0;		// 1�ɂ���ƃ��C���������Ă��ԉ΂��\������Ȃ��Ȃ�܂���BEGINNER MODE

// #1.60c7q6�ǉ��ϐ�
int		r_irs = 1;			// 1�ɂ���ƐԂ�IRS��TGM����i���R��Ȃ��j

// #1.60c7q7�ǉ��ϐ�
int		st_new[20 * 2];		// ����̃Z�N�V�����^�C���\���̐F��ς���Ƃ��Ɏg��
int		max_fps_2 = 60;		// �ő�FPS

// #1.60c7q8�ǉ��ϐ�
int		timelimit2_devil = 0;	// LV1000������^�C��(devil)
int		timelimit2[2] = {0,0};			// ���݂�LV1000������^�C��

// #1.60c7r2�ǉ��ϐ�
int		big_rise = 1;			// BIG���ɂ���オ��2�{

// #1.60c7r2+�ǉ��ϐ�
int		anothermode[2] = {0,0};		// �A�i�U�[���[�h
int		timelimitw_devil = 0;	// ���[���h������^�C��(devil)
int		timelimitw[2] = {0,0};			// ���݂̃��[���h������^�C��

// #1.60c7r4�ǉ��ϐ�
int		vsmodesl = 0;		//vs���[�h�Z���N�g
int		disrise = 0;		//����オ��Ȃ�
int		sptmp[2] = {0, 0};		//VS���[�h���x�e���v���[�g

// #1.60c7r5�ǉ��ϐ�
int		vs_goal = 200;		// VS���[�h �S�[�����x���i0=�Ȃ��j
int		vs_time = 5400;		// VS���[�h �������ԁi0=�������j
int		breakti = 0;		// breaktype = 1�̂Ƃ��̔j��G�t�F�N�g�̎��
int		wintype = 0;

// #1.60c7r7�ǉ��ϐ�
int		world_i_rot = 0;	// ���[���h���[����I�^�~�m�̉�]�␳�^�C�v 0=���E�Ώ̃^�C�v 1=�񍶉E�Ώ̃^�C�v

// #1.60c7r8�ǉ��ϐ�
int		c_mission = 0;		// ���݂̃~�b�V�����ԍ�
int		c_norm[2];			// ���ݒB�����Ă���m���}
int		mission_file = 0;	// �t�@�C���ԍ�

int		mission_type[40];	// ���̎��
int		mission_norm[40];	// ���̃m���}
int		mission_time[40];	// ���̐�������
int		mission_end[40];	// 0=�N���A����Ǝ��̖��� 1=�N���A����ƃG���f�B���O 2=�Ō���_�u�������ȊO�ŃG���f�B���O
int		mission_lv[40];		// �������x���x��
int		mission_bgm[40];	// BGM

// #1.60c7r9�ǉ��ϐ�
int		cycle[4];			// �T�C�N���p
int		mission_erase[40];	// �ォ��������郉�C����

// #1.60c7s2�ǉ��ϐ�
int		mission_opt_1[40];	// �~�b�V�����ɂ���ĈقȂ�ǉ����
int		mission_opt_2[40];
int		mission_opt_3[40];
//int		mission_opt_4[30];

int		target_cleared[200];	// �^�[�Q�b�g�̃X�e�[�W�o���ς݃t���O�i�����ʂ��܂��o��̂�h���j

int		eraser_lines[4];	// �C���C�T�[�̃��C���ʒu
int		eraser_cleared[4];	// ���ɏ��������ǂ����̃t���O
int		eraser_now_pattern = 0;	// �C���C�T�[�̌��݂̃p�^�[��

int		spawn_y_type = 1;	// �o���ʒu�^�C�v�i���S������ς��܂��j

// #1.60c7s3�ǉ��ϐ�
int		tls_view = 0;		// TLS 0=���� 1=��ɗL�� 2=��ɖ���

// #1.60c7s4�ǉ��ϐ�
int		clear_mission;		// �N���A�����~�b�V������
int		eraser_now_lines;	// ���݉�ʓ��ɑ��݂��Ă���C���C�T�[�̃��C���̐�

int		ybigtype = 1;		// BIG���̏c�ړ��P�� 0=2�}�X�P�ʈړ� 1=1�}�X�P�ʈړ�

// #1.60c7s5�ǉ��ϐ�
int		over1000_block[2];
int		over1000_start;		// []�̊J�n���x��

// #1.60c7s6�ǉ��ϐ�
int		upLineT[2];				// ����オ��^�C�v
int		tspin_type;			// T-SPIN�̔�����@

// #1.60c7s6�ǉ��ϐ�
int		hanabi_combo[2];		//HANABI�R���{�␳�p�L����
int		hanabi_flag;			//HANABI�����̗�����ɂ����̔����̂�
int		hanabi_total[2];		//HANABI���v�l
int		endingcnt[2];			//�G���f�B���O���̉ԉ΂Ȃ肷����̂��~�߂�

//int		player;
int		tomoyo_hanabi[2];		//TOMOYO���[�h�pHANABI�J�E���^

int		last_tspin[2];			//T-Spin�ɂ�郉�C��������
int		b_to_b_flag[2];			//Back to Back�t���O
int		b_to_b_c[2];
int		b2bcheck;			//backtoback���`�F�b�N���邩(ini)�H

int		itemappear_c[2];			//�A�C�e���o�����̃Q�[�W�t���b�V������

int		platinaerase_cnt[2];	//�v���`�i�u���b�N�����T�E���h��炷��
int		ext_s[2];				//���ԑ����̉��o�i�\���j�p
int		timeextend_snd_cnt[2];	//���ԑ����̉��o�iSE�j�p

int		fmirror_cnt[2] = {-20,-20};			//�t�B�[���h�~���[�p�J�E���^�[

int		staffroll_y_ex[2];		//���𑜓x�p�X�^�b�t���[��y���W
int		tomoyo_opt[2];			//TOMOYO���[�h�J�n�X�e�[�W�Ȃ�

int		nmlroll_bgmloop = 0;	//���ʃ��[����BGM�����[�v������
int		bgnroll_bgmloop = 0;	//BEGINNER���[����BGM�����[�v������

int		top_frame = 0;			//�㕔�t���[���i0=TI 1=ACE�j

int		heboGB[2];				//mission�̃I�[���h�X�^�C���Ŏg�p

int		isrotatelock[2];		//��]����
int		isholdlock[2];			//HOLD����
int		istimestop[2];			//���Ԓ�~
int		ishidenext[2];			//NEXT�B��
int		ismagnetblock[2];		//�}�O�l�b�g
int		isLRreverse[2];			//���E�t�]
int		isUDreverse[2];			//�㉺�t�]
int		isboost[2];				//�u�[�X�g�t�@�C�A
int		isfever[2];				//�t�B�[�o�[
int		isremote[2];			//�����[�g�R���g���[��
int		isdark[2];				//�_�[�N
int		istrance[2];			//�g�����X�t�H�[��
int		isdouble[2];			//�_�u��
int		ismiss[2];			//miss
int		isfakenext[2];			//fakenext

int		stopmirror_flag[2];		//�ΐ�p�~���[���I������t���O

int		item_timer[2];			//�������A�C�e���̃^�C�}�[

int		isUPdelfield[2];		//��DEL FIELD
int		isDWdelfield[2];		//��DEL FIELD
int		isdeleven[2];			//  DEL EVEN
int		isreflect[2];			//REFLECT
int		isallclear[2];			//ALLCLEAR

// �i�ʃ|�C���g��1����܂ł̎���
int		glimit[33] =
{//
	100, 80, 80, 60, 50, 50, 40, 40, 40,		//  0�` 8
	30, 30, 25, 25, 20, 20, 20, 15, 15,		//  9�`17
	10, 8, 5, 5, 5, 5, 5, 5, 4,		// 18�`26
	5 , 5, 4,3,2,1			// 27
};

int		gpoint[2];			// ���݂̒i�ʃ|�C���g
int		gtime[2];			// �i�ʃ|�C���g�����^�C�}�[
int		gflash[2];			// �i�ʂ��オ�������ɕ\�������点�鎞�Ɏg�p

int		vsbg = 0;	//�ΐ�ɐ�p�̔w�i���g�p�i0=�c�����ɁA1�Ԗڂ��g�p 1=��p�̕����g�p�j

int		use_item[2];	//�g�p����A�C�e�� 0�Ń����_��

int		p_erase_c[11];	//PRACTICE�p �������C�����J�E���g
int		p_heboGBlv = 0;		//PRACTICE�p HeboGB

int		isblind[2];		//�u���C���hON/OFF����
int		blind_flag[2];	//�u���C���h�̗L��

int		p_blind = 0;

int		block_spectrum = 0;	//�u���b�N�̎c���i0=OFF 1=ON�j
// #1.60c7t7�ǉ��ϐ�
int		p_setting;			//practice�p��FAVORITES�̎��p_setting
int		def_p_sp;			//�f�t�H���g��practice�p��FAVORITES�̎��
int		skip_fwait;			//practice�p��FAVORITES�̕\������

int		skillg[2];		//gradeup2�Ɏg��skill
int		skillbai[2];		//skillgup2�Ō��肳���{��
int		endlines[2];		//���[�����ɏ�������
int		gup_down[2];		//cool:1��regret:0

int		start_mission;		//�J�n���̃~�b�V�����ԍ�

int		randseed[2];		//�����V�[�h �v���C���[����
int		first_seed[2];		//�ŏ��̃V�[�h

int		title_acnt = 0;
int		title_mov_f = 0;
int		mov_inter = 0;

int		max_hnext[2];
int		death_plus[2];

// �w�i���[�r�[
int		back_acnt = 0;			// ���݂̃t���[��
int		back_mov_f[13];			// �ő�R�}���i0�ɂ���ƐÎ~��j
int		back_mov_inter[13];		// 1�R�}��\������t���[����

// #1.60c7t9�ǉ��ϐ�
int		time99[2];			// ���x���X�g�b�v����
int		timeN[2];			// �u���b�N�𑀍삵�Ă��鎞��(0-98)
int		ave_laptime3[2];	//�Z�N�V�����̕��ψړ�����
int		gup3rank[2];			//�����N0-2
int		gup3sp_adjust[2];		//�����N�ɂ��킹�ăX�s�[�h����
int		qualityflag[2];			//2��ȏ�o�Ȃ��悤��
int		skillflag[2];
int		tr2[2];					//�ϑ����x��
int		border_rank[2];			//
int		border_time[20] =		//�����N���Ƃ̊�^�C��
{
	17, 15, 14, 13, 10, 10, 12, 13, 13,		//  0�` 8
	13, 13, 13, 13, 13, 13, 12, 12, 11,		//  9�`17
	11, 10		// 18�`20
};
int		border_time59[20] =		//�����N���Ƃ̊�^�C��
{
	17, 15, 14, 13, 10, 10, 11, 12, 12,		//  0�` 8
	12, 12, 12, 12, 12, 11, 11, 10, 10,		//  9�`17
	9, 9		// 18�`20
};
int		border_time48[20] =		//�����N���Ƃ̊�^�C��
{
	17, 15, 14, 13, 10, 10, 10, 9, 9,		//  0�` 8
	9, 9, 9, 9, 9, 9, 9, 9, 9,		//  9�`17
	9, 9		// 18�`20
};
int		grade2[2];			//19�i�ϊ�
int		textguide;			//�e�L�X�g�K�C�h

int		min_speed[2] = {0,0};
int		isthunder[2];
int		thunder = 0;
int		thunder_timer;

int		enable_minspeed = 1;		//TOMOYO�Œᑬ�x��L���ɂ���

int		tomoyo_rise_fld[10 * 20 * 2];	//TOMOYO�p����オ��t�B�[���h �ő�20�i
int		tomoyo_rise[2];					//����オ��ON/OFF������オ��Ԋu
int		tomoyo_rise_t[2];
int		hnext_flag[2];
int		hnext_timer[2];
int		tomoyo_waits[2];
int		tomoyo_domirror[2];
int		tomoyo_ehfinal_c[2];

int		ndelay[2];
int		navigation = 1;
int		navigation_time[2];
int		navigation_limittime = 60;
int		navigation_limitLv = 100;
int		hold_snd = 2;

int		nanamedown = 1;
int		hide_tomoyoinf = 1;
int		erasecnt[2];

int		item_mode[2];	// �A�C�e�����[�h
int		hebo_plus[2];	// TGM+

int		fastmirror = 0;	// �~���[�̃t�B�[���h��]���������@���v���Ԃ͓���

int		beginner_rollbgm = 0;	//�r�M�i�[�̃��[��BGM�ύX (0=��p 1=bgm02 2=�ʏ탍�[��)
// #C7U0.5EX�ǉ��ϐ�
int		rankingrule;
int		ranking_type;				//�����L���O�\���^�C�v

int		medal_ac[2];				// ac���_���̐F
int		medal_sk[2];				// sk���_���̐F
int		medal_co[2];				// co���_���̐F
int		medal_re[2];				// re���_���̐F
int		medal_st[2];				// st���_���̐F(�ォ��S�Ă܂Ƃ߂�)
int		end_f[2];				// ���S�N���A�t���O

int		disable_ehlast_gimmick = 0;

int		lasernum[2];			//���[�U�[�̖{��
int		laserpos[4 * 2];		//���[�U�[�̈ʒu
int		rapid_c[2];				//�{�^���A�Ő��i���[�U�[�̑����Ɏg�p�j
int		dolaser[2];				//�u���b�N�ړ����ȊO�̃��[�U�[���˃t���O
int		do16t[2];				//�u���b�N�ړ����ȊO��16t�t���O

int		nega_pos[10 * 2];		//�l�K�t�B�[���h�֘A
int		donega[2];

int		shotgunpos[22 * 2];		//�V���b�g�K���֘A
int		doshotgun[2];

int		doexchg[2];				//�t�B�[���h����
int		docopyfld[2];				//�R�s�[

int		rt_nblk[6 * 2];			// NEXT�u���b�N�̌����iROTATE LOCK�Ɏg�p�j

int		isbanana[2];			//SHUFFLE FIELD�֘A
int		banana_pos[10 * 2];
int		banana_c[2];

int		enable_randexam = 1;	//1�ɂ���ƈ��̊m���Œi�ʎ�������
int		examination[2];			//�������H0:�Ȃ�1:���i�����@2:�~�i����
int		exam_grade[2];			//�����i��
int		purupuru[2];			//�t�B�[���h�̃v���v��
int		exam_range[8] = {		//�����i�ʂ͈̔�
			9 , 18 ,			//�i��1�ݒ莞
			9 , 28 ,			//    2
			6 , 15 ,			//    3
			9 , 27 				//    4
		};

int		ace_irs = 0;			//ACE��IRS 1��ACE 2�̓J�X�^��

int		stage_skip_mpc[2];	//������
int		hebop_interval[2];	//HEBO+����オ�芴�o
/* ST�����L���O�Ɏg���ϐ� */
int		stage_time[30 * 2];	//�X�e�[�W���Ƃ̃^�C��
int		lvstop_time[20 * 2];	//���x���X�g�b�v�^�C��
int		st_other[30 * 2];		//���Ƃ����u���b�N��

int		harddrop[2];
int		versus_rot[2];

int		tr_20g[2];
int		dorulet[2];

int		Isbesttime;		//�x�X�g�^�C���������邩

// ACE���[�hBGM�t�F�[�h�A�E�g�e�[�u��
int		ace_bgmfadestart[4 * 4] = {
	   45,    95,   145, 10000,		// NORMAL
	   35,    95,   145, 10000,		// ANOTHER
	   45,   145,   195, 10000,		// ANOTHER2
	   45,   396,   10000, 10000,		// OLD
};
// ACE���[�hBGM�؂�ւ��p
int		ace_bgmlist[3 * 4] = {
	0, 1, 2,	// NORMAL��
	5, 3, 4,	// ANOTHER��
	19,18,16,	// ANOTHER2
	8,9,9,	// OLD
};
int		ace_bgmchange[2];

// READY��GO���o�̎�ށ@�i0=HEBO 1=TI�j
int		ready_go_style = 1;

int		ti_ready_start = 20;		// �ʏ� ready�J�n
int		ti_ready_end = 75;		// �ʏ� ready�I��
int		ti_go_start = 80;		// �ʏ� go�J�n
int		ti_go_end = 140;		// �ʏ� go�I��

int		ti_s_ready_start = 45;		// TOMOYO ready�J�n
int		ti_s_ready_end = 155;		// TOMOYO ready�I��
int		ti_s_go_start = 160;		// TOMOYO go�J�n
int		ti_s_go_end = 225;			// TOMOYO go�I��

int		r_start[2];
int		r_end[2];
int		g_start[2];
int		g_end[2];

int		bk_D[2];		// D.R.S�p�@������ɂ��Œ莞��
int		p_item_mode = 0;
int		are_skipflag[2];

int		def_vs_goal = 200;

int		hanabi_int[2];		//���[�����̉ԉΑł��グ�Ԋu

int		isFreefall[2];	// �t���[�t�H�[��
int		Ff_rerise[2];	// ���̏�����Ă���グ���C����
int		isLmovfield[2];	// ��MOV FIELD
int		isRmovfield[2];	// ��MOV FIELD
int		do180field[2];	// 180���t�B�[���h

int		ofs_x[2];		// ���̉��o�p
int		ofs_y[2];
int		ofs_x2[2];
int		ofs_y2[2];
int		stp_point[2];		//ST�v���`�i�l���̂��߂̃|�C���g

int		m_roll_blockframe = 1;	//�������������[���Ńu���b�N�̘g��\���i�����͈�u�j1��ON
int		kickc3[2];

int		fldu[10 * 22 * 2];	// ����オ��t�B�[���h�i����オ��u���b�N�̌`����L���j
int		fldubuf[10 * 22 * 2];
int		upLines_waiting[2];
int		regretcancel[2];
int		def_vs_uplinetype = 3;

int		devil_minus[2];

int		devil_randrise = 1;	// DEVIL(DOOM)�̂���オ��Ԋu���Z�N�V�������Ƃ̃����_���ɂ��� 1=ON
int		devil_nextrise[2];

int		bgmload[20] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};	//�w�肵��BGM��ǂݍ��ނ�
int		exam_ranking = 1;	//�������̃����L���O�o�^�L��

int		novice_mode[2];		//novice���[�h
int		novice_flag[2];		//novice�̃A�C�e���t���O

int		FP_bonus[2];
int		FP_bonus_c[2];

int		FP_next[4] = {0,2,4,6};

int		disable_giji3D = 0;	//�u���b�N�̗��̕\�������ݒ�i0=�S�ĕ\���@1=BIG��TLS�̂ݖ����@2=TLS�̂ݖ����@3=�t�B�[���h��̃u���b�N�̂ݗL���@4=�S�Ė����j
int		alpha_tls = 2;		//TLS�𔼓����ɂ��邩�i0=�Â��s�����@1=BIG�݈̂Â��s�����A���͔������@2=�������j
int		bo[2];
int		fastroll[2];		//�����X�^�b�t���[���p
int		fpbas_mode[2];		//FP��{���[�hfpbas_mode

int		std_opt[2];		//STD���[�h
int		flds[10 * 22 * 2];		// �X�N�E�F�A�p�t�B�[���h�̏��  x + y * 10 + pl * 210
int		fldsbuf[10 * 22 * 2];		// �X�N�E�F�A�p�t�B�[���h�̏��  x + y * 10 + pl * 210

int		squaremode[2];			//�l�p�p
int		itemhistory[2*5];		//�A�C�e������
int		item_pro[50]={5,8,5,9,6,3,5,4,6,8,
					  4,7,5,6,5,3,6,6,5,4,
					  9,1,5,1,7,7,8,3,3,5,
					  7,4,3,3,1,5,3,2,7,   5,
					     5,5,5,5,5,5,5,5,5,5};		//�A�C�e���o�����iini�o�ݒ�j
int		p_nextblock;		// ���K�p�c������
int		squarecnt[2];		//�X�N�E�F�A�J�E���g
int		ori_opt[2];			//�I�����[�h�I�v�V����
int		admit_grade[2]={0,0};			//�F��i��
int		grade_his[2*5]={0,0,0,0,0,0,0,0,0,0};			//�i�ʗ���
int		grade_pasttime[2]={0,0};		//��������ǂꂾ���o�������H
int		scrate[2];				//ori���[�h�p�R���{�X�R�A���[�g
int		timelimitm_devil = 0;	// devilm������^�C��
int		timelimitm[2] = {0,0};			// ���݂�devilm������^�C��

int		timelimitmw_devil = 0;	// devilm������^�C��//���[���h
int		timelimitmw[2] = {0,0};			// ���݂�devilm������^�C��

int		item_num = 39;		//�A�C�e���̌�	playerinitial�ŏ������������s���悤�ɂ��邱��

int medal_info = 0;		//���_���Ɋւ������\�� 0=���Ȃ� 1=����
int timelimit_doom_E = 240 * 60;	//devil-DOOM�V���؂�^�C��-Easy(ACE-SRS�AACE-ARS�ADS-World)
int timelimit_doom_N = 205 * 60;	//						  -Normal(Heboris�ATi-World�AACE-ARS2)
int timelimit_doom_H = 183 * 60;	//						  -Hard(Ti-ARS�AD.R.S�ASRS-X)

int dispLinfo = 1;		//���v���C���̃��C���������̗L��

int relaymode[2];
int first_rot[2];
int relaydata[9 * 2];
int relayround[2];

int vs_style[2];	// �ΐ�̃X�^�C���@0=NORMAL�@1=ATTACK�@2=DEFENCE�@3=ITEM
int item_inter[2];	// �v���C���[���̃A�C�e���o���Ԋu�i�X�^�C���ŊԊu���ς�邽�߁j

int vs_round;	//�����E���h�ڂ�
int winpoint;	//�����ƂȂ�|�C���g��
int vs_points[2];	//���݂̃|�C���g��
int misstimer[2];	//�A�C�e���u�X�J�v�p��item_t

int repdata[20 * 2];

int fade_seed = 20;	// BGM�t�F�[�h�A�E�g�p

int se_play[50];

// C++�p�ݒ�
int cpp_texpow2 = 1;		// [OpenGL] �e�N�X�`���̑傫����2�̗ݏ�Ɍ��肷��
int cpp_texdxt = 0;			// [DirectX] �e�N�X�`����DXT���k����
int cpp_texfilter = 0;		// [DirectX][OpenGL] �g�傳�ꂽ�摜�̕\���`��

// ������萔
str		version = "C7V4EX " FRAMEWORK_VER " 07/11/23";	// ���݂̃X�N���v�g�̃o�[�W����(ver+date�`���A1.60�͏���)
str		RankString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ.,- 0123456789<=>?!#$%&'()=pq";

/* �萔 */
int		item_pronum;		//item_pro�̍��v�@�ʓ|������蓮�Ōv�Z
int		fldisno = 44;		//fldi�ɂ����ăX�N�E�F�A�p�̉摜������ꏊ(�ꏊ�̃J�E���g�́����30�Ԗ�)
int		fldigsno = 45;		//fldi�ɂ�����GOLDEN�X�N�E�F�A�p�̉摜������ꏊ
int		fldihardno = 43;	//fldi�ɂ����ăn�[�h�u���b�N�̉摜������ꏊ

bool	loopFlag = true;			// false �ɂȂ�Ɖ������������������
char	*string[STRING_MAX];

//������������������������������������������������������������������������������
//  �\�[�X�t�@�C���̃C���|�[�g
//������������������������������������������������������������������������������
#include "speed.def"				// ���x������
#include "script/mission_info.def"// �~�b�V�������

#include "script/flexdraw.c"		// �����𑜓x�Ή��`��֐�	#1.60c7p9ex
#include "script/config.c"		// Config	#1.60c5
#include "script/world.c"		// World���[�� #1.60c4
#include "script/classic.c"		// �N���V�b�N���[��
#include "script/ars.c"			// ARS���[��
#include "script/classic_D.c"	// D.R.S
#include "script/effect.c"		// ���o����
#include "script/sound.c"		// ���̏���
#include "script/practice.c"		// PRACTICE���[�h
#include "script/tomoyo.c"		// TOMOYO���[�h
#include "script/ranking.c"		// �����L���O
#include "script/readdef.c"		// �ݒ菉����
#include "script/replay.c"		// ���v���C
#include "script/staffroll.c"	// �X�^�b�t���[��
#include "script/cpu.c"			// �R���s���[�^����
#include "script/sectime.c"		// �Z�N�V�����^�C�������L���O
#include "script/mission.c"		// �~�b�V�������[�h
#include "script/view.c"			// �\������
#include "script/grade.c"		// �i��
#include "script/ranking2.c"		// �����L���O2
#include "script/ranking3.c"		// �����L���O3
#include "readini.c"				// ini�ǂݍ���

//������������������������������������������������������������������������������
//  ���C��
//������������������������������������������������������������������������������
void gameMain(void) {
	int		i, y, temp;

	do
	{
#include "heboris.ini"				// hoge �ݒ��ǂݍ���
#include "heboris_user.ini"			// ���[�U�[�ݒ��ǂݍ��� #1.60c7l7

		LoadIniFile("heboris.ini");
		LoadIniFile("heboris_user.ini");
		LoadIniFile("heboris_cpp.ini");
		YGS2kInit();
		loopFlag = true;

		y = 0;
		restart = 0;

		// ������o�b�t�@�̏�����
		for ( i = 0 ; i < STRING_MAX ; i ++ )
		{
			string[i] = new char[512];
		}

		initialize();


		loop {
			StopAllWaves();
			StopAllBGM();

			backupSetups();	// �ݒ���e���o�b�N�A�b�v #1.60c7o6
			domirror = 0;	// �����𖳌���

			if(GetFPS() != max_fps_2) SetFPS(max_fps_2);

			title();

#if		0
			if(restart) {			// �ċN�� ����Ȃ�ł����̂���? (^^; #1.60c5
				CallScript("script/GAMEINIT.C");
				printFont(1, 1, "PLEASE WAIT...", 2);
				halt;
				JumpScript("script/GAMESTART.C");
				return;
	//			goto reload;
			}
#else
			if(restart) {			// �ċN��
				loopFlag = false;
				break;
			}
#endif

			flag = 0;
			loop {
	//			spriteTime();
				KeyInput();

				// ���v���C���̑�����
				noredraw = 0;
				if(playback && !demo) {
					playback = 0;
					if(getPushState(0, 4) || getPushState(1, 4)) fast = 5;
					if(!(getPressState(0, 4) || getPressState(1, 4))) fast = 0;
					if(!fast && (getPressState(0, 0) || getPressState(1, 0))) fast = 3;
					if(!fast && (getPressState(0, 1) || getPressState(1, 1))) fast = 1;
					if(getPushState(0, 5) || getPushState(1, 5)) {
						if(!tmp_maxPlay)
							maxPlay = 0;
						restoreSetups();
						if(gameMode[0] == 8) gameMode[0] = 0;
						if(gameMode[0] == 4){
							gameMode[0] = 0;
							gameMode[1] = 0;
						}
						flag = 1;
						break;
					}
					if(getPushState(0, 7))
						dispLinfo = !dispLinfo;
					playback = 1;
				}

				count = (count + 1) % 65536;

				// �w�i��\���ݒ�ǉ� #1.60c7i9
				if(!skip_viewbg) viewBack();

				viewFldBackground();

				// �X�^�b�t���[�� #1.60c7n5
				for(i = 0; i < fast + 1; i++) {
					staffRoll(0);
					staffExecute(0);

					if(maxPlay) {
						staffRoll(1);
						staffExecute(1);
					}
				}

				viewField();

				for(i = 0; i < fast + 1; i++) {
					playerExecute();


					// ���o�����ݒ�ǉ� #1.60c7i9
					if((i > 0) && (!skip_obj)) objectExecute();

					noredraw = 1;
				}

				viewPreview();

				// �X�R�A�E�^�C���\�������ݒ�ǉ� #1.60c7i9
				if(!skip_viewscore) viewScore();

				// ���o�����ݒ�ǉ� #1.60c7i9
				if(!skip_obj) objectExecute();


				lastProc();

				spriteTime();

				// flag��1�ȏ�ɂȂ�ƃ^�C�g����
				if(flag > 0) {
					hnext[0] = dispnext;
					hnext[1] = dispnext;
					break;
				}
			}
		}
		YGS2kExit();
	} while ( restart );
}

//������������������������������������������������������������������������������
//  �Ō�ɂ�鏈��
//������������������������������������������������������������������������������
void lastProc(void) {
	int		i,j,tmp,pl,fadec;

	if((playback) && (!demo)){
		if(gameMode[0] != 4){
			ExBltRect(87,29 + 128 * maxPlay + 213 * ((gameMode[0] == 8) && (!maxPlay)), 65, (time2[0]%6)*48 ,(time2[0]%30/6)*48,48,48);
			ExBltRect(85,34 + 128 * maxPlay + 213 * ((gameMode[0] == 8) && (!maxPlay)), 73, 35, 7*6, 22, 7);//ROTS�̕���
			ExBltRect(55,22 + 128 * maxPlay + 213 * ((gameMode[0] == 8) && (!maxPlay)), 84 - (3 * (getDrawRate() == 1)), 64*rots[0] ,32*fontc[rots[0]] + (7 * (getDrawRate() == 1)),64,12 + (5 * (getDrawRate() == 1)));
			if(fast != 0){
				if(((!gflash[0]) || (enable_grade[0] != 4) || (gameMode[0] > 2)) && (!tspin_c[0])){
					printFont(14 - 12 * maxPlay, 26, "FF", 4);
					for(i = 0; i < fast + 1; i++)
						printFont(17 + i - 12 * maxPlay, 26, ">", 4);
					sprintf(string[0], "e%d", fast + 1);
					printFont(18 + i - 12 * maxPlay, 26, string[0], 4);
				}
			}else if(((!gflash[0]) || (enable_grade[0] != 4) || (gameMode[0] > 2)) && (!tspin_c[0])){
				printFont(17 - 12 * maxPlay, 26, "REPLAY", 4 * ((count % 80) >= 20));
			}
		}else{
			if(fast != 0){
				printFont(14, 26, "FF", 4);
				for(i = 0; i < fast + 1; i++)
					printFont(17 + i , 26, ">", 4);
				sprintf(string[0], "e%d", fast + 1);
				printFont(18 + i, 26, string[0], 4);
			}else printFont(17, 26, "REPLAY", 4 * ((count % 80) >= 20));
		}
	}
	if(demo) {
		if(maxPlay) {
			printFont(18, 17, "DEMO", 1);
		} else {
			// ��l�������Ȃ��ꍇ�̓v���C��ʂ������ɂ����̂ŏC��#1.60c6.2d
			if(((count % 80) >= 20) && (!tspin_c[0]) && (sgrade[0] < min_sgrade) && (gflash[0] == 0))
				printFont(18 - 12 * maxPlay, 26, "DEMO", 1);
			ExBltRect(55,31 , 35, 64*rots[0] ,32*fontc[rots[0]],64,32);

			if(!english)
				ExBltRect(55,31, 69, 64*rots[0] ,320,64,32);
			else
				ExBltRect(55,31, 69, 64*rots[0] ,352,64,32);
			ExBltRect(55,31, 102 ,64*rots[0],416,64,32);
			showControl();
		}
		ExBltRect(87,136, 140, (count%6)*48 ,(count%30/6)*48,48,48);

		ExBltRect(77, 0, 176,  count % 320, 20, 320 - (count % 320), 8);
		ExBltRect(77, 320 - (count % 320), 176,  0, 20, count % 320, 8);

		ExBltRect(77, count % 320, 144,  0, 28, 320 - (count % 320), 8);
		ExBltRect(77, 0, 144, 320 - (count % 320), 28, count % 320, 8);

		if(count % 80 < 40) {
			ExBltRect(81,53,154,0,204,213,19);
		}

		if(getDrawRate() != 1) ExBltRect(3,101,120 - 23 * maxPlay,99,83,118,29);

		demo = 0;
		cpu_flag[0] = 0;
		cpu_flag[1] = 0;

		if(getPushState(0, 4) || getPushState(1, 4)) {
			StopAllBGM();
			StopSE(40);
			cpu_flag[0] = 0;
			cpu_flag[1] = 0;
			rots[0] = setupBak[4] % 10;
			rots[1] = setupBak[4] / 10;
			if(gameMode[0] == 4){
				gameMode[0] = 0;
				gameMode[1] = 0;
			}
			if(!tmp_maxPlay)
				maxPlay = 0;
			flag = 1;
		}

		if( (time[0] > 5400) || (time[1] > 5400) || (stat[0] == 14) || (stat[1] == 14)) {
			StopAllBGM();
			StopSE(40);
			cpu_flag[0] = 0;
			cpu_flag[1] = 0;
			rots[0] = setupBak[4] % 10;
			rots[1] = setupBak[4] / 10;

			if(ranking_type==0){//demotime�̓f���\����
				RankingProc_1(demotime);
			}else if(ranking_type==1){
				RankingProc_2(demotime);
			}else{
				RankingProc_3(demotime,0);
			}

			if(gameMode[0] == 4){
				gameMode[0] = 0;
				gameMode[1] = 0;
			}
			if(!tmp_maxPlay)
				maxPlay = 0;
			flag = 1;
		}

		demo = 1;
		cpu_flag[0] = 1;
		cpu_flag[1] = 1;
	}
	// ����󋵂�\�����邨�V�ы@�\�ǉ� #1.60c7f6
	else if(((playback) || (showctrl)) && (showctrl != 2) && (gameMode[0] != 4))
		showControl();

	// �|�[�Y�L�[��joypad�Ɋ��蓖�� 1.60c7g7
	if(!playback) {
		if(getPressState(0, 9)) mpc4[0]++;
		else mpc4[0] = 0;
	} else {
		mpc4[0] = 0;
	}

	if((IsPushKey(pausekey[0]) || (mpc4[0] == 1))) {
		if( ((stat[0] >= 3) && (stat[0] <= 8) && (stat[0] != 7)) || (stat[0] == 13) || (stat[0] == 15) ||
			(stat[0] == 22) || ((stat[0] >= 25) && (stat[0] != 30) && (stat[0] != 36)) || (debug) ) {
			if(pause[0]) {
				// �|�[�Y����
				pause[0] = 0;

				if(gameMode[0] == 0)
					ReplayWave(57);
				else
					ReplayWave(56);
			} else {
				// �|�[�Y
				pause[0] = 1;

				if(gameMode[0] == 0)
					PauseWave(57);
				else
					PauseWave(56);
			}

			if(gameMode[0] == 4)
				pause[1] = !pause[1];
		}
	}

	if(!playback) {
		if(getPressState(1, 9)) mpc4[1]++;
		else mpc4[1] = 0;
	} else {
		mpc4[0] = 0;
	}

	if((IsPushKey(pausekey[1]) || (mpc4[1] == 1))) {
		if( ((stat[1] >= 3) && (stat[1] <= 8) && (stat[1] != 7)) || (stat[1] == 13) || (stat[1] == 15) || (debug) ) {
			if(pause[1]) {
				// �|�[�Y����
				pause[1] = 0;

				if(gameMode[1] == 0)
					ReplayWave(57);
				else
					ReplayWave(56);
			} else {
				// �|�[�Y
				pause[1] = 1;

				if(gameMode[1] == 0)
					PauseWave(57);
				else
					PauseWave(56);
			}

			if(gameMode[1] == 4)
				pause[0] = !pause[0];
		}
	}
	// TOMOYO E-Heart�ŏI�ʃM�~�b�N C7U0
	for(pl = 0; pl <= maxPlay ; pl++){
	if((tomoyo_domirror[pl]) && (stat[1-pl] == 0)){
		SwapToSecondary(23);
		ExBltFastRect(23, 160*pl, 0, 160*pl, 0, 160, 240);
		SwapToSecondary(23);
		ExBltFastRect(23, 160*(!pl), 0,160*pl,0,160,240);
		if((ending[pl] != 3) && (stat[pl] != 21) && (stat[pl] != 20)){
			if(tomoyo_ehfinal_c[pl] < 220)
				fadec = 19;
			else if((tomoyo_ehfinal_c[pl] >= 220) && (tomoyo_ehfinal_c[pl] < 240))
				fadec = 240-tomoyo_ehfinal_c[pl];
			else if((tomoyo_ehfinal_c[pl] >= 240) && (tomoyo_ehfinal_c[pl] < 460))
				fadec = 0;
			else
				fadec = tomoyo_ehfinal_c[pl]-460;

			for(tmp = 0; tmp <= 1 ; tmp++)
				for(i = 0; i < 20; i++)
					for(j = 0 + 4 * pl; j < 10 + 4 * pl; j++)
						ExBltRect(75, (24+(160*tmp))+(j * 8), (i+1+ 4) * 8, tmp*8, fadec*8, 8, 8);
		}
	} else if((tomoyo_domirror[pl]) && (ending[pl] != 3)){
		if(tomoyo_ehfinal_c[pl] < 220)
			fadec = 19;
		else if((tomoyo_ehfinal_c[pl] >= 220) && (tomoyo_ehfinal_c[pl] < 240))
			fadec = 240-tomoyo_ehfinal_c[pl];
		else if((tomoyo_ehfinal_c[pl] >= 240) && (tomoyo_ehfinal_c[pl] < 460))
			fadec = 0;
		else
			fadec = tomoyo_ehfinal_c[pl]-460;

		tmp = pl;
		for(i = 0; i < 20; i++)
			for(j = 0 + 4 * pl; j < 10 + 4 * pl; j++)
				ExBltRect(75, (24+(160*tmp))+(j * 8), (i+1+ 4) * 8, tmp*8, fadec*8, 8, 8);
	}
	}
	if(thunder_timer){
		i = (10 - Rand(20))*getDrawRate();
		j = (10 - Rand(20))*getDrawRate();
		SetSecondaryOffset(i-(i/2),j-(j/2));
		thunder_timer--;
	}else{
		SetSecondaryOffset(0,0);
	}

	/* FPS�\�� */
	// heboris.ini�̐ݒ��FPS���\���ɂł���#1.60c7e
	if(!hide_fps) {
		sprintf(string[0], "%3d/%2dFPS", GetRealFPS(), GetFPS() );	// FPS�̎擾(����l)
		printTinyFont(130, 233, string[0]);
	}

	// NEXT�B��
	if(IsPushKey(dispnextkey[0]) && (!demo) && (!playback) && (!death_plus[0]) && (!hebo_plus[0])&&(!heboGB[0])&&(!onRecord[0])) {
		// next�\������0�`6 #1.60c7q3
		hnext[0]++;
		if(hnext[0] > 6) hnext[0] = 0;
		if((hnext[0] > max_hnext[0]) && onRecord[0]) max_hnext[0] = hnext[0];
	}
	if(IsPushKey(dispnextkey[1]) && (!demo) && (!playback) && (!death_plus[1]) && (!hebo_plus[1])&&(!heboGB[1])&&(!onRecord[1])) {
		hnext[1]++;
		if(hnext[1] > 6) hnext[1] = 0;
		if((hnext[1] > max_hnext[1]) && onRecord[1]) max_hnext[1] = hnext[1];
	}

	if(flag || demo) {
		pause[0] = 0;
		pause[1] = 0;
	}
}

//������������������������������������������������������������������������������
//  �^�C�g��
//������������������������������������������������������������������������������
void title(void) {
	int		player, ofs, pl, mode, game, i, democ;

	// �����ݒ�
	count = 0;
	democ = 0;
	ofs = 0;
	pl = 1;
	mode = 0;
	game = 0;
	title_acnt = 0;

	demo = 0;
	playback = 0;
	cpu_flag[0] = 0;
	cpu_flag[1] = 0;

	tmp_maxPlay = maxPlay;	// �v���C�l�����o�b�N�A�b�v

	// ��ʈʒu�C�� via C++ Port
	SetSecondaryOffset(0,0);

	if(wavebgm == 0) {	// No.30��38�ɕύX #1.60c7i2
		if(!IsPlayMIDI()) PlayMIDI();
	} else if(wavebgm >= 1) {
		if(!IsPlayWave(61)) PlayWave(61);
	}


	// ���[�v�J�n
	loop {
		count++;
		democ++;

		// ������
		KeyInput();

		// �w�i��`��
		if(!title_mov_f){
			ExBltFast(8, 0, 0);
		} else {
			ExBltFastRect(8,0,0,(title_acnt / 10) * 320,(title_acnt % 10) * 240, 320, 240);
			if(count % mov_inter == 0)
				title_acnt++;
			if(title_acnt > title_mov_f -1)
				title_acnt = 0;
		}
		ExBltRect(77, 0, 106,  count % 320, 4, 320 - (count % 320), 8);
		ExBltRect(77, 320 - (count % 320), 106,  0, 4, count % 320, 8);

		ExBltRect(77, count % 320, 20,  0, 4, 320 - (count % 320), 8);
		ExBltRect(77, 0, 20, 320 - (count % 320), 4, count % 320, 8);


		ExBltRect(77, 0, 176 + ofs,  count % 320, 20, 320 - (count % 320), 8);
		ExBltRect(77, 320 - (count % 320), 176 + ofs,  0, 20, count % 320, 8);

		ExBltRect(77, count % 320, 144 - (ofs / 5),  0, 28, 320 - (count % 320), 8);
		ExBltRect(77, 0, 144 - (ofs / 5), 320 - (count % 320), 28, count % 320, 8);

		ExBlt(7, 0, 0);

		// ���쌠�\��
		printFont(6, 28, "a 1998-2002 KENJI HOSHIMOTO", 0);

		// �o�[�W�����\��
		printFont(27, 13, "VERSION 1.60", 4);
		printFont(27, 14, "(2002/03/31)", 6);
		sprintf(string[0], "%20s", version);
		printFont(20 - StrLen(version) / 2, 16, string[0], 1); // #1.60c7f4

		// ���[�h0: �{�^�����͑҂�
		if(mode == 0) {
			if(ofs > 0) ofs = ofs - 2;
			ExBltRect(87,136, 140, (count%6)*48 ,(count%30/6)*48,48,48);
			// �X�^�[�g�{�^���������Ă�������
			if(count % 80 < 40) {
				ExBltRect(81,53,154,0,204,213,19);
			}

			// �ǂ��炩�̃X�^�[�g�{�^���������ꂽ�烂�[�h1��
			for(player = 0; player < 2; player++) {
				if(getPushState(player, 4)) {
					democ = 0;
					PlaySE(10);
					mode = 1;
				}
			}

			// HOLD�{�^���ŃT�E���h�e�X�g#1.60c7c
			if(getPushState(0, 7))
				SoundTestProc();

			// C�{�^���Ńe�X�g���j���[#1.60c7i4
			if(getPushState(0, 6)) {
				testmenu();
				if(restart) mode = 2;
			}

			// ���͑҂��̎������f����ʂ�#1.60c7g4
			if(democ > 1000) {
				doDemoMode();
				mode = 2;
			}
		} else if(mode == 1) {
			// ���[�h1: ���[�h�Z���N�g
			democ = 0; // �f���҂����ԃ��Z�b�g #1.60c7g4
			if(ofs < 40) ofs = ofs + 2;
			printFont(14, 18 + game, "b", fontc[rots[0]]);

			// ���[�h�ꗗ�\��
			printFont(15, 18, "SOLO MODE",            (fontc[rots[0]]) * (game == 0));
			printFont(15, 19, "VERSUS MODE",          (fontc[rots[0]]) * (game == 1));
			printFont(15, 20, "PRACTICE MODE",        (fontc[rots[0]]) * (game == 2));
			printFont(15, 21, "MISSION MODE",         (fontc[rots[0]]) * (game == 3));
			printFont(15, 22, "REPLAY",               (fontc[rots[0]]) * (game == 4));
			printFont(15, 23, "NORMAL RANKING",       (fontc[rots[0]]) * (game == 5));
			printFont(15, 24, "SECTION TIME RANKING", (fontc[rots[0]]) * (game == 6));
			printFont(15, 25, "SETTING",              (fontc[rots[0]]) * (game == 7));
			printFont(15, 26, "OPTION",               (fontc[rots[0]]) * (game == 8));

			// �ǂ��炩�̃W���C�X�e�B�b�N�Ń��[�h�Z���N�g
			for(player = 0; player < 1+maxPlay; player++) {
				// �������ςȂ��ړ� #1.60c7n4
				padRepeat2(player);

				// ���
				if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
				if(getPressState(player, 0)) {
					PlaySE(5);
					game--;
					if(game < 0) game = 8; // �ΐ탂�[�h�ǉ��ɏ]���C�� #1.60c7g1
				}

				// ����
				if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
				if(getPressState(player, 1)) {
					PlaySE(5);
					game++;
					if(game > 8) game = 0; // �ΐ탂�[�h�ǉ��ɏ]���C�� #1.60c7g1
				}

				// �L�����Z��
				if(getPushState(player, 5)) {
					democ = 0;
					mode = 0;
					domirror = 0;
				}

				// ����
				if(getPushState(player, 4)) {
					PlayWave(10);
					mode = 2;
					domirror = 0;	//�����͍ŏ��͖����A�K�v�ɉ�����1�ɂ���

					// �\�����[�h
					if(game == 0) {
						enterSoloMode(player);
						break;
					// �ΐ탂�[�h #1.60c7g1
					} else if(game == 1) {
						tmp_maxPlay = maxPlay;	// �v���C�l�����o�b�N�A�b�v
						if(!tmp_maxPlay) {
							maxPlay = 1;
						}
						if(def_vs_goal == 0)
							vs_goal = 0;
						else if(def_vs_goal / 50 == 0)
							vs_goal = def_vs_goal;
						else
							vs_goal = 200;
						upLineT[0] = def_vs_uplinetype;
						upLineT[1] = def_vs_uplinetype;
						use_item[0] = 0;
						use_item[1] = 0;
						enterVersusMode(player);
						setStartLevel(0);
						setStartLevel(1);
						break;
					// �v���N�e�B�X���[�h
					} else if(game == 2) {
						enterPracticeMode(player);
						break;
					// �~�b�V�������[�h
					} else if(game == 3) {
						enterMissionMode(player);
						break;
					// ���v���C
					} else if(game == 4) {
						domirror = 0;	// ����ɑI����ʂɈڍs���邽�߁A�����𖳌�
						mode = ReplaySelectProc();
						game = 0;
						ofs = 0;
					// �����L���O
					} else if(game == 5) {
						rankingmode = 0;
						if(ranking_type==0){
							RankingProc2_1();
						}else if(ranking_type==1){
							RankingProc2_2();
						}else{
							RankingProc2_3();
						}
						game = 0;
						mode = 0;
						ofs = 0;
					// �Z�N�V�����^�C�������L���O
					} else if(game == 6) {
						ST_RankingView();
						game = 0;
						mode = 0;
						ofs = 0;
					// �ݒ�
					} else if(game == 7) {
						ConfigMenu();
						game = 0;
						ofs = 0;
						if(restart) mode = 2;
						else mode = 0;
					// �I�v�V���� #1.60c7n4
					} else if(game == 8) {
						GameOption();	// config.c
						game = 0;
						mode = 0;
						ofs = 0;
					}
				}
			}
		} else {
			// ���[�h2: ���[�v���甲����
			break;
		}
		spriteTime();
	}
}

/* SOLO MODE�ɓ��� */
void enterSoloMode(int player) {
	hnext[0] = dispnext;
	hnext[1] = dispnext;

	domirror = 1;	// ������L��
	onRecord[0] = 0;
	onRecord[1] = 0;

	randommode[0] = 1;
	versusInit(0);	// 1P NEXT��������
	randommode[0] = 0;
	if(maxPlay){
		randommode[1] = 1;
		versusInit(1);	// 2P NEXT�������� #1.60c7m1
		randommode[1] = 0;
	}
	p_monochrome_mode=0;
	gameAllInit();	// �Q�[���S�̏�����

	// SHIRASE�֌W#1.60c7f4
	level_shirase_start = p_shirase_start_level;
	raise_shirase_lines = p_shirase_line;
	raise_shirase_interval = p_shirase_interval;

	stat[player] = 1;					// �u���b�N�V���b�^�[���s
	statc[player * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
	statc[player * 10 + 1] = 2;			// �V���b�^�[��̓X�e�[�^�XNo.2(SOLO MODE���[�h�Z���N�g)
	statc[player * 10 + 4] = 16;
	// NEXT�u���b�N�̐F��ݒ� #1.60c7n1
}

/* VERSUS MODE�ɓ��� */
void enterVersusMode(int player) {
	int i;

	hnext[0] = dispnext;
	hnext[1] = dispnext;
	onRecord[0] = 0;
	onRecord[1] = 0;
	gameMode[0] = 4;
	gameMode[1] = 4;
	gameAllInit();	// �Q�[���S�̏�����

	backno = 61;

	// SHIRASE�֌W#1.60c7f4
	level_shirase_start = p_shirase_start_level;
	raise_shirase_lines = p_shirase_line;
	raise_shirase_interval = p_shirase_interval;
	p_monochrome_mode=0;

	for(i=0;i<2;i++){
		vslevel[i] = 0;
		gameMode[i] = 4;				// VS���[�h

		stat[i] = 1;					// �u���b�N�V���b�^�[���s
		statc[i * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
		statc[i * 10 + 1] = 16;			// �V���b�^�[��̓X�e�[�^�XNo.16
		if(versus_rot[i] != 9)
			rots[i] = versus_rot[i];
		vs_points[i] = 0;
	}
	versusInit(0);	// NEXT������
	if((cp_player_1p) && (cp_player_2p)){
		versusInit(1);
	}else{
		// 1P��NEXT��2P�ɃR�s�[ #1.60c7m1
		for(i=0;i<1400;i++) {
			nextb[i + 1400] = nextb[i];
		}
		next[1] = next[0];
	}
	nextc[0] = 0;
	nextc[1] = 0;
//	next[1] = next[0];
	if(vs_time != 0) {
		ltime[0] = vs_time;
		ltime[1] = vs_time;
	}
	// NEXT�u���b�N�̐F��ݒ� #1.60c7n1
	setNextBlockColors(0, 1);
	setNextBlockColors(1, 1);
}

/* PRACTICE���[�h�ɓ��� */
void enterPracticeMode(int player) {
	hnext[0] = dispnext;
	hnext[1] = dispnext;

	gameMode[0] = 5;				// PRACTICE���[�h ��ɃZ�b�g #1.60c7g3
	gameMode[1] = 5;
	onRecord[0] = 0;
	onRecord[1] = 0;

	bakhold = p_hold;				// #1.60c7j5

	p_nextblock = nextblock;

	versusInit(0);	// NEXT������
	if(maxPlay) versusInit(1);

	gameAllInit();

	// PRACTICE�ł̂���オ��J�n���x����0 #1.60c7i2
	level_shirase_start = 0;
	raise_shirase_lines = p_shirase_line;
	raise_shirase_interval = p_shirase_interval;

	backno = p_backno;

	vslevel[0] = 0;
	vslevel[1] = 0;

	stat[0] = 1;					// �u���b�N�V���b�^�[���s
	statc[0 * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
	statc[0 * 10 + 1] = 9;			// �V���b�^�[��̓X�e�[�^�XNo.9

	lvup[0] = 1;					// ���x���^�C�v(1p) #1.60c7i2
	lvup[1] = 1;					// ���x���^�C�v(2p) #1.60c7i2

	stat[1] = 10;					// 2P�̓X�e�[�^�XNo.10 (WAIT)

	loadWait(0, def_p_sp);					// �f�t�H���g�ݒ�ǂݍ���

	// �o�b�N�A�b�v�Ƀf�t�H���g�ݒ������
	b_wait1[0] = wait1[0];
	b_wait2[0] = wait2[0];
	b_wait3[0] = wait3[0];
	b_waitt[0] = waitt[0];
	b_sp[0]    = sp[0];
}

/* MISSION MODE�ɓ��� */
void enterMissionMode(int player) {
	gameMode[0] = 8;

	hnext[0] = dispnext;
	hnext[1] = dispnext;

	domirror = 0;
	onRecord[0] = 0;
	onRecord[1] = 0;

	versusInit(0);	// 1P NEXT��������
	p_over1000=0;
	gameAllInit();	// �Q�[���S�̏�����

	stat[0] = 1;					// �u���b�N�V���b�^�[���s
	statc[0 * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
	statc[0 * 10 + 1] = 23;			// �V���b�^�[��̓X�e�[�^�XNo.23(MISSION MODE���[�h�Z���N�g)

	stat[1] = 10;					// 2P�̓X�e�[�^�XNo.10 (WAIT)

	// �f�t�H���g�̖��f�[�^�t�@�C����ǂݍ���
	loadMissionData(mission_file);

	c_mission = 0;
	c_norm[0] = 0;
	c_norm[1] = 0;
	clear_mission = 0;
	eraser_now_lines = 0;

	vslevel[0] = 0;
}

//������������������������������������������������������������������������������
//  �f����ʏ���
//������������������������������������������������������������������������������
void doDemoMode(void) {
	int		player,tmp;

	demo = 1;
	demotime = (demotime + 1) & 3;

	rots[0] = Rand(9);
	rots[1] = Rand(9);
	if(Rand(10) < 6){	//VS�f��
		gameMode[0] = 4;
		gameMode[1] = 4;
		tmp_maxPlay = maxPlay;	// �v���C�l�����o�b�N�A�b�v
		maxPlay = 1;
	}
	else{	//�ʏ�f��
		for(player = 0; player <= maxPlay; player++) {
			do{
				tmp = Rand(11);
			}while((tmp == 2) || (tmp == 3) || (tmp == 4) || (tmp == 5) || (tmp == 6) || (tmp == 8) || (tmp > 10));
			gameMode[player] = tmp;
			if(gameMode[player] == 9){
				std_opt[player] = Rand(2);
				relaymode[player] = Rand(2);
			}else if(gameMode[player] == 10){
				ori_opt[player] = Rand(2);
			}
			if(gameMode[player] == 1) item_mode[player] = (Rand(10) < 4);
		}
		backno = Rand(12);
		bgmlv = 0;
	}

	gameAllInit();
	versusInit(0);
	versusInit(1);

	if(gameMode[0] == 4){
		backno = 61;
		bgmlv = 10;
	}
	else{
		backno = Rand(12);

		bgmlv = setstartBGM(gameMode[0], 0);
		fadelv[0] = 0;
		fadelv[1] = 0;
	}
	for(player = 0; player <= maxPlay; player++) {
		cpu_flag[player] = 1;				// CPU����t���OON
		stat[player] = 1;					// �u���b�N�V���b�^�[���s
		statc[player * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
		statc[player * 10 + 1] = 3;			// �V���b�^�[��̓X�e�[�^�XNo.3
	}
}

void playerInitial(int player) {
	int		i, j;

	sc[player] = 0;
	lv[player] = 0;
	li[player] = 0;
	lc[player] = 0;
	sp[player] = 1;
	time[player] = 0;
	timeOn[player] = 0;

	skill[player] = 0;	// 961�ǉ�
	start_flag[player] = 1;	// 961�ǉ�
	for(i = 0; i < 100; i++) {
		lap_time[i + player * 100] = 0;	// #1.60c7j7�ǉ�
		split_time[i + player * 100] = 0;	// #1.60c7j7�ǉ�
	}
	for(i = 0;i<30;i++){
		stage_time[i + player * 30] = 0;
		st_other[i + player * 30] = 0;		//���Ƃ����u���b�N��
	}

	for(i = 0;i<20;i++){
		lvstop_time[i + player * 20] = 0;
	}

	if(gameMode[player]!= 5){
		nextc[player] = 0;
		next[player] = nextb[0 + player * 1400];
	}else{
		nextc[player] = b_nextc[player];
		next[player] = nextb[b_nextc[player] + player * 1400];
	}
	//hold[player] = -1;				// hold������	#1.60c
	if (gameMode[player] == 5) hold[player] = bakhold;
	else hold[player] = -1; // hold������ #1.60c

	hold_used[player] = 0;			// HOLD������ #1.60c7i1

	kickc[player] = 0;	// �i�v���R��h�~�p #1.60c3
	kickc2[player] = 0;
	tc[player] = -1;		// -1�ɕύX(�\�����0)#1.60c7i8

	tr[player] = 0;			// tgmRank	#1.60c3
	start[player] = 0;		// �Q�[���J�n���x��	#1.60c3
	hidden[player] = 0;
	hiddenti[player] = 0;
	hiddentm[player] = 0;
	hiddeny[player] = 22;
	hiddenti[player] = 0;
	hiddenc[player] = 0;
	upLineNo[player] = 0;	// ����オ�胉�C��No	#1.60c6.2g

	// ����オ��ݒ�𔽉f#1.60c6.2f
	shirase[player] = p_shirase_interval;
	bdowncnt[player] = 0;	// �u���b�N�𒅏��������� #1.60c7i2
	st_bdowncnt[player] = 0;
	erasecnt[player] = 0;

	// �t�B�[���h�T�C�Y�ȂǏ������ABIG���Ȃǂ͏㏑�����鎖 #1.60c7
	fldsizew[player] = 10;
	fldsizeh[player] = 21;
	BigMove[player] = bigtype;	//#1.60c7m6
	IsBig[player] = 0;
	IsBigStart[player] = 0;

	wait1[player] = 26;
	wait2[player] = 40;
	wait3[player] = 28;
	waitt[player] = 15;
	combo[player] = 0;
	comboM[player] = 0;
	combo2[player] = 0;
	hebocombo[player] = 0;		// #1.60c7k4
	pinch[player] = 0;
	pinch2[player] = 1;
	pass_flg[player] = 0;		// #1.60c7j5
	isrollroll[player] = 0;		// #1.60c7j5
	isxray[player] = 0;			// #1.60c7p9ex
	xray_counter[player] = 0;	// #1.60c7p9ex
	iscolor[player] = 0;		// #1.60c7p9ex
	color_counter[player] = 0;	// #1.60c7p9ex

	if(gameMode[player] != 5) {
		// #1.60c7j5
		fmirror = 0;
		rollroll = 0;
		shadow_timer = 0;
		squaremode[player]=0;

		// #1.60c7p9ex
		xray = 0;
		fcolor = 0;
		thunder = 0;
	}
	isfmirror[player] = 0;		// #1.60c7l8
	rollroll_flag[player] = 0;	// #1.60c7l8
	xray_flag[player] = 0;		// #1.60c7p9ex
	color_flag[player] = 0;		// #1.60c7p9ex

	isrotatelock[player] = 0;		//��]����
	isholdlock[player] = 0;			//HOLD����
	istimestop[player] = 0;			//���Ԓ�~
	ishidenext[player] = 0;			//NEXT�B��
	ismagnetblock[player] = 0;		//�}�O�l�b�g
	isLRreverse[player] = 0;		//���E�t�]
	item_timer[player] = 0;
	stopmirror_flag[player] = 0;
	isUDreverse[player] = 0;		//�㉺�t�]
	isboost[player] = 0;			//�u�[�X�g�t�@�C�A
	isfever[player] = 0;			//�t�B�[�o�[
	isremote[player] = 0;			//�����[�g�R���g���[��
	isdark[player] = 0;				//�_�[�N
	isUPdelfield[player] = 0;		//��DEL FIELD
	isDWdelfield[player] = 0;
	isdeleven[player] = 0;
	isreflect[player] = 0;
	istrance[player] = 0;
	isdouble[player] = 0;
	ismiss[player] = 0;
	isallclear[player] = 0;
	isfakenext[player] = 0;

	isblind[player] = 0;			//�u���C���hON/OFF����
	blind_flag[player] = 0;			//�u���C���h�̗L��
	isthunder[player] = 0;
	thunder_timer = 0;

	tomoyo_rise[player] = 0;
	tomoyo_rise_t[player] = 0;
	hnext_flag[player] = 0;
	hnext_timer[player] = 0;
	tomoyo_waits[player] = 0;
	tomoyo_domirror[player] = 0;
	tomoyo_ehfinal_c[player] = 0;
	fpbas_mode[player] = 0;

	item_mode[player] = 0;
	hebo_plus[player] = 0;

	stat[player] = 0;

	bgmlv = 0;
	fadelv[player] = 0;
	anothermode[player] = 0;
	ending[player] = 0;
	edrec[player] = 0;

	// �i�� #1.60c7g5
	grade[player] = 0;
	gmflag1[player] = 0;
	gmflag2[player] = 0;
	gmflag1_e[player] = 0;
	gmflag2_e[player] = 0;
	gmflag_r[player] = 0;	// #1.60c7i2
	semigmflag_r[player] = 0;
	gmflag3[player] = 0;
	gmflag3_e[player] = 0;

	// #1.60c7g7
	timelimit[player] = 0;
	timelimitw[player] = 0;
	timelimitm[player] = 0;
	timelimitmw[player] = 0;
	timelimit2[player] = 0;
	// #1.60c7k1
	shadow_timer_flag[player] = 0;

	// #1.60c7k4
	allclear[player] = 0;

	// #1.60c7l5
	stage[player] = 0;			// �X�e�[�W�ԍ�
	stime[player] = 60 * 60;	// �X�e�[�W�^�C��
	ltime[player] = 180 * 60;	// ���~�b�g�^�C��
	ctime[player] = 0;			// �N���A�^�C��

	// #1.60c7l7
	rest_pblock[player] = 0;

	// #1.60c7l8
	sclear[player] = 0;

	// #1.60c7m3
	clearnum[player] = 0;		//�N���A�X�e�[�W��
	clearp[player] = 0;			//�N���A��

	// #1.60c7m9
	c_cblk[player] = 0;
	c_cblk_r[player] = 0;
	c_hblk[player] = 0;
	setNextBlockColors(player, 1);

	// #1.60c7n1
	item[player] = 0;
	item_name[player] = 0;
	item_g[player] = 0;
	item_t[player] = 0;
	item_rollroll[player] = 0;
	item_monochrome[player] = 0;
	// #1.60c7n3
	rescue[player] = 0;
	REflag[player] = 0;

	// #1.60c7n6
	tspin_c[player] = 0;
	tspin_flag[player] = 0;

	// #1.60c7n8
	replay_save[player] = 1;
	time2[player] = 0;

	// #1.60c7o1
	sgrade[player] = -1;

	// #1.60c7o2
	cpu_flag[player] = 0;

	// #1.60c7o6
	endtime[player] = 0;

	// #1.60c7o7
	t_training[player] = 0;

	stp[player] = 0;
	stg[player] = 0;
	sts[player] = 0;
	stb[player] = 0;

	// #1.60c7q5
	item_nblk[0 + player * 6] = 0;
	item_nblk[1 + player * 6] = 0;
	item_nblk[2 + player * 6] = 0;
	item_nblk[3 + player * 6] = 0;
	item_nblk[4 + player * 6] = 0;
	item_nblk[5 + player * 6] = 0;
	item_coming[player] = 0;
	item_waiting[player] = 0;
	hanabi_frame[player] = 0;
	hanabi_waiting[player] = 0;
	// #1.60c7q7
	hanabi_flag = 0;
	hanabi_combo[player] = 0;
	hanabi_total[player] = 0;
	endingcnt[player] = 0;
	tomoyo_hanabi[player] = 0;
	itemappear_c[player]=0;

	laststage[player] = 26;		// laststage��player���Ƃ� #1.60c7r7

	// #1.60c7r9
	c_mission = 0;
	c_norm[player] = 0;
	for(i = 0; i < 4; i++) cycle[i] = 0;

	// #1.60c7s4
	clear_mission = 0;
	eraser_now_lines = 0;

	// #1.60c7s6
	if(gameMode[player] != 4){
		upLineT[player] = uplinetype;
		use_item[player] = 0;
	}

	if(demo)
		upLineT[player] = 3;
	upLines[player] = 0;
	last_tspin[player]=0;
	b_to_b_flag[player]=0;
	b_to_b_c[player]=0;

	platinaerase_cnt[player]=0;
	ext_s[player]=0;
	timeextend_snd_cnt[player]=0;

	fmirror_cnt[player]=-20;

	staffroll_y_ex[player] = 0;

	tomoyo_opt[player] = 0;
	heboGB[player] = 0;

	gflash[player] = 0;		// �i�ʂ��オ�������ɕ\�������点�鎞�Ɏg�p
	gup_down[player] = 0;	//cool:1��regret:0
	// #1.60c7t5
	gpoint[player] = 0;//�|�C���g
	gtime[player] = 0;//�^�C��

	skillbai[player]=0;
	skillg[player] = 0;
	endlines[player] = 0;

	bgfade_cnt = 0;

	over1000_block[player] = 0;

	for(i=0;i <= 10;i++)
		p_erase_c[i] = 0;

	start_mission = 0;
	if(!playback)
		max_hnext[player] = hnext[player];
	death_plus[player] = 0;

	time99[player] = 0;
	timeN[player] = 0;
	ave_laptime3[player] = 0;
	qualityflag[player]= 0;
	skillflag[player] = 0;
	gup3rank[player] = 0;
	tr2[player] = 0;
	grade2[player] = 0;
	border_rank[player] = 0;

	min_speed[player] = 0;

	ndelay[player] = 1;
	navigation_time[player] = 0;

	novice_mode[player] = 0;
	novice_flag[player] = 0;

	// #1.60c7u0.5
	medal_ac[player] = 0;
	medal_sk[player] = 0;
	medal_co[player] = 0;
	medal_re[player] = 0;
	medal_st[player] = 0;
	end_f[player] = 0;

	lasernum[player] = 0;
	rapid_c[player] = 0;
	dolaser[player] = 0;
	do16t[player] = 0;

	for(i = 0; i < 4;i++)
		laserpos[i + 4 * player] = -1;

	donega[player] = 0;

	for(i = 0; i < 10; i++)
		nega_pos[i + 10 * player] = 0;

	doshotgun[player] = 0;

	for(i = 0; i < 22; i++)
		shotgunpos[i + 22 * player] = 0;

	doexchg[player] = 0;
	docopyfld[player] = 0;

	rt_nblk[0 + 6 * player] = 0;
	rt_nblk[1 + 6 * player] = 0;
	rt_nblk[2 + 6 * player] = 0;
	rt_nblk[3 + 6 * player] = 0;
	rt_nblk[4 + 6 * player] = 0;
	rt_nblk[5 + 6 * player] = 0;

	isbanana[player] = 0;
	for(i = 0; i < 10; i++)
		banana_pos[i + 10 * player] = 0;
	banana_c[player] = 0;

	examination[player] = 0;
	exam_grade[player] = 0;
	purupuru[player] = 0;

	stage_skip_mpc[player] = 0;
	hebop_interval[player] = 15;
	harddrop[player] = 0;

	tr_20g[player] = 0;

	dorulet[player] = 0;

	ace_bgmchange[player] = 0;

	are_skipflag[player] = 0;

	hanabi_int[player] = 20;

	stp_point[player] = 0;

	isFreefall[player] = 0;		// �t���[�t�H�[��
	Ff_rerise[player] = 0;		// ���̏�����Ă���グ���C����
	isLmovfield[player] = 0;	// ��MOV FIELD
	isRmovfield[player] = 0;	// ��MOV FIELD
	do180field[player] = 0	;	// 180���t�B�[���h

	ofs_x[player] = 0;
	ofs_y[player] = 0;
	ofs_x2[player] = 0;
	ofs_y2[player] = 0;

	kickc3[player] = 0;

	regretcancel[player] = 0;
	upLines_waiting[player] = 0;

	devil_minus[player] = 0;

	devil_nextrise[player] = 0;

	FP_bonus[player] = 0;
	FP_bonus_c[player] = 0;
	fastroll[player] = 0;
	monochrome_mode[player] =0;
	p_monochrome_mode=0;
	std_opt[player] = 0;
	ori_opt[player] = 0;
	squarecnt[player] = 0;
	scrate[player]=100;

	relaymode[player] = 0;
	first_rot[player] = rots[player];
	relayround[player] = 0;

	itemhistory[ 0 + 5 * player ] = 0;
	itemhistory[ 1 + 5 * player ] = 0;
	itemhistory[ 2 + 5 * player ] = 0;
	itemhistory[ 3 + 5 * player ] = 0;
	itemhistory[ 4 + 5 * player ] = 0;

	item_num = 39;// �A�C�e���̑���	�A�C�e����ǉ�������X�V���鎖
					// 20:C7U0 �ŏ�  26:C7U1 ���[�U�[�A�l�K�t�B�[���h�A�V���b�g�K���A�t�B�[���h�����A
					// �n�[�h�u���b�N�A�V���b�t���t�B�[���h�ǉ��@27:�����_���ǉ��@31:�S��������

					//1:�~���[�@2:rollroll 3:death 4:X-RAY 5:COLOR 6:ROTATELOCK 7:HIDENEXT 8:MAGNET 9:TIMESTOP 10:HOLDLOCK
					//11:����REV 12:BOOST 13:FEVER 14:����REV 15:REMOTE CON 16:DARK 17:��DEL 18:��DEL 19:DELEVEN 20:TRANSFORM
					//21:LASER 22:NEGA 23:SHOTGUN 24:EXCHG 25:HARD 26:SHUFFLE 27:RANDOM 28:FREEFALL 29:��MOV 30��MOV
					//31:180��32:16t 33:REFLECT 34:DOUBLE�@35:ALLCLEAR 36:MISS 37:COPYFLD 38:FAKENEXT 39:[] //40:SPOTLIGHT
					//41:SPINFIELD 42:PRESSFIELD

	vs_style[player] = -1;
	vs_points[player] = 0;
	vs_round = 1;
	item_inter[player] = item_interval;
	if(item_interval <= 0) item_inter[player] = 1;

	misstimer[player] = 0;

	// ���o�[�W�����̃��v���C�f�[�^���Đ����邽�߂̃X�C�b�` #1.60c7H2
	repversw = 65;	// 0:1.60c7f3�ȑO 1:1.60c7f4�ȍ~ 3:1.60c7g7�ȍ~ 4:1.60c7h2�ȍ~ 5:1.60c7h5�ȍ~ 6:1.60c7i2�ȍ~
					// 7:1.60c7j3�ȍ~ 8:1.60c7k5�ȍ~ 9:1.60c7k8�ȍ~ 10:1.60c7n6�ȍ~ 11:1.60c7o9�ȍ~ 12:1.60c7p1�ȍ~
					// 13:1.60c7p5�ȍ~ 14:1.60c7q8�ȍ~ 15:1.60c7r3�ȍ~ 16:1.60c7r7�ȍ~ 17:1.60c7s6�ȍ~ 18:1.60c7t3�ȍ~
					// 19:C7T6.4�ȍ~ 20:C7T6.8�ȍ~ 21:C7T7.2�ȍ~ 22C7T7.7�ȍ~ 23:C7T8�ȍ~ 25:C7T9.2�ȍ~ 26:C7T9.4�ȍ~
					// 27:C7T9.5�ȍ~ 28:C7U0�ȍ~ 29:C7U0.5�ȍ~ 30:C7U1�ȍ~ 31:C7U1.3�ȍ~ 32:C7U1.5�ȍ~ 33:C7U1.7�ȍ~
					// 34:C7U2�ȍ~ 35:C7U2.5�ȍ~ 36:C7U2.8�ȍ~ 37:C7U2.9�ȍ~ 38:C7U3.7�ȍ~ 39:C7U4.0�ȍ~ 40:C7U4.3�ȍ~
					// 41:C7U4.5�ȍ~ 42:C7U4.7�ȍ~ 43:C7U4.72�ȍ~ 44:C7U4.9�ȍ~ 45:C7U5.0�ȍ~ 46:C7U5.2�ȍ~ 47:C7U5.45�ȍ~
					// 48:C7U5.3�ȍ~ 48:C7U6�ȍ~	-����-
					// 54:C7V2.1�ȍ~ 55:C7V2.4�ȍ~ 56:C7V2.43�ȍ~ 57:C7V2.5�ȍ~ 58:C7V3.3�ȍ~ 59:C7V3.4�ȍ~ 60:C7V3.45�ȍ~
					// 61:C7V3.55�ȍ~ 62:C7V3.6�ȍ~ 63:C7V3.65�ȍ~ 64:C7V3.7�ȍ~ 65:C7V3.75�ȍ~
	//SetVolumeWaveAll(0);
	item_pronum = 0;
	for(i = 0; i < 9; i++)
		relaydata[i + player * 9] = -1;

	for(i = 0 ; i < item_num ; i++){
		item_pronum = item_pronum + item_pro[i];
	}
	for(i = 0; i < 20; i++)
		st_new[i + player * 20] = 0;	// #1.60c7q7

	for(i = 0; i < 20; i++)
		repdata[i + player * 20] = -1;

	for(i = 0; i < 10; i++)
		statc[i + player * 10] = 0;

	for(i = 0; i < 22; i++)
		erase[i + player * 22] = 0;

	for(i = 0; i < 10; i++)
		for(j = 0; j < 22; j++) {
			fld[i + j * 10 + player * 220] = 0;
			fldt[i + j * 10 + player * 220] = 0;	// #1.60c7j5
			fldi[i + j * 10 + player * 220] = 0;	// #1.60c7n1
			fldu[i + j * 10 + player * 220] = 0;
			fldubuf[i + j * 10 + player * 220] = 0;
			flds[i + j * 10 + player * 220] = 0;
			fldsbuf[i + j * 10 + player * 220] = 0;
		}

}

// Big���[�h�p�C�j�V�A���C�Y
// �c�͂Ƃ����ɕs�v�ɂȂ��Ă����̂Ŗ���


//������������������������������������������������������������������������������
//  ����������
//������������������������������������������������������������������������������
void gameAllInit(void) {
	backno = 0;
	fast = 0;
	count = 0;
	overcount = 0;

	bgfadesw = 0;
	bgfadelv = 0;

	playerInitial(0);
	playerInitial(1);

	if(!maxPlay)
		stat[1] = 0;

	objectClear();
	//staffInit2();	// #1.60c7n5
}

//������������������������������������������������������������������������������
//  NEXT��������
//������������������������������������������������������������������������������
// �ϐ�player��ǉ����܂����B#1.60c7m1
void versusInit(int player) {
	int		i, j, k, same, temp, mae, shu, len;

	same = limit[nextblock];
	mae = -1;

	// �c���̓ǂݍ��� #1.60c7g3
	len = 0;

	// tomoyo�̃p�^�[�� #1.60c7l9
	if( ((gameMode[player] == 6) && (!randommode[player])) || (nextblock ==11)|| ((p_nextblock ==11)&&(gameMode[player] == 5))) {
		if(start_stage[player] < 100){	//�ʏ�
			len = StrLen(nextb_list);
			if(len > 0) {
				for(i = 0; i < 1400; i++) {
					j = i % len;
					MidStr(nextb_list, j + 1, 1, string[0]);
					temp = ValLong(string[0]);
					if((temp >= 0) && (temp <= 6)) nextb[i + player * 1400] = temp;
				}
			}
		}else{							//F-Point�͓d���p�^�[��
			len = StrLen(nextfp_list);
			if(len > 0) {
				for(i = 0; i < 1400; i++) {
					j = i % len;
					MidStr(nextfp_list, j + 1, 1, string[0]);
					temp = ValLong(string[0]);
					if((temp >= 0) && (temp <= 6)) nextb[i + player * 1400] = temp;
				}
			}
		}
	} else if((nextblock == 9)|| ((p_nextblock ==9)&&(gameMode[player] == 5))) {
		// �K�C�h���C���Ή��Q�[����NEXT���� #1.60c7s1(nextblock ==11)
		guidelineNextInit(player);
	} else if((nextblock == 8)|| ((p_nextblock ==8)&&(gameMode[player] == 5))) {
		// TGM��NEXT����#1.60c7h4
		tgmNextInit(player);
	} else if((nextblock == 10)|| ((p_nextblock ==10)&&(gameMode[player] == 5))) {
		//�d���p�^�[��NEXT����
		len = StrLen(nextdengen_list);
		//sprintf(string[0], "len=%d", len);
		if(len > 0) {
			for(i = 0; i < 1400; i++) {
				j = i % len;
				MidStr(nextdengen_list, j + 1, 1, string[0]);
				temp = ValLong(string[0]);
				if((temp >= 0) && (temp <= 6)) nextb[i + player * 1400] = temp;
			}
		}
	} else if((nextblock == 12)|| ((p_nextblock ==12)&&(gameMode[player] == 5))) {
		//FP�d���p�^�[��NEXT����
		len = StrLen(nextfp_list);
		//sprintf(string[0], "len=%d", len);
		if(len > 0) {
			for(i = 0; i < 1400; i++) {
				j = i % len;
				MidStr(nextfp_list, j + 1, 1, string[0]);
				temp = ValLong(string[0]);
				if((temp >= 0) && (temp <= 6)) nextb[i + player * 1400] = temp;
			}
		}
	}else if((nextblock == 0)|| ((p_nextblock ==0)&&(gameMode[player] == 5))) {
		//���S�����_��
		do {
			nextb[0 + player * 1400] = Rand(7);
		} while((nextb[0 + player * 1400] != 0) && (nextb[0 + player * 1400] != 1) && (nextb[0 + player * 1400] != 4) && (nextb[0 + player * 1400] != 5));

		for(i = 1; i < 1400; i++) {
			nextb[i + player * 1400] = Rand(7);
		}
	} else {
		shu = nextblock;
		for(i = 0; i < 1400 / shu + 1; i++) {
			for(j = 0; j < 7; j++) nextwork[j] = 0;
			same = same - (same > 0);

			for(j = 0; j < shu; j++) {
				do {
					//����
					if((shu * i + j == 0) && ( ((gameMode[player] != 5) && (next_adjust)) || ((gameMode[player] == 5) && (p_next_adjust)) )) {
						do {
							temp = Rand(7);
						} while((temp != 0) && (temp != 1) && (temp != 4) && (temp != 5));
					} else
						temp = Rand(7);

					if((same == 0) && (mae == temp)) {
						k = 1;
						same = limit[nextblock];
					}
					else k = 0;

				} while(((nextwork[temp] != 0) || (mae == temp)) && (k == 0));

				if(shu * i + j < 1400) nextb[i * shu + j + player * 1400] = temp;
				nextwork[temp] = 1;
				mae = temp;
			}
		}
	}

	nextc[player] = 0;
	next[player] = nextb[0 + player * 1400];

//	hole[player] = Rand(10);	//�[�������̂��߂Ƀu���b�N�V���b�^�[�ֈړ�

	// NEXT�u���b�N�̐F��ݒ� #1.60c7m9
	setNextBlockColors(player, 1);
}

//������������������������������������������������������������������������������
//  TGM����NEXT��������#1.60c7h4
//������������������������������������������������������������������������������
// �ϐ�player��ǉ����܂����B#1.60c7m1
void tgmNextInit(int player) {
	int i, j;
	int history[4];
	int block;

//	for(i = 0; i < 4; i++) history[i] = 3; // ������΂Ŗ��߂�

	// Z S Z S�Ŗ��߂� c7t3.1
		history[0] = 3;
		history[1] = 6;
		history[2] = 3;
		history[3] = 6;

	// ���萶��
	// next_adjust�����삵�ĂȂ������̂łƂ肠�����C�� #1.60c7i4
	if( ((gameMode[player] != 5) && (next_adjust)) || ((gameMode[player] == 5) && (p_next_adjust)) ) {
		do {
			nextb[0 + player * 1400] = Rand(7);
		} while((nextb[0 + player * 1400] == 2) || (nextb[0 + player * 1400] == 3) || (nextb[0 + player * 1400] == 6));
	} else {
		nextb[0 + player * 1400] = Rand(7);
	}
	// ���萶�����ɗ���������Ă��Ȃ����� LITE30.20��� C7U1.5
	for(j = 0; j < 3; j++) {
		history[3 - j] = history[3 - (j + 1)];
	}

	history[0] = nextb[0 + player * 1400];

	// �c��̃c���𐶐�
	for(i = 1; i < 1400; i++) {
		// �c��������
		block = Rand(7);

		// �������c���������ɂ�������ő�4�����������6��ɕύXc7t3.1	��������v���C�ɂ͉e���Ȃ��H
		if((block == history[0]) || (block == history[1]) || (block == history[2]) || (block == history[3])) {
			for(j = 0; j < 6; j++) {
				block = Rand(7);

				// 4�̗����ɖ��������炻�̏�Ŕ�����
				if((block != history[0]) && (block != history[1]) && (block != history[2]) && (block != history[3]))
					break;
			}
		}

		// ���������炷
		for(j=0;j<3;j++) {
			history[3 - j] = history[3 - (j + 1)];
		}

		// �����ɐV�����u���b�N������
		history[0] = block;

		// nextb�ɓ����
		nextb[i + player * 1400] = block;
	}
}

//������������������������������������������������������������������������������
//  �K�C�h���C���Ή��Q�[������NEXT��������
//������������������������������������������������������������������������������
void guidelineNextInit(int player) {
	int i, j;
	int tmp;
	int first;
	int block[7];	// �u���b�N���o�����ǂ����̃t���O

	first = 1;
	//����@�K�C�h���C�����ɂ�nextadjust��K�p
	if( ((gameMode[player] != 5) && (next_adjust)) || ((gameMode[player] == 5) && (p_next_adjust)) ) {
		//������
		for(j = 0; j < 7; j++) block[j] = 0;

		do {
			tmp = Rand(7);
		} while((tmp == 2) || (tmp == 3) || (tmp == 6));

		// �u���b�N���o���t���OON
		block[tmp] = 1;

		// nextb�ɓ����
		nextb[0 + player * 1400] = tmp;
	} else {
		first = 0;	//���ŏ��������s��
	}

	for(i = 0; i < 200; i++) {
		// ������	nextadjust�K�p���A�ŏ��͏��������Ȃ�
		if(!first)
			for(j = 0; j < 7; j++) block[j] = 0;

		// �c���쐬
		for(j = first; j < 7; j++) {
			do {
				tmp = Rand(7);	// �c��������
			} while(block[tmp] == 1);

			// �u���b�N���o���t���OON
			block[tmp] = 1;

			// nextb�ɓ����
			nextb[i * 7 + j + player * 1400] = tmp;
		}
		first = 0;	//�t���OOFF
	}
}


// NEXT�̈���̃u���b�N�̐F��ݒ� #1.60c7m9
// ��]�@����ύX������NEXT�֌W�̕ϐ���M�����肷��x�ɌĂяo���K�v����
void setNextBlockColors(int player, int first) {
	int i,j, tmp;

	if( first ) {
		// ������//�u���b�N�̎�ނ����߂�
		c_nblk[0 + player * 6] = 1 + next[player];
		if( player == 0 ) {
			c_nblk[1 + player * 6] = 1 + nextb[(nextc[player] + 1) % 1400];
			c_nblk[2 + player * 6] = 1 + nextb[(nextc[player] + 2) % 1400];
			c_nblk[3 + player * 6] = 1 + nextb[(nextc[player] + 3) % 1400];
			c_nblk[4 + player * 6] = 1 + nextb[(nextc[player] + 4) % 1400];
			c_nblk[5 + player * 6] = 1 + nextb[(nextc[player] + 5) % 1400];
		} else {
			c_nblk[1 + player * 6] = 1 + nextb[( (nextc[player] + player * 1400) + 1 ) % 2800];
			c_nblk[2 + player * 6] = 1 + nextb[( (nextc[player] + player * 1400) + 2 ) % 2800];
			c_nblk[3 + player * 6] = 1 + nextb[( (nextc[player] + player * 1400) + 3 ) % 2800];
			c_nblk[4 + player * 6] = 1 + nextb[( (nextc[player] + player * 1400) + 4 ) % 2800];
			c_nblk[5 + player * 6] = 1 + nextb[( (nextc[player] + player * 1400) + 5 ) % 2800];
		}

		// ��Ō��܂����u���b�N��ނ����ɐF��ϊ����� #1.60c7p1
		if( isWRule(player) ) {
			// ���[���h
			for(i = 0; i < 6; i++) {
						c_nblk[i + player * 6] = wcol[ c_nblk[i + player * 6] - 1 ];
			}
		} else if( (rots[player] >= 4 ) && (rots[player] != 8)) {
			// ARS
			for(i = 0; i < 6; i++) {
						c_nblk[i + player * 6] = acol[ c_nblk[i + player * 6] - 1 ];
			}
		} else {
			// �N���V�b�N
			for(i = 0; i < 6; i++) {
						c_nblk[i + player * 6] = ccol[ c_nblk[i + player * 6] - 1 ];
			}

		}

		if(monochrome_mode[player]==1) {
			// ���m�N�����[�h
			for(i = 0; i < 6; i++) {
						c_nblk[i + player * 6] = 0;
			}
		} else if(((p_over1000)&&(gameMode[player] == 5))||(monochrome_mode[player] == 2)){	//���u���b�N����[]��
				if(rots[player] != 6){			//[]
					for(i = 0; i < 6; i++) {
						c_nblk[i + player * 6] = 8;
					}
				}else{
					if(heboGB[player] == 1){	//01
						for(i = 0; i < 6; i++) {
							c_nblk[i + player * 6] = 8;
						}
					}else{
						for(i = 0; i < 6; i++) {	//GB
							j=c_nblk[i + player * 6];
							c_nblk[i + player * 6] = c_nblk[i + player * 6]-(9*(j>=0));
						}
					}
				}
		}
	} else {
		// NEXT�̈���̃u���b�N�̐F�����炷
		c_nblk[0 + player * 6] = c_nblk[1 + player * 6];
		c_nblk[1 + player * 6] = c_nblk[2 + player * 6];
		c_nblk[2 + player * 6] = c_nblk[3 + player * 6];
		c_nblk[3 + player * 6] = c_nblk[4 + player * 6];
		c_nblk[4 + player * 6] = c_nblk[5 + player * 6];

		// NEXT�̈�̍Ō�̃u���b�N�̐F��ݒ�
		if( player == 0 )
			c_nblk[5 + player * 6] = 1 + nextb[(nextc[player] + 5) % 1400];
		else
			c_nblk[5 + player * 6] = 1 + nextb[( (nextc[player] + player * 1400) + 5 ) % 2800];

		// �F��ϊ����� #1.60c7p1
		if( isWRule(player) )
			c_nblk[5 + player * 6] = wcol[ c_nblk[5 + player * 6] - 1 ];
		else if( (rots[player] >= 4 ) && (rots[player] != 8))
			c_nblk[5 + player * 6] = acol[ c_nblk[5 + player * 6] - 1 ];
		else
			c_nblk[5 + player * 6] = ccol[ c_nblk[5 + player * 6] - 1 ];

		tmp = hnext[player] - 1;
		if(tmp < 0) tmp = 0;
		if(monochrome_mode[player] == 1)	//���m�N��
			c_nblk[5 + player * 6] = 0;
		// NEXT�ȍ~�̃u���b�N��[] #1.60c7s6
		if( (tc[player] >= over1000_start) ||(over1000_block[player])||((p_over1000)&&(gameMode[player] == 5))||(monochrome_mode[player] == 2) ) {
			if(rots[player] != 6){	//[]
				for(i = tmp; i < 6; i++) {
					c_nblk[i + player * 6] = 8;
				}
			}
			else{
				if(heboGB[player] == 1){	//01
						for(i = 0; i < 6; i++) {
							c_nblk[i + player * 6] = 8;
						}
				}
				for(i = tmp; i < 6; i++) {	//GB
					j=c_nblk[i + player * 6];
					c_nblk[i + player * 6] = c_nblk[i + player * 6]-(9*(j>=0));
				}
			}
		}
		//��]������ �u���b�N�̌��������炷
		if(isrotatelock[player]){
			rt[player] = rt_nblk[0 + 6 * player];
			rt_nblk[0 + 6 * player] = rt_nblk[1 + 6 * player];
			rt_nblk[1 + 6 * player] = rt_nblk[2 + 6 * player];
			rt_nblk[2 + 6 * player] = rt_nblk[3 + 6 * player];
			rt_nblk[3 + 6 * player] = rt_nblk[4 + 6 * player];
			rt_nblk[4 + 6 * player] = rt_nblk[5 + 6 * player];
			rt_nblk[5 + 6 * player] = rand(4,player);
		} else if(ace_irs){
			rt[player] = rt_nblk[0 + 6 * player];
			rt_nblk[0 + 6 * player] = 0;
		}

		// �A�C�e�������炷
		item[player] = item_nblk[0 + player * 6];
		item_nblk[0 + player * 6] = item_nblk[1 + player * 6];
		item_nblk[1 + player * 6] = item_nblk[2 + player * 6];
		item_nblk[2 + player * 6] = item_nblk[3 + player * 6];
		item_nblk[3 + player * 6] = item_nblk[4 + player * 6];
		item_nblk[4 + player * 6] = item_nblk[5 + player * 6];
		item_nblk[5 + player * 6] = 0;

		if((item_mode[player]) || ((gameMode[player] == 0) && (novice_mode[player])))
			item_nblk[2 + player * 6] = item_coming[player];
		else
			item_nblk[(hnext[player]-1) + player * 6] = item_coming[player];
	}
}
//������������������������������������������������������������������������������
//  �v���C���[�̃X�e�[�^�X�ɉ����Ċe���������s
//������������������������������������������������������������������������������
void playerExecute(void) {
	int		i, newhole, j, k, temp,pages2;
//	�O���[�o���ϐ�player�͔p�~���܂����B
//	����Ɂui�v��p���Ă��������B

	if(flag == 1) return;

	// �̂ăQ�[
	if(doGiveup()) {
		return;
	}

	// PRACTICE�ł̎��S����
	if(flag == -1) {
		PracticeDeath();
		return;
	}
	// �ΐ�ł̎��S����
	if(flag == -2) {
		winner();
		return;
	}

	if(flag == -3){
		winner2();
		return;
	}

	// �����������Ȃ�x������炷 #1.60c7l5
	// �v���C���̂� #1.60c7l6
	if( ((pinch[0])&&(onRecord[0])) || ((pinch[1])&&(onRecord[1])) ) {
		if( !IsPlayWave(40) ) PlaySE(40);
	} else {
		// �s���`����ʏ��Ԃɖ߂����瑦�~�߂� #1.60c7l6
		StopSE(40);
	}


	// �X�e�[�W�X�L�b�v�L�[������
	if( IsPressKey(skipKey) ){
			stage_skip_mpc[0]++;
			}else{
			stage_skip_mpc[0]=0;
	}
	// ���������ꂽ����s
	if( (gameMode[0] == 6) && (timeOn[0]) && (ltime[0] > 1800) && (stage[0] < 19 )
	 && (stage_skip_mpc[0] >= 60)) {
		replay_save[0] = 0;				// ���v���C�L�^�s�� #1.60c7n8
		ltime[0] = ltime[0] - 1800;		// -30�b
		timeOn[0] = 0;					// �^�C�}�[�X�g�b�v
		sclear[0] = 0;					// �X�L�b�v
		recFaultTime(0);				//�X�e�[�W�N���A���Ă��Ȃ�
		statc[0 * 10] = 0;				// �J�E���^��0��
		statc[0 * 10 + 1] = 0;
		stat[0] = 17;					// �X�e�[�W�I��
		stage_skip_mpc[0] = 0;
	}

	for(i = 0; i < 1 +maxPlay; i++) {

		if(pause[i]) {
			if( (count % 40 < 20) && (!debug) ){
				printFont(17 + 24 * i - 12 * maxPlay, 15, "PAUSE!", fontc[rots[i]]);
			}
			if(gameMode[i] == 5){
				if(stat[i] == 5){
					drawCBlock (i, blk[i] + 1, 0, 0 , 0 , 0);
					if(spawn_y_type)// �t�B�[���h�g
						viewFldFrame(1,i);
				}
				if((item_mode[i])||(novice_mode[i])){
					printFont(14 - 12 * maxPlay, 16, "C+<L R>:ITEM", count % 9);
					if(getPressState(i, 6)){
						if(getPushState(i, 2)){
							PlaySE(5);
							item_nblk[0 + i * 6]--;
							if(item_nblk[0 + i * 6] < 0) item_nblk[0 + i * 6] = item_num;
							item_name[i] = item_nblk[0 + i * 6];
						}
						if(getPushState(i, 3)){
							PlaySE(5);
							item_nblk[0 + i * 6]++;
							if(item_nblk[0 + i * 6] > item_num) item_nblk[0 + i * 6] = 0;
							item_name[i] = item_nblk[0 + i * 6];
						}
					}
				}
			}
			goto skip;
		}

		// X-RAY�p�J�E���g#1.60c7p9ex
		if ( isxray[i] ) {
			xray_counter[i] ++;
		}

		// COLOR�p�J�E���g#1.60c7p9ex
		if ( iscolor[i] ) {
			color_counter[i] ++;
		}

		// �ԉΗp�J�E���g #1.60c7q5
		if( hanabi_waiting[i] ) {
			hanabi_frame[i] = hanabi_frame[i] + 3;
			if(hanabi_waiting[i] > 60)
				hanabi_frame[i] = hanabi_frame[i] + 3;

			if(hanabi_frame[i] >= 30) {
				hanabi_waiting[i]--;
				PlaySE(35);
				objectCreate2(i, 7, Rand(80) + 72 + 192 * i - 96 * maxPlay, 16 + Rand(20) + 116 * ((checkFieldTop(i) < 12) && (by[i] < 12)), 0, 0, Rand(7)+1, 0);
				//hanabi_total[i]++;//�����J�E���g
				hanabi_frame[i] = 0;
			}
		}else{
			hanabi_frame[i] = 30;
		}
		if((ending[i] == 2) && (gameMode[i] == 0)&&(endtime[i] % hanabi_int[i] == 0)&&(!novice_mode[i])){//���[�����ԉ΁@staffroll.c����ړ�
			hanabi_total[i]++;
			PlaySE(35);
			objectCreate2(i, 7, Rand(80) + 72 + 192 * i - 96 * maxPlay, 16 + Rand(20) + 116 * ((checkFieldTop(i) < 12) && (by[i] < 12)), 0, 0, Rand(7)+1, 0);
		}


		if(item_timer[i]) item_timer[i]--;


		//�v���`�i�u���b�N�����T�E���h
		if(platinaerase_cnt[i] != 0){
			if(platinaerase_cnt[i] % 10 == 0){
					PlaySE(41);
			}
		platinaerase_cnt[i]--;
		}
		//�ΐ�ł̎��Ԑ��A�C�e���̌��ʏI��
		if( (gameMode[i] == 4) || (item_mode[i]) ) {
			if( (isrotatelock[i]) && (item_timer[i] <= 0) ) {
				// ROTATE LOCK
				isrotatelock[i] = 0;
				// NEXT�u���b�N�̌��������ɖ߂�
				rt_nblk[0 + 6 * i] = 0;
				rt_nblk[1 + 6 * i] = 0;
				rt_nblk[2 + 6 * i] = 0;
				rt_nblk[3 + 6 * i] = 0;
				rt_nblk[4 + 6 * i] = 0;
				rt_nblk[5 + 6 * i] = 0;
				item_timer[i] = 0;
				if(cpu_flag[i]) {
					cpuCheckBestSpot(i);
				}
			} else if( (ishidenext[i]) && (item_timer[i] <= 0) ) {
				// HIDE NEXT
				ishidenext[i] = 0;
				item_timer[i] = 0;
			} else if( (isLRreverse[i]) && (item_timer[i] <= 0) ) {
				// LR reverse
				isLRreverse[i] = 0;
				item_timer[i] = 0;
			} else if( istimestop[i] && (item_timer[i] <= 0)) {
				// ���Ԓ�~
				istimestop[i] = 0;
				item_timer[i] = 0;
				StopSE(47);
			} else if( (isboost[i]) && (item_timer[i] <= 0) ) {
				// BOOST FIRE
				isboost[i] = 0;
				item_timer[i] = 0;
			} else if( (isfever[i]) && (item_timer[i] <= 0)) {
				// �t�B�[�o�[
				if(!isfever[1-i])
					StopWave(65);
				if((!IsPlayWave(50+bgmlv)) && (!isfever[1-i]) && (!ending[i]) && (timeOn[i]))
					PlayWave(50 +bgmlv);
				isfever[i] = 0;
				item_timer[i] = 0;
			} else if( (isUDreverse[i]) && (item_timer[i] <= 0) ) {
				// UD reverse
				isUDreverse[i] = 0;
				item_timer[i] = 0;
			} else if( (isreflect[i]) && (item_timer[i] <= 0) ) {
				// reflect
				isreflect[i] = 0;
				item_timer[i] = 0;
			}  else if( (isdark[i]) && (item_timer[i] <= 0) ) {
				// �_�[�N
				isdark[i] = 0;
				item_timer[i] = 0;
			} else if( (isdouble[i]) && (item_timer[i] <= 0) ) {
				// �_�u��
				isdouble[i] = 0;
				item_timer[i] = 0;
			} else if( (isfakenext[i]) && (item_timer[i] <= 0) ) {
				// fake NEXT
				isfakenext[i] = 0;
				item_timer[i] = 0;
			}
		}

		// 15���Œ�����#1.60c7h3
		// �����߂͍����������Ȃ� #1.60c7k8
		// speed.def�ő��x��ς����� #1.60c7l2
		// �~�b�V�����ł͖��� C7T6.6
		if((gameMode[i] <= 4) || (gameMode[i] == 10)) {
			if((time[i] > 54000) && (limit15)) {
				sp[i]    = speed_limit15;
				wait1[i] = wait1_limit15;
				wait2[i] = wait2_limit15;
				wait3[i] = wait3_limit15;
			}
		}

		if((istimestop[i]) && (repversw >= 35)){
			if(stat[i] == 5){
				drawCBlock (i, blk[i] + 1, 3, 0 , 0 , 0);
				if(spawn_y_type)// �t�B�[���h�g
					viewFldFrame(1,i);
			}
			goto next;
		}
		// jump(stat[i],l00,l01,l02,l03,l04,l05,l06,l07,l08,l09,l10,l11,l12,l13,l14,l15,l16,l17,l18,l19,l20,l21,l22,l23,l24,l25,l26,l27,l28,l29,l30,l31,l32,l33,l34,l35,l36,l37,l38);
//sprintf(string[0],"%2d STAT",stat[i]);
//printFont(0, 3, string[0], (count % 4 / 2) * digitc[rots[i]]);
		switch ( stat[i] ) {
			case 0: goto l00;
			case 1: goto l01;
			case 2: goto l02;
			case 3: goto l03;
			case 4: goto l04;
			case 5: goto l05;
			case 6: goto l06;
			case 7: goto l07;
			case 8: goto l08;
			case 9: goto l09;
			case 10: goto l10;
			case 11: goto l11;
			case 12: goto l12;
			case 13: goto l13;
			case 14: goto l14;
			case 15: goto l15;
			case 16: goto l16;
			case 17: goto l17;
			case 18: goto l18;
			case 19: goto l19;
			case 20: goto l20;
			case 21: goto l21;
			case 22: goto l22;
			case 23: goto l23;
			case 24: goto l24;
			case 25: goto l25;
			case 26: goto l26;
			case 27: goto l27;
			case 28: goto l28;
			case 29: goto l29;
			case 30: goto l30;
			case 31: goto l31;
			case 32: goto l32;
			case 33: goto l33;
			case 34: goto l34;
			case 35: goto l35;
			case 36: goto l36;
			case 37: goto l37;
			case 38: goto l38;
		}

		l00: statJoinwait(i);			// 00 -> �r���Q���҂����
				goto next;
		l01: statBlockSutter(i);		// 01 -> �u���b�N�V���b�^�[
				goto next;
		l02: statSelectMode(i);			// 02 -> ���[�h�Z���N�g���
				goto next;
		l03: statReady(i);				// 03 -> Ready!?
				goto next;
		l04: statBlock(i);				// 04 -> �u���b�N��������
				goto next;
		l05: statMove(i);				// 05 -> �u���b�N�ړ���
				goto next;
		l06: statErase(i);				// 06 -> ���ԉ҂�
				goto next;
		l07: statGameOver(i);			// 07 -> �Q�[���I�[�o�[���o
				goto next;
		l08: statEraseBlock(i);			// 08 -> �u���b�N����
				goto next;
		l09: statSelectLevel(i);		// 09 -> ���x���Z���N�g���
				goto next;
		l10: statVersusWait(i);			// 10 -> ���܂������������
				goto next;
		l11: statNameEntry(i);			// 11 -> �l�[���G���g���[
				goto next;
		l12: statSelectStartLv(i);		// 12 -> debug = 1�̂Ƃ��̃��x���Z���N�g
				goto next;
		l13: statEnding(i);				// 13 -> �G���f�B���O���o
				goto next;
		l14: statResult(i);				// 14 -> ���ʉ��
				goto next;
		l15: statRelayselect(i);		// 15 -> ROT.relay���[�h�Z���N�g��ʁ@
				goto next;					// �ǂ��݂Ă�SHIRASE������オ��͎g�p����Ă��Ȃ��̂ōė��p
		l16: statVersusSelect(i);		// 16 -> �ΐ탂�[�h�Z���N�g���
				goto next;
		l17: statTomoyoNextStage(i);	// 17 -> TOMOYO���[�h �X�e�[�W�N���A�^�^�C���I�[�o�[ (tomoyo.c)
				goto next;
		l18: statTomoyoEditor(i);		// 18 -> TOMOYO���[�h �X�e�[�W�G�f�B�^ (tomoyo.c)
				goto next;
		l19: statTomoyoSelect(i);		// 19 -> TOMOYO���[�h �Z���N�g��� (tomoyo.c)
				goto next;
		l20: statTomoyoResult(i);		// 20 -> TOMOYO���[�h ���ʕ\�� (tomoyo.c)
				goto next;
		l21: statGameOver2(i);			// 21 -> �Q�[���I�[�o�[�\��
				goto next;
		l22: statNothing(i);			// 22 -> ��莞�ԉ������Ȃ�
				goto next;
		l23: statMissionSelect(i);		// 23 -> MISSION���[�h �Z���N�g���
				goto next;
		l24: statMissionEditor(i);		// 24 -> MISSION���[�h �G�f�B�b�g���
				goto next;
		l25: statDelField(i);			// 25 -> ���C����������
				goto next;
		l26: statLaser(i);				// 26 -> ���[�U�[
				goto next;
		l27: statNegafield(i);			// 27 -> �l�K�t�B�[���h
				goto next;
		l28: statShotgun(i);			// 28 -> �V���b�g�K��
				goto next;
		l29: statExchangefield(i);		// 29 -> �t�B�[���h����
				goto next;
		l30: statExamination(i);		// 30 -> �i�ʎ������ۂ���
				goto next;
		l31: statItemRulet(i);			// 31 -> �A�C�e�����[���b�g
				goto next;
		l32: statFreefall(i);			// 32 -> ���R����
				goto next;
		l33: statMovfield(i);			// 33 -> �u���b�N�̕Ǌ�
				goto next;
		l34: stat180field(i);			// 34 -> �u���b�N���Ђ�����Ԃ�
				goto next;
		l35: statDelfromUpper(i);		// 35 -> �ォ�烉�C����������
				goto next;
		l36: statTomoyoSelect_FP(i);	// 36 -> TOMOYO F-Point���[�h �Z���N�g��� (tomoyo.c)
				goto next;
		l37: statSelectStandardSp(i);	// 37 -> STANDARD���x���[�h
				goto next;
		l38: statReplaySave(i);			// 38 -> ���v���C�ۑ����j���[
				goto next;
		next:

		if(isbanana[i])
			statBanana(i);				// EX -> SHUFFLE FIELD

		// �^�C������
		increment_time(i);

		skip:	;
	}


	// T-SPIN �c��\���t���[���������� #1.60c7n6
	if(tspin_c[0]) tspin_c[0]--;
	if(tspin_c[1]) tspin_c[1]--;

	if(b_to_b_c[0]) b_to_b_c[0]--;
	if(b_to_b_c[1]) b_to_b_c[1]--;


	// BGM�t�F�[�h�A�E�g
	bgmFadeout();



	// ���҃Q�[���I�[�o�[�Ȃ��莞�Ԍo�ߌ�^�C�g����
	if((stat[0] == 0) && (stat[1] == 0)) {
		if(!overcount) {
			versusInit(0);
			setNextBlockColors(0,1);	// #1.60c7m9
			hold[0] = -1;

			if(maxPlay) {
				versusInit(1);
				setNextBlockColors(1,1);
				hold[1] = -1;
			}
		}
		if(playback) {
			restoreSetups();
			if(!tmp_maxPlay)
				maxPlay = 0;
			if(gameMode[0] == 8) gameMode[0] = 0;
			flag = 1;
		}
		overcount++;
		if(overcount > 300) {
			if( !playback ){
				if(ranking_type==0){
					RankingProc_1(gameMode[0]);
				}else if(ranking_type==1){
					RankingProc_2(gameMode[0]);
				}else{
					if((enable_grade[0]==3)||(enable_grade[0]==4)||(anothermode[0]>=2)||(tomoyo_opt[0]>=4)||(std_opt[0]>=2)){
					pages2=1;//�e���[�h��2��ʖ�
					}else{
					pages2=0;
					}
					RankingProc_3(gameMode[0],pages2);
				}
			flag = 1;
			setupBak[4] = rots[0] +rots[1] * 10;	// #1.60c5
			}
		}
	} else {
		overcount = 0;
	}
}

/* �̂ăQ�[����(�����ꍇ�̖߂�l��1�A���Ȃ�������0) */
// playerExecute����Ɨ�#1.60c7j6
int doGiveup() {
	int i, tmp1, tmp2;

	// giveup_safety�C�� #1.60c7p4
	if(giveup_safety) {
		if(!pause[0] && !pause[1]) return 0;
	}

	// �̂ăQ�[�L�[��joypad�Ɋ��蓖�� 1.60c7g7
	if(getPressState(0, 8)) mpc3[0]++;
	else mpc3[0] = 0;

	if(getPressState(1, 8)) mpc3[1]++;
	else mpc3[1] = 0;

	// ���ł��̂ăQ�[�ł���悤�ɂ���#1.60cd
	// ���v���C���Đ��ł��Ȃ��̂ŏC��#1.60c7h1
	// �f����ʂł͎̂ăQ�[�ł��Ȃ��悤�ɕύX #1.60c7o8
	if((!playback) && (!demo) && (IsPushKey (giveupKey) || (mpc3[0] == 1) || (mpc3[1] == 1))) {// Q�L�[�̂ăQ�[ #1.60c
		// ���ʉ���~
		StopAllWaves();
		StopAllBGM();

		// �w�i��߂� #1.60c7o8
		bgfadesw = 0;
		if(gameMode[0] != 5) backno = 0;

		pause[0] = 0; // �|�[�Y����
		pause[1] = 0;
		timeOn[0] = 0;
		timeOn[1] = 0;
		onRecord[0] = 0;
		onRecord[1] = 0;
		cpu_flag[0] = 0;
		cpu_flag[1] = 0;


		// �X�^�b�t���[������ #1.60c7n5
//		staffInit2();
		objectClear();
		if((gameMode[0] == 6) && (tmp_maxPlay != maxPlay))
			maxPlay = tmp_maxPlay;
		if(gameMode[0] == 8) {
			// MISSION
			enterMissionMode(0);
			return 1;
		} else if(gameMode[0] == 5) {
			// PRACTICE
			flag = -1;
			return 0;
		} else if(gameMode[0] == 4) {
			// �ΐ탂�[�h
			enterVersusMode(0);
			flag = 0;

			// WAIT�l���o�b�N�A�b�v����߂� #1.60c7p4
			for(i=0; i<2; i++) {
				wait1[i] = b_wait1[i];
				wait2[i] = b_wait2[i];
				wait3[i] = b_wait3[i];
				waitt[i] = b_waitt[i];
				sp[i]    = b_sp[i];
			}

			return 1;
		} else {
			// �ʏ탂�[�h
			randommode[0] = 1;
			randommode[1] = 1;
			versusInit(0);
			versusInit(1);
			randommode[0] = 0;
			randommode[1] = 0;

			tmp1 = stat[0];
			tmp2 = stat[1];

			if(examination[0]==2){
				admit_grade[0]=exam_grade[0];//�~�i�������������狭���I�ɗ��Ƃ�
				PlayerdataSave();//�Z�[�u
			}

			playerInitial(0);
			playerInitial(1);


			// �̂ăQ�[�������̓����I�ׂ�悤�ɂ���#1.60c7i6
			if(giveup_func == 1) {
				if(tmp1 != 0){
					stat[0] = 2;
					statc[0 * 10 + 4] = 16;
				}
				if(tmp2 != 0){
					stat[1] = 2;
					statc[1 * 10 + 4] = 16;
				}
			} else if(giveup_func == 2) {
				flag = 1;
			}

			return 1;
		}
	}
	return 0;
}

/* �o�߃^�C���𑝉� */
void increment_time(int player) {
	int		i, j, k, temp;

	// ���[���N���A
	if((ending[player] == 2) && (edrec[player] > 3740) && (onRecord[player])) {
		// �X�^�b�t���[���\�������� #1.60c7n5
		staffInitPl(player);
		if((gameMode[player] >= 1) && (gameMode[player] <= 2)){
		if(gameMode[player] == 6)
			tomoyo_ehfinal_c[player] = 0;

		// ���[���N���A��GM�ɂȂ� #1.60c7i2
		if(enable_grade[player] == 1){//1
			if(gmflag_r[player]) {
				grade[player]=32;
				gflash[player]=120;
				PlaySE(30);	// rankup.wav
			}
		}else if(enable_grade[player]== 2){
			if((gmflag_r[player])&&(endlines[player] >= 20)) {//�������[��20���
				grade[player]=grade[player] + 3;	//���v+3
				gflash[player]=120;
				PlaySE(30);	// rankup.wav

			}else if((gmflag_r[player])&&(endlines[player] >= 13)) {//13���
				grade[player]=grade[player] + 2;	//���v+2
				gflash[player]=120;
				PlaySE(30);	// rankup.wav

			}else if((gmflag_r[player])&&(endlines[player] >= 7)) {//7���
				grade[player]=grade[player] + 1;	//���v+1
				gflash[player]=120;
				PlaySE(30);	// rankup.wav
			}else if((gmflag_r[player])&&(endlines[player] < 3)){//3�񂵂������ĂȂ�
				grade[player]=grade[player] - 1;
			}else if(!gmflag_r[player]){//�������[��
				grade[player]=grade[player] + 1;	//���v+1
				gflash[player]=120;
				PlaySE(30);	// rankup.wav
			}
		}else if(enable_grade[player] == 3){
			if((gmflag_r[player])&&(endlines[player] >= 15)) {
				grade[player]=32;
				gflash[player]=120;
				PlaySE(30);	// rankup.wav
			}
		}else if(enable_grade[player] == 4){
			if((gmflag_r[player])&&(endlines[player] >= 3)) {//�������[��
				grade[player] = grade[player] + endlines[player] / 4;
				if((grade[player]>= 30)&& (tr[player] >175)&&(viewgrade(player)>=31)){//MM������ĂȂ��Ƃ���
					grade[player] = 32;//GM
					PlaySE(30);	// rankup.wav
				}else if((grade[player]>= 30)&& (tr[player] >155)){
					grade[player] = 31;//MM
					PlaySE(30);	// rankup.wav
				}else if(grade[player] >= 30){
					grade[player] = 29;//MV
					PlaySE(30);	// rankup.wav
				}
				if(grade[player]>32)grade[player]=32;
			}
			if((gmflag_r[player])&&(endlines[player] < 3)){//3��������ĂȂ�
				grade[player]=grade[player] - 1;
			}
			if(!gmflag_r[player]){//�������[��
				grade[player]= grade[player] + endlines[player] / 10;
				if(grade[player] >= 28){
					grade[player] = 28;
				}
				if(grade[player]>32)grade[player]=32;
			}
		}
		}
		if(gameMode[player] == 3) {
			if((devil_minus[player])&&(gameMode[player] == 3)&&(repversw >= 31) && (tc[player] >= 1000)){//devil-
				grade[player] = 15;
				gflash[player]=120;
			}else if(!devil_minus[player]){
				// CLASSIC�n���5:00�ȓ��AWORLD�n���5:20�ȓ���GOD���i
				if( ((!isWRule(player)) && (time[player] <= 18000)) || ((isWRule(player)) && (time[player] <= 19200)) ) {
					grade[player] = 16;
					PlaySE(30);	// rankup.wav
					gflash[player]=120;
				}
				else{  //�����łȂ����S13�~�܂�
					grade[player] = 13;
					gflash[player]=120;
				}
			}
		}

		stat[player] = 13;
		for(i=0; i<10; i++) statc[player * 10 + i] = 0;
		if(item_mode[player]){
			statusClear(player);
			misstimer[player] = 0;
			item_t[player] = 0;
			item_timer[player] = 0;
		}
		ending[player] = 3;
		if((devil_minus[player])&&(gameMode[player] == 3) && (tc[player] == 500)){
			end_f[player] = 0;//devil-���C���Ȃ�
			ending[player] = 5;//500���؂�
		}else if(gameMode[player] >= 1){
			end_f[player] = 2;//�I�����W���C��
		}
		if(gameMode[player] == 5){
			ending[player] = 7;	// PRACTICE�͒��Z�k
			statc[player * 10] = 133;
		}

		onRecord[player] = 0;					// �G���f�B���O���[���I���Ɠ����Ƀ��v���C�L�^�I��
		if(gameMode[player] == 8)
			PlaySE(36);
		else if(ending[player] == 3)
			PlaySE(29);

		// �t�B�[���h�^�C�}�[���� #1.60c7k7
		disableShadowTimer(player);

		// �O�̂���X-RAY�ECOLOR���Ȃ���#1.60c7p9ex
		isxray[player] = 0;
		iscolor[player] = 0;
		istimestop[player] = 0;
		item_timer[player] = 0;
	}

	// ���v���C�p�f�[�^���L�^
	if(onRecord[player] != 0) {
		if( (!playback) && (!demo) && (replay_save[player]) && (time2[player] < 60 * 60 * 20) && (!fpbas_mode[player])) {
			temp = 0;
			for(j = 0; j < 8; j++)
				temp = temp | (getPressState(player, j) << j) | (getPushState(player, j) << (j + 8));

			replayData[time2[player] + player * 60 * 60 * 20] = temp;
		}

		time2[player]++;	// ���v���C�p�v���C���Ԃ�1/60�b�v���X #1.60c7n8
	}

	// �^�C�}�[�����삵�Ă����
	if(timeOn[player]) {
		time[player]++;		// ���Ԃ�1/60�b�v���X
		if((gameMode[player] == 6) && (stage[player] == 44))
			tomoyo_ehfinal_c[player]++;
			if(tomoyo_ehfinal_c[player] > 480)
				tomoyo_ehfinal_c[player] = 0;
	}

	// �G���f�B���O���Ȃ�΃G���f�B���O�o�ߎ���1/60�b�v���X
	if(( ((ending[player] > 0) && (repversw < 33)) || ((ending[player] == 2) && (repversw >= 33))) && (onRecord[player])) {
		if((repversw >= 50)&&(fastroll[player])){
			edrec[player]= edrec[player]+2;//�o�ߎ��Ԃ�2�{��
		}else{
			edrec[player]++;
		}
		//������]�΍�iBEGINNER�ȊO�j
		if((repversw >= 55) && (gameMode[player] >= 1) && ((kickc[player] > 10) || (kickc3[player] > 8)) ){
			edrec[player] = edrec[player] - 1 - (fastroll[player]);
			printFont(13 + 24 * player - 12 * maxPlay, 25, "PUT THE BLOCK!", (count % 4 / 2) * 2);
		}
	}
	if((gameMode[player] == 6) && (stage[player] == 44) && (ending[player] == 2)){
		tomoyo_ehfinal_c[player]++;
		if(tomoyo_ehfinal_c[player] > 480)
			tomoyo_ehfinal_c[player] = 0;
	}

	//���x���X�g�b�v���̃^�C��
	if((timeOn[player]) && (gameMode[player]<= 2)
	&&((tc[player] % 100 == 99)||(tc[player] == 998))) {
		time99[player]++;		// gradeup3�Ŏg��
	}

	//�f�r���ł̃��x���X�g�b�v���̃^�C��
	if((timeOn[player]) && (gameMode[player] == 3)&&(tc[player] % 100 == 99)) {
		time99[player]++;		// gradeup3�Ŏg��
	}

	// VS���[�h�̐������Ԃ��J�E���g�_�E�� #1.60c7r5
	if( (timeOn[player]) && (gameMode[player] == 4) && (vs_time != 0) ) {
		ltime[player]--;

		// 10�b�O�̌x���� #1.60c7r9
		if(ltime[player] == 10 * 60) PlaySE(32);

		// �^�C���I�[�o�[
		if(ltime[player] <= 0) {
			timeOn[0] = 0;
			timeOn[1] = 0;
			onRecord[0] = 0;
			onRecord[1] = 0;
			ltime[0] = 0;
			ltime[1] = 0;
			PlaySE(33);//�^�C���I�[�o�[��
			if(wintype == 1){
				if(li[0] == li[1]) {
					// ���x���������Ȃ��������
					stat[0] = 7;
					stat[1] = 7;
				} else if(li[0] > li[1]) {
					// 1P�̃��x����2P��荂���Ȃ�1P�̏���
					stat[1] = 7;
				} else {
					// 2P�̃��x����1P��荂���Ȃ�2P�̏���
					stat[0] = 7;
				}
			}else{
				if(tc[0] == tc[1]) {
					// ���x���������Ȃ��������
					stat[0] = 7;
					stat[1] = 7;
				} else if(tc[0] > tc[1]) {
					// 1P�̃��x����2P��荂���Ȃ�1P�̏���
					stat[1] = 7;
				} else {
					// 2P�̃��x����1P��荂���Ȃ�2P�̏���
					stat[0] = 7;
				}
			}

			for(i=0; i<20; i++) statc[i] = 0;
		}
	}

	// TOMOYO���[�h�̐������Ԃ��J�E���g�_�E�� #1.60c7l5
	if( (timeOn[player]) && (gameMode[player] == 6) ) {
		ctime[player]++;	//�v���C���ԑ���
		if(!fpbas_mode[player]){
			ltime[player]--;	//���~�b�g�^�C��
		}
		if((FP_bonus[player] > 0) && (stage[player] >= 100)){
			if(repversw < 47) FP_bonus[player]--;
			else{
				if((stat[player] != 6) && (stat[player] != 8))
					FP_bonus_c[player]--;
				if(FP_bonus_c[player] <= 0){
					FP_bonus_c[player] = 4;
					FP_bonus[player]--;
				}
			}
		}

		// 0�ɂȂ�����Q�[���I�[�o�[
		if(ltime[player] <= 0) {
			setGameOver(player);
		}
		// �܂����~�b�g�^�C����0�ɂȂ��Ă��Ȃ�
		// �X�e�[�W21�ȍ~�̓X�e�[�W�^�C������ #1.60c7m1
		else if(stage[player] <= 19)
		{
			if(stime[player] > 0) {
				stime[player]--;	//�X�e�[�W�^�C��
				if(stime[player] == 10 * 60) PlaySE(32);
				if(stime[player] == 0) PlaySE(33);
			}
		}
	}

	// ACE���[�h�̐������Ԃ��J�E���g�_�E��
	if( (timeOn[player]) && (ltime[player] > 0) &&( (gameMode[player] == 8) || ((gameMode[player] == 7)&&(anothermode[player]!=3)) ) ) {
		ltime[player]--;

		//�ϋv�~�b�V�����ł̖�����]�΍�
		if((gameMode[player] == 8) && (mission_type[c_mission] == 23) && ((kickc[player] > 10) || ((kickc3[player] > 8-(4*(repversw>=43))) && (repversw >= 40))) ){
			ltime[player]++;
			printFont(13 + 24 * player - 12 * maxPlay, 29, "PUT THE BLOCK!", (count % 4 / 2) * 2);
		}

		// 10�b�O�̌x���� #1.60c7r9
		if(ltime[player] == 10 * 60) PlaySE(32);

		// 0�ɂȂ�����Q�[���I�[�o�[�i�������ϋv�~�b�V�����͏����j
		if(ltime[player] <= 0) {
			if(gameMode[player] == 7){	//ACE
				PlaySE(33);
				setGameOver(player);
			} else if((gameMode[player] == 8) && (mission_type[c_mission] != 23)){	//MISSION
				PlaySE(33);
				setGameOver(player);
			}
		}
	}		//ULTRA
	if((timeOn[player])&& (ltime[player] > 0)&&(gameMode[player] == 9)&&(std_opt[player] == 1)) {
		if(ltime[player] == 10 * 60) PlaySE(32);
		ltime[player]--;

		if(ltime[player] <= 0){
			checkEnding(player, 0);
		}
	}
	//PRAC
	if((timeOn[player])&& (ltime[player] > 0)&&(gameMode[player] == 5)&&(p_goaltype == 4)) {
		if(ltime[player] == 10 * 60) PlaySE(32);
		ltime[player]--;

		if(ltime[player] <= 0){
			checkEnding(player, 0);
		}
	}

	// �V���h�E�^�C�}�[���J�E���g�_�E�� #1.60c7j5
	if((hidden[player] == 8) && (m_roll_blockframe)){
		for(j = 0;j < fldsizew[player] * (fldsizeh[player] + 1); j++)
			if(fldt[j + player * 220] < 0) fldt[j + player * 220] = fldt[j + player * 220] + 10;
	}else if(shadow_timer_flag[player]){
		for(j = 0;j < fldsizew[player] * (fldsizeh[player] + 1); j++){
			if(hidden[player]==9){
				if(fldt[j + player * 220] > 0) fldt[j + player * 220]=fldt[j + player * 220]-3;
			}else if(hidden[player]==10){
				if(fldt[j + player * 220] > 0) fldt[j + player * 220]=fldt[j + player * 220]-2;
			}else{
				if(fldt[j + player * 220] > 0) fldt[j + player * 220]=fldt[j + player * 220]-1;
			}
		}

	}
	// �i�ʃ|�C���g���� #1.60C7T5EX
	if(((enable_grade[player]== 2)||(enable_grade[player]== 3))&&((gameMode[player] == 1) || (gameMode[player] == 2)) ) {
		if( ((stat[player] == 3) || (stat[player] == 5)) && (combo[player] <= 1) && (!ending[player]) ) {
			gtime[player]++;

			if(((grade[player] > 0)||(gpoint[player] > 0))&& (gtime[player] >= glimit[grade[player]]) ) {
				gpoint[player]--;
				gtime[player] = 0;
				if(enable_grade[player] == 2){
					if(gpoint[player] < -50) {
						grade[player]--;
						gpoint[player] = 0;
						//gflash[player] = 120;
						gup_down[player] = 0;//regret
						PlaySE(45);
					}
				}else if(enable_grade[player] == 3){
					if(gpoint[player] < 0)
						gpoint[player] = 0;
				}
			}
		}
	}
	// �i�ʏ㏸�A�j�����Ԍ���
	if( (gflash[player] > 0) && ((!tspin_c[player]) || (enable_grade[player] != 4) || (gameMode[player] >= 3)) ) {
		gflash[player]--;
	}
	if((gflash[player] > 0)&&(gameMode[player] == 0)&&(novice_mode[player])&&(time[player] < 18000)){
			printFont(18 + 24 * player - 12 * maxPlay, 11, "TIME", (count % 4 / 2) * digitc[rots[player]]);
			printFont(17 + 24 * player - 12 * maxPlay, 12, "BONUS!", (count % 4 / 2) * digitc[rots[player]]);
			sprintf(string[0],"%6d PTS",1253 * (300 - (time[player] / 60)));
			printFont(15 + 24 * player - 12 * maxPlay, 14, string[0], (count % 4 / 2) * digitc[rots[player]]);
	}
	if(hnext_flag[player]){
		hnext_timer[player]++;
		if(hnext_timer[player] > 720) hnext_timer[player] = 0;
		if(((hnext_timer[player] > 540) && (hnext_timer[player] <= 660)) || (( ((hnext_timer[player] > 480) && (hnext_timer[player] <= 540)) || (hnext_timer[player] > 660) ) && (hnext_timer[player] % 2 == 0)))
			ishidenext[player] = 1;
		else
			ishidenext[player] = 0;
	}
	if(onRecord[player] == 2){//2�Ȃ猻�t���[���̃��v���C�f�[�^���L�^��A�L�^���I������
		time2[player]++;
		onRecord[player] = 0;
	}
}

// ���݂̃��[�������[���h�n���ǂ������� #1.60c7r3
int isWRule(int player) {
	return ( (rots[player] == 2) || (rots[player] == 3) || (rots[player] == 6) ||(rots[player] == 7) );
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.00 - �Q���҂������
//������������������������������������������������������������������������������
void statJoinwait(int player) {
	padRepeat(player);

	if(count % 80 > 10) {
		if(!playback) {
			ExBltRect(81, 110+192 * player -96 * maxPlay , 85 , 0 + 100 * player, 50, 100, 65);
		}
	}

	// �{�^���������ɂ����̂��C��#1.60cf
	if((getPushState(player, 4)) && (tomoyo_domirror[1-player] == 0) && !((player == 1) && ((domirror) && (mirror)) ) && (!bgfadesw)) {
		StopSE(8);
		PlaySE(10);

		if(wavebgm >= 1) {
			if(!IsPlayWave(62)) PlayWave(62);
		}
		playerInitial(player);
		randommode[player] = 1;
		versusInit(player);
		randommode[player] = 0;
		first_rot[player] = rots[player];

		hold[player] = -1;					// hold���Z�b�g #1.60c
		stat[player] = 1;					// �u���b�N�V���b�^�[���s
		statc[player * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
		statc[player * 10 + 1] = 2;			// �V���b�^�[��̓X�e�[�^�XNo.2
		statc[player * 10 + 2] = 0;			// �V���b�^�[��̓X�e�[�^�XNo.2
		statc[player * 10 + 4] = 16;
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.01 - �u���b�N�V���b�^�[
//������������������������������������������������������������������������������
void statBlockSutter(int player) {
	// �����Ɏ��̃X�e�[�^�X�֍s����悤��#1.60cd
	int		i, j, blk;

	StopAllBGM();
	if(!playback){
		GiziSRand(player);				// �[�������̃V�[�h�𐶐��i���v���C�������j
		max_hnext[player] = hnext[player];
		first_rot[player] = rots[player];
	}
	if((gameMode[player] == 4) || (gameMode[player] == 8))
		hole[player] = rand(10,player);	// DS-RANDOM����オ��̂��߂ɂ����Ō��̈ʒu��ݒ�

	stat[player] = statc[player * 10 + 1];	// ���̃X�e�[�^�X�փW�����v
	statc[player * 10    ] = 0;				// �J�E���^�͂��Ƃ����Â�
	statc[player * 10 + 1] = 0;

	for(i=0;i<10;i++) {	//cpu���͏�����
		cp_input[i + player * 10] = 0;
	}

	if(gameMode[player] != 8)
		upLines[player] = 0;

	// �t�B�[���h����
	for(i = 0; i < 220; i++) {
		fld[i + player * 220] = 0;
		fldt[i + player * 220] = 0;		// #1.60c7j5
		fldi[i + player * 220] = 0;		// #1.60c7n1
		fldu[i + player * 220] = 0;
		flds[i + player * 220] = 0;
		fldubuf[i + player * 220] = 0;
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.02 - ���[�h�Z���N�g���
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F���ꂪ1�ɂȂ�ƃQ�[���J�n
// statc[player * 10 + 1]�F�J�E���^
// statc[player * 10 + 2]�F0=���[���Z���N�g 1=���[�h�Z���N�g 2=���̑�
// statc[player * 10 + 3]�F���̑���ʂł̃J�[�\���ʒu

void statSelectMode(int player) {
	int i,ranktmp,j,twg_opt[2];

	//statc[player * 10 + 1]++;
	if(statc[player * 10 + 4] > 0){
		statc[player * 10 + 4]--;
		if(statc[player * 10 + 4] == 0) PlaySE(5);
	} else if(statc[player * 10 + 4] < 0){
		statc[player * 10 + 4]++;
		if(statc[player * 10 + 4] == 0) PlaySE(5);
	}else
		statc[player * 10 + 1]++;

	padRepeat(player);
	padRepeat2(player);

	// ���[�h�Z���N�g��
	if( (!IsPlayMIDI()) && (wavebgm == 0) ) {
		PlayMIDI();
	} else if(((stat[1 - player] == 0) || (stat[1 - player] == 10)) && (!IsPlayWave(62)) && (wavebgm >= 1) ) {
		PlayWave(62);
	}


	printSMALLFont(124 + 192 * player - 96 * maxPlay, 45, "Select", 4);

	if(statc[player * 10 + 2] == 0) {
		// ���[���Z���N�g
		printSMALLFont(124 + 192 * player - 96 * maxPlay, 54, "   Rot?Rule", 4);
		printFont(15 + 24 * player - 12 * maxPlay, 12, "<        >", count % 9);

		ExBltRect(77, 120 + 192 * player -96 * maxPlay , 66,  (statc[player * 10 + 1] % 40) * 3, 28, 30, 8);
		ExBltRect(77, 120 + 192 * player -96 * maxPlay , 75,  160 - ((statc[player * 10 + 1] % 40) * 3), 20, 30, 8);

		ExBltRect(77, 170 + 192 * player -96 * maxPlay , 66,  50 + ((statc[player * 10 + 1] % 40) * 3), 28, 30, 8);
		ExBltRect(77, 170 + 192 * player -96 * maxPlay , 75,  210 - ((statc[player * 10 + 1] % 40) * 3), 20, 30, 8);

		if(statc[player * 10 + 4] < 0){
			ExBltRect(55,128 + ((16+statc[player * 10 + 4]) * 4) + 192 * player -96 * maxPlay , 84,
				(64*(rots[player]+1))*(rots[player]<8),32*(fontc[(rots[player]+1)*(rots[player]<8)]),
				(statc[player * 10 + 4]* -4),32);
			ExBltRect(55,128 + 192 * player -96 * maxPlay , 84,
				(64*rots[player])+(statc[player * 10 + 4] * -4),32*fontc[rots[player]],((16+statc[player * 10 + 4])* 4),32);
		} else if(statc[player * 10 + 4] > 0){
			ExBltRect(55,128 + (statc[player * 10 + 4] * 4) + 192 * player -96 * maxPlay , 84,
				(64*rots[player]),32*fontc[rots[player]],((16-statc[player * 10 + 4])* 4),32);
			ExBltRect(55,128 + 192 * player -96 * maxPlay , 84,
				(64*(rots[player]-1))+576*(rots[player]==0)+((16-statc[player * 10 + 4]) * 4),
				32*fontc[rots[player]-1+(9*(rots[player]==0))],(statc[player * 10 + 4] * 4),32);
		} else ExBltRect(55,128 + 192 * player -96 * maxPlay , 84, 64*rots[player] ,32*fontc[rots[player]],64,32);

			ExBltRect(55,128 + 192 * player -96 * maxPlay , 64, 64*rots[player] ,384,64,21);

			ExBltRect(87,208 + 48 * player -96 * maxPlay , 40, (statc[player * 10 + 1]%6)*48 ,(statc[player * 10 + 1]%30/6)*48,48,48);

			if(statc[player * 10 + 4] == 0){
				j = (statc[player * 10 + 1]-16) % 420 / 60;
				if(isWRule(player)){
					i = wcol[j];
				} else if((rots[player] >= 4) && (rots[player] != 8)){
					i = acol[j];
				} else{
					i = ccol[j];
				}
				drawBlockFast(27+ 6 * player - 12 * maxPlay,6 + isWRule(player) * (j != 0) + ((j == 0) && (rots[player] != 8)), j, 0, i, 0, 0, 1, player, (disable_giji3D < 3));
			}
		if(getDrawRate() != 1){
			//�X�N���[�������]�̐���
			ExBltRect(84,120 + 192 * player -96 * maxPlay , 118, statc[player * 10 + 1] % 320 ,(20*rots[player]) + (10 * (english)), 80, 10);
		}
		//���o�[�ƃ{�^���̉摜
		ExBltRect(25,126 + 192 * player -96 * maxPlay , 128, 224 ,0+(40*((isWRule(player)) && (w_reverse)))+(80*(rots[player] >= 7)),68,40);
		if(!maxPlay) ExBltRect(55,211, 98 ,64*rots[player],416,64,32);
		if(!english)	//���������i���{��j
			ExBltRect(55,128 + 192 * player -96 * maxPlay , 168, 64*rots[player] ,320,64,32);
		else			//���������iEnglish�j
			ExBltRect(55,128 + 192 * player -96 * maxPlay , 168, 64*rots[player] ,352,64,32);
	} else if(statc[player * 10 + 2] == 1) {
		// ���[�h�Z���N�g
		printSMALLFont(124 + 192 * player - 96 * maxPlay, 54, "  Game Mode", 4);

		ExBltRect(77, 120 + 192 * player -96 * maxPlay , 63,  (count % 40) * 3, 28, 80, 8);
		ExBltRect(77, 120 + 192 * player -96 * maxPlay , 160,  160 - ((count % 40) * 3), 20, 80, 8);

		// �J�[�\��
		printFont(15 + 24 * player - 12 * maxPlay, 9 + (gameMode[player] - ((gameMode[player] >= 6 ) +(gameMode[player] >= 9) )*2-(gameMode[player] >= 10))*2, "b", fontc[rots[player]]);
		printFont(14 + 24 * player - 12 * maxPlay, 9 + (gameMode[player] - ((gameMode[player] >= 6 ) +(gameMode[player] >= 9) )*2-(gameMode[player] >= 10))*2, "<          >", count % 9);

		if(gameMode[player]>=9){
			printFont(15 + 24 * player - 12 * maxPlay, 8, "k        k", count % 9);//���J�[�\��
		}
		if(gameMode[player]<10){
			printFont(15 + 24 * player - 12 * maxPlay, 20, "n        n", count % 9);//���J�[�\��
		}
		//biginner
		if(gameMode[player]<9){
			ExBltRect(86, 130+192 * player -96 * maxPlay , 71 , 72 * (novice_mode[player]), 0, 72, 9);//BEGINNER�̕���
			if(statc[player * 10 + 2] == 1)	{
				if(novice_mode[player]){
					ExBltRect(85, 144+192 * player -96 * maxPlay, 80, 0, 7*20, 70, 7);
				}else{
					ExBltRect(85, 144+192 * player -96 * maxPlay, 80, 0, 7*21, 70, 7);
				}
			}
		}
		//master
		if(gameMode[player]<10){
			ExBltRect(86, 130+192 * player -96 * maxPlay , 87-(gameMode[player]==9)*16 , 72 * enable_grade[player], 9, 72, 9);//MASTER
			if(((gameMode[player] >= 1) && (gameMode[player] <= 3)) && (item_mode[player])){
				if(statc[player * 10 + 2] == 1)
					ExBltRect(85, (18 + 24 * player - 12 * maxPlay)*8, (10 + (gameMode[player] - ((gameMode[player] >= 6)+(gameMode[player] >= 9)) * 2)*2)*8, 0, 7*22, 50, 7);
				else
					printFont(19 + 24 * player - 12 * maxPlay, 19 , "ITEM", 5);
			}
			if(((gameMode[player] == 1) || (gameMode[player] == 2)) && (hebo_plus[player])){
				if(statc[player * 10 + 2] == 1)
					ExBltRect(85, (18 + 24 * player - 12 * maxPlay)*8, (10 + (gameMode[player] - ((gameMode[player] >= 6)+(gameMode[player] >= 9)) * 2)*2)*8, 0, 7*23, 50, 7);
				else
					printFont(17 + 24 * player - 12 * maxPlay, 19 , "HEBO+", 9);
			}
		}
		//20G
		ExBltRect(86, 130+192 * player -96 * maxPlay , 103-(gameMode[player]>=9)*16 -(gameMode[player]==10)*16, 72 * enable_grade[player], 18, 72, 9);//20G
		//devil
		ExBltRect(86, 130+192 * player -96 * maxPlay , 119-(gameMode[player]>=9)*16 -(gameMode[player]==10)*16, 72 * devil_minus[player], 27, 72, 9);
		if((gameMode[player] == 3) && (death_plus[player])){
			if(statc[player * 10 + 2] == 1)
				ExBltRect(85, (19 + 24 * player - 12 * maxPlay)*8, (10 + (gameMode[player] - (gameMode[player] >= 6) * 2)*2)*8, 0, 7*24, 40, 7);
			else
				printFont(19 + 24 * player - 12 * maxPlay, 19 , "DEATH+", 2);
		}
		//tomoyo
		ExBltRect(86, 130+192 * player -96 * maxPlay , 135-(gameMode[player]>=9)*16 -(gameMode[player]==10)*16, 72 * tomoyo_opt[player], 54, 72, 9);
		if((gameMode[player] == 6) && (tomoyo_opt[player] == 4) && (fpbas_mode[player])){
			if(statc[player * 10 + 2] == 1)
				ExBltRect(85, (21 + 24 * player - 12 * maxPlay)*8, (10 + (gameMode[player] - ((gameMode[player] >= 6)+(gameMode[player] >= 9)) * 2)*2)*8, 70, 7*8, 30, 7);
			else if(statc[player * 10 + 2] == 2)
				printFont(15 + 24 * player - 12 * maxPlay, 19 , "BASIC", 3);
		}
		if((gameMode[player] == 6) && (tomoyo_opt[player] == 4) &&(!fpbas_mode[player])){
			if(statc[player * 10 + 2] == 1)
				ExBltRect(85, (21 + 24 * player - 12 * maxPlay)*8, (10 + (gameMode[player] - ((gameMode[player] >= 6)+(gameMode[player] >= 9)) * 2)*2)*8, 70, 7*7, 30, 7);
			else if(statc[player * 10 + 2] == 2)
				printFont(15 + 24 * player - 12 * maxPlay, 19 , "18MIN", 3);
		}
		//ace
		ExBltRect(86, 130+192 * player -96 * maxPlay , 151-(gameMode[player]>=9)*16-(gameMode[player]==10)*16 , 72 * anothermode[player], 63, 72, 9);
		//std
		if(gameMode[player]>=9){
			ExBltRect(86, 130+192 * player -96 * maxPlay , 151 -(gameMode[player]==10)*16, 72 * std_opt[player], 81, 72, 9);
			ExBltRect(85, (18 + 24 * player - 12 * maxPlay)*8, (20 -(gameMode[player] >= 10)* 2)*8, 0, 7*(25 + std_opt[player]), 50, 7);
			if(relaymode[player]){
				if(statc[player * 10 + 2] == 1)
					printFontEx(15 + 24 * player - 12 * maxPlay, 143, "ROT.RELAY", 7);
				else if(statc[player * 10 + 2] == 2)
					printFont(15 + 24 * player - 12 * maxPlay, 19 , "ROT.RELAY", 7);
			}
		}
		//ori
		if(gameMode[player]==10){
			ExBltRect(86, 130+192 * player -96 * maxPlay , 151 , 72 * ori_opt[player], 90, 72, 9);
			ExBltRect(85, 150+192 * player -96 * maxPlay, 162, 70, 7*(2+ori_opt[player]), 35, 7);
		}

		// �e�L�X�g�K�C�h
		if(textguide){
			printFont(15+24 * player - 12 * maxPlay, 26, "<L R>:TYPE", count % 9);
			if(gameMode[player] == 6){
				printFont(26 + 10 * player - 12 * maxPlay, 15, "C:", 0);
				printFont(26 + 6 * player - 12 * maxPlay, 16, "RANDOM", 7);
			}else{
				printFont(26 + 10 * player - 12 * maxPlay, 15, "C:", 0);
				printFont(26 + 9 * player - 12 * maxPlay, 16, "BIG", 7);
			}
			if(gameMode[player] == 3){
				printFont(26 + 7 * player - 12 * maxPlay, 17,"HOLD:", 0);
				if(!death_plus[player])
					printFont(26 + 6 * player - 12 * maxPlay, 18, "DEATH+", 2);
				if(!item_mode[player])
					printFont(26 + 8 * player - 12 * maxPlay, 19-(death_plus[player]),"ITEM", 5);
			}
			if((gameMode[player] == 1) || (gameMode[player] == 2)){
				printFont(26 + 7 * player - 12 * maxPlay, 17,"HOLD:", 0);
				if(!item_mode[player])
					printFont(26 + 8 * player - 12 * maxPlay, 18,"ITEM", 5);
				if(!hebo_plus[player])
					printFont(26 + 7 * player - 12 * maxPlay, 19-(item_mode[player]),"HEBO+", 9);
			}

			if((gameMode[player] == 6)&&(tomoyo_opt[player]==4)){
				printFont(26 + 7 * player - 12 * maxPlay, 17,"HOLD:", 0);
				if(!fpbas_mode[player])
					printFont(26 + 7 * player - 12 * maxPlay, 18,"BASIC", 3);
				else
					printFont(26 + 7 * player - 12 * maxPlay, 18,"18MIN", 3);
			}
			if((gameMode[player] == 9) && (std_opt[player] < 2)){
				printFont(26 + 7 * player - 12 * maxPlay, 17,"HOLD:", 0);
				if(!relaymode[player]){
					printFont(26 + 6 * player - 12 * maxPlay, 18, "ROT.", 7);
					printFont(26 + 6 * player - 12 * maxPlay, 19, "RELAY", 7);
				}
			}
			if(dispnextkey[player] == 0x3D){
				printFont(24 + 9 * player - 12 * maxPlay, 0, "F3:", 0);
				printFont(27 + 8 * player - 12 * maxPlay, 0, "NEXT", 0);
			}
		}

		// ���[�h������
		if ( getDrawRate() == 1 ){
			if((gameMode[player] >= 6) && (gameMode[player] != 10)) {
				ExBltRect(25, 119 + player * 192 - 96 * maxPlay, 168, 0+(80*(english)), (gameMode[player] - 2) * 32, 80, 32);
			} else if(gameMode[player] != 10) {
				ExBltRect(25, 119 + player * 192 - 96 * maxPlay, 168, 0+(80*(english)), gameMode[player] * 32, 80, 32);
			}

		}else{
			if((gameMode[player] >= 6) && (gameMode[player] != 10)) {
				ExBltRect(25, 119 + player * 192 - 96 * maxPlay, 168, 0+(80*(english)), (gameMode[player] - 2) * 32, 80, 32);
			} else if(gameMode[player] != 10) {
				ExBltRect(25, 119 + player * 192 - 96 * maxPlay, 168, 0+(80*(english)), gameMode[player] * 32, 80, 32);
			}
			if(gameMode[player] == 0){
				ExBltRect(25, 120 + player * 192 - 96 * maxPlay, 192,statc[player * 10 + 1] % 320,264 + (16 * novice_mode[player]) + (8 * english),80,8);
			}else if(gameMode[player] <= 2){
				ExBltRect(25, 120 + player * 192 - 96 * maxPlay, 192,statc[player * 10 + 1] % 320,296 + (80 * (gameMode[player] - 1)) +(16 * enable_grade[player]) + (8 * english),80,8);
			}else if(gameMode[player] == 3){
				ExBltRect(25, 120 + player * 192 - 96 * maxPlay, 192,statc[player * 10 + 1] % 320,456 + (16 * devil_minus[player]) + (8 * english),80,8);
			}else if(gameMode[player] == 7) {
				ExBltRect(25, 119 + player * 192 - 96 * maxPlay, 192, 160, ((gameMode[player] - 2)*32)+(8*anothermode[player])+(32*(english)), 80, 8);
			} else if(gameMode[player] == 6) {
				if(tomoyo_opt[player] == 4)
					ExBltRect(25, 119 + player * 192 - 96 * maxPlay, 192, 192, 128, 28, 8);//FP�̕���
				else
					ExBltRect(25, 119 + player * 192 - 96 * maxPlay, 192, 160, 128+(tomoyo_opt[player]*8), 32, 8);
			}
		}
	}

	else if(statc[player * 10 + 2] == 2) {
		// ���̑�
		printSMALLFont(124 + 192 * player - 96 * maxPlay, 54, "    Others", 4);

		printFont(15 + 24 * player - 12 * maxPlay, 10 + (statc[player * 10 + 3] * 2), "b", fontc[rots[player]]);

		// SHIRASE
		printFont(15 + 24 * player - 12 * maxPlay, 9, "LINE UP", fontc[rots[player]]);
		if(p_shirase[player]) {
			sprintf(string[0], "ON");
		} else {
			sprintf(string[0], "OFF");
		}
		printFont(16 + 24 * player - 12 * maxPlay, 10, string[0], count % 9 * (statc[player * 10 + 3] == 0));

		// UPLINE
		printFont(15 + 24 * player - 12 * maxPlay, 11, "UPLINE", fontc[rots[player]]);
		if(upLineT[player]) {
			sprintf(string[0], "PATTERN");
		} else {
			sprintf(string[0], "COPY");
		}
		printFont(16 + 24 * player - 12 * maxPlay, 12, string[0], count % 9 * (statc[player * 10 + 3] == 1));

		// HIDDEN
		printFont(15 + 24 * player - 12 * maxPlay, 13, "HIDDEN", fontc[rots[player]]);
		sprintf(string[0], "LV %d", hidden[player]);
		if(hidden[player] <= 7){
			printFont(16 + 24 * player - 12 * maxPlay, 14, string[0], count % 9 * (statc[player * 10 + 3] == 2));
		}else if(hidden[player] == 8){
			printFont(16 + 24 * player - 12 * maxPlay, 14, "M", count % 9 * (statc[player * 10 + 3] == 2));
		}else if(hidden[player] == 9){
			printFont(16 + 24 * player - 12 * maxPlay, 14, "UNDER M3", count % 9 * (statc[player * 10 + 3] == 2));
		}else if(hidden[player] == 10){
			printFont(16 + 24 * player - 12 * maxPlay, 14, "UNDER M2", count % 9 * (statc[player * 10 + 3] == 2));
		}else if(hidden[player] == 11){
			printFont(16 + 24 * player - 12 * maxPlay, 14, "UNDER M1", count % 9 * (statc[player * 10 + 3] == 2));
		}
	}


	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
	if( getPressState(player, 0) ) {
		PlaySE(5);

		// ���[�h�Z���N�g
		if(statc[player * 10 + 2] == 1) {
			statc[player * 10 + 1] = 0;
			gameMode[player]--;
			death_plus[player] = 0;
			item_mode[player] = 0;
			hebo_plus[player] = 0;
			fpbas_mode[player] = 0;
			heboGB[player] = 0;
			relaymode[player] = 0;
			if(gameMode[player] < 0)
				gameMode[player] = 10;

			if( (gameMode[player] == 4) || (gameMode[player] == 5) )
				gameMode[player] = 3;
			if(gameMode[player] == 8)
				gameMode[player] = 7;
		}
		// ���̑�
		if(statc[player * 10 + 2] == 2) {
			statc[player * 10 + 3]--;
			if(statc[player * 10 + 3] < 0)statc[player * 10 + 3] = 2;
		}
	}

	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
	if( getPressState(player, 1) ) {
		PlaySE(5);

		// ���[�h�Z���N�g
		if(statc[player * 10 + 2] == 1) {
			statc[player * 10 + 1] = 0;
			gameMode[player]++;
			death_plus[player] = 0;
			item_mode[player] = 0;
			hebo_plus[player] = 0;
			fpbas_mode[player] = 0;
			heboGB[player] = 0;
			relaymode[player] = 0;
			if(gameMode[player] > 10)
				gameMode[player] = 0;

			if( (gameMode[player] == 4) || (gameMode[player] == 5) )
				gameMode[player] = 6;
			if(gameMode[player] == 8)
				gameMode[player] = 9;
		}
		// ���̑�
		if(statc[player * 10 + 2] == 2) {
			statc[player * 10 + 3]++;
			if(statc[player * 10 + 3] > 2)statc[player * 10 + 3] = 0;
		}
	}

	// ��
	if( (mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) )
	if( getPressState(player, 2) ) {
		PlaySE(3);
		// ���[���Z���N�g
		if(statc[player * 10 + 2] == 0) {
			rots[player]--;
			if(rots[player] < 0) rots[player] = 8;
			statc[player * 10 + 4] = -16;
			statc[player * 10 + 1] = 0;
			setNextBlockColors(player, 1);
		}
		if(statc[player * 10 + 2] == 1) {
			statc[player * 10 + 1] = 0;
			//BEGIN
			novice_mode[player]=!novice_mode[player];
			//MAS
			enable_grade[player]--;
			if(enable_grade[player] < 1)
				enable_grade[player] = 4;
				//DEVIL
			devil_minus[player] = !devil_minus[player];
			//ACE
			anothermode[player]--;
			if(anothermode[player] < 0)
				anothermode[player] = 3;
			//TOMOYO
			tomoyo_opt[player]--;
			fpbas_mode[player]=0;
			if(tomoyo_opt[player] < 0)
				tomoyo_opt[player] = 4;
			//STANDARD
			std_opt[player]--;
			if(std_opt[player] < 0)
				std_opt[player] = 3;
			if(std_opt[player] >= 2)
				relaymode[player] = 0;
				//ORIGINAL
			ori_opt[player]--;
			if(ori_opt[player] < 0)
				ori_opt[player] = 3;
		}
		if(statc[player * 10 + 2] == 2) {
			if(statc[player * 10 + 3] == 0) {
				p_shirase[player] = !p_shirase[player];
			}
			// UPLINE
			if(statc[player * 10 + 3] == 1) {
				upLineT[player] = !upLineT[player];
			}
			// HIDDEN
			if(statc[player * 10 + 3] == 2) {
				hidden[player]--;
				if(hidden[player] < 0) hidden[player] = 11;
			}
		}
	}

	// ��
	if( (mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) )
	if( getPressState(player, 3) ) {
		PlaySE(3);
		// ���[���Z���N�g
		if(statc[player * 10 + 2] == 0) {
			rots[player]++;
			if(rots[player] > 8) rots[player] = 0;
			statc[player * 10 + 4] = 16;
			setNextBlockColors(player, 1);
			statc[player * 10 + 1] = 0;
		}
		if(statc[player * 10 + 2] == 1) {
			statc[player * 10 + 1] = 0;
			//BEGIN
			novice_mode[player]=!novice_mode[player];

			//MAS
			enable_grade[player]++;
			if(enable_grade[player] > 4)
				enable_grade[player] = 1;
			//DEVIL
			devil_minus[player] = !devil_minus[player];
			anothermode[player]++;
			if(anothermode[player] > 3)
				anothermode[player] = 0;

			tomoyo_opt[player]++;
			fpbas_mode[player]=0;
			if(tomoyo_opt[player] > 4)
				tomoyo_opt[player] = 0;

			std_opt[player]++;
			if(std_opt[player] > 3)
				std_opt[player] = 0;
			if(std_opt[player] >= 2)
				relaymode[player] = 0;
			ori_opt[player]++;
			if(ori_opt[player] > 3)
				ori_opt[player] = 0;
		}
		if(statc[player * 10 + 2] == 2) {
			if(statc[player * 10 + 3] == 0) {
				p_shirase[player] = !p_shirase[player];
			}
			// UPLINE
			if(statc[player * 10 + 3] == 1) {
				upLineT[player] = !upLineT[player];
			}
			// HIDDEN
			if(statc[player * 10 + 3] == 2) {
				hidden[player]++;
				if(hidden[player] > 11) hidden[player] = 0;
			}
		}
	}


	// C�{�^��
	//if(statc[player * 10 + 2] != 0){
	if( getPressState(player, 6) ) {
		if(statc[player * 10 + 2] == 1){
		if(gameMode[player] == 6)//RANDOM
			ExBltRect(85, (16 + 24 * player - 12 * maxPlay)*8, (10 + (gameMode[player] - ((gameMode[player] >= 6)+(gameMode[player] >= 9)) * 2)*2)*8, 70, 7*6, 33, 7);
		else//BIG
			ExBltRect(85, (16 + 24 * player - 12 * maxPlay)*8, (10 + (gameMode[player] - ((gameMode[player] >= 6)+(gameMode[player] >= 9)) * 2)*2)*8, 0, 7*1, 20, 7);
		}
		else if(statc[player * 10 + 2] == 2){
		if(gameMode[player] == 6)
			printFont(15 + 24 * player - 12 * maxPlay, 19 , "RANDOM", 7);
		else
			printFont(15 + 24 * player - 12 * maxPlay, 19 , "BIG", 7);
		}
	}
	// HOLD�{�^��
	// �A�C�e�����[�h�Ƃ��ADEATH+�Ƃ�
	if(getPushState(player,7) && (statc[player * 10 + 2] == 1)) {
		PlaySE(5);
		if((gameMode[player] == 6)&&(tomoyo_opt[player]==4)){
			if(!fpbas_mode[player])
			fpbas_mode[player]=1;
			else if(fpbas_mode[player])
			fpbas_mode[player]=0;
		}
		if((gameMode[player] == 1) || (gameMode[player] == 2)){
			if((!item_mode[player]) && (!hebo_plus[player]))
				item_mode[player] = 1;
			else if(item_mode[player]){
				item_mode[player] = 0;
				hebo_plus[player] = 1;
				if((gameMode[player] ==1) || (gameMode[player] == 2)){//����オ��p�^�[�������[�h�Ō���
					upLineT[player]=1;//�p�^�[��
				}else{
					upLineT[player]=0;//�R�s�[
				}
			}else
				hebo_plus[player] = 0;
		}
		if(gameMode[player] == 3){	//DEATH+
			if((!death_plus[player]) && (!item_mode[player])){
				item_mode[player]=0;
				death_plus[player]=1;
			}else if(death_plus[player]){
				item_mode[player]=1;
				death_plus[player]=0;
			}else if(item_mode[player]){
				item_mode[player]=0;
				death_plus[player]=0;
			}
		}
		if((gameMode[player] == 9) && (std_opt[player] <= 1))
			relaymode[player] = !relaymode[player];
	}

	// B�{�^��
	if( getPushState(player, 5) ) {
		PlaySE(5);
		death_plus[player] = 0;
		item_mode[player] = 0;
		hebo_plus[player] = 0;
		devil_minus[player] = 0;
		squaremode[player] =0;
		heboGB[player] = 0;
		relaymode[player] = 0;

		statc[player * 10 + 2]--;
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 4] = 0;

		// �t�B�[���h���� #1.60c7s6
		for(i = 0; i < 220; i++) {
			fld[i + player * 220] = 0;
			fldt[i + player * 220] = 0;
			fldi[i + player * 220] = 0;
			fldu[i + player * 220] = 0;
			flds[i + player * 220] = 0;
			fldubuf[i + player * 220] = 0;
		}

		if(statc[player * 10 + 2] < 0) {
			stat[player] = 0;
			if(stat[1 - player] == 0) flag = 1;
		}
	}

	// A�{�^��
	if( getPushState(player, 4) ) {
		PlaySE(10);
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 4] = 0;

		// ���̃y�[�W��
		if(statc[player * 10 + 3] != 5){
		statc[player * 10 + 2]++;
		}
		// �Q�[���J�n��
		if(statc[player * 10 + 2] > (2 - ((mini_select) || (gameMode[player] == 6)) )) {
			statc[player * 10 + 0] = 1;
		}

		if(statc[player * 10 + 0]) {
			// �J�n����
			if(upLineT[player] >= 2) upLineT[player] = 0;	// ����オ�肪RANDOM�ɂȂ��Ă�����SHIRASE�ɂ���
			if(upLineT[player] == -1) upLineT[player] = 0;
			StopAllBGM();	// ���y��~
			backno = 0;		// �w�i������

			// �J�n�X�s�[�h�ݒ�
			start[player] = 0;
			setStartLevel(player);

			// mini_select��1�Ȃ�ݒ���Œ�
			if(mini_select) {

				p_shirase[player] = (gameMode[player] == 3);
				if(((gameMode[player] == 3) && (!devil_minus[player])) || ((gameMode[player] == 7) && (anothermode[player] == 2))) {
					PlaySE(18);//����
					gflash[player]=120;
					upLineT[player] = 0;
				}
			}

			//devil-���Ƃ���オ��Ȃ�
			if(((enable_grade[player] == 1) && (repversw < 42)) || ((devil_minus[player])&&(gameMode[player] == 3)&&(repversw >= 30))){
				p_shirase[player] = 0;
			}
			//���I���ő��̃��[�h������ł��Ă��܂����߃��Z�b�g
			if(gameMode[player]!=0){
			novice_mode[player] = 0;
			}
			if(gameMode[player]!=3){
			devil_minus[player] = 0;
			}
			if(gameMode[player]!=6){
			fpbas_mode[player] = 0;
			}

			if( getPressState(player, 6) ) {
				if(gameMode[player] == 6) {
					// �����_�����[�h
					randommode[player] = 1;
				} else {
					// �r�b�O���[�h
					IsBig[player] = 1;
					IsBigStart[player] = 1;
				}
			} else {
				randommode[player] = 0;
				IsBig[player] = 0;
				IsBigStart[player] = 0;
			}

			if( (!mini_select) && (gameMode[player] == 6) ) {
				// TOMOYO�Z���N�g
				if(!randommode[player]) {
					versusInit(player);
				}

				stat[player] = 19;
				statc[player * 10 + 0] = 0;
				statc[player * 10 + 1] = 0;
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;
			} else if( (debug) && ((gameMode[player] <= 3)||(gameMode[player] == 10)) ) {
				// ���x���Z���N�g
				stat[player] = 12;
				statc[player * 10 + 0] = 0;
				statc[player * 10 + 1] = 0;
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;
			} else if(gameMode[player] == 9){
				if(std_opt[player]<=1){
					// ���x���Z���N�g
					stat[player] = 37;
					statc[player * 10 + 0] = 0;
					statc[player * 10 + 1] = 0;
					statc[player * 10 + 2] = 0;
					statc[player * 10 + 3] = 0;
				}else if(std_opt[player]==2){
					squaremode[player] =1;
					stat[player] = 3;
					statc[player * 10 + 0] = 0;
					statc[player * 10 + 1] = 0;
					statc[player * 10 + 2] = 0;
					statc[player * 10 + 3] = 0;
				}else {
					stat[player] = 3;
					statc[player * 10 + 0] = 0;
					statc[player * 10 + 1] = 0;
					statc[player * 10 + 2] = 0;
					statc[player * 10 + 3] = 0;
				}
			}  else {
				if(gameMode[player] == 6) {
					// TOMOYO�̏ꍇ�̓c�����Z�b�g
				//	versusInit(player);

					// �X�e�[�W�ݒ�
					if(tomoyo_opt[player] == 0){			//TI
						ltime[player] = 180 * 60;
						start_stage[player] = 0;
					}else if(tomoyo_opt[player] == 1){	//EH
						ltime[player] = 600 * 60;
						start_stage[player] = 27;
					}else if(tomoyo_opt[player] == 2)	//TGT
						start_stage[player] = 45;
					else if(tomoyo_opt[player] == 3)	//Edit
						start_stage[player] = 72;
					else{								//FP
						ltime[player] = 1080 * 60;
						start_stage[player] = 100;
					}
				versusInit(player);
				stage[player] = start_stage[player];
			}else
				if(((gameMode[player] == 1) || (gameMode[player] == 2))){
					if((((enable_randexam==1) && (!item_mode[player]) && (!hebo_plus[player])) && (Rand(10) < 2)) ||(getPressState(player,7))){
						item_mode[player] = 0;
						hebo_plus[player] = 0;
						examination[player] = 1;
					}
					//admitgradecheck(player);
					if((enable_randexam==2) && (!item_mode[player]) && (!hebo_plus[player])&&(Admitgradecheck(player)>0)&&(!cp_player_1p)){
						item_mode[player] = 0;
						hebo_plus[player] = 0;
						examination[player] = Admitgradecheck(player);
					}
				}
				// �Q�[���J�n
				stat[player] = 3;				// Ready
				statc[player * 10 + 0] = 0;		// �X�e�[�^�X�J�E���^��0��
				statc[player * 10 + 1] = 0;
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;

				if(((gameMode[player] == 1) || (gameMode[player] == 2)) && (examination[player]>0)){

					if((enable_randexam==1)||((enable_randexam==2)&&(enable_grade[player]!=4))){
						//�G���[�΍�
						//�w�肳�ꂽ�����W���炸��Ă�����ł��߂������Ȓl������
						for(i=0;i<2;i++){//
							if(enable_grade[player]==1){
								//18~31��������17�ɖ߂�
								if((exam_range[((enable_grade[player] - 1) * 2) + i] >= 18)&&(exam_range[((enable_grade[player] - 1) * 2) +i] <= 31))
								exam_range[(enable_grade[player] - 1) * 2 + i]=17;//S9
							}else if(enable_grade[player]==3){
								//18~26��������17�ɖ߂�
								if((exam_range[((enable_grade[player] - 1) * 2)+i] >= 18)&&(exam_range[((enable_grade[player] - 1) * 2) + i] <= 26))
								exam_range[((enable_grade[player] - 1) * 2) + i]=17;//S9
								//28~31��������27�ɖ߂�
								if((exam_range[((enable_grade[player] - 1) * 2) + i] >= 28)&&(exam_range[((enable_grade[player] - 1) * 2) + i] <= 31))
								exam_range[((enable_grade[player] - 1) * 2) + i]=27;//m
							}
							//33�ȏゾ������32�ɖ߂�
							if(exam_range[((enable_grade[player] - 1) * 2) + i] > 33)
							exam_range[((enable_grade[player] - 1) * 2)+ i]=32;//Gm
							//0�ȉ���������0�ɖ߂�
							if(exam_range[((enable_grade[player] - 1) * 2)+ i] < 0)
							exam_range[((enable_grade[player] - 1) * 2)+ i]=0;//0
						}

						//min>max�ƂȂ��Ă�����min=max�Ƃ���(min��max������)
						if(exam_range[(enable_grade[player] - 1) * 2]>exam_range[((enable_grade[player] - 1) * 2) + 1])
						exam_range[(enable_grade[player] - 1) * 2]=exam_range[((enable_grade[player] - 1) * 2) + 1];

						//�i�ʔF�莎������
						do{	//�����i�ʂ�ݒ�
							exam_grade[player] = Rand(32) + 1;
						}while((exam_grade[player] < exam_range[(enable_grade[player] - 1) * 2]) ||
						(exam_grade[player] > exam_range[((enable_grade[player] - 1) * 2) + 1]));
					}

					stat[player] = 30;				// �������ۂ���
					statc[player * 10 + 0] = 0;		// �X�e�[�^�X�J�E���^��0��
					statc[player * 10 + 1] = 0;		// �����J�n�錾
					statc[player * 10 + 2] = exam_grade[player];
					statc[player * 10 + 3] = 0;
				}
				if((gameMode[player] == 6) && (start_stage[player] >= 100)){
					stat[player] = 36;				// F-Point�Z���N�g
					statc[player * 10] = 0;
					statc[player * 10 + 1] = 0;
					statc[player * 10 + 2] = 0;
					statc[player * 10 + 3] = 0;
				}
			}
			// BGM�ݒ�
			bgmlv = setstartBGM(gameMode[player], player);
			fadelv[player] = 0;
		}
	}
}
//��������i�ʂ𔻒�
//0;�Ȃ�
//1:���i
//2:�~�i
int Admitgradecheck(int player){
	int i,j,temp1[2],temp2[2],grade_his_buf[5],sort_grade[3];
	if(gameMode[player]!=1)return 0;
	if(enable_grade[player]!=4)return 0;
	for(i=0;i<5;i++){
		if((grade_his[i]<0)||(grade_his[i]>32))
		return 0;
	}
	//������בւ����
	for(i = 0 ; i < 5 ; i++){
		grade_his_buf[i] = grade_his[i];//�o�b�t�@�ɓ����
	}
	//�o�u���\�[�g��������Ȃ�
	for (i = 0; i < 4; i++) {
        	for (j = 4; j > i; j--) {
        	    if (grade_his_buf[j - 1] > grade_his_buf[j]) {  /* �O�̗v�f�̕����傫�������� */
        	        temp1[player] = grade_his_buf[j];        /* �������� */
        	        grade_his_buf[j] = grade_his_buf[j - 1];
        	        grade_his_buf[j - 1]= temp1[player];
        	    }
        	}
    	}
    	for(i = 0 ; i < 3 ; i++){
		sort_grade[i] = grade_his_buf[i];//���בւ�
	}
	temp1[player]=grade_his[0]+grade_his[1]+grade_his[2];
	temp2[player]=5-grade_pasttime[player];//��������o�ߎ���
	if(admit_grade[player]<32){

		//���i
		temp2[player]=5-grade_pasttime[player];
		if(temp2[player]<1)temp2[player]=1;//0�ɂ͂��Ȃ�
		if((grade_his[0] == grade_his[1])&&((admit_grade[player]-grade_his[0]) > temp2[player])){
			exam_grade[player]=grade_his[0];
			return 1;
		}

		temp1[player]=grade_his[0]+grade_his[1]+grade_his[2]/3;
		temp2[player]=4-grade_pasttime[player];//��������o�ߎ���
		if(temp2[player]<1)temp2[player]=1;//0�ɂ͂��Ȃ�
		if((temp1[player]%3==0)&&((admit_grade[player]-grade_his[0]) > temp2[player])){
			exam_grade[player]=temp1[player];
			return 1;
		}
		temp1[player]=grade_his[0]+grade_his[1]+grade_his[2]+ grade_his[3]/3;
		temp2[player]=3-grade_pasttime[player];//��������o�ߎ���
		if(temp2[player]<1)temp2[player]=1;//0�ɂ͂��Ȃ�
		if((2 <= grade_pasttime[player])&&(temp1[player] == 0)&&((admit_grade[player]-temp1[player]) > temp2[player])){
			exam_grade[player]=temp1[player];
			return 1;
		}
	}
	if(admit_grade[player]>0){
	//�~�i����
	//�F��i�ʂ������Ȃ�Ɨ����₷���Ȃ�
		if(admit_grade[player] > 18){//m8�ȏ�
			exam_grade[player]=grade_his[0];
			return 2;
		}
		if(admit_grade[player] > 24){//m8�ȏ�
			if((grade_his[0] + grade_his[1]) / 2 < admit_grade[player] - 3){
				exam_grade[player]=grade_his[0];
				return 2;
			}
		}

		if(admit_grade[player] > 18){//m1�ȏ�
			if((grade_his[0]+grade_his[1]+grade_his[2]) / 3 < admit_grade[player]-4){
				exam_grade[player]=grade_his[0];
				return 2;
			}
		}
		//�傫���ق�����3�̕��ς����݂��5��
		if(admit_grade[player] > 10){
			if((grade_his[0]+grade_his[1]+grade_his[2]+grade_his[3]+grade_his[4]) / 3 < admit_grade[player]-5){
				exam_grade[player]=sort_grade[0];
				return 2;
			}
		}
	}

	return 0;//�����Ȃ�
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.37 -���x���Z���N�g
//������������������������������������������������������������������������������
void statSelectStandardSp(int player) {
	int	i;

	//statc[player * 10 + 1]++;

//	printFont(16 + 24 * player - 12 * maxPlay, 6, "SELECT", 4);
//	printFont(19 + 24 * player - 12 * maxPlay, 7, "WAITS", 4);
	printSMALLFont(124 + 192 * player - 96 * maxPlay, 45, "Select", 4);
	printSMALLFont(124 + 192 * player - 96 * maxPlay, 54, "    Waits", 4);

	printFont(15 + 24 * player - 12 * maxPlay, 9, "SP PRESET", 6);
	printFont(15 + 24 * player - 12 * maxPlay, 10, waitname[statc[player * 10 + 1]], count % 9 * (statc[player * 10 ]==0));

	printFont(15 + 24 * player - 12 * maxPlay, 12, "WAITS", 6);
	sprintf(string[0], "ARE: %d",  wait1[player]);
	printFont(15 + 24 * player - 12 * maxPlay, 13, string[0], count % 9  * (statc[player * 10 ]==1));
	sprintf(string[0], "CLEAR: %d", wait2[player]);
	printFont(15 + 24 * player - 12 * maxPlay, 14, string[0], count % 9 * (statc[player * 10 ]==2));
	sprintf(string[0], "LOCK: %d",  wait3[player]);
	printFont(15 + 24 * player - 12 * maxPlay, 15, string[0], count % 9 * (statc[player * 10 ]==3));
	sprintf(string[0], "DAS: %d",  waitt[player]);
	printFont(15 + 24 * player - 12 * maxPlay, 16, string[0], count % 9 * (statc[player * 10 ]==4));


	sprintf(string[0], "SPEED:%4d",  sp[player]);
	printFont(15 + 24 * player - 12 * maxPlay, 18, string[0], count % 9 * (statc[player * 10 ]==5));

	sprintf(string[0], "BGM: %d",  p_bgmlv);
	printFont(15 + 24 * player - 12 * maxPlay, 20, string[0], count % 9 * (statc[player * 10 ]==6));

	if(statc[player * 10] > 0)
		printFont(15 + 24 * player - 12 * maxPlay, 22, "A:START", count % 9);
	else
		printFont(15 + 24 * player - 12 * maxPlay, 22, "A:LOAD", count % 9);

	if(std_opt[player])
	printFont(15 + 24 * player - 12 * maxPlay, 24, "ULTRA2MIN", 9);
	else
	printFont(15 + 24 * player - 12 * maxPlay, 24, "40LINES", 9);

//	printFont(14 + 24 * player - 12 * maxPlay, 9 + statc[player * 10], "b", 1);

	if(backno > bg_max) backno = bg_max;

	// �������ςȂ��ړ� #1.60c7n4
	padRepeat(player);
	padRepeat2(player);

	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) ){
		if(getPressState(player, 0)) {
			PlaySE(5);
			statc[player * 10]--;
			if(statc[player * 10] < 0) statc[player * 10] = 6;

			statc[player * 10 + 2] = 1;
		}
	}

	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) ){
		if(getPressState(player, 1)) {
			PlaySE(5);
			statc[player * 10]++;
			if(statc[player * 10] > 6) statc[player * 10] = 0;

			statc[player * 10 + 2] = 1;
		}
	}
	// �� (C�{�^���������Ȃ��炾�ƍ����ɐ��l��ύX���܂�)
	if((mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) || (getPressState(player, 6)))
		if(getPressState(player, 2)) {
			PlaySE(3);
					// FAVORITES
			if(statc[player * 10] == 0) {
				statc[player * 10 + 1]--;
				if(statc[player * 10 + 1] < 0) statc[player * 10 + 1] = skip_fwait;
			}

			// �o��
			if(statc[player * 10] == 1) {
				wait1[player]--;
				if(wait1[player] < 0) wait1[player] = 99;
			}
			// ����
			if(statc[player * 10] == 2) {
				wait2[player]--;
				if(wait2[player] < 0) wait2[player] = 99;
			}
			// �ڒ�
			if(statc[player * 10] == 3) {
				wait3[player]--;
				if(wait3[player] < 0) wait3[player] = 99; // 0�ȉ���������99��
			}
			// ������
			if(statc[player * 10] == 4) {
				waitt[player]--;
				if(waitt[player] < 0) waitt[player] = 99;
			}
			// �����X�s�[�h
			if(statc[player * 10] == 5) {
				sp[player]--;
				if(sp[player] < 0) sp[player] = 1200; // 0�ȉ���������1200��
			}
			// BGM
			if(statc[player * 10] == 6) {
				p_bgmlv--;
				if(p_bgmlv < 0) p_bgmlv = 19; // 0�ȉ���������1200��
			}
		}

		// �� (C�{�^���������Ȃ��炾�ƍ����ɐ��l��ύX���܂�)
	if((mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) || (getPressState(player, 6)))
		if(getPressState(player, 3)) {
			PlaySE(3);
			// FAVORITES
			if(statc[player * 10] == 0) {
				statc[player * 10 + 1]++;

				if(statc[player * 10 + 1] > skip_fwait) statc[player * 10 + 1] = 0;
			}

			// �o��
			if(statc[player * 10] == 1) {
				wait1[player]++;
				if(wait1[player] > 99) wait1[player] = 0;
			}
			// ����
			if(statc[player * 10] == 2) {
				wait2[player]++;
				if(wait2[player] > 99) wait2[player] = 0;
			}
			// �ڒ�
			if(statc[player * 10] == 3) {
				wait3[player]++;
				if(wait3[player] > 99) wait3[player] = 0;
			}
			// ������
			if(statc[player * 10] == 4) {
				waitt[player]++;
				if(waitt[player] > 99) waitt[player] = 0;
			}
			// �����X�s�[�h
			if(statc[player * 10] == 5) {
				sp[player]++;
				if(sp[player] > 1200) sp[player] = 0;
			}// BGM
			if(statc[player * 10] == 6) {
				p_bgmlv++;
				if(p_bgmlv > 19) p_bgmlv = 0;
			}
		}



	if(getPushState(player, 5)) {		// B�{�^���Ń��[�h�I����ʂɖ߂�
		sp[player] = 1;
		PlaySE(5);
		stat[player] = 1;				// �u���b�N�V���b�^�[���s
		statc[player * 10] = 0;			// �X�e�[�^�X�J�E���^��0��
		statc[player * 10 + 1] = 2;		// �V���b�^�[��̓X�e�[�^�XNo.2
		relaymode[player] = 0;
	}

	if((statc[player * 10 + 1] > 15 * 60) || (getPushState(player, 4))) {
		if(statc[player * 10] == 0) {
			// FAVORITES�֘A
			loadWait(player, statc[player * 10 + 1]); // �Ή������ݒ��ǂݍ��ށB
			PlaySE(3);
		}else{
		PlaySE(10);
		upLines[player] = 0;
		if(std_opt[player] == 1){			//TI
			ltime[player] = 120 * 60;
		}
		// BGM�o�O�C�� #1.60c7s6
		bgmlv = p_bgmlv;

		stat[player] = 1;					// �u���b�N�V���b�^�[���s
		statc[player * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
		statc[player * 10 + 1] = 3;			// �V���b�^�[��̓X�e�[�^�XNo.3
		statc[player * 10 + 2] = 0;			// �X�e�[�^�X�J�E���^��0��
		statc[player * 10 + 3] = 0;
		}
	}
}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.12 - debug = 1�̂Ƃ��̃��x���Z���N�g
//������������������������������������������������������������������������������
void statSelectStartLv(int player) {
	int	i;
	i = 0;

	statc[player * 10 + 1]++;

//	printFont(16 + 24 * player - 12 * maxPlay, 6, "SELECT", 4);
//	printFont(19 + 24 * player - 12 * maxPlay, 7, "LEVEL", 4);
	printSMALLFont(124 + 192 * player - 96 * maxPlay, 45, "Select Level", 4);

	slv[player] = startlvTbl[i + ori_opt[player] * 14];

	for(i = 0; i <= 13; i++) {
		if(gameMode[player]==10) {
			sprintf(string[0], "%4d", startlvTbl[i + ori_opt[player] * 14]);
		} else {
			sprintf(string[0], "%4d", 100 * i);
		}
		printFont(18 + 24 * player - 12 * maxPlay, 9 + i, string[0], count % 9 * (statc[player * 10] == i));
	}
	printFont(17 + 24 * player + (gameMode[player]==10) - 12 * maxPlay, 9 + statc[player * 10], "b", 1);

	sprintf(string[0], "%2d", 15 - (statc[player * 10 + 1] / 60));
	printFont(17 + 24 * player - 12 * maxPlay, 23, "TIME", 6);
	printFont(21 + 24 * player - 12 * maxPlay, 23, string[0], 0);

	// �w�i�ݒ�
	if((gameMode[player]==10) && (statc[player * 10] <= 10)) backno = statc[player * 10];
	else if(statc[player * 10] > 10) backno = 11;
	else if(gameMode[player] == 0) backno = startlvTbl[statc[player]] / 10;
	else if(gameMode[player] == 3) backno = startlvTbl[statc[player] + 42] /3;
	else backno = startlvTbl[statc[player] + gameMode[player] * 14] /6;

	if(backno > bg_max) backno = bg_max;

	// �������ςȂ��ړ� #1.60c7n4
	padRepeat2(player);

	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
	if(getPressState(player, 0)) {
		PlaySE(5);
		statc[player * 10]--;
		if(statc[player * 10] < 0) statc[player * 10] = 13;

		statc[player * 10 + 2] = 1;
	}

	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
	if(getPressState(player, 1)) {
		PlaySE(5);
		statc[player * 10]++;
		if(statc[player * 10] > 13) statc[player * 10] = 0;

		statc[player * 10 + 2] = 1;
	}

	if(statc[player * 10 + 2] || (statc[player * 10 + 1] == 1)) {
		if(gameMode[player]!=10) start[player] = statc[player * 10] * 100;
		else start[player] = startlvTbl[statc[player * 10] + ori_opt[player] * 14];
		setStartLevel(player);
		statc[player * 10 + 2] = 0;
	}


	if(getPushState(player, 5)) {		// B�{�^���Ń��[�h�I����ʂɖ߂�
		PlaySE(5);
		stat[player] = 2;					// �X�e�[�^�X�J�E���^��0��
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 2] = 0;
	}

	if((statc[player * 10 + 1] > 15 * 60) || (getPushState(player, 4))) {
		PlaySE(10);
		upLines[player] = 0;

		// BGM�o�O�C�� #1.60c7s6
		bgmlv = setstartBGM_debug(gameMode[player], player);

		startLvback[0] = statc[player * 10];	// �J�n���x���L�� #1.60c7
		stat[player] = 1;					// �u���b�N�V���b�^�[���s
		statc[player * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
		statc[player * 10 + 1] = 3;			// �V���b�^�[��̓X�e�[�^�XNo.3
		statc[player * 10 + 2] = 0;			// �X�e�[�^�X�J�E���^��0��
		statc[player * 10 + 3] = 0;
	}
}


void setStartLevel(int pl) {				// �e�푬�x�ݒ胍�[�h (loadReplay��������p) #1.60c3
	if((!fpbas_mode[pl])&&(gameMode[pl]!=10)) { //TGM
		tr[pl] = start[pl] / 10;
		tc[pl] = start[pl];
	} else {       //Heboris
		lv[pl] = start[pl];
		tc[pl] = start[pl] * 10;
	}

	sp[pl] = 1200;
	// �����l��speed.def�Őݒ肵���l���g�p���� #1.60c7g3
//	wait1[pl] = 26;
//	wait2[pl] = 40;
//	wait3[pl] = 28;
//	waitt[pl] = 15;

	if(repversw < 6) {// ���̃o�[�W�������点��オ��Ԋu�����x���ł͂Ȃ��A�����������񐔂ɕύX #1.60c7i2
		// ����オ��J�n���x���ɂȂ��Ă������ɂ���オ��Ȃ��悤�ɂ��� #1.60c7g3
		if(gameMode[pl]!=10) shirase[pl] = (tc[pl] / p_shirase_interval + 1) * p_shirase_interval;
    }
	else {
		if(gameMode[pl]!=10) shirase[pl] = raise_shirase_interval;
    }

	// jump(gameMode[pl], lbeg, lmas, l20g, ldvl, lver, lpra, ltom, lace, lmis,lstd,lori);

	switch (gameMode[pl]) {
		case 0: goto lbeg;
		case 1: goto lmas;
		case 2: goto l20g;
		case 3: goto ldvl;
		case 4: goto lver;
		case 5: goto lpra;
		case 6: goto ltom;
		case 7: goto lace;
		case 8: goto lmis;
		case 9: goto lstd;
		case 10:goto lori;
	}

	lbeg:	// Beginner
		if(start[pl] < 1000){
			if(repversw < 40)sp[pl] = lvTableBeg39[tr[pl]];
			else sp[pl] = lvTableBeg[tr[pl]];
		}
		wait1[pl] = wait1_Beginner;
		wait2[pl] = wait2_Beginner;
		wait3[pl] = wait3_Beginner;
		waitt[pl] = waitt_Beginner;

		timelimit[pl] = 0;		// ������^�C��#1.60c7g7
		goto next;
	lmas:	// Master
		if(tr[pl] < 50) {
			sp[pl] = lvTableTgm[tr[pl]];
			wait1[pl] = wait1_master_half;
			wait2[pl] = wait2_master_half;
			wait3[pl] = wait3_master_half;
			waitt[pl] = waitt_master_half;
		} else {
			sp[pl] = 1200;
			if(repversw >= 54){
				wait1[pl] = wait1_master_tbl[tr[pl] / 10];
				wait2[pl] = wait2_master_tbl[tr[pl] / 10];
				wait3[pl] = wait3_master_tbl[tr[pl] / 10];
				waitt[pl] = waitt_master_tbl[tr[pl] / 10];
			}else if(repversw >= 29){
				wait1[pl] = wait1_master_tbl53[tr[pl] / 10];
				wait2[pl] = wait2_master_tbl53[tr[pl] / 10];
				wait3[pl] = wait3_master_tbl53[tr[pl] / 10];
				waitt[pl] = waitt_master_tbl53[tr[pl] / 10];
			}else{
				wait1[pl] = wait1_master_tbl28[(tr[pl] - 50) / 10 * 2];
				wait2[pl] = wait2_master_tbl28[(tr[pl] - 50) / 10 * 2];
				wait3[pl] = wait3_master_tbl28[(tr[pl] - 50) / 10 * 2];
				waitt[pl] = waitt_master_tbl28[(tr[pl] - 50) / 10 * 2];
			}
		}
		if(!playback) timelimit[pl] = timelimit_master;	// ������^�C��(master)#1.60c7g7
		if(enable_grade[pl]== 4)tr2[pl] = tr[pl];
		goto next;
	l20g:	// 20G
		if(tr[pl] < 50) {
			wait1[pl] = wait1_20G_half;
			wait2[pl] = wait2_20G_half;
			wait3[pl] = wait3_20G_half;
			waitt[pl] = waitt_20G_half;
		} else {
			sp[pl] = 1200;
			if(repversw >= 54){
				wait1[pl] = wait1_master_tbl[tr[pl] / 10];
				wait2[pl] = wait2_master_tbl[tr[pl] / 10];
				wait3[pl] = wait3_master_tbl[tr[pl] / 10];
				waitt[pl] = waitt_master_tbl[tr[pl] / 10];
			}else if(repversw >= 29){
				wait1[pl] = wait1_master_tbl53[tr[pl] / 10];
				wait2[pl] = wait2_master_tbl53[tr[pl] / 10];
				wait3[pl] = wait3_master_tbl53[tr[pl] / 10];
				waitt[pl] = waitt_master_tbl53[tr[pl] / 10];
			}else{
				wait1[pl] = wait1_master_tbl28[(tr[pl] - 50) / 10 * 2];
				wait2[pl] = wait2_master_tbl28[(tr[pl] - 50) / 10 * 2];
				wait3[pl] = wait3_master_tbl28[(tr[pl] - 50) / 10 * 2];
				waitt[pl] = waitt_master_tbl28[(tr[pl] - 50) / 10 * 2];
			}
		}
		if(!playback) timelimit[pl] = timelimit_20G;		// ������^�C��(20G)#1.60c7g7
		if(enable_grade[pl]== 4)tr2[pl] = tr[pl];
		goto next;
	ldvl:	// Devil
		tr[pl] = start[pl] / 10;
		if(repversw < 18){
			wait1[pl] = wait1_devil_tbl17[tr[pl] / 10];
			wait2[pl] = wait2_devil_tbl17[tr[pl] / 10];
			wait3[pl] = wait3_devil_tbl17[tr[pl] / 10];
			waitt[pl] = waitt_devil_tbl17[tr[pl] / 10];
		}
		if(repversw == 18){
			wait1[pl] = wait1_devil_tbl18[tr[pl] / 10];
			wait2[pl] = wait2_devil_tbl18[tr[pl] / 10];
			wait3[pl] = wait3_devil_tbl18[tr[pl] / 10];
			waitt[pl] = waitt_devil_tbl18[tr[pl] / 10];
		}
		if(repversw >= 19){
			if((((enable_grade[pl] == 1) && (repversw < 42)) || (devil_minus[pl]))&&(gameMode[pl] == 3)&&(repversw >= 31)){//devil-
				wait1[pl] = wait1_devil_m_tbl[tr[pl] / 10];
				wait2[pl] = wait2_devil_m_tbl[tr[pl] / 10];
				wait3[pl] = wait3_devil_m_tbl[tr[pl] / 10];
				waitt[pl] = waitt_devil_m_tbl[tr[pl] / 10];
			}else if(repversw < 33){
				wait1[pl] = wait1_devil_tbl32[tr[pl] / 10];
				wait2[pl] = wait2_devil_tbl32[tr[pl] / 10];
				wait3[pl] = wait3_devil_tbl32[tr[pl] / 10];
				waitt[pl] = waitt_devil_tbl32[tr[pl] / 10];

			}else if(repversw < 60){
				wait1[pl] = wait1_devil_tbl[tr[pl] / 10];
				wait2[pl] = wait2_devil_tbl[tr[pl] / 10];
				wait3[pl] = wait3_devil_tbl[tr[pl] / 10];
				waitt[pl] = waitt_devil_tbl[tr[pl] / 10];
			}else if(repversw < 62){
				wait1[pl] = wait1_doom_tbl61[tr[pl] / 10];
				wait2[pl] = wait2_doom_tbl61[tr[pl] / 10];
				wait3[pl] = wait3_doom_tbl61[tr[pl] / 10];
				waitt[pl] = waitt_doom_tbl61[tr[pl] / 10];
			}else{//����
				wait1[pl] = wait1_doom_tbl[tr[pl] / 10];
				wait2[pl] = wait2_doom_tbl[tr[pl] / 10];
				wait3[pl] = wait3_doom_tbl[tr[pl] / 10];
				waitt[pl] = waitt_doom_tbl[tr[pl] / 10];
			}
		}
		if(!playback) {
			//DOOM�̑��؂�^�C������]�@�����ƂɕύX
			if((rots[pl]==3) || (rots[pl]==4) || (rots[pl]==6))
				timelimit[pl] = timelimit_doom_E;
			else if((rots[pl]==0) || (rots[pl]==2) || (rots[pl]==5))
				timelimit[pl] = timelimit_doom_N;
			else
				timelimit[pl] = timelimit_doom_H;

			timelimitw[pl] = timelimit[pl];

			timelimitm[pl] = timelimitm_devil;
			timelimitmw[pl] = timelimitmw_devil;
			//1000�̑��؂��500��2�{
			timelimit2[pl] = timelimit[pl] * 2;	// #1.60c7q8
		}

		goto next;
	lver:	// Versus
		sp[pl] = speed_versus;
		wait1[pl] = wait1_versus;
		wait2[pl] = wait2_versus;
		wait3[pl] = wait3_versus;
		waitt[pl] = waitt_versus;
		goto next;
	lpra:	// Practice
		goto next;
	ltom:	// Tomoyo #1.60c7m1
		if(!fpbas_mode[pl]) {
			if(start[pl] < 300) sp[pl] = lvTabletomoyo[tr[pl]];
			if(repversw < 27){
				wait1[pl] = wait1_tomoyo26;
				wait2[pl] = wait2_tomoyo26;
				wait3[pl] = wait3_tomoyo26;
				waitt[pl] = waitt_tomoyo26;
			}else{
				wait1[pl] = wait1_tomoyo;
				wait2[pl] = wait2_tomoyo;
				wait3[pl] = wait3_tomoyo;
				waitt[pl] = waitt_tomoyo;
			}
			timelimit[pl] = 0;
		}else {
			sp[pl] = lvTabletomoyohebo[lv[pl]];
			wait1[pl] = wait1_tomoyo;
			wait2[pl] = wait2_tomoyo;
			wait3[pl] = wait3_tomoyo;
			waitt[pl] = waitt_tomoyo;
		}
		goto next;
	lace:	// Ace
		if(anothermode[pl] == 1){//�����A�i�U�[�ǂݍ���
			sp[pl] = lvTableAcea[0];
			wait1[pl] = wait1_Acea_tbl[0];
			wait2[pl] = wait2_Acea_tbl[0];
			wait3[pl] = wait3_Acea_tbl[0];
			waitt[pl] = waitt_Acea_tbl[0];
			goto next;

		}else if(anothermode[pl] == 2){//�����A�i�U�[2�ǂݍ���
			sp[pl] = lvTableAcea[0];
			wait1[pl] = wait1_Acea_tbl[14];
			wait2[pl] = wait2_Acea_tbl[14];
			wait3[pl] = wait3_Acea_tbl[14];
			waitt[pl] = waitt_Acea_tbl[14];
			isblind[pl] = 1;
			goto next;
		}else if(anothermode[pl] == 3){//�����A�i�U�[3�ǂݍ���
			if((isWRule(pl)) && (repversw >= 54)){
				heboGB[pl] = 1;//���[���h�n
				sp[pl] = lvTableHeboGB[0];
				wait1[pl] = wait1_HeboGB;
				wait2[pl] = wait2_HeboGB;
				wait3[pl] = wait3_HeboGB_tbl[0];
				waitt[pl] = waitt_HeboGB_tbl[0];
			}else{
				heboGB[pl] = 2;//SEGA�n
				sp[pl] = lvTabletomoyohebo[0];
				wait1[pl] = 30;
				wait2[pl] = 39;
				wait3[pl] = 30;
				waitt[pl] = 20;
			}
			goto next;

		}else{//�m�[�}���ǂݍ���
			if(repversw < 56)
				sp[pl] = lvTableAce55[0];
			else
				sp[pl] = lvTableAce[0];
			wait1[pl] = wait1_Ace;
			wait2[pl] = wait2_Ace;
			wait3[pl] = wait3_Ace;
			waitt[pl] = waitt_Ace;
			goto next;
		}
	lmis:	// Mission(���v���C�̂�)
		goto next;
	lstd:	// Next
		if(std_opt[pl] == 2){//SQUARE�ǂݍ���
			if(repversw < 56)
				sp[pl] = lvTableAce55[0];
			else
				sp[pl] = lvTableAce[0];
			squaremode[pl] = 1;
			goto next;

		}else if(std_opt[pl] == 3){//SQUARE�ǂݍ���
			if(repversw < 56)
				sp[pl] = lvTableAce55[0];
			else
				sp[pl] = lvTableAce[0];
			goto next;

		}
		goto next;
	lori:	//ORIGINAL
		if(ori_opt[pl]==0){
			if(start[pl] < 100){
			sp[pl] = lvTableBeg39[lv[pl]];
			}
			wait1[pl] = wait1_Beginner;
			wait2[pl] = wait2_Beginner;
			wait3[pl] = wait3_Beginner;
			waitt[pl] = waitt_Beginner;
		}else if((ori_opt[pl]==1)||((ori_opt[pl]==2))){
			if(lv[pl] < 30) {
				if(ori_opt[pl]==1){
				sp[pl] = orimasterlvTable[lv[pl]];
				}else if(ori_opt[pl]==2){
				sp[pl] = 1200;
				}
				wait1[pl] = wait1_master_half;
				wait2[pl] = wait2_master_half;
				wait3[pl] = wait3_master_half;
				waitt[pl] = waitt_master_half;
			} else {
				sp[pl] = 1200;
				wait1[pl] = wait1_orimaster_tbl[(lv[pl] - 30) / 3];
				wait2[pl] = wait2_orimaster_tbl[(lv[pl] - 30) / 3];
				wait3[pl] = wait3_orimaster_tbl[(lv[pl] - 30) / 3];
				waitt[pl] = waitt_orimaster_tbl[(lv[pl] - 30) / 3];
			}
		}else if(ori_opt[pl]==3){
			sp[pl] = 1200;
			wait1[pl] = wait1_oridevil_tbl[lv[pl] / 3];
			wait2[pl] = wait2_oridevil_tbl[lv[pl] / 3];
			wait3[pl] = wait3_oridevil_tbl[lv[pl] / 3];
			waitt[pl] = waitt_oridevil_tbl[lv[pl] / 3];
		}
	next:	;
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.03 - Ready !?
//������������������������������������������������������������������������������
void statReady(int player) {
//	int r_start, r_end, g_start, g_end;
	int tmp;

	/* �R���s���[�^���� #1.60c7o3 */
	if(playback) {
		cpu_flag[player] = 0;	// ���v���C����CPU���� #1.60c7o6
	} else {
		if( (!player && cp_player_1p) || (player && cp_player_2p) ) cpu_flag[player] = 1;
	}
	if((!playback) || (repversw < 37)){
		if(ready_go_style == 0){	// HEBORIS��
			if( ((gameMode[player] == 6) && (stage[player] < 100)) || ((gameMode[player] == 5) && (p_nextpass)) ) {
				/* TOMOYO #1.60c7l7 */
				// PRACTICE��NEXT PASS���g�����ꍇ���������� #1.60c7o8
				r_start[player] = s_ready_start;
				r_end[player]   = s_ready_end;
				g_start[player] = s_go_start;
				g_end[player]   = s_go_end;
			} else {
				/* �ʏ� */
				r_start[player] = ready_start;
				r_end[player]   = ready_end;
				g_start[player] = go_start;
				g_end[player]   = go_end;
			}
		} else {					// LITE�ŕ�
			if( ((gameMode[player] == 6) && (stage[player] < 100)) || ((gameMode[player] == 5) && (p_nextpass)) ) {
				/* TOMOYO #1.60c7l7 */
				// PRACTICE��NEXT PASS���g�����ꍇ���������� #1.60c7o8
				r_start[player] = ti_s_ready_start;
				r_end[player]   = ti_s_ready_end;
				g_start[player] = ti_s_go_start;
				g_end[player]   = ti_s_go_end;
			} else {
				/* �ʏ� */
				r_start[player] = ti_ready_start;
				r_end[player]   = ti_ready_end;
				g_start[player] = ti_go_start;
				g_end[player]   = ti_go_end;
			}
		}
	}
	// bigtype��2�̏ꍇ�̓��[�h�ɂ���Ĉړ��P�ʂ����߂� #1.60c7o9
	if( (bigtype == 2) && (!playback) ) {
		if( (gameMode[player] == 4) || (gameMode[player] == 6) || ((item_mode[player]) && (IsBigStart[player] != 1))) {
			BigMove[player] = 0;
		} else {
			BigMove[player] = 1;
		}
	}

	padRepeat(player);

	// DEVIL�̃����_������オ�� C7U4.9
	if((statc[player * 10] == 0) && (gameMode[player] == 3) && (devil_randrise) && (repversw >= 44)){
		if((devil_rise_min[tr[player] / 10] > 0) && (devil_rise_max[tr[player] / 10] > 0) && (!devil_minus[player])) {
			do {
				devil_nextrise[player] = rand( devil_rise_max[tr[player] / 10] + 1,player);
			} while(devil_nextrise[player] < devil_rise_min[tr[player] / 10]);
		}
	}

	// �ŏ��̃~�b�V����
	if((statc[player * 10] == 0) && (gameMode[player] == 8) && (c_mission == start_mission) && (c_norm[player] == 0) && (repversw >= 54)){
		missionSetStatus();
	}

	// tomoyo���[�h�ŃX�e�[�W��ǂݍ��� #1.60c7l6
	if( (statc[player * 10] == 0) && (gameMode[player] == 6) ) {
		loadTomoyoStage(player, stage[player]);
		if( (repversw >= 58) && ((stage[player] >= 45) && (stage[player] <= 71)) )
			randPlatinum(player, ((stage[player] - 44) / 5) + 2);
		if(stage[player] >= 100){
			if(repversw >= 47) FP_bonus[player] = 1000 * (((stage[player]-100) / 4) + 1);
			else FP_bonus[player] = 10800;
		}
		if(wavebgm >= 1) {
			if( !IsPlayWave(50 +bgmlv) ) PlayWave(50 +bgmlv);
		}

		if((repversw >= 25) && (sp[player] < min_speed[player]) && (enable_minspeed) || (tomoyo_waits[player]))
			sp[player] = min_speed[player];
		if((stage[player] == 44) && (!disable_ehlast_gimmick)){
			tomoyo_domirror[player] = 1;
			if(!tmp_maxPlay){
				maxPlay = 1;
				backno = 61;
			}
		}
		if(tomoyo_waits[player]){
			if(enable_minspeed){
				if(repversw >= 50) sp[player] = 1200;
				wait1[player] = wait1_devil_tbl32[5];
				wait2[player] = wait2_devil_tbl32[5];
				wait3[player] = wait3_devil_tbl32[5];
				waitt[player] = waitt_devil_tbl32[5];
			}else if(repversw >= 54){
				isboost[player] = 1;
				item_timer[player] = 1500 * 60;
			}
		}
		rest_pblock[player] = getPlatinumBlock(player);
		onRecord[player] = 1;				// ���v���C�L�^�J�n#1.60c7n8
		max_hnext[player] = hnext[player];

		if(rest_pblock[player] == 0) {
			// �v���`�i�u���b�N��1���Ȃ��ꍇ�͑��G���h #1.60c7r7
			PlaySE(28);
			stat[player] = 13;
			ending[player] = 1;
			return;
		}
		if( isfmirror[player] ){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 1, 0);
		}else if( rollroll_flag[player] ){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 2, 0);
		}else if( xray_flag[player] ){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 4, 0);
		}else if( color_flag[player] ){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 5, 0);
		}else if( IsBig[player] ){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 3, 0);
		}else if( tomoyo_waits[player] ){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 12, 0);
		}else if( hnext_flag[player]){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 7, 0);
		}else if((blind_flag[player]) || (isthunder[player]) || (tomoyo_rise[player])){
			PlaySE(38);
			objectCreate2(player, 10, 0, 0, 0, 0, 0, 0);
		}
	}

	if((gameMode[player] == 6) && (statc[player * 10] >= r_start[player])){	// STAGE�̕\��
		printFont(17 + 24 * player - 12 * maxPlay, 9, "STAGE", fontc[rots[player]]);
		if( (stage[player] >= 20) && (stage[player] <= 26) ) {
			sprintf(string[0],"  EX%2d",stage[player] - 19);
		} else if( (stage[player] >= 27) && (stage[player] <= 44) ){
			sprintf(string[0],"E-HEART%2d",stage[player] - 26);
		} else if( (stage[player] >= 45) && (stage[player] <= 71) ){
			sprintf(string[0],"ACE-TGT%2d",stage[player] - 44);
		} else if(stage[player] >= 100){
			sprintf(string[0],"F-POINT%2d",stage[player] - 99);
		} else {
			sprintf(string[0],"   %d",stage[player] + 1);
		}
		printFont(16 + 24 * player - 12 * maxPlay, 10, string[0],  0 );
	}

	if((statc[player * 10] == 0) && ((ace_irs != 0) && (gameMode[player] != 6) || (gameMode[player] == 4))){
		onRecord[player] = 1;				// ACE��IRS�Ȃ�A�������v���C�L�^�J�n
		max_hnext[player] = hnext[player];
	}

	// MISSION���[�h�̃^�[�Q�b�g
	if( (statc[player * 10] == 0) && (gameMode[player] == 8) && (mission_type[c_mission] == 6) && (c_norm[player] == 0) ) {
		loadTargetStage();
	}

	// TOMOYO�p�X�^�[�g���̃L�[���s�[�g�L�^���Đ� #1.60c7n8
	if((statc[player * 10] == 0) || (repversw < 57)){
	if( (gameMode[player] == 6) && (stage[player] == start_stage[player]) || (ace_irs != 0) || ((gameMode[player] == 4) && (vs_round == 1))) {
		if(playback) {
			mp [player] = mps[player * 2    ];
			mpc[player] = mps[player * 2 + 1];
		} else {
			mps[player * 2    ] = mp [player];
			mps[player * 2 + 1] = mpc[player];
		}
	}
	}

	if(( gameMode[player] == 7 ) && (anothermode[player] == 0)) {
		// ACE���[�h�̐������Ԑݒ�
		ltime[player] = timeLimitAce[0];
		lv[player] = 1;
	}

	if(( gameMode[player] == 7 ) && (anothermode[player] == 1)) {
		// ACE�A�i�U�[���[�h�̐������Ԑݒ�
		ltime[player] = timeLimitAcea[0];
		lv[player] = 1;
	}

	if(( gameMode[player] == 7 ) && (anothermode[player] == 2)) {
		// ACE�A�i�U�[2���[�h�̐������Ԑݒ�
		ltime[player] = timeLimitAcea2[0];
		lv[player] = 1;
	}
	if(( gameMode[player] == 7 ) && (anothermode[player] == 3)) {
		// ACE�A�i�U�[2���[�h�̐������Ԑݒ�
		//ltime[player] = timeLimitAcea2[0];
		lv[player] = 0;
	}
	if(( gameMode[player] == 9 ) && (std_opt[player] >= 2)) {
		lv[player] = 1;
	}

	// READY GO�̃^�C�~���O��ݒ�ł���悤�ɂ��� #1.60c7j5
	if(ready_go_style == 0){	// HEBORIS
		if(statc[player * 10] < r_start[player]) {

		} else if((statc[player * 10] < r_end[player]) && (r_end[player] > r_start[player])) {
			ExBltRect(3, 121 + player * 192 - 96 * maxPlay, 239 - ((statc[player * 10] - r_start[player]) * (1500 / (r_end[player] - r_start[player]))) / 100 * 8, 0, 0, 78, 17);
		} else if((statc[player * 10] < g_start[player]) && (g_start[player] >= r_end[player])) {
			ExBltRect(3, 121 + player * 192 - 96 * maxPlay, 119, 0, 0, 78, 17);
		} else if(g_end[player] > g_start[player]) {
			ExBltRect(3, 121 + player * 192 - 96 * maxPlay, 119 - ((statc[player * 10] - g_start[player]) * (1500 / (g_end[player] - g_start[player]))) / 100 * 8, 0, 0, 78, 17);
			ExBltRectR(3, 117 + player * 192 - ((g_end[player] - statc[player * 10]) * (1500 / (g_end[player] - g_start[player]))) / 100 * 86 / 16 - 96 * maxPlay,
				119 - ((g_end[player] - statc[player * 10]) * (1500 / (g_end[player] - g_start[player]))) / 100 * 17 / 16, 0, 17, 86, 17,
				65536 + ((g_end[player] - statc[player * 10]) * (1500 / (g_end[player] - g_start[player]))) / 100 * 8192,
				65536 + ((g_end[player] - statc[player * 10]) * (1500 / (g_end[player] - g_start[player]))) / 100 * 8192);
		}
	} else {					// LITE
		if(statc[player * 10] < r_start[player]) {
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 98  - (r_start[player] - statc[player * 10]),  (statc[player * 10] % 40) * 3, 28, 80, 8);
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 126 + (r_start[player] - statc[player * 10]),  160 - ((statc[player * 10] % 40) * 3), 20, 80, 8);
		} else if( (statc[player * 10] >= r_start[player]) && (statc[player * 10] < r_end[player]) ) {
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 98  ,  (statc[player * 10] % 40) * 3, 28, 80, 8);
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 126 ,  160 - ((statc[player * 10] % 40) * 3), 20, 80, 8);
			// READY
			ExBltRect(81, 110+192 * player -96 * maxPlay , 91 , 200, 0, 100, 50);
		} else if( (statc[player * 10] >= r_end[player]) && (statc[player * 10] < g_start[player]) ) {
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 98  ,  (statc[player * 10] % 40) * 3, 28, 80, 8);
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 126 ,  160 - ((statc[player * 10] % 40) * 3), 20, 80, 8);
		} else if( (statc[player * 10] >= g_start[player]) && (statc[player * 10] < g_end[player]) ) {
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 98  - (statc[player * 10] - g_start[player]),  (statc[player * 10] % 40) * 3, 28, 80, 8);
			ExBltRect(77, 120 + 192 * player -96 * maxPlay , 126 + (statc[player * 10] - g_start[player]),  160 - ((statc[player * 10] % 40) * 3), 20, 80, 8);
			// GO
			ExBltRect(81, 110+192 * player -96 * maxPlay , 91 , 200, 50, 100, 50);
		}
	}

	if(statc[player * 10] == r_start[player]) PlaySE(15);
	if(statc[player * 10] == g_start[player]) PlaySE(16);
	if(statc[player * 10] >= g_end[player]) {
		// PRACTICE�ŃG���f�B���O���̏ꍇ#1.60c6.2d
		if((gameMode[0] == 5) && (ending[0] != 0)) {
			if(ending[0] == 1){
				PlayWave(56);						// BGM����ĂȂ�����orz �����ւ�#1.60c7i4
				stat[player] = 13;					// �G���f�B���O�J�n
				statc[player * 10] = 0;				// ���Ƃ����Â�
				// �G���f�B���O�˓���������#1.60c7i4
				ending[player] = 2;
				edrec[player] = 125;
				timeOn[player] = 0;					// �^�C�}�[�X�g�b�v
				onRecord[player] = 1;				// ���v���C�L�^�J�n
			}else if(ending[0] == 6){
				stat[player] = 13;					// �G���f�B���O�J�n
				statc[player * 10] = 0;				// ���Ƃ����Â�
				timeOn[player] = 0;					// �^�C�}�[�X�g�b�v
				onRecord[player] = 1;				// ���v���C�L�^�J�n
			}
		} else {
			if(wavebgm >= 1) {
				if( !IsPlayWave(50 +bgmlv) ) PlayWave(50 +bgmlv);
			}

			stat[player] = 4;
			statc[player * 10 + 1] = 1;				// 1..Reday!
			statc[player * 10] = 0;					// ���Ƃ����Â�
			timeOn[player] = 1;						// �^�C�}�[�J�n
			onRecord[player] = 1;					// ���v���C�L�^�J�n
			max_hnext[player] = hnext[player];
			if(color_flag[player]){
				iscolor[player] = 1;				// COLOR#1.60c7p9ex
			}
			if((gameMode[player] != 6) && (gameMode[player] != 8) && (!ace_irs) && (gameMode[player] != 4)) {
				// �ʏ탂�[�h�p�X�^�[�g���̃L�[���s�[�g�L�^���Đ�
				if(playback) {
					mp [player] = mps[player * 2    ];
					mpc[player] = mps[player * 2 + 1];
				} else {
					mps[player * 2    ] = mp [player];
					mps[player * 2 + 1] = mpc[player];
				}
			}
			if((gameMode[player] == 8) && (!ace_irs) && (c_mission == start_mission) && (c_norm[player] == 0) && (gameMode[player] != 4)) {
				// �~�b�V�������[�h�p�X�^�[�g���̃L�[���s�[�g�L�^���Đ�
				if(playback) {
					mp [player] = mps[player * 2    ];
					mpc[player] = mps[player * 2 + 1];
				} else {
					mps[player * 2    ] = mp [player];
					mps[player * 2 + 1] = mpc[player];
				}
			}
		}
		pass_flg[player] = 0;		// #1.60c7j5
	} else {
		if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5
		if(gameMode[player] == 4){	//VS�̃X�^�C��
			sprintf(string[0]," Round %d",vs_round);
			printSMALLFont(130 + 192 * player - 96 * maxPlay, 70, string[0], 0);
			if(!disrise){
			if(statc[player * 10] < g_start[player]){
				printSMALLFont(124 + 192 * player - 96 * maxPlay, 127, "Select Style", count % 9);
				ExBltRect(25,120 + 192 * player - 96 * maxPlay, 136, 240, 168, 80, 56);
				if(noitem)	//ITEM�Ɂ~�}�[�N
					ExBltRect(3,127 + 192 * player - 96 * maxPlay, 166, 274, 384, 12, 12);
				if(getPushState(player, 1)){
					PlaySE(5);
					vs_style[player] = 0;	//NORMAL
				}else if(getPushState(player, 0)){
					PlaySE(5);
					vs_style[player] = 1;	//ATTACK
				}else if(getPushState(player, 3)){
					PlaySE(5);
					vs_style[player] = 2;	//DEFENCE
				}else if((getPushState(player, 2)) && (!noitem)){
					PlaySE(5);
					vs_style[player] = 3;	//ITEM
				}
			}else if(statc[player * 10] == g_start[player]){
				if(vs_style[player] == -1){	//���͂��Ȃ������烉���_��
					PlaySE(5);
					do{
						vs_style[player] = rand(4,player);
					}while((vs_style[player] == 3) && (noitem));
				}
				if(vs_style[player] == 1){	//ATTACK�̓A�C�e���Q�[�W2�{
					item_inter[player] = item_interval * 2;
				}else if(vs_style[player] == 3){	//ITEM�̓Q�[�W����
					item_inter[player] = item_interval / 2;
				}else{	//���͕ύX���Ȃ�
					item_inter[player] = item_interval;
				}
			}else if(statc[player * 10] >= g_start[player]){
				if(vs_style[player] == 0){
					printSMALLFont(143 + 192 * player - 96 * maxPlay, 140, "NORMAL", (count % 4 / 2) * digitc[rots[player]]);
				}else if(vs_style[player] == 1){
					printSMALLFont(143 + 192 * player - 96 * maxPlay, 140, "ATTACK", (count % 4 / 2) * digitc[rots[player]]);
				}else if(vs_style[player] == 2){
					printSMALLFont(140 + 192 * player - 96 * maxPlay, 140, "DEFENCE", (count % 4 / 2) * digitc[rots[player]]);
				}else if(vs_style[player] == 3){
					printSMALLFont(143 + 192 * player - 96 * maxPlay, 140, " ITEM ", (count % 4 / 2) * digitc[rots[player]]);
				}
			}
			}
		}
		// �c������@�\ #1.60c7j5
		if( (gameMode[player] == 6) || ((gameMode[0] == 5) && (p_nextpass)) ) {
			if((!pass_flg[player]) && (getPressState(player, 7))) {
				PlaySE(6);	// hold.wav

				hold[player] = next[player];

				// HOLD�~�m�̐F��ݒ� #1.60c7p1
				if(p_monochrome_mode==1) {
					c_hblk[player] = (p_monochrome_mode==2) * 8;
				} else {
					if( isWRule(player) )
						c_hblk[player] = wcol[next[player]];
					else if( (rots[player] >= 4) && (rots[player] != 8) )
						c_hblk[player] = acol[next[player]];
					else
						c_hblk[player] = ccol[next[player]];
				}

				nextc[player] = (nextc[player] + 1) % 1400;
				next[player] = nextb[nextc[player] + player * 1400];
				rt_nblk[0 + 6 * player] = 0;
				// �u���b�N�̐F��ݒ� #1.60c7m9
				setNextBlockColors(player,0);
				dhold[player] = 0;
				dhold2[player] = 0;
			}
			pass_flg[player] = getPressState(player, 7);
		}
	}
	statc[player * 10]++;	// �u���b�N�����J�n��

	// �����ꐧ��������#1.60c7f9
	down_flag[player] = 0;
	up_flag[player] = 0;
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.04 - �u���b�N�����J�n
//������������������������������������������������������������������������������
void statBlock(int player) {
	int i, j,k, m[2],tmp[2],tmp2[2];

	if(dolaser[player]){	//���[�U�[����
		stat[player] = 26;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		dolaser[player] = 0;
		return;
	}
	if(donega[player]){	//�l�K�t�B�[���h����
		stat[player] = 27;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		donega[player] = 0;
		return;
	}
	if(doshotgun[player]){	//�V���b�g�K������
		stat[player] = 28;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		doshotgun[player] = 0;
		return;
	}
	if(dorulet[player]){	//�A�C�e�����[���b�g����
		stat[player] = 31;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		dorulet[player] = 0;
		return;
	}
	if(do180field[player]){	//180���t�B�[���h����
		stat[player] = 34;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		do180field[player] = 0;
		return;
	}
	if(doexchg[player]){	//�t�B�[���h��������
		stat[player] = 29;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		doexchg[player] = 0;
		return;
	}
	if(do16t[player]){	//16t����
		stat[player] = 26;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 1;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		do16t[player] = 0;
		return;
	}
	if(docopyfld[player]){	//�t�B�[���h�R�s�[����
		stat[player] = 29;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 1;
		statc[player * 10 + 4] = 0;
		docopyfld[player] = 0;
		return;
	}
	harddrop[player]=0;
	// tgm�J�E���^�㏸(�ړ])#1.60c7i8
	if((ending[player] == 0) && (gameMode[player] <= 6) && ((!ismiss[player]) || (repversw < 62))) {
		if((repversw > 4) && (gameMode[player] >= 3))
			i = 99;//99�ŃX�g�b�v
		else
			i = 99 - ((tc[player] > 900));//�}�X�^�[�A20G��998�X�g�b�v�p

		if((gameMode[player] == 4) && (repversw >= 61) && (wintype==0) && (vs_goal != 0)){
			if((tc[player] != vs_goal - 1) && ((!start_flag[player]) || (tc[player] < 0))){
				tc[player]++;
				if(tc[player] == vs_goal - 1) PlaySE(9);
			}
		}else if((gameMode[player] == 0) && (novice_mode[player])){
			if((tc[player]  != 299) && ((!start_flag[player]) || (tc[player] < 0))) {//novice��299�ł̂݃X�g�b�v
				tc[player]++;
				if(tc[player] == 299) PlaySE(9);
			}
		}else {
			if((tc[player] % 100 != i) && ((!start_flag[player]) || (tc[player] < 0))) {
				tc[player]++;
				if(tc[player] % 100 == i) PlaySE(9);
			}
		}

		if(start_flag[player]) start_flag[player] = 0;

		// VS�ŃS�[�������C�����̏ꍇ
		if((gameMode[player] == 4) && (wintype == 1))
			tc[player] = 0;

		if((gameMode[player]!=6)||(tomoyo_opt[player]!=4)||(!fpbas_mode[player])){
			lv[player] = tc[player];
		}
	}

	// TOMOYO����オ��
	if(((gameMode[player] == 6) || ((gameMode[player] == 8) && (mission_type[c_mission] == 6))) && (tomoyo_rise[player] != 0)){
		tomoyo_rise_t[player]++;
		if(tomoyo_rise_t[player] % tomoyo_rise[player] == 0)
			upLines[player] = 1;
	}

	//HEBO+����オ��
	if(hebo_plus[player]){
		if(st_bdowncnt[player] >= hebop_interval[player]){
			upLines[player] = 1;
			st_bdowncnt[player] = 0;	// �u���b�N�𒅏��������� #1.60c7i2
		}
	}
	// ACE���[�h�̃^�C�}�[�ĊJ
	if(( (gameMode[player] == 7) || (gameMode[player] == 8) ) && (!ending[player])) {
		timeOn[player] = 1;
	}

	if((gameMode[player] == 4) || (item_mode[player])){
		// �A�C�e���Q�[�W�㏸ #1.60c7n1
		if( (!noitem) && ( (!ismiss[player]) || ((gameMode[player] != 4) && (repversw >= 62)) ) ) item_g[player]++;

		// ���ʎ���
		if(IsBig[player] || isfmirror[player] || isrollroll[player] || isxray[player] || iscolor[player] ||
		isholdlock[player] || ismagnetblock[player] || isremote[player] || istrance[player]||item_monochrome[player]){
			item_t[player]++;
		}
		if(ismiss[player])
			misstimer[player]--;
	}
	for(i = 0; i < 10; i++) statc[i + player * 10] = 0;

	statc[player * 10 + 4] = (fastlrmove == 0);		// �������̐�s�ړ�

	if(rots[player] == 8) statc[player * 10 + 4] = 0;

	// �h���b�v�{�[�i�X���ݐς����o�O�̏C���̂��߁AstatEraseBlock����ړ� #1.60c7j5
	sdrop[player] = 0;
	qdrop[player] = 0;

	hiddenProc(player);

	padRepeat(player);

	// ���𗣂��Ă���ꍇ�A�����ꐧ������#1.60c7n6
	if((!getPressState(player, 1-(1*((isUDreverse[player]) && (repversw>=44)) ))) && (repversw >= 10)) down_flag[player] = 0;
	if(!getPressState(player, 0+(1*((isUDreverse[player]) && (repversw>=44)) ))) up_flag[player] = 0;

	// T-SPIN���������� #1.60c7n6
	tspin_flag[player] = 0;

	blk[player] = next[player];
	dhold[player] = disable_hold;		// hold�g�p�\��	#1.60c
	dhold2[player] = 0;

	nextc[player] = (nextc[player] + 1) % 1400;
	if(!isfever[player])
		next[player] = nextb[nextc[player] + player * 1400];
	else		//�t�B�[�o�[���͖_�̂ݏo��
		next[player] = 0;

	// �A�C�e���o�� #1.60c7n1
	item_coming[player] = 0;
	if( ((gameMode[player] == 4) || (item_mode[player])) && (item_g[player] > item_inter[player]) ) {
		PlaySE(9);
		itemappear_c[player]=30;
		if(use_item[player] == 0){//ALL
			if(repversw >=51){
				do{
					tmp2[player] = rand(item_pronum,player);
					tmp[player] = 1;
					do{
						tmp2[player] = tmp2[player]-item_pro[tmp[player]-1 ];
						if(tmp2[player] < 0){
							break;
						}
							tmp[player]++;
						if(tmp[player]>item_num+1)break;
					}while(1);
				//�����̒��ɂ��������������
				}while(
					(itemhistory[0+player*5] == tmp[player]) ||
					(itemhistory[1+player*5] == tmp[player]) ||
					(itemhistory[2+player*5] == tmp[player]) ||
					(itemhistory[3+player*5] == tmp[player]) ||
					(itemhistory[4+player*5] == tmp[player])
				);
				item_coming[player] = tmp[player];
				itemhistory[0+player*5]=itemhistory[1+player*5];//���������炷
				itemhistory[1+player*5]=itemhistory[2+player*5];
				itemhistory[2+player*5]=itemhistory[3+player*5];
				itemhistory[3+player*5]=itemhistory[4+player*5];
				itemhistory[4+player*5]=tmp[player];
			}else{
				item_coming[player] = rand(item_num,player);
			}
		}else if((use_item[player] > 0)&&(use_item[player] <= item_num)){//�P��
			item_coming[player] = use_item[player];
		}else if(use_item[player] == item_num+1){//few�@1~5
			do{
				tmp[player] = rand(item_num,player) + 1;
			}while((itemhistory[0+player*5]==tmp[player])||(6<=tmp[player]));
			item_coming[player] = tmp[player];
			itemhistory[0+player*5]=tmp[player];
		}else if(use_item[player] == item_num+2){//DS�@6 7 12 13 18 26
			do{
				tmp[player] = rand(item_num,player) + 1;
				if(tmp[player] == 6){//�T���_�[�̂Ƃ��͂������
					tmp[player] = rand(item_num,player) + 1;
				}
			}while((itemhistory[0+player*5]==tmp[player])||((6!=tmp[player])&&(7!=tmp[player])&&(12!=tmp[player])&&(13!=tmp[player])&&(18!=tmp[player])&&(26!=tmp[player])));
			item_coming[player] = tmp[player];
			itemhistory[0+player*5]=tmp[player];
		}else if(use_item[player] == item_num+3){//TGM 1-5 16-25 28-31
			do{
				tmp2[player] = rand(item_pronum,player);
				tmp[player] = 1;
				do{
					tmp2[player] = tmp2[player]-item_pro[tmp[player]-1 ];
					if(tmp2[player] < 0){
						break;
					}
						tmp[player]++;
					if(tmp[player]>item_num+1)break;
				}while(1);
			//�����̒��ɂ��������������
			}while((itemhistory[0+player*5]==tmp[player])||(itemhistory[1+player*5]==tmp[player])||(itemhistory[2+player*5]==tmp[player])||
					(itemhistory[3+player*5]==tmp[player])||(itemhistory[4+player*5]==tmp[player])||
					( ((tmp[player] > 5)&&(tmp[player] < 16)) || ((tmp[player] > 25)&&(tmp[player] < 28)) || (tmp[player] > 31) ));
			item_coming[player] = tmp[player];
			itemhistory[0+player*5]=itemhistory[1+player*5];//���������炷
			itemhistory[1+player*5]=itemhistory[2+player*5];
			itemhistory[2+player*5]=itemhistory[3+player*5];
			itemhistory[3+player*5]=itemhistory[4+player*5];
			itemhistory[4+player*5]=tmp[player];
		}
		item_name[player] = item_coming[player];
		item_g[player] = 0;
	//novice100
	} else if((gameMode[player] == 0)&&(novice_mode[player])&&(tc[player] >= 100)&&(novice_flag[player]==0)){
		PlaySE(9);
		item_coming[player] = 28;
		item_name[player] = item_coming[player];//
		novice_flag[player]=1;
	//novice200
	} else if((gameMode[player] == 0)&&(novice_mode[player])&&(tc[player] >= 200)&&(novice_flag[player] ==1)){
		PlaySE(9);
		item_coming[player] = 19;
		item_name[player] = item_coming[player];
		novice_flag[player]=2;
	} else {
		item[player] = 0;
	}

	// �ΐ탂�[�h�ł̃u���b�N�����̃A�C�e�����ʏI��
	if((gameMode[player] == 4) || (item_mode[player])) {
		if( (isfmirror[player]) && (item_t[player] > 3 - (repversw >=47)) ) {
			// MIRROR
			isfmirror[player] = 0;
			stopmirror_flag[player] = 0;
			item_t[player] = 0;
		} else if( (isrollroll[player]) && (item_t[player] > 3) ) {
			// ROLL ROLL
			isrollroll[player] = 0;
			item_rollroll[player] = 0;
			item_t[player] = 0;
		} else if( (IsBig[player]) && (!IsBigStart[player]) && (item_t[player] > 1) ) {
			// DEATH BLOCK
			IsBig[player] = 0;
			item_t[player] = 0;
		} else if( (isxray[player]) && (item_t[player] > 4) ) {
			// X-RAY
			isxray[player] = 0;
			xray_flag[player] = 0;
			item_t[player] = 0;
		} else if( (iscolor[player]) && (item_t[player] > 3) ) {
			// COLOR
			iscolor[player] = 0;
			color_flag[player] = 0;
			item_t[player] = 0;
		} else if( (isholdlock[player]) && (item_t[player] > 6) ) {
			// HOLD LOCK
			isholdlock[player] = 0;
			item_t[player] = 0;
		} else if( (ismagnetblock[player]) && (item_t[player] > 2) ) {
			// MAGNET BLOCK
			ismagnetblock[player] = 0;
			item_t[player] = 0;
		} else if( (isremote[player]) && (item_t[player] > 2) ) {
			// REMOTE CONTROL
			isremote[player] = 0;
			item_t[player] = 0;
		} else if( isUPdelfield[player] ) {
			// ��DEL FIELD
			isUPdelfield[player] = 0;
		} else if( isDWdelfield[player] ) {
			// ��DEL FIELD
			isDWdelfield[player] = 0;
		} else if( isdeleven[player] ) {
			// DEL EVEN
			isdeleven[player] = 0;
		} else if( (istrance[player]) && (item_t[player] > 3) ) {
			// TRANCE FORM
			istrance[player] = 0;
			item_t[player] = 0;
		} else if( isLmovfield[player] ) {
			// ��MOV FIELD
			isLmovfield[player] = 0;
		} else if( isRmovfield[player] ) {
			// ��MOV FIELD
			isRmovfield[player] = 0;
		} else if( isallclear[player] ) {
			// ALLCLAER
			isallclear[player] = 0;
		}  else if( (ismiss[player]) && (misstimer[player] < 0) ) {
			// MISS
			ismiss[player] = 0;
			misstimer[player] = 0;
		} else if( (item_monochrome[player]) && (item_t[player] > 20) ) {
			// []
			item_monochrome[player] = 0;
			item_t[player] = 0;
		}
	}
	item_waiting[player] = 0;

		c_cblk[player] = c_nblk[0 + player * 6];

	c_cblk_r[player] = c_nblk[0 + player * 6];
	if(isfever[player]){	//�t�B�[�o�[���͐F���_�ɕϊ�
		if(isWRule(player)){
			c_cblk[player] = wcol[0];
			c_cblk_r[player] = wcol[0];
		} else if((rots[player] >= 4) && (rots[player] != 8)){
			c_cblk[player] = acol[0];
			c_cblk_r[player] = acol[0];
		} else{
			c_cblk[player] = ccol[0];
			c_cblk_r[player] = ccol[0];
		}
	}


	// NEXT�̈���̃u���b�N�F�����炷
	setNextBlockColors(player, 0);

	if(isfever[player]){
		if(isWRule(player)){
			c_nblk[0 + player * 6] = wcol[0];
		} else if((rots[player] >= 4) && (rots[player] != 8)){
			c_nblk[0 + player * 6] = acol[0];
		} else{
			c_nblk[0 + player * 6] = ccol[0];
		}
	}
	if((ishidenext[player] == 0) && (!isfakenext[player])){//HIDENEXT�̎��͉����B��
		PlaySE(21 + next[player]);
	}
	if(isfakenext[player]==1){//FAKENEXT�̎��͓K���ȉ�
		PlaySE(21 + rand(6,player));
	}
	if((!isrotatelock[player]) && (!ace_irs))
		rt[player] = 0;

	setBlockSpawnPosition(player);	//LITE�ł��ڐA�@C7U0
	bs[player] = 0;
	bk[player] = 0;
	bk_D[player] = 0;	//D.R.S�p

	ofs_x[player] = 0;
	ofs_x2[player] = 0;

	//NEXT�x���@1G�ȏ�ł��o���������_�Őڒn���Ă���Βx��������
	if( (spawn_y_type) && (heboGB[player]==0) && (blk[player] != 0) ){
	 	if((rots[player] != 6) && (sp[player] < 60) ||
	 		(judgeBlock(player, bx[player], by[player] + 1, blk[player], rt[player]) != 0))
	 		ndelay[player] = 0;
	}
	stat[player] = 5;

	// �R���s���[�^�����삵�Ă���ꍇ�͍őP���T��
	if(cpu_flag[player]) {
		cp_rot_c[player] = 0;
		cpuCheckBestSpot(player);
		if((!istrance[player]) && ((rots[player] != 6) && (rots[player] != 8)) && ((wait2[player] != 0) || (wait1[player] != 0))) cpuMove(player);
	}
	if((navigation) && (gameMode[player] == 0) && (tc[player] < navigation_limitLv)){
		cpuCheckBestSpot(player);
		navigation_time[player] = 0;
	}


	// I.H.S.	#1.60c
	doHold(player, 1);	// �ʊ֐��ɓƗ� #1.60c7j3

	// (I.R.S.) Initial Rotation System  (c)1998 AR��KA(^^;
	if(!ace_irs)
		doIRS(player);		// �ʊ֐��ɓƗ� #1.60c7j3

	// �u���b�N���߂荞��ł�����Q�[���I�[�o�[
	// �Q�[���I�[�o�[�Ȃ��Ă��Ȃ����ڒn���Ă���ꍇ�͉���炷
	if( (!checkGameOver(player)) && (judgeBlock(player, bx[player], by[player] + 1, blk[player], rt[player]) != 0) ) {
		if( (!isWRule(player)) || (world_drop_snd >= 1) ) PlaySE(1);
	}
	if(repversw >= 59){				// ���̃o�[�W�������瓯��t���[�����Ɉړ������J�n
		statc[player * 10 + 6] = 1;	// ����t���[���ł͉�]��HOLD�����Ȃ�YO
		if(stat[player] != 5) return;
		else statMove(player);		// �ړ�����
	}
}


/* �Q�[���I�[�o�[�ɂȂ邩�`�F�b�N �Q�[���I�[�o�[�ɂȂ����ꍇ��1��Ԃ� */
// statBlock����Ɨ� #1.60c7l2
int checkGameOver(int player) {
	// �u���b�N���߂荞��ł�����
	if(judgeBlock(player, bx[player], by[player], blk[player], rt[player]) != 0) {
		setBlock(player, bx[player], by[player], blk[player], rt[player]);
		if((spawn_y_type) && (heboGB[player] == 0) || (heboGB[player] == 1)) ndelay[player] = 0;
		// �Q�[���I�[�o�[����
		setGameOver(player);

		return 1;
	}
	return 0;
}

/* �Q�[���I�[�o�[���� */
void setGameOver(int player) {
	int i;

	disableShadowTimer(player);		// �V���h�E�^�C�}�[���� #1.60c7k7

	statusClear(player);
	ismiss[player] = 0;
	isreflect[player] = 0;
	isblind[player] = 0;
	blind_flag[player] = 0;

	hanabi_waiting[player] = 0;//hanabi���X�g�b�v
	hanabi_combo[player] = 0;//hanabi���X�g�b�v
	if(!(fastroll[player]) || (gameMode[player] == 5))
		staffInitPl(player);			// �X�^�b�t���[������ #1.60c7n5

	if( (gameMode[player] <= 3) || (gameMode[player] == 5) ) {
		checkSecretGrade(player);	// ���i�ʔF�� #1.60c7o1
		if( (sgrade[player] >= min_sgrade) && (gameMode[player] != 5) ) PlaySE(17);
	}
	if(!((fastroll[player]) && (ending[player] == 2)) &&
		!((gameMode[player] == 9) && (relaymode[player]) && (!ending[player])) || (gameMode[player] == 5)){
		timeOn[player] = 0;				// �^�C�}�[��~
		if(gameMode[player] != 4) onRecord[player] = 0;			// ���v���C�L�^�I��
	}

	if((gameMode[player] <= 1)&&(gameMode[player] >= 2)&&(gmflag_r[0]==1)&&(enable_grade[player] == 2)){//�������[�����Ɏ��񂾂�i�ʂ�1�オ��
		grade[player]++;
		gflash[player]=120;
	}

	if((gameMode[player] <= 1)&&(gameMode[player] >= 2)&&(gmflag_r[0]==1)&&(enable_grade[player] == 3)){//�������[�����Ɏ��񂾂�M
		grade[player]=27;
		gflash[player]=120;
	}
	if((tc[player] - ((tc[player]/100)*100) > 50)&&(enable_grade[player] == 4)){//�e�Z�N�V�����̌㔼(X50�`X99)�Ŏ��񂾂�
		grade[player] = grade[player] + gup3rank[player];

        // TODO: What should this be set to??
		//if(grade[player]>32)grade[player];
	}

	stat[player] = 7;				// �Q�[���I�[�o�[��ʂ�
	if(!((fastroll[player]) && (ending[player] == 2)) &&
		!((gameMode[player] == 9) && (relaymode[player]) && (!ending[player])) || (gameMode[player] == 5)){
		if( (stat[1 - player] == 0) || (stat[1 - player] == 10) ) {
			if(wavebgm) {
				StopAllBGM();
			} else {
				if(IsPlayMIDI()) StopMIDI();
			}
		}
	}
	// �X�e�[�^�X�J�E���^������1
	for(i = 0; i < 10; i++) statc[player * 10 + i] = 0;
	statc[player * 10] = -120 * (hidden[player] == 8);
}

/* ���i�ʔF�� #1.60c7o1 */
void checkSecretGrade(int player) {
	int i, j;
	int uhole, hmode;

	uhole = 0;		// ���̈ʒu �ŏ��͈�ԍ�
	hmode = 0;		// �܂�Ԃ��t���O

	sgrade[player] = -1;	// ���i��

	for(i = fldsizeh[player]; i > 3; i--) {	// �ŏ�i�ƃt�B�[���h�O�̓`�F�b�N���Ȃ�
		for(j = 0; j < fldsizew[player]; j++) {
			// ���̕����ȊO�����܂��Ă��Ȃ��ꍇ�͏I��
			if( (j != uhole) && (fld[j + fldsizew[player] * i + player * 220] == 0) ) {
				return;
			}
		}

		// ���̈ʒu��ς���
		if(!hmode) {
			uhole++;

			// �܂�Ԃ�����
			if(uhole >= fldsizew[player]) {
				uhole = fldsizew[player] - 2;
				hmode = 1;
			}
		} else {
			uhole--;
			if(uhole < 0) uhole = 0;
		}

		sgrade[player]++;	// ���i�ʏ㏸
	}

	/* GM���� */
	// ����(X:0 Y:1)�����܂��Ă�����GM
	if(fld[1 + fldsizew[player] * 2 + player * 220] != 0) {
		sgrade[player]++;
	}
}

// (I.R.S.) Initial Rotation System  (c)1998 AR��KA(^^;
// #1.60c7j3
void doIRS(int player) {
	int bak;
	if((disable_irs) || (isrotatelock[player]) || (heboGB[player]>0)) return;

	if(repversw >= 43){	//�VVer
	if( getPressState(player, 4) || getPressState(player, 5) || getPressState(player, 6) ) {
		PlaySE(0);

		// ��]������������߂�
		if( !getPressState(player, 5) ) {
			// A�܂���C
			if(isWRule(player) && w_reverse)
				bak = 1;	// WORLD �E��]
			else
				bak = 3;	// CLASSIC ����]
		} else {
			// B
			if(isWRule(player) && w_reverse)
				bak = 3;	// WORLD ����]
			else
				bak = 1;	// CLASSIC �E��]
		}

		// 180�x��]
		if( ((rots[player] == 7) || (rots[player] == 8)) && getPressState(player, 6) ) {
			bak = 2;
		}

		// ��]�ł��邩�`�F�b�N
		if( judgeBlock(player, bx[player], by[player], blk[player], bak) == 0 ) {
			// ��]�\
			if(rotate_snd) PlaySE(4);
			rt[player] = bak;
		} else if(!blk[player] && !r_irs) {
			// �ԐF�u���b�N�ŉ�]���Ȃ������Ƃ���1�}�X��ɂ��点�邩����
			if( judgeBlock(player, bx[player], by[player] - 1, blk[player], bak) == 0 ) {
				if(rotate_snd) PlaySE(4);
				rt[player] = bak;
				by[player]--;
			}
		}
	}
	}else{	//��Ver
	// ��]�����t�]�ݒ�Ή� ����������orz #1.60c7f8
	if(getPressState(player, 4) || getPressState(player, 6)) {
		PlaySE(0);
		if(rotate_snd) PlaySE(4);	// ��]���ݒ�#1.60c7f7

		// ��]�t�] #1.60c7f8
		if( (isWRule(player)) && (w_reverse) )
			rt[player] = (judgeBlock(player, bx[player], by[player], blk[player], 1 +
			(1*((rots[player] == 7) && getPressState(player, 6)))) == 0) +(1*((rots[player] == 7) && getPressState(player, 6)));
		else
			rt[player] = (judgeBlock(player, bx[player], by[player], blk[player], 3 -
			(1*((rots[player] == 8) && getPressState(player, 6)))) == 0) * 3 - (1*((rots[player] == 8) && getPressState(player, 6)));

		// �ԐF�u���b�N�ŉ�]���Ȃ������Ƃ�
		if(!rt[player] && !blk[player] && !r_irs) {
			// ��]�t�] #1.60c7f8
			if( (isWRule(player)) && (w_reverse) )
				rt[player] = (judgeBlock(player, bx[player], by[player] - 1, blk[player], 1 +(1
				*((rots[player] == 7) && getPressState(player, 6)))) == 0) +(1*((rots[player] == 7) && getPressState(player, 6)));
			else
				rt[player] = (judgeBlock(player, bx[player], by[player] - 1, blk[player], 3) == 0) * 3;

			if(rt[player])
				by[player]--;
		}
	}
	if(getPressState(player, 5)) {
		PlaySE(0);
		if(rotate_snd) PlaySE(4);	// ��]���ݒ�#1.60c7f7

		// ��]�t�] #1.60c7f8
		if( (isWRule(player)) && (w_reverse) )
			rt[player] = (judgeBlock(player, bx[player], by[player], blk[player], 3) == 0) * 3;
		else
			rt[player] = (judgeBlock(player, bx[player], by[player], blk[player], 1) == 0);

		// �ԐF�u���b�N�ŉ�]���Ȃ������Ƃ�
		if(!rt[player] && !blk[player] && !r_irs) {
			// ��]�t�] #1.60c7f8
			if( (isWRule(player)) && (w_reverse) )
				rt[player] = (judgeBlock(player, bx[player], by[player] - 1, blk[player], 3) == 0) * 3;
			else
				rt[player] = (judgeBlock(player, bx[player], by[player] - 1, blk[player], 1) == 0);

			if(rt[player])
				by[player]--;
		}
	}
	}
}
// ACE��IRS
void doIRS2(int player) {
	if((disable_irs) || (isrotatelock[player]) || (heboGB[player]>0)) return;

	// ��]�����t�]�ݒ�Ή� ����������orz #1.60c7f8
	if(getPushState(player, 4) || getPushState(player, 6)) {
		PlaySE(0);
		if(rotate_snd) PlaySE(4);	// ��]���ݒ�#1.60c7f7

		// ��]�t�] #1.60c7f8
		if( (isWRule(player)) && (w_reverse) ){
			rt_nblk[0 + 6 * player]++;
			if((rots[player] == 7) && (getPushState(player , 6) != 0))
				rt_nblk[0 + 6 * player]++;
		}else{
			rt_nblk[0 + 6 * player]--;
			if(((rots[player] == 8) || (rots[player] == 7)) && (getPushState(player , 6) != 0))
				rt_nblk[0 + 6 * player]--;
		}
		if(rt_nblk[0 + 6 * player] > 3) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] - 4;
		if(rt_nblk[0 + 6 * player] < 0) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] + 4;
	}
	if(getPushState(player, 5)) {
		PlaySE(0);
		if(rotate_snd) PlaySE(4);	// ��]���ݒ�#1.60c7f7

		// ��]�t�] #1.60c7f8
		if( (isWRule(player)) && (w_reverse) )
			rt_nblk[0 + 6 * player]--;
		else
			rt_nblk[0 + 6 * player]++;

		if(rt_nblk[0 + 6 * player] > 3) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] - 4;
		if(rt_nblk[0 + 6 * player] < 0) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] + 4;
	}
}
//ACE�J�X�^��IRS �u���b�N�Œ�̏u�Ԃ̂�
void doIRS2plus(int player) {
	if((disable_irs) || (isrotatelock[player]) || (heboGB[player]>0)) return;

	// ��]�����t�]�ݒ�Ή� ����������orz #1.60c7f8
	if(getPressState(player, 4) || getPressState(player, 6)) {
		PlaySE(0);
		if(rotate_snd) PlaySE(4);	// ��]���ݒ�#1.60c7f7

		// ��]�t�] #1.60c7f8
		if( (isWRule(player)) && (w_reverse) ){
			rt_nblk[0 + 6 * player]++;
			if((rots[player] == 7) && (getPressState(player , 6) != 0))
				rt_nblk[0 + 6 * player]++;
		}else{
			rt_nblk[0 + 6 * player]--;
			if((rots[player] == 8) && (getPressState(player , 6) != 0))
				rt_nblk[0 + 6 * player]--;
		}
		if(rt_nblk[0 + 6 * player] > 3) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] - 4;
		if(rt_nblk[0 + 6 * player] < 0) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] + 4;
	}
	if(getPressState(player, 5)) {
		PlaySE(0);
		if(rotate_snd) PlaySE(4);	// ��]���ݒ�#1.60c7f7

		// ��]�t�] #1.60c7f8
		if( (isWRule(player)) && (w_reverse) )
			rt_nblk[0 + 6 * player]--;
		else
			rt_nblk[0 + 6 * player]++;

		if(rt_nblk[0 + 6 * player] > 3) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] - 4;
		if(rt_nblk[0 + 6 * player] < 0) rt_nblk[0 + 6 * player] = rt_nblk[0 + 6 * player] + 4;
	}
}
// �u���b�N�o���ʒu��ݒ�@From LITE Ver
void setBlockSpawnPosition(int player) {
	if((spawn_y_type) && (heboGB[player]==0)) {
		// �g�O
		if(IsBig[player]) {
			// BIG
			bx[player] = 2;

			if(isWRule(player)) {
				by[player] = (blk[player] == 0) * -1;
			} else {
				by[player] = -1 - (blk[player] != 0) - (2 * ((blk[player] == 0) && (rots[player] == 8)));
			}
		} else {
			// �ʏ�
			bx[player] = 3;

			if(isWRule(player)) {
				by[player] = 0;
			} else {
				by[player] = ((blk[player] != 0)  || (rots[player] == 8)) * -1;
			}
		}
	} else {
		// �g��
		if(IsBig[player]) {
			// BIG
			bx[player] = 2;
			by[player] = (( isWRule(player) && (blk[player] != 0) ) * 2)  - 2 * ((blk[player] == 0 ) && (rots[player] == 8));
		} else {
			// �ʏ�
			bx[player] = 3;
			by[player] = 1 + ( (blk[player] != 0) && isWRule(player) ) - 1 * ((blk[player] == 0 ) && (rots[player] == 8));
		}
	}
	// D.R.S�̐�s�ړ�
	if(rots[player] == 8){
		if(getPressState(player, 2) && (judgeBlock(player, bx[player] - 1 - (1 * (IsBig[player] && BigMove[player])), by[player], blk[player], rt[player]) == 0)){
			bx[player] = bx[player] - 1 - (1 * (IsBig[player] && BigMove[player]));
			if(movesound) PlaySE(5);
		}
		if((blk[player] != 0) || (!IsBig[player]))
		if(getPressState(player, 3) && (judgeBlock(player, bx[player] + 1 + (1 * (IsBig[player] && BigMove[player])), by[player], blk[player], rt[player]) == 0)){
			bx[player] = bx[player] + 1 + (1 * (IsBig[player] && BigMove[player]));
			if(movesound) PlaySE(5);
		}
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.05 - �u���b�N�ړ���
//������������������������������������������������������������������������������
void statMove(int player) {
	int tmp;
	// ���ӁF���ۂ̏����͂��̃t�@�C���ɂ͂���܂���B
	// ���[���h���[���̏ꍇ��world.c�A�N���V�b�N���[���̏ꍇ��classic.c�ɕ��򂵂܂��B

	// CPU�����삵�Ă���ꍇ�͓��͓��e�����߂� #1.60c7o2
	if((cpu_flag[player]) && (statc[player * 10 + 6] != 1)) {
		cpuMove(player);
	}
	hanabi_flag=0;

	// NEXT�u���b�N�\���̒x��
	if(!IsBig[player]) {
		if(isWRule(player)) {
			tmp = (blk[player] != 0);
		} else if(rots[player] == 8) {
			tmp = (blk[player] == 0) * -1;
		} else {
			tmp = 0;
		}
	} else {
		if(isWRule(player)) {
			if(blk[player] == 0) tmp = -1;
			else tmp = 1;
		} else if(rots[player] == 8) {
			tmp = -1 + (blk[player] == 0) * -2;
		} else {
			tmp = -1;
		}
	}

	if((by[player] >= tmp) || (!spawn_y_type) || (rots[player] == 6))
		ndelay[player] = 1;

	if(rots[player] == 2) {
		statWMove( player,  10 -2 + (repversw >= 16) , 8);	// world.c
	} else if(rots[player] == 3) {
		statWMove( player, 128 -2 + (repversw >= 16) - (108*(gameMode[player] == 4)),128 - (108*(gameMode[player] == 4)));	// WORLD2 #1.60c7o
	} else if(rots[player] == 4) {
		statAMove( player, 128 -2 + (repversw >= 16) - (108*(gameMode[player] == 4)),128 - (108*(gameMode[player] == 4)));	// ARS #1.60c7q2ex
	} else if(rots[player] == 5) {
		statAMove( player, 128 -2 + (repversw >= 16) - (113*(gameMode[player] == 4)),128 - (108*(gameMode[player] == 4)));	// ARS2 #1.60c7q2ex
	} else if(rots[player] == 6) {
		statWMove( player, -1 +(14*(gameMode[player] == 4)),-1+(14*(gameMode[player] == 4)));						// WORLD3 #1.60c7r2
	} else if(rots[player] == 7) {
		if(repversw < 39)
			statWMove( player, 128 -2 + (repversw >= 16),128);	// SRS-X 38�܂�
		else
			statWMove( player, 18 + (6 * (repversw >= 40)) -1 - (8*(gameMode[player] == 4)),12);	// SRS-X
	} else if(rots[player] == 8) {
		statDMove(player);	// D.R.S
	} else {
		statCMove(player);								// classic.c
	}
	if(spawn_y_type)// �t�B�[���h�g
		viewFldFrame(1,player);

	if((stat[player] != 5) && (repversw >= 57)) return;

	if(timeOn[player]) {
		timeN[player]++;	//gradeup3�Ŏg��
	}
	if((navigation) && (gameMode[player] == 0) && (tc[player] < navigation_limitLv))
		navigation_time[player]++;

}

// HOLD���鏈�� #1.60c7j3
void doHold(int player, int ihs) {
	int tmp,first;
	first = 0;
	if((disable_hold) || (isholdlock[player] == 1) || (death_plus[player])||(hebo_plus[player])||(heboGB[player])) return;

	if(getPressState(player, 7) && !dhold[player]) {
		if( (hold_snd != 0) && (((hold_snd == 1) && (ihs)) || (hold_snd == 2)) )
		PlaySE(6);	// hold.wav #1.60c7f7

		if(hold[player] == -1) {//�����
			first = 1;
			hold[player] = blk[player];
			blk[player] = next[player];
			nextc[player] = (nextc[player] + 1) % 1400;
			next[player] = nextb[nextc[player] + player * 1400];
			hold_used[player] = 1; // �� #1.60c7i1

			// �u���b�N�̐F�ݒ� #1.60c7m9
			c_hblk[player]   = c_cblk_r[player];

			c_cblk[player] = c_nblk[0 + player * 6];

			c_cblk_r[player] = c_nblk[0 + player * 6];

			item_coming[player] = 0;
			if(ace_irs == 2) tmp = rt[player];
			// NEXT�̈���̃u���b�N�F�����炷
			setNextBlockColors(player, 0);
			if(ace_irs == 2) rt[player] = tmp;
//			scanItem(player);
		} else {
			dhold[player] = blk[player];
			dhold2[player] = blk[player];
			blk[player] = hold[player];
			hold[player] = dhold[player];

			hold_used[player] = 2; // �� #1.60c7i1

			// �u���b�N�̐F�ݒ� #1.60c7m9
			tmp = c_cblk_r[player];

			//c_cblk[player]   = (c_hblk[player]) * (!isrollroll[player]);
			if(isrollroll[player]) {
				// []�Ή� #1.60c7p9ex����
				c_cblk[player] = (c_hblk[player] == 8) * 9;
			} else {
				c_cblk[player] = c_hblk[player];
			}

			c_cblk_r[player] = c_hblk[player];
			c_hblk[player]   = tmp;
		}
		dhold[player] = 1;
		dhold2[player] = 1;
		kickc[player] = 0;
		kickc2[player] = 0;
		kickc3[player] = 0;

		if(cpu_flag[player]) {
			cp_rot_c[player] = 0;
			cpuCheckBestSpot(player);
		}
		if((navigation) && (gameMode[player] == 0) && (tc[player] < navigation_limitLv)){
			cpuCheckBestSpot(player);
			navigation_time[player] = 0;
		}

		setBlockSpawnPosition(player);	//LITE�ł��ڐA�@C7U0

		//NEXT�x���@1G�ȏ�ł��o���������_�Őڒn���Ă���Βx��������
		if( (spawn_y_type) && (heboGB[player]==0) && (blk[player] != 0) ){
		 	if((rots[player] != 6) && (sp[player] < 60) ||
		 		(judgeBlock(player, bx[player], by[player] + 1, blk[player], rt[player]) != 0))
		 		ndelay[player] = 0;
		}

		if((!first) && !((ihs) && (ace_irs == 2)) || ((!ace_irs) && (repversw >=47)))
			rt[player] = 0;
		if(repversw >= 21){
		bs[player] = 0;			// �u���b�N���������Z�b�g C7T7.101
		bk[player] = 0;			// �u���b�N���������Z�b�g C7T7.101
		bk_D[player] = 0;
		}

		if((item[player] != 0) && (gameMode[player] == 4) && (item[player] != fldihardno) && (item[player] != 36) && ((!first) || (repversw < 48))) {
			item[player] = 0;	// �A�C�e������ #1.60c7n1
			scanItem(player);
		}
		// #1.60c7j3����IHS�łȂ��^�C�~���O�ł�IRS���󂯕t����
		if((!ihs) && (repversw >= 7)) {
			if(ace_irs != 1){
				doIRS(player);
			}

			// ������xblockse��炷 #1.60c7o1
			if((ishidenext[player] == 0) && ((repversw < 64) || (isfakenext[player] == 0))){
				PlaySE(21 + next[player]);
			}
			if(isfakenext[player] == 1){//FAKENEXT�̎��͓K���ȉ�
				PlaySE(21 + rand(6,player));
			}
			// �������̐�s�ړ��𖳌��ɂ��� #1.60c7o9
			if(repversw >= 11) {
				statc[player * 10 + 4] = (fastlrmove == 0);
				if(rots[player] == 8) statc[player * 10 + 4] = 0;
			}

			// �Œ�܂ł̎��Ԃ����Z�b�g #1.60c7p5
			if(repversw >= 13){
				bk[player] = 0;
				bk_D[player] = 0;
			}
		}

		// �u���b�N���߂荞��ł�����Q�[���I�[�o�[ #1.60c7l2
		// �Q�[���I�[�o�[�Ȃ��Ă��Ȃ����ڒn���Ă���ꍇ�͉���炷
		if( (!checkGameOver(player)) && (judgeBlock(player, bx[player], by[player] + 1, blk[player], rt[player]) != 0) ) {
			if( (!isWRule(player)) || (world_drop_snd >= 1) ) PlaySE(1);
		}
	}
}

// TLS���L��������
// �N���V�b�N�ƃ��[���h�ŕ�����Ă������̂���{�� #1.60c7j6
int isTLS(int player) {
	// noredraw��1��������TLS�Ȃ�
	if(noredraw) {
		return 0;
	}

	//�I�[���h�X�^�C���͏�ɖ���
	if(heboGB[player]){
		return 0;
	}

	// tls_view��1���������ɗL��
	if(tls_view == 1) {
		return 1;
	}

	// tls_view��2���������ɖ���
	if(tls_view == 2) {
		return 0;
	}

	//�t�B�[�o�[���͏�ɗL��
	if(isfever[player]) {
		return 1;
	}

	// BEGINNER�͏�ɗL��
	if(gameMode[player] == 0) {
		return 1;
	}

	// MASTER
	if(gameMode[player] == 1) {
		// TGM�����x���A�b�v�ł�LV100�܂�
		if(lv[player] < 100) {
			return 1;
		}

	}

	// VERSUS
	if(gameMode[player] == 4) {
		// �Ƃ肠����LV100�܂�
		if(lv[player] < 100) {
			return 1;
		}
	}

	// PRACTICE
	if(gameMode[player] == 5) {
		// �ݒ肪�uLV100�v
		if((tlsrange == 1) && (lv[player] < 100)) {
			return 1;
		}
		// �ݒ肪�uALWAYS�v
		if(tlsrange == 2) {
			return 1;
		}
	}

	// tomoyo #1.60c7l5
	if(gameMode[player] == 6) {
		// �Ƃ肠����LV100�܂�
		if(lv[player] < 100) {
			return 1;
		}
	}

	// ACE
	if( (gameMode[player] == 7) || (gameMode[player] == 8) ) {
		if(heboGB[player] >0){
			return 0;
		}else{
			return 1;
		}
	}
		// ORI
	if(gameMode[player] == 10) {
		// BEGINNER�͏�ɗL��
		if(ori_opt[player] == 0) {
			return 1;
		}else{
			if(lv[player] < 100) {
				return 1;
			}
		}
	}

	// ��̂ǂ�ɂ����Ă͂܂�Ȃ��Ȃ�TLS�͂Ȃ�
	return 0;
}

// T-SPIN���� #1.60c7s6
// BIG�Ή�
int isTSpin(int player) {
	int i, count, tx[4], ty[4];
	int tmp_x, tmp_y;

	// ����p���΍��W��ݒ�
	if(IsBig[player]){
		tx[0] = 1;
		ty[0] = 1;
		tx[1] = 4;
		ty[1] = 1;
		tx[2] = 1;
		ty[2] = 4;
		tx[3] = 4;
		ty[3] = 4;
	} else {
		tx[0] = 0;
		ty[0] = 0;
		tx[1] = 2;
		ty[1] = 0;
		tx[2] = 0;
		ty[2] = 2;
		tx[3] = 2;
		ty[3] = 2;
	}

	// ���菈��
	count = 0;

	for(i = 0; i < 4; i++) {
		tmp_x = bx[player] + tx[i];
		tmp_y = by[player] + ty[i];

		//ARS��T��������̏ꍇ
		//���@��
		//�@��
		//������
		//����Ȕ��肾�����̂��C��
		if((isWRule(player) == 0) && (rt[player] == 2))
			tmp_y = tmp_y + 1 + (IsBig[player]);

		if(tmp_y >= 0) {
			if( (tmp_x < 0) || (tmp_x >= 10) || (tmp_y >= 22) || (fld[tmp_x + tmp_y * 10 + player * 220]) ) {
				count++;
			}
		}
	}

	return count;
}

// �u���b�N�������� fldsize�Ή� #1.60c7
// ���������ꍇ�A1��Ԃ� #1.60c7k8
int blockEraseJudge(int player) {
	int		i, j, k, l,sr,ret;
	int		by2;	// ���ׂ�Y���W

//	if(IsBig[player]) {
//		// BIG�ł͐�p����
//		return blockBigEraseJudge(player);
//	}

	// ���C�������܂��Ă邩����
	ret = 0;
	for(i = 0; i <= fldsizeh[player]; i++) {
		sr = 1;
		for(j = 0; j < fldsizew[player]; j++)
			if(fld[j + i * fldsizew[player] + player * 220] == 0) {//�����ĂȂ��̂ŏ����܂���
				sr = 0;
				break;
			}
		erase[i + player * 22] = sr;
		if (sr) ret++;	//��������
	}

	// �ΐ�@DEFENCE
	// �ꂩ��u�����郉�C����-1���C���v�����������
	sr = 0;
	if((ret >= 2) && (gameMode[player] == 4) && (vs_style[player] == 2)){
		for(i = fldsizeh[player]; i > 0; i--){
			if(erase[i + player * 22] == 0){
				erase[i + player * 22] = 2;
				sr++;
			}
			if(sr >= ret - 1) break;
		}
	}

	// �ΐ�@MOVE ERASED����オ��
	// �u���肪�vMOVE ERASED���̏ꍇ�ɏ������s��
	// �����ł͂���オ��t�B�[���h�ɂ͓��ꂸ�A�o�b�t�@�֊m��
	if((ret != 0) && ((gameMode[player] == 4) && (upLineT[1 - player] == 3)) && (!disrise)){
		removeBlock(player, bx[player], by[player], blk[player], rt[player]);
		// �ΐ�@ATTACK
		if(vs_style[player] == 1){
			if(ret >= 4) sr = 2;
			else sr = 1;
			k = 0;
			for(i = 0; i <= fldsizeh[player]; i++) {
				if(erase[i + player * 22] == 1){
					for(j = 0; j < fldsizew[player]; j++) {
						fldubuf[j + upLines_waiting[1 - player] * fldsizew[player] + (1 - player) * 220] = fld[j + i * fldsizew[player] + player * 220];
					}
					k++;
					upLines_waiting[1 - player]++;
				}
				if(upLines_waiting[1 - player] + 1 >= 21) break;
				if(k >= sr) break;
			}
		}
		for(i = 0; i <= fldsizeh[player]; i++) {
			if(erase[(fldsizeh[player] - i) + player * 22] == 1) {
				for(j = 0; j < fldsizew[player]; j++) {
					fldubuf[j + upLines_waiting[1 - player] * fldsizew[player] + (1 - player) * 220] = fld[j + (fldsizeh[player] - i) * fldsizew[player] + player * 220];
				}
				upLines_waiting[1 - player]++;
				if(upLines_waiting[1 - player] + 1 >= 21) break;
			}
		}
		setBlock(player, bx[player], by[player], blk[player], rt[player]);
	}
	return ret;
}

/* BIG�p�������� */
int blockBigEraseJudge(int player) {
	int		i, j, sr,ret;

	ret = 0;
	for(i = 0; i <= fldsizeh[player]; i++) {
		sr = 1;
		for(j = 0; j < fldsizew[player]; j++)
			if(fld[j + i * fldsizew[player] + player * 220] == 0) {
				sr = 0;
				break;
			}
		erase[i + player * 22] = sr;
		if (sr) ret = 1;	//��������
	}

	if((ret) && ((gameMode[player] == 4) && (upLineT[1 - player] == 3)) && (!disrise)){
		removeBlock(player, bx[player], by[player], blk[player], rt[player]);
		for(i = 0; i <= fldsizeh[player]; i++) {
			if(erase[(fldsizeh[player] - i) + player * 22]) {
				for(j = 0; j < fldsizew[player]; j++) {
					fldubuf[j + upLines_waiting[1 - player] * fldsizew[player] + (1 - player) * 220] = fld[j + (fldsizeh[player] - i) * fldsizew[player] + player * 220];
				}
				upLines_waiting[1 - player]++;
				if(upLines_waiting[1 - player] + 1 >= 21) break;
			}
		}
		setBlock(player, bx[player], by[player], blk[player], rt[player]);
	}

	return ret;
}

/* FREE FALL�p�������� */
int blockEraseJudgeFf(int player,int mode) {
	int		i, j, k, l, sr, ret, hole;
	if(mode == 0){
		ret = 0;
		for(i = 0; i <= fldsizeh[player]; i++) {
			sr = 1;
			for(j = 0; j < fldsizew[player]; j++)
				if(fld[j + i * fldsizew[player] + player * 220] == 0) {
					sr = 0;
					break;
				}
			erase[i + player * 22] = sr;
			if (sr) ret = 1;	//��������
		}
		return ret;
	}else{
		if((upLineT[1 - player] == 3) && (!disrise)){
			hole = rand(10,1 - player);
			//�o�b�t�@���点��オ��t�B�[���h�֑���
			for(i = 0; i < Ff_rerise[player]; i++) {
				for(j = 0; j < fldsizew[player]; j++) {
					if(j != hole)
						fldu[j + upLines[1 - player] * fldsizew[player] + (1 - player) * 220] = rand(7,1-player) + 2;
					else
						fldu[j + upLines[1 - player] * fldsizew[player] + (1 - player) * 220] = 0;
				}
				if(upLines[1 - player] < 21) upLines[1 - player]++;
			}
		}else if(!disrise){
			upLines[1 - player] = upLines[1 - player] + Ff_rerise[player];
		}

	}
	return 0;
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.15 - ROT�����[�p�Z���N�g
//�@�ǂ����Ă��USHIRASE�ɂ͎g�p����Ă��Ȃ������̂ōė��p
//������������������������������������������������������������������������������
// statc[player * 10 + 0] �J�E���^
// statc[player * 10 + 1] �J�E���^2
// statc[player * 10 + 2] 0�Ȃ牉�o�� 1�Ȃ��]�@���I��
// statc[player * 10 + 3] 0�Ȃ�N���A���o�@1�Ȃ璂�����o
void statRelayselect(int player) {
	int block,i,j,c;

	timeOn[player] = 0;
	ndelay[player] = 1;

	pinch[player] = 0;

	padRepeat(player);
	padRepeat2(player);

	if(statc[player * 10 + 2] == 0){
		//�x���������Ă�����~�߂�
		StopSE(40);
		StopSE(32);
		if(statc[player * 10 + 3] == 0){	//�N���A���o
			if(statc[player * 10] == 0){
				PlaySE(18);
			}
			printFont(17 + 24 * player - 12 * maxPlay, 14, "GREAT!", (count % 4 / 2) * digitc[rots[player]]);
			// �u���b�N������
			// BIG�Ή� #1.60c7j5
			if(statc[player * 10] % 6 == 0) {
				j = (fldsizeh[player] + 1) - (statc[player * 10] / 6);
				if((j >= 0) && (j <= fldsizeh[player])) {
					for(i = 0; i < fldsizew[player]; i++) {
						// ���C�������G�t�F�N�g�ŏ����� #1.60c7n5
						if( fld[i+ j * fldsizew[player] + player * 220] != 0) {
							objectCreate(player, 1, (i + 15 + 24 * player - 12 * maxPlay) * 8,(j + 3) * 8, (i - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + 1 * 250, fld[i+ j * fldsizew[player] + player * 220], 100);
						}

						fld[i+ j * fldsizew[player] + player * 220] = 0;
						fldt[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7j5
						fldi[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7n1
						flds[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7n1
					}
				}
			}
			statc[player * 10]++;
			// �A�j���I��
			if(statc[player * 10] == 132) {
				for(i = 0; i < 22; i++)
					erase[i + player * 22] = 0;
				statc[player * 10 + 2] = 1;
			}
		}else{	//�������o

			statc[player * 10 + 1]++;
			printFont(16 + 24 * player - 12 * maxPlay, 14, "TOP OUT!", (count % 4 / 2) * 2);
			if(std_opt[player] == 0){
				printFont(16 + 24 * player - 12 * maxPlay, 16, "+", (count % 4 / 2) * 2);
				getTime((40-li[player]) * 240);
				printFont(17 + 24 * player - 12 * maxPlay, 16, string[0], (count % 4 / 2) * 2);
			}else{
				sprintf(string[0],"-%3d LINES",li[player] / 2);
				printFont(15 + 24 * player - 12 * maxPlay, 16, string[0], (count % 4 / 2) * 2);
			}
			if( statc[player * 10] > 22 ) {
				if(statc[player * 10 + 1] == 60) {
					for(i = 0; i < 22; i++)
						erase[i + player * 22] = 0;
					statc[player * 10 + 2] = 1;
				}
			}
			else if(statc[player * 10 + 1] > 4) {
				block = statc[player * 10];
				if(block == 0) {
					PlaySE(45);
					if((deadtype) || (heboGB[player])) PlaySE(7);	// ����������͉��͂Ȃ� #1.60c7h3
				}

				statc[player * 10 + 1] = 0;
				for(j = 0; j < 10; j++) {
					// �u���b�N�̐F�ύX�ŁALV1000�u���b�N�͂ق��̃u���b�N�Ƃ͕ʂ̂��̂ɂ���B #1.60c7d
					// ���S�A�j����I�ׂ�悤�ɂ���#1.60c7h3
					if((deadtype) || (heboGB[player])) {
						if(block <= fldsizeh[player]){
							c = fld[j + block * 10 + player * 220];
							if(c != 0) {
								if((c >= 9) || (c < 0))
									fld[j + block * 10 + player * 220] = 10;
								else
									fld[j + block * 10 + player * 220] = 1;
							}
						}
					} else {
						// �X�[�b�Ə����Ă������o #1.60c7k6
						// +=�̂悤�ȑ�����Z�q�͂����˂��d�dcond ? true : false���ʖځd�d
						if(21 - block >= 0) {
							c = fldt[j + (210 - (block * 10)) + player * 220];
							if((c <= -1) || (c > 8)) c = 8;
							fldt[j + (210 - (block * 10)) + player * 220] = c - 4;
						}
						if(block > 0) {
							c = fldt[j + (210 - (block - 1) * 10) + player * 220];
							fldt[j + (210 - (block - 1) * 10) + player * 220] = c - 4;
						}
					}
				}
				statc[player * 10]++;
			}

		}
		if(statc[player * 10 +2] == 1){
			statc[player * 10] = 0;
			for(i = 0; i < 10; i++)
				for(j = 0; j < 22; j++) {
					fld[i + j * 10 + player * 220] = 0;
					fldt[i + j * 10 + player * 220] = 0;	// #1.60c7j5
					fldi[i + j * 10 + player * 220] = 0;	// #1.60c7n1
					flds[i + j * 10 + player * 220] = 0;
				}
			if(std_opt[player] == 0){
				if(statc[player * 10 + 3] == 0)
					relaydata[player * 9 + rots[player]] = time[player];
				else
					relaydata[player * 9 + rots[player]] = time[player] + (40-li[player]) * 240;
			}else{
				if(statc[player * 10 + 3] == 0)
					relaydata[player * 9 + rots[player]] = li[player];
				else
					relaydata[player * 9 + rots[player]] = li[player] - li[player] / 2;
				ltime[player] = 60 * 120;
			}
			time[player] = 0;
			li[player] = 0;
			relayround[player]++;
			bdowncnt[player] = 0;
			hold[player] = -1;
			hold_used[player] = 0;
			bgfadesw = 1;
			if(relayround[player] >= 9){	//�G���f�B���O
				PlaySE(28);
				c = 0;
				for(i = 0;i < 9;i++)
					c = c + relaydata[player * 9 + i];
				if(std_opt[player] == 0) time[player] = c;
				else li[player] = c;
				ending[player] = 1;
				stat[player] = 13;
				end_f[player] = 2;
				onRecord[player] = 0;
				return;
			}
		}
	}else{	// ���̉�]�@����I��
		if(statc[player * 10] == 0){
			do {
				rots[player]++;
				if(rots[player] > 8) rots[player] = 0;
			} while(relaydata[player * 9 + rots[player]] != -1);
			setNextBlockColors(player, 1);
		}

		printFont(15 + 24 * player - 12 * maxPlay, 5, "SELECT", 4);
		printFont(15 + 24 * player - 12 * maxPlay, 6, " NEXT ROT.", 4);

		printFont(15 + 24 * player - 12 * maxPlay, 7 + (2 * rots[player]), "b", (count % 2) * fontc[rots[player]]);

		printFont(16 + 24 * player - 12 * maxPlay, 7, "HEBORIS"  ,(relaydata[player * 9 + 0] == -1) * fontc[0]);
		printFont(16 + 24 * player - 12 * maxPlay, 9, "TI-ARS"   ,(relaydata[player * 9 + 1] == -1) * fontc[1]);
		printFont(16 + 24 * player - 12 * maxPlay, 11, "TI-WORLD",(relaydata[player * 9 + 2] == -1) * fontc[2]);
		printFont(16 + 24 * player - 12 * maxPlay, 13, "ACE-SRS" ,(relaydata[player * 9 + 3] == -1) * fontc[3]);
		printFont(16 + 24 * player - 12 * maxPlay, 15, "ACE-ARS" ,(relaydata[player * 9 + 4] == -1) * fontc[4]);
		printFont(16 + 24 * player - 12 * maxPlay, 17, "ACE-ARS2",(relaydata[player * 9 + 5] == -1) * fontc[5]);
		printFont(16 + 24 * player - 12 * maxPlay, 19, "DS-WORLD",(relaydata[player * 9 + 6] == -1) * fontc[6]);
		printFont(16 + 24 * player - 12 * maxPlay, 21, "SRS-X"   ,(relaydata[player * 9 + 7] == -1) * fontc[7]);
		printFont(16 + 24 * player - 12 * maxPlay, 23, "D.R.S"   ,(relaydata[player * 9 + 8] == -1) * fontc[8]);

		for(i = 0;i < 9;i++){
			if(relaydata[player * 9 + i] == -1){
				printFont(17 + 24 * player - 12 * maxPlay, 8 + (2 * i), "STAND BY", (count % 4 / 2) * digitc[i]);
			}else{
				if(std_opt[player] == 0){
					getTime(relaydata[player * 9 + i]);
					printFont(17 + 24 * player - 12 * maxPlay, 8 + (2 * i), string[0], 0);
				}else {
					sprintf(string[0],"%3dLINES",relaydata[player * 9 + i]);
					printFont(17 + 24 * player - 12 * maxPlay, 8 + (2 * i), string[0], 0);
				}
			}
		}

		sprintf(string[0], "%2d", 10 - (statc[player * 10] / 60));
		printFont(17 + 24 * player - 12 * maxPlay, 25, "TIME", 6);
		printFont(21 + 24 * player - 12 * maxPlay, 25, string[0], 0);

		// ��
		if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) ){
		if(getPressState(player, 0)) {
			PlaySE(5);
			do {
				rots[player]--;
				if(rots[player] < 0) rots[player] = 8;
			} while(relaydata[player * 9 + rots[player]] != -1);
			setNextBlockColors(player, 1);
		}
		}

		// ��
		if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) ){
		if(getPressState(player, 1)) {
			PlaySE(5);
			do {
				rots[player]++;
				if(rots[player] > 8) rots[player] = 0;
			} while(relaydata[player * 9 + rots[player]] != -1);
			setNextBlockColors(player, 1);
		}
		}


		statc[player * 10]++;

		if((getPushState(player, 4)) || (statc[player * 10] > 600)){
			PlaySE(10);
			setNextBlockColors(player, 1);
			stat[player] = 3;					// Ready
			statc[player * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
			statc[player * 10 + 1] = 0;			//
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 3] = 0;
		}
	}

}

// �u���b�N�㏸����?
void UpLineBlockJudge(int player) {
	int	j;
	// ����オ�胉�C�����c���Ă���Ƃ��͂���グ��
	if(upLines[player] > 0) {
		// �ΐ�ł͖{�Ƃ��ۂ����n����݂̂���グ�Ă݂�
		if((gameMode[player] == 4) && (stat[player] == 5)) return;

		UpLineBlock(player);

		by[player] = by[player] - (by[player] >= 0);

		// �g���o����22�i�ڂ̃u���b�N������ C7U0
		if((!spawn_y_type) || (repversw <= 27)){
		for(j = 0; j < fldsizew[player]; j++) {
			fld[j + 0 * fldsizew[player] + player * 220] = 0;
			fldt[j + 0 * fldsizew[player] + player * 220] = 0;
			flds[j + 0 * fldsizew[player] + player * 220] = 0;
		}
		// �u���b�N���d�Ȃ��Ă��܂����Ƃ��́A���������グ��
		if(stat[player] == 5)
			if(judgeBlock(player, bx[player], by[player], blk[player], rt[player])) by[player]--;
		}
	}
}

// �u���b�N�㏸
void UpLineBlock(int player) {
	// SHIRASE�ȊO�̂���オ��^�C�v��BIG�ɑΉ� #1.60c7g3
	// #1.60c7j5
	// BIG��p�������폜�iBIG�̎d�l�ύX�ŕs�v�Ɂj#1.60c7o9
	int		i, j,newhole,h1,h2,riseT;

	riseT = upLineT[player];
	if((gameMode[player] == 8) && (mission_type[c_mission] == 21) && (stat[player] == 6))
		riseT = 2;

	if((gameMode[player] == 6) || ((gameMode[player] == 8) && (mission_type[c_mission] == 6))){	// TOMOYO
		PlaySE(20);
		//��ɂ��炷
		for(i = 1; i <= fldsizeh[player]; i++) {
			for(j = 0; j < fldsizew[player]; j++) {
				fld[j + (i - 1) * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
				fldt[j + (i - 1) * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
				fldi[j + (i - 1) * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
				flds[j + (i - 1) * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
			}
			erase[(i - 1) + player * 22] = erase[i + player * 22];
		}

		// ����オ��t�B�[���h�̓ǂݍ���
		fld[0 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[0+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[1 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[1+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[2 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[2+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[3 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[3+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[4 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[4+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[5 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[5+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[6 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[6+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[7 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[7+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[8 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[8+(1*upLineNo[player] * fldsizew[player])+player*200];
		fld[9 + fldsizew[player] * fldsizeh[player] + player * 220] = tomoyo_rise_fld[9+(1*upLineNo[player] * fldsizew[player])+player*200];

		for(j = 0; j < fldsizew[player]; j++) {
			fldt[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j + fldsizew[player] * fldsizeh[player] + player * 220] != 0) * -1;
		}

		erase[fldsizeh[player] + player * 22] = 0;
		upLines[player]--;
		upLineNo[player]++;
		if(upLineNo[player] > 20)
			tomoyo_rise[player] = 0;
		else{
			j=0;
			for(i=0;i<fldsizew[player];i++){
				if(tomoyo_rise_fld[i+(1*upLineNo[player] * fldsizew[player])+player*200] != 0)
					break;
				j++;
			}
			if(j==fldsizew[player])
				tomoyo_rise[player] = 0;
		}

	} else if(riseT == 0) { // �R�s�[7
		PlaySE(20);

		// �t�B�[���h����ɂ��炷
		for(i = 1; i <= fldsizeh[player]; i++) {
			for(j = 0; j < fldsizew[player]; j++) {
				fld[j + (i - 1) * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
				fldt[j + (i - 1) * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
				fldi[j + (i - 1) * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
				flds[j + (i - 1) * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
			}
			erase[(i - 1) + player * 22] = erase[i + player * 22];
		}

		// ������2�Ԗڂ���ԉ��ɃR�s�[����
		for(j = 0; j < fldsizew[player]; j++) {
			fld[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j +fldsizew[player] * (fldsizeh[player] - 1) + player * 220] != 0);
			fldt[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j + fldsizew[player] * fldsizeh[player] + player * 220] != 0) * -1;
			if(hidden[player] == 8) fldt[j + fldsizeh[player] * fldsizew[player] + player * 220] = -60;
				// �A�C�e���𑝐B�����Ȃ� #1.60c7o6
				fldi[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
				flds[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
		}

		erase[fldsizeh[player] + player * 22] = 0;
		upLines[player]--;
	} else if(riseT == 1) {	// ����オ��^�C�v��TGM+�̂Ƃ�����オ��t�B�[���h��ǂݍ���#1.60c6.2g
		j = upLineNo[player];
		for(i = 0; i < upLineNoMax; i++) {
			j = i + upLineNo[player];
			if(j >= upLineNoMax) j = j - upLineNoMax;

			if(!((upFld[j* 2] == 00000) && (upFld[j* 2 + 1] == 00000)) &&	// ����オ��t�B�[���h�̃`�F�b�N
				!((upFld[j* 2] == 11111) && (upFld[j* 2 + 1] == 11111))) {
				upLineNo[player] = j;
				break;
			}
		}
		if((i >= upLineNoMax) || (upLineNoMax == 0)) {
			upLineT[player] = 0;
			UpLineBlock(player);
			return;
		}

		PlaySE(20);

		// �t�B�[���h����ɂ��炷
		for(i = 1; i <= fldsizeh[player]; i++) {
			for(j = 0; j < fldsizew[player]; j++) {
				fld[j + (i - 1) * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
				fldt[j + (i - 1) * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
				fldi[j + (i - 1) * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
				flds[j + (i - 1) * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
			}
			erase[(i - 1) + player * 22] = erase[i + player * 22];
		}

		// ����オ��t�B�[���h�̓ǂݍ���
		fld[0 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2] / 10000 % 10;
		fld[1 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2] / 1000 % 10;
		fld[2 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2] / 100 % 10;
		fld[3 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2] / 10 % 10;
		fld[4 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2] % 10;
		fld[5 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2 + 1] / 10000 % 10;
		fld[6 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2 + 1] / 1000 % 10;
		fld[7 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2 + 1] / 100 % 10;
		fld[8 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2 + 1] / 10 % 10;
		fld[9 + fldsizew[player] * fldsizeh[player] + player * 220] = upFld[upLineNo[player] * 2 + 1] % 10;

		for(j = 0; j < fldsizew[player]; j++) {
			fldt[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j + fldsizew[player] * fldsizeh[player] + player * 220] != 0) * -1;
			if(hidden[player] == 8) fldt[j + fldsizeh[player] * fldsizew[player] + player * 220] = 0;
			// �A�C�e���𑝐B�����Ȃ� #1.60c7o6
			fldi[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
			flds[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
		}

		erase[fldsizeh[player] + player * 22] = 0;
		upLines[player]--;

		if(upLineNo[player] + 1 < upLineNoMax)
			upLineNo[player]++;
		else
			upLineNo[player] = 0;

	} else if(riseT == 2){ // ����#1.60c7g2
		PlaySE(20);
		h1 = hole[player];
		h2 = hole[player];
		if(IsBigStart[player]) {
			h1 = (hole[player] / 2) * 2;
			h2 = h1 + 1;
		}
		for(i = 1; i <= fldsizeh[player]; i++) {
			for(j = 0; j < fldsizew[player]; j++) {
				fld[j + (i - 1) * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
				fldt[j + (i - 1) * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
				fldi[j + (i - 1) * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
				flds[j + (i - 1) * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
			}
			erase[(i - 1) + player * 22] = erase[i + player * 22];
		}

		for(j = 0; j < fldsizew[player]; j++) {
			fld[j + fldsizew[player] * fldsizeh[player] + player * 220] = ((j != h1) && (j != h2));
			fldt[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j + fldsizew[player] * fldsizeh[player] + player * 220] != 0) * -1;
			// �A�C�e���𑝐B�����Ȃ� #1.60c7o6
			 fldi[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
			 flds[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
			 if(hidden[player] == 8) fldt[j + fldsizeh[player] * fldsizew[player] + player * 220] = -60;
		}

		erase[fldsizeh[player] + player * 22] = 0;
		upLines[player]--;
		// DS����3���̊m���Ō��̈ʒu���ς�� C7T3.2EX
		// MISSION�ł�8���̊m��
		if(gameMode[player] != 4){
			if( rand(10,player) > 6 - ( (4 + (repversw >= 55) )*(gameMode[player] == 8)) ){
				do {
					newhole = rand(10,player);
				} while(newhole == hole[player]);
				hole[player] = newhole;
			}
		}else{	//�ΐ�@NORMAL 4���@ATTACK 6���@DEFENCE&ITEM 3��
			if( rand(10,player) > 5-(2*(vs_style[1 - player] == 1))+(1*(vs_style[1 - player] > 1)) ){
				do {
					newhole = rand(10,player);
				} while(newhole == hole[player]);
				hole[player] = newhole;
			}
		}
	} else if(riseT == 4){ // ���Œ�
		PlaySE(20);
		h1 = hole[player];
		h2 = hole[player];
		if(IsBigStart[player]) {
			h1 = (hole[player] / 2) * 2;
			h2 = h1 + 1;
		}
		for(i = 1; i <= fldsizeh[player]; i++) {
			for(j = 0; j < fldsizew[player]; j++) {
				fld[j + (i - 1) * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
				fldt[j + (i - 1) * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
				fldi[j + (i - 1) * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
				flds[j + (i - 1) * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
			}
			erase[(i - 1) + player * 22] = erase[i + player * 22];
		}

		for(j = 0; j < fldsizew[player]; j++) {
			fld[j + fldsizew[player] * fldsizeh[player] + player * 220] = ((j != h1) && (j != h2));
			fldt[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j + fldsizew[player] * fldsizeh[player] + player * 220] != 0) * -1;
			// �A�C�e���𑝐B�����Ȃ� #1.60c7o6
			 fldi[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
			 flds[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
			 if(hidden[player] == 8) fldt[j + fldsizeh[player] * fldsizew[player] + player * 220] = -60;
		}

		erase[fldsizeh[player] + player * 22] = 0;
		upLines[player]--;

	} else {
		PlaySE(20);
		// �t�B�[���h����ɂ��炷
		for(i = 1; i <= fldsizeh[player]; i++) {
			for(j = 0; j < fldsizew[player]; j++) {
				fld[j + (i - 1) * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
				fldt[j + (i - 1) * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
				fldi[j + (i - 1) * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
				flds[j + (i - 1) * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
			}
			erase[(i - 1) + player * 22] = erase[i + player * 22];
		}
		for(j = 0; j < fldsizew[player]; j++) {
			fldt[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j + fldsizew[player] * fldsizeh[player] + player * 220] != 0) * -1;
			// �A�C�e���𑝐B�����Ȃ� #1.60c7o6
			fldi[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
			flds[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
		}
		// ����オ��t�B�[���h�̈�ԏ�̃��C�����R�s�[
		for( j = 0 ; j < fldsizew[player] ; j++ ) {
			fld[j + fldsizeh[player] * fldsizew[player] + player * 220] = fldu[j + 0 * fldsizew[player] + player * 220];
			fldt[j + fldsizeh[player] * fldsizew[player] + player * 220] = (fld[j + fldsizeh[player] * fldsizew[player] + player * 220] != 0) * -1;
			if(hidden[player] == 8) fldt[j + fldsizeh[player] * fldsizew[player] + player * 220] = -60;
		}

		// ����オ��t�B�[���h�����炷
		for(i = 1; i < 22; i++) {
			for(j = 0; j < 10; j++) {
				fldu[j + ( i - 1 ) * 10 + player * 220] = fldu[j + i * 10 + player * 220];
			}
		}
		erase[fldsizeh[player] + player * 22] = 0;
		upLines[player]--;
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.06 - ���ԉ҂� & ���x���A�b�v����
//������������������������������������������������������������������������������
void statErase(int player) {
	int		i, j, wkfld,tmp_s[2],y;

	padRepeat(player);

	hiddenProc(player);
//	UpLineBlockJudge(player);

	if(((gameMode[player]==1)||(gameMode[player]==2))&&(enable_grade[player] == 4)){//�u���x�ɌĂяo���K�v������
		GradeUp3(player);
	}

	if(statc[player * 10 + 3] != 0){
		if(repversw >= 57){
			drawCBlock(player, 0, 0, 0, 10, 0);
			if(spawn_y_type) viewFldFrame(1,player);
		}
		statc[player * 10 + 3]--;
	}

	if(ace_irs) doIRS2(player);

	if((repversw >= 48) && (dhold[player] != disable_hold) && (!ishidenext[player])&& (!isfakenext[player]))
		dhold[player] = disable_hold;		// hold�g�p�\��	#1.60c

	// ���𗣂��Ă���ꍇ�A�����ꐧ������#1.60c7n6
	if((!getPressState(player, 1-(1*((isUDreverse[player]) && (repversw>=44)) ))) && (repversw >= 10)) down_flag[player] = 0;
	if(!getPressState(player, 0+(1*((isUDreverse[player]) && (repversw>=44)) ))) up_flag[player] = 0;

	if((gameMode[player] == 6) && (!ending[player])) {
		// tomoyo���[�h�ŃN���A�t���O��1�ɂȂ��Ă�����X�e�[�W�N���A #1.60c7l8
		if( sclear[player] ) {
			thunder_timer = 0;
			PlaySE(31);				// stageclear.wav
			timeOn[player] = 0;			// �^�C�}�[�X�g�b�v #1.60c7m2
			clearnum[player]++;			// �N���A�X�e�[�W������ #1.60c7m5
			recStageTime(player);			//�X�e�[�W�N���A�^�C��
			if((stage[player] == 44) && (!t_training[player])){
				PlaySE(28);
				ending[player] = 1;
				stat[player] = 13;
				statc[player * 10] = 0;
				statc[player * 10 + 1] = 0;
				return;
			}
			statc[player * 10] = 0;		// �J�E���^��0��
			statc[player * 10 + 1] = 0;
			stat[player] = 17;			// �X�e�[�W�I��
			return;
		}
		// �X�e�[�W�^�C����0��������^�C���I�[�o�[
		else if(stime[player] <= 0) {
			timeOn[player] = 0;				// �^�C�}�[�X�g�b�v
			sclear[player] = 0;				// �^�C���I�[�o�[
			statc[player * 10] = 0;			// �J�E���^��0��
			statc[player * 10 + 1] = 0;
			recFaultTime(player);
			stat[player] = 17;				// �X�e�[�W�I��
			return;
		}

	}
	if(((gameMode[player] == 6) || ((gameMode[player] == 8) && (mission_type[c_mission] == 6)))
	&& (statc[player * 10] == wait1[player]) && (upLines[player]))
		UpLineBlockJudge(player);

	if(ismiss[player]){
		y = Rand(8);
		ofs_x[player] = y - (8 / 2);
		ofs_x2[player] = ofs_x[player];
		if(statc[player * 10] == wait1[player])
			PlaySE(45);
	}

	if(((repversw >= 46) && ((repversw < 48))) && (statc[player * 10] == wait1[player]) && (!ishidenext[player])&& (!isfakenext[player]))
		dhold[player] = disable_hold;		// hold�g�p�\��	#1.60c

	if((isthunder[player]) && (statc[player * 10] == wait1[player])){
		PlaySE(37);
		thunder_timer = 30;
	}
	// �����`����
	if((gameMode[player]!=8)&&(squaremode[player])) {
		makeSquare(player);
	}
	if(gameMode[player]==5){
		checkEnding(player,0);
	}
	// MISSION���[�h�ł̃~�b�V�����B��
	if(gameMode[player] == 8) {
		if((ltime[player] <= 0) && (mission_type[c_mission] == 23) && (!ending[player])){ //�ϋv�~�b�V����
			missionNormUp(2);
			if( (ending[player] == 1) || (ending[player] == 4) ) PlaySE(28);
			statc[player * 10 + 3] = 0;
		}
		if((mission_type[c_mission] == 29) && (!ending[player]) && (statc[player * 10] == wait1[player])){	//OOBAKA
			missionNormUp(2);
			statc[player * 10 + 3] = 0;
		}
				// �����`����
		if(squaremode[player]) {
			tmp_s[player] = makeSquare(player);
			if( (((mission_type[c_mission] == 40) && (tmp_s[player] >= 1)) || ((mission_type[c_mission] == 41) && (tmp_s[player] >= 2))&& (!ending[player])) ){
				missionNormUp(2);
				statc[player * 10 + 3] = 0;
			}
		}
		if( (!timeOn[player]) && (!ending[player]) ) {
			// ���C����������
			if(mission_erase[c_mission - 1] > 0) {
				j = mission_erase[c_mission - 1];

				for(i = checkFieldTop(player); i < 22; i++) {
					erase[i + player * 22] = 1;

					j--;
					if(j <= 0) break;
				}

				stat[player] = 25;
				statc[player * 10] = 0;
				statc[player * 10 + 1] = 3;	// Ready
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;
				if((repversw >= 41) && ((heboGB[player] > 0) || (mission_end[c_mission - 1] == 3))){
					stat[player] = 35;
					statc[player * 10] = -wait1[player];
					statc[player * 10 + 2] = mission_erase[c_mission - 1];
				}
			// ���C������オ�茊���낢
			}else if(mission_erase[c_mission - 1] < -20) {
				upLineT[player] = 4;//���ۂ͂Ȃ�
				//upLines[player] = abs_YGS2K(mission_erase[c_mission - 1]+20);
				statc[player * 10 + 3] = abs_YGS2K(mission_erase[c_mission - 1]+20);
				stat[player] = 22;
				statc[player * 10] = wait1[player] / 2;
				statc[player * 10 + 1] = 3;	// Ready
				statc[player * 10 + 4] = 4;
			} else if(mission_erase[c_mission - 1] < 0) {
				upLineT[player] = 2;
//				upLines[player] = abs_YGS2K(mission_erase[c_mission - 1]);
				statc[player * 10 + 3] = abs_YGS2K(mission_erase[c_mission - 1]);
				stat[player] = 22;
				statc[player * 10] = wait1[player] / 2;
				statc[player * 10 + 1] = 3;	// Ready
				statc[player * 10 + 4] = 2;
			} else {
				stat[player] = 22;			// �����҂�
				statc[player * 10] = wait1[player];
				statc[player * 10 + 1] = 3;	// Ready
			}

			return;
		}
	}
	//stat[player]��ύX����A�C�e���Q�̔���
	//���؂�s�����̉����Ƌ��Ɉړ� C7U1
	//��DEL FIELD
	if(isUPdelfield[player]){
		j = (22-checkFieldTop(player)) / 2;
		for(i = checkFieldTop(player); i <= 22; i++) {
			erase[i + player * 22] = 1;
			j--;
			if(j < 0) break;
		}
		stat[player] = 25;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	//��DEL FIELD
	if(isDWdelfield[player]){
		j = (22-checkFieldTop(player)) / 2;
		for(i = 22; i > checkFieldTop(player); i--) {
			erase[i + player * 22] = 1;
			j--;
			if(j < 0) break;
		}
		stat[player] = 25;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	//DEL EVEN
	if(isdeleven[player]){
		for(i = 22; i >= checkFieldTop(player); i--) {
			erase[i + player * 22] = 1;
			i--;
		}
		stat[player] = 25;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	//FREE FALL
	if(isFreefall[player]){
		stat[player] = 32;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		return;
	}
	//MOV FIELD
	if((isLmovfield[player]) || (isRmovfield[player])){
		stat[player] = 33;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		return;
	}
	//ALLCLEAR
	if(isallclear[player]){
//		for(i = 0; i < 22; i++) {
//			erase[i + player * 22] = 1;
//		}
		stat[player] = 35;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		statc[player * 10] = -wait1[player];
		statc[player * 10 + 2] = 21;
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	if(doshotgun[player]){	//�V���b�g�K������
		stat[player] = 28;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		doshotgun[player] = 0;
		return;
	}
	if(dolaser[player]){	//���[�U�[����
		stat[player] = 26;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		dolaser[player] = 0;
		return;
	}
	if(donega[player]){	//�l�K�t�B�[���h����
		stat[player] = 27;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		donega[player] = 0;
		return;
	}
	if(dorulet[player]){	//�A�C�e�����[���b�g����
		stat[player] = 31;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		dorulet[player] = 0;
		return;
	}
	if(do180field[player]){	//180���t�B�[���h����
		stat[player] = 34;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		do180field[player] = 0;
		return;
	}
	if(doexchg[player]){	//�t�B�[���h��������
		stat[player] = 29;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		doexchg[player] = 0;
		return;
	}if(do16t[player]){	//16t����
		stat[player] = 26;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 1;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		do16t[player] = 0;
		return;
	}
	if(docopyfld[player]){	//�t�B�[���h�R�s�[����
		stat[player] = 29;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 1;
		statc[player * 10 + 4] = 0;
		docopyfld[player] = 0;
		return;
	}

	statc[player * 10]--;


	//D.R.S��ARE�X�L�b�v
	if( ((rots[player] == 8) && (harddrop[player])) &&
	((getPushState(player, 0)) || (getPushState(player, 1)) || (getPushState(player, 2)) ||
	 (getPushState(player, 3)) || (getPushState(player, 4)) || (getPushState(player, 5)) ||
	 (getPushState(player, 6)) || (getPushState(player, 7))) )
		statc[player * 10] = -1;

	if( ((rots[player] == 8) && (are_skipflag[player])) &&
	((getPressState(player, 0)) || (getPressState(player, 1)) || (getPressState(player, 2)) ||
	 (getPressState(player, 3)) || (getPressState(player, 4)) || (getPressState(player, 5)) ||
	 (getPressState(player, 6)) || (getPressState(player, 7))) ){
	 	are_skipflag[player] = 0;
		statc[player * 10] = -1;
	}

	if((statc[player * 10] < wait1[player] - 1) && (wait1[player] != 0) &&
		(cpu_flag[player]) && (rots[player] != 6) && (rots[player] != 8)){
		for(i=0;i<10;i++) {
			cp_input[i + player * 10] = 0;
		}
	}

	if( (statc[player * 10] < 0) || (rots[player] == 6) ) {

		ofs_x[player] = 0;
		ofs_x2[player] = 0;

		//�G���f�B���O�˓������D�悷��悤��
		//�i�@�\���Ȃ��Ȃ邩��jC7U1
		// ���肠���菈���i�~���[���͂���グ�Ȃ��j
		if(fmirror_cnt[player] == -20+(20*(repversw <= 17)))
			if(UpLineShirase(player)) return;

		// �t�B�[���h�~���[������ #1.60c7j5
		if(fldMirrorProc(player)) return;

		if(ending[player]) {
			// �G���f�B���O�˓�
			stat[player] = 13;

			// �X�e�[�^�X�J�E���^������ #1.60c7r3
			if(repversw >= 15) {
				for(i = 0; i < 10; i++) statc[i + player * 10] = 0;
			}
			if((gameMode[player] == 9) && (relaymode[player])){
				end_f[player] = 0;
				ending[player] = 0;
				stat[player] = 15;
				statc[player * 10 + 0] = 0;
				statc[player * 10 + 1] = 0;
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;	//�N���A���o
				return;
			}

		} else {
			// ���x���A�b�v
			LevelUp(player);

			// ���̃o�[�W��������Œ聨����2�t���[���k�߂� #1.60c7h2
			if(repversw < 4)
				stat[player] = statc[player * 10 + 1];
			else {
				// RE���_��
				if( pinch[player] ) {
					REflag[player] = 1;
				} else if( (REflag[player]) && (pinch2[player]) && (!ending[player]) &&(medaltype <= 1)&&(gameMode[player] != 0)
					&&(gameMode[player] != 4) && (gameMode[player] <= 5) ) {
					rescue[player]++;//���̉񐔂���ʂɕ\�����A���_�������߂�
					REflag[player] = 0;

						if( ( (rescue[player] == 2) && (medal_re[player] == 0) )
						 || ( (rescue[player] == 4) && (medal_re[player] == 1) )
						 || ( (rescue[player] == 6) && (medal_re[player] == 2) )
						|| ( (rescue[player] == 8) && (medal_re[player] == 3) ))
						{
							PlaySE(39);
							medal_re[player]++;
							objectCreate2(player, 11,208 + 81 * player - 96 * maxPlay, 148,3,0,0,medal_re[player] - 1);
						}
				}
				if( (gameMode[player] == 4) || (item_mode[player]) || (gameMode[player] == 8) ) {
					// �~�b�V�������[�h�ł��g�p #1.60c7s5

					// �ΐ�p���[�����[�� #1.60c7n1
					if( item_rollroll[player] ) {
						isrollroll[player] = 1;
					}

					// �ΐ�pX-RAY #1.60c7r3
					if( xray_flag[player] ) {
						isxray[player] = 1;
					}
				} else {
					// ���[�����[�������f #1.60c7j5
					isrollroll[player] = 0;
					if((rollroll_flag[player]) && (p_rollroll_interval > 0) && (gameMode[player] >= 5))
						if((bdowncnt[player] + 1) % p_rollroll_interval == 0)
							isrollroll[player] = 1;

					// X-RAY���f #1.60c7p9ex
					isxray[player] = 0;
					if((xray_flag[player]) && (p_xray_interval > 0) && (gameMode[player] >= 5))
						if((bdowncnt[player] + 1) % p_xray_interval == 0)
						{
							isxray[player] = 1;
							xray_counter[player] = 0;
						}
				}
				// �X�e�[�^�X�J�E���^������ #1.60c7r3
				if(repversw >= 61)
					for(i = 0; i < 10; i++) statc[i + player * 10] = 0;
				// �����J�n
				ofs_x[player] = 0;
				ofs_x2[player] = 0;
				statBlock(player);
			}
			if(repversw < 61)
				for(i = 0; i < 10; i++) statc[i + player * 10] = 0;
		}

	}
}

/* �t�B�[���h�~���[ */
int fldMirrorProc(int player) {
	int		i, j, wkfld;
	if((stopmirror_flag[player] == 1) && (fmirror_cnt[player] == -20)){
		isfmirror[player] = 0;
		stopmirror_flag[player] = 0;
		if((stat[player] == 13) && ((ending[player] == 3) || (ending[player] == 7)))
			disableShadowTimer(player);
		return 0;
	}


	if((repversw <= 17) && (fmirror_cnt[player] < 0))	//c7t2.9�ȑO�̃��v���C�̓t�B�[���h��]����
		fmirror_cnt[player] = 0;

	// fmirror��player���Ƃ� #1.60c7l7
	if((isfmirror[player]) && (p_fmirror_interval > 0) && ((gameMode[player] >= 4) || (item_mode[player]))) {
		if( (((gameMode[player] == 4) || (item_mode[player]))&&(bdowncnt[player] % 1 == 0)) || (bdowncnt[player] % p_fmirror_interval == 0) || (gameMode[player] == 8) ) {
			if(fmirror_cnt[player] <= p_fmirror_timer) {
				if(((repversw >= 18) && (fmirror_cnt[player] == -20)) || ((repversw <= 17) && (fmirror_cnt[player] == 0))) {
//					PlayWave(20);
					// �t�B�[���h���o�b�t�@�Ɋm��
					for(i = 0; i <= fldsizeh[player]; i++) {
						for(j = 0; j < fldsizew[player]; j++) {
								fldbuf[j + i * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
							if(repversw >= 18)	//�����̓t�B�[���h�������Ȃ�
								fld[j + i * fldsizew[player] + player * 220] = 0;
								fldtbuf[j + i * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
							if(repversw >= 18)	//�����̓t�B�[���h�������Ȃ�
								fldt[j + i * fldsizew[player] + player * 220] = 0;
							if((gameMode[player] == 4) || (item_mode[player])){
								fldibuf[j + i * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
								fldi[j + i * fldsizew[player] + player * 220] = 0;
							}
							fldsbuf[j + i * 10 + player * 220] = flds[j + i * 10 + player * 220];
							flds[j + i * 10 + player * 220] = 0;
						}
					}
				} else {
					if((fmirror_cnt[player] > 0) && (fmirror_cnt[player] % (p_fmirror_timer / fldsizew[player]) == 0)) {
						for(i = 0; i <= fldsizeh[player]; i++) {
							j = (fmirror_cnt[player]) / (p_fmirror_timer / fldsizew[player]) - 1;
							fld[(fldsizew[player] - j - 1) + i * fldsizew[player] + player * 220] = fldbuf[j + i * fldsizew[player] + player * 220];
							fldt[(fldsizew[player] - j - 1) + i * fldsizew[player] + player * 220] = fldtbuf[j + i * fldsizew[player] + player * 220];
							flds[(fldsizew[player] - j - 1) + i * fldsizew[player] + player * 220] = fldsbuf[j + i * fldsizew[player] + player * 220];
							if((gameMode[player] == 4) || (item_mode[player]))
								fldi[(fldsizew[player] - j - 1) + i * fldsizew[player] + player * 220] = fldibuf[j + i * fldsizew[player] + player * 220];
						}
					ExBltFast(27, 120+ ((fldsizew[player] - j - 1) * 8) + 192 * player - 96 * maxPlay, 40);
					}
				}
				fmirror_cnt[player]++;
				if((fastmirror) && (fmirror_cnt[player] <= 0)) fmirror_cnt[player]++;
				return 1;
			} else if((repversw >= 18) && (fmirror_cnt[player] <= p_fmirror_timer + 10-(6*(repversw >= 25)) + 10*(fastmirror))) {
				fmirror_cnt[player]++;
				return 1;
			}
			fmirror_cnt[player] = -20;
			if(repversw <= 17)	//c7t2.9�ȑO�̃��v���C�̓t�B�[���h��]����
			fmirror_cnt[player] = 0;
		}
	}
	return 0;
}

/* ����オ�� */
int UpLineShirase(int player) {

	// ��������オ��i���v���C�̌݊����̂��ߎc����Ă���j
	if(repversw < 6) {
		if((p_shirase[player] == 1) && (tc[player] >= shirase[player]) && (tc[player] >= level_shirase_start + raise_shirase_interval) ) {
			shirase[player] = (tc[player] / raise_shirase_interval + 1) * raise_shirase_interval;
			if(tc[player] < shirase[player])
				upLines[player] = raise_shirase_lines;
			else
				upLines[player] = 0;
		}

		if((gameMode[player] == 5) && (p_shirase[player] == 1) && (tc[player] > shirase[player])) {
			upLines[player] = raise_shirase_lines * ((IsBig[player] && big_rise) + 1);
			shirase[player] = shirase[player] + raise_shirase_interval;
		}
	// DEVIL�����_������オ�� C7U4.9
	} else if((gameMode[player] == 3) && (devil_randrise) && (repversw >= 44) && (!devil_minus[player])){
		if((devil_nextrise[player] <= 0) && (devil_rise_min[tr[player] / 10] > 0) && (devil_rise_max[tr[player] / 10] > 0)) {
			do {
				devil_nextrise[player] = rand( devil_rise_max[tr[player] / 10] + 1,player);
			} while(devil_nextrise[player] < devil_rise_min[tr[player] / 10]);

			upLines[player] = 1;
		}
	// ���̃o�[�W�������点��オ��̎d�l��ύX #1.60c7i2
	} else {
		// DEVIL��TIME TRIAL��LV1000�ȍ~�ł���オ��Ȃ��悤�ɂ��� #1.60c7i2
		if((gameMode[player] == 3) && (tc[player] >= 1000))
			upLines[player] = 0;
		// MISSION DEVIL800
		else if((gameMode[player] == 8) && (mission_type[c_mission] == 19) && (st_bdowncnt[player] >= shirase[player])) {
			shirase[player] = (st_bdowncnt[player] / mission_opt_3[c_mission] + 1) * mission_opt_3[c_mission];
			if(st_bdowncnt[player] < shirase[player])
				upLines[player] = 1;
			else
				upLines[player] = 0;
		}

		// ����オ��Ԋu�����x���ł͂Ȃ��A�~�m�𒅏��������񐔂ɕύX #1.60c7i2
		else if((p_shirase[player] == 1) && (bdowncnt[player] >= shirase[player]) && (tc[player] >= level_shirase_start)) {
			shirase[player] = (bdowncnt[player] / raise_shirase_interval + 1) * raise_shirase_interval;
			if(bdowncnt[player] < shirase[player])
				upLines[player] = raise_shirase_lines * ((IsBig[player] && big_rise) + 1);
			else
				upLines[player] = 0;
		}
	}

	UpLineBlockJudge(player);
	if(upLines[player]) return 1;

	if(repversw >= 47) pinchCheck(player);

	return 0;
}

/* ���x���A�b�v */
void LevelUp(int player) {
	// ���x���A�b�v�����TGM���[���ǉ� #1.60c3
	if(gameMode[player] == 0) {
		// �r�M�i�[���[�h�̃��x���A�b�v����
		if(tc[player] / 10 > tr[player]) {
			tr[player]++;
			recSectionTime(player);

			// �X�^�b�t���[���łȂ��Ȃ�X�s�[�h�l��wait�l��ς��� #1.60c7j8
			if(!ending[player]) {
				if(tr[player] < 101){
					if(repversw < 40)sp[player] = lvTableBeg39[tr[player]];
					else sp[player] = lvTableBeg[tr[player]];
				}
				if(tr[player] % 10 == 0) {
					PlaySE(19);
					bgfadesw = 1;
					if(fadelv[player] != 0) {
						bgmlv++;
						changeBGM(player);
					}
				}
			}
		}
	} else if((gameMode[player] == 1)||(gameMode[player] == 2)) {
		// �}�X�^�[���[�h,20G�̃��x���A�b�v����
		if(((enable_grade[player] != 4)||(repversw<=23))) {
			if(tc[player] / 10 > tr[player]) {
				tr[player]++;
				recSectionTime(player);
				if(!ending[player]) {
					if(repversw <= 20){//���v���C��20�ȉ�
						if(tr[player] < 51) sp[player] = lvTableTgm20[tr[player]];
					}else if(repversw > 20){
						if(tr[player] < 51){
							if(gameMode[player] == 2){
							//20G
								sp[player] = 1200;
							}else{
							//MASTER
							 	sp[player] = lvTableTgm[tr[player]];//�O����10���Ƃɏオ��
							}
						}
					}
					if(tr[player] % 10 == 0) {
						if(((enable_grade[player] != 1)||(repversw<=23))){
							if(repversw<29){//28�܂�
								if((tr[player] >= 50) && (tr[player] <= 100)) {
									wait1[player] = wait1_master_tbl28[(tr[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl28[(tr[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl28[(tr[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl28[(tr[player] - 50) / 10 * 2];
								}
							}else if((repversw>=29) && (repversw<35)){//34�܂�
								if((tr[player] >= 50) && (tr[player] <= 100)) {
									wait1[player] = wait1_master_tbl34[(tr[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl34[(tr[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl34[(tr[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl34[(tr[player] - 50) / 10 * 2];
								}
							}else if((repversw>=35) && (repversw<54)){
								if((tr[player] >= 50) && (tr[player] <= 100)) {
									wait1[player] = wait1_master_tbl53[(tr[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl53[(tr[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl53[(tr[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl53[(tr[player] - 50) / 10 * 2];
								}
							}else{
								if((tr[player] >= 50) && (tr[player] <= 100)) {
									wait1[player] = wait1_master_tbl[(tr[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl[(tr[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl[(tr[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl[(tr[player] - 50) / 10 * 2];
								}
							}
						}else if(((enable_grade[player] == 1)&&(repversw>24))||((hebo_plus[player])&&(repversw>=34))){
							if((tr[player] >= 50) && (tr[player] <= 100)) {
							sp[player] = 1200;
							wait1[player] =	26;
							wait2[player] = 40;
							wait3[player] = 28;
							waitt[player] = 15;
							}
						}
					PlaySE(19);
					bgfadesw = 1;
					hebop_interval[player]--;
						if((fadelv[player] != 0) && (!ending[player])) {
							bgmlv++;
							changeBGM(player);
						}
					}
				}
			}
		} if((enable_grade[player] == 4)&&(repversw >= 24)) {//grade4�p���x�A�b�v�p
			if(tc[player] / 10 > tr[player]) {//tc�̓��x�� tr��10���Ƃ�1��������
				tr[player]++;
				tr2[player]++;
				recSectionTime(player);

				if(!ending[player]) {

					if(tr[player] % 10 == 0) {//100����
						isregret(player);//regret����
						if(gup3sp_adjust[player] == 2){
							tr2[player] = tr2[player] + 10;//skip
						}
						if((gup3sp_adjust[player] == 0) && ((regretcancel[player] == 0) || (repversw < 41))){
							tr2[player] = tr2[player] - 10;//��蒼��
						}
					}
					if(tr2[player] < 51){
						if(gameMode[player] == 2){
						//20G
							sp[player] = 1200;
						}else{
						//MASTER
						 	sp[player] = lvTableTgm[tr2[player]];//�O����10���Ƃɏオ��
						}
					}
					if(tr[player] % 10 == 0) {
						if((tr2[player] >= 50) && (tr2[player] <= 200) && ((tr2[player] <= 150) || (repversw < 60))) {
							if(repversw<29){//29�ȑO
								if((tr2[player] >= 50) && (tr2[player] <= 200)) {
									sp[player] = 1200;
									wait1[player] = wait1_master_tbl28[(tr2[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl28[(tr2[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl28[(tr2[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl28[(tr2[player] - 50) / 10 * 2];
								}
							} else if((repversw >=29) && (repversw < 35)){//29�ȍ~
								if((tr2[player] >= 50) && (tr2[player] <= 200)) {
									sp[player] = 1200;
									wait1[player] = wait1_master_tbl34[(tr2[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl34[(tr2[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl34[(tr2[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl34[(tr2[player] - 50) / 10 * 2];
								}
							} else if((repversw >=35) && (repversw < 54)){//35�ȍ~
								if((tr2[player] >= 50) && (tr2[player] <= 200)) {
									sp[player] = 1200;
									wait1[player] = wait1_master_tbl53[(tr2[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl53[(tr2[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl53[(tr2[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl53[(tr2[player] - 50) / 10 * 2];
								}
							} else if(repversw >=54){//54�ȍ~
								if((tr2[player] >= 50) && (tr2[player] <= 200)) {
									sp[player] = 1200;
									wait1[player] = wait1_master_tbl[(tr2[player] - 50) / 10 * 2];
									wait2[player] = wait2_master_tbl[(tr2[player] - 50) / 10 * 2];
									wait3[player] = wait3_master_tbl[(tr2[player] - 50) / 10 * 2];
									waitt[player] = waitt_master_tbl[(tr2[player] - 50) / 10 * 2];
								}
							}
						}
						PlaySE(19);
						reset_gradeup3(player);//gradeup3�Ɏg���ϐ�����C�Ƀ��Z�b�g
						bgfadesw = 1;
						hebop_interval[player]--;
						if((fadelv[player] != 0) && (!ending[player])) {
							bgmlv++;
							changeBGM(player);
						}
					}
				}
			}
		}
	} else if(gameMode[player] == 3) {
		// �f�r�����[�h�̃��x���A�b�v����
		if(repversw < 18){//17�ȑO
			if(tc[player] / 10 > tr[player]) {
				tr[player]++;
				recSectionTime(player);

				if( (!ending[player]) && (tr[player] % 10 == 0) ) {
					if(tr[player] <= 120) {	// LV1200�܂� #1.60c7j5
						wait1[player] = wait1_devil_tbl17[tr[player] / 10];
						wait2[player] = wait2_devil_tbl17[tr[player] / 10];
						wait3[player] = wait3_devil_tbl17[tr[player] / 10];
						waitt[player] = waitt_devil_tbl17[tr[player] / 10];

						if(grade[player] < 13)
							grade[player] = tr[player] / 10; // Grade�ݒ� #1.60c7j7
							gflash[player]=120;
					}
					PlaySE(19);
					bgfadesw = 1;
					if((fadelv[player] != 0) && (!ending[player])) {
						bgmlv++;
						changeBGM(player);
					}
				}
			}
		}else if(repversw == 18){//18-19
			if(tc[player] / 10 > tr[player]) {
				tr[player]++;
				recSectionTime(player);

				if( (!ending[player]) && (tr[player] % 10 == 0) ) {
					if(tr[player] <= 120) {	// LV1200�܂� #1.60c7j5
						wait1[player] = wait1_devil_tbl18[tr[player] / 10];
						wait2[player] = wait2_devil_tbl18[tr[player] / 10];
						wait3[player] = wait3_devil_tbl18[tr[player] / 10];
						waitt[player] = waitt_devil_tbl18[tr[player] / 10];

						if(grade[player] < 13)
							grade[player] = tr[player] / 10; // Grade�ݒ� #1.60c7j7
							gflash[player]=120;
					}
					PlaySE(19);
					bgfadesw = 1;
					if((fadelv[player] != 0) && (!ending[player])) {
						bgmlv++;
						changeBGM(player);
					}
				}
			}
		}else if(repversw >= 19){//19�ȍ~
			if(tc[player] / 10 > tr[player]) {
				tr[player]++;
				recSectionTime(player);

				if( (!ending[player]) && (tr[player] % 10 == 0) ) {
					if((((enable_grade[player] == 1) && (repversw < 42)) || (devil_minus[player]))&&(gameMode[player] == 3)&&(repversw >= 31)){//devil-
						if(tr[player] <= 120) {	// LV1200�܂� #1.60c7j5
							wait1[player] = wait1_devil_m_tbl[tr[player] / 10];
							wait2[player] = wait2_devil_m_tbl[tr[player] / 10];
							wait3[player] = wait3_devil_m_tbl[tr[player] / 10];
							waitt[player] = waitt_devil_m_tbl[tr[player] / 10];

							if(!devil_minus[player]){
								if(grade[player] < 13){//�m�[�}��
									grade[player] = tr[player] / 10; // Grade�ݒ� #1.60c7j7
									gflash[player]=120;
								}
							}else{
								if(tr[player]==50){//m
									grade[player]=14;
									PlaySE(28);
									gflash[player]=120;
								}
							}
						}
					}else if(repversw < 33){	//32
						if(tr[player] <= 120) {	// LV1200�܂� #1.60c7j5
							wait1[player] = wait1_devil_tbl32[tr[player] / 10];
							wait2[player] = wait2_devil_tbl32[tr[player] / 10];
							wait3[player] = wait3_devil_tbl32[tr[player] / 10];
							waitt[player] = waitt_devil_tbl32[tr[player] / 10];

							if(grade[player] < 13){
								grade[player] = tr[player] / 10; // Grade�ݒ� #1.60c7j7
								gflash[player]=120;
							}
						}
					}else{
						if(tr[player] <= 120) {	// LV1200�܂� #1.60c7j5
							if(repversw < 60){
								wait1[player] = wait1_devil_tbl[tr[player] / 10];
								wait2[player] = wait2_devil_tbl[tr[player] / 10];
								wait3[player] = wait3_devil_tbl[tr[player] / 10];
								waitt[player] = waitt_devil_tbl[tr[player] / 10];
							}else if(repversw < 62){
								wait1[player] = wait1_doom_tbl61[tr[player] / 10];
								wait2[player] = wait2_doom_tbl61[tr[player] / 10];
								wait3[player] = wait3_doom_tbl61[tr[player] / 10];
								waitt[player] = waitt_doom_tbl61[tr[player] / 10];
							}else{
								wait1[player] = wait1_doom_tbl[tr[player] / 10];
								wait2[player] = wait2_doom_tbl[tr[player] / 10];
								wait3[player] = wait3_doom_tbl[tr[player] / 10];
								waitt[player] = waitt_doom_tbl[tr[player] / 10];
							}
							if((!devil_minus[player]) && (!death_plus[player])){
								if(grade[player] < 13)//�m�[�}��
								grade[player] = tr[player] / 10; // Grade�ݒ� #1.60c7j7
								gflash[player]=120;
							}else{
								if(tr[player]==50){
									PlaySE(28);
									grade[player]=14;
									gflash[player]=120;
								}
								if(tr[player]==100){
									PlaySE(28);
									grade[player]=15;
									gflash[player]=120;
								}
								if(tr[player]==130){
									PlaySE(28);
									grade[player]=16;
									gflash[player]=120;
								}
							}
						}
					}
					PlaySE(19);
					bgfadesw = 1;
					if((devil_randrise) && (repversw >= 44)){
						if((devil_nextrise[player] <= 0) && (devil_rise_min[tr[player] / 10] > 0) && (devil_rise_max[tr[player] / 10] > 0) && (!devil_minus[player])) {
							do {
								devil_nextrise[player] = rand( devil_rise_max[tr[player] / 10] + 1,player);
							} while(devil_nextrise[player] < devil_rise_min[tr[player] / 10]);
						}
					}
					if((fadelv[player] != 0) && (!ending[player])) {
						bgmlv++;
						changeBGM(player);
					}
				}
			}
		}
	} else if(gameMode[player] == 4) {
		// VS���[�h�̃��x���A�b�v���� #1.60c7r4
		if(tc[player] / 10 > tr[player]) {
			tr[player]++;

			if( (!ending[player]) && (tr[player] % 10 == 0) ) {
				PlaySE(19);
			}

		}
		if(wintype==0){
			// �S�[���ɓ��B
			if( (vs_goal != 0) && (tc[player] >= vs_goal) ) {
				tc[player] = vs_goal;
				PlaySE(19);

				// ������Q�[���I�[�o�[�ɂ�����
				stat[1 - player] = 7;
				statc[0 + (1 - player) * 10] = 0;
				statc[1 + (1 - player) * 10] = 0;
				statc[2 + (1 - player) * 10] = 0;
				statc[3 + (1 - player) * 10] = 0;
				statc[4 + (1 - player) * 10] = 0;
				statc[5 + (1 - player) * 10] = 0;
				if(istimestop[1-player]) istimestop[1-player] = 0;
			}
		}else if(wintype==1){
			// �S�[���ɓ��B
			if( (vs_goal != 0) && (li[player] >= vs_goal/10) ) {
				li[player] = vs_goal/10;
				PlaySE(30);
				// ������Q�[���I�[�o�[�ɂ�����
				stat[1 - player] = 7;
				statc[0 + (1 - player) * 10] = 0;
				statc[1 + (1 - player) * 10] = 0;
				statc[2 + (1 - player) * 10] = 0;
				statc[3 + (1 - player) * 10] = 0;
				statc[4 + (1 - player) * 10] = 0;
				statc[5 + (1 - player) * 10] = 0;
				if(istimestop[1-player]) istimestop[1-player] = 0;
			}
		}
	} else if(gameMode[player] == 6) {
		// TOMOYO���[�h�̃��x���A�b�v���� #1.60c7m1
		if(!fpbas_mode[player]) {
			if(tc[player] / 10 > tr[player]) {
				tr[player]++;

				if(tr[player] < 31){
					if((repversw < 25) || ((stage[player] >= 100) && (lvTabletomoyo24[tr[player]] > sp[player])))
						sp[player] = lvTabletomoyo24[tr[player]];
					else if(lvTabletomoyo[tr[player]] > sp[player])
						sp[player] = lvTabletomoyo[tr[player]];
				}

				if(tr[player] % 10 == 0) {
					PlaySE(19);
					bgfadesw = 1;
				}
			}
		} else {
			if(lc[player] > 100) {
				lc[player] = lc[player] - 100;
				lv[player]++;

				if(lv[player] < 20){
					if((repversw < 25) || ((stage[player] >= 100) && (lvTabletomoyo24[lv[player]] > sp[player])))
						sp[player] = lvTabletomoyohebo[lv[player]];
					else if(lvTabletomoyo[lv[player]] > sp[player])
						sp[player] = lvTabletomoyohebo[lv[player]];
				}

				if(lv[player] % 2 == 0) {
					PlaySE(19);
					bgfadesw = 1;
				}
			}
		}
	} else if(gameMode[player] == 7) {
		// ACE���[�h�̃��x���A�b�v����
		if( (li[player] >= lv[player] * 10) && (!ending[player]) && ( anothermode[player] == 0)) {
			lv[player]++;
			if(repversw < 56)
				sp[player] = lvTableAce55[lv[player]-1];
			else
				sp[player] = lvTableAce[lv[player]-1];
			ltime[player] = timeLimitAce[lv[player]-1];

			PlaySE(30);
			StopSE(32);
			bgfadesw = 1;
			timeOn[player] = 0;		// �^�C�����ꎞ�I�Ɏ~�߂�

			if(fadelv[player] != 0) {
				ace_bgmchange[player]++;
				bgmlv = ace_bgmlist[ace_bgmchange[player]];
				changeBGM(player);
			}
		} else if( (li[player] >= lv[player] * 10) && (!ending[player]) && ( anothermode[player] == 1)) {
			// �A�i�U�[
			lv[player]++;
			sp[player] = lvTableAcea[lv[player]-1];
			ltime[player] = timeLimitAcea[lv[player]-1];
			if(repversw<36){
				wait1[player] = wait1_Acea_tbl35[lv[player] - 1];
				wait2[player] = wait2_Acea_tbl35[lv[player] - 1];
				wait3[player] = wait3_Acea_tbl35[lv[player] - 1];
				waitt[player] = waitt_Acea_tbl35[lv[player] - 1];
			} else if(repversw>=36){
				wait1[player] = wait1_Acea_tbl[lv[player] - 1];
				wait2[player] = wait2_Acea_tbl[lv[player] - 1];
				wait3[player] = wait3_Acea_tbl[lv[player] - 1];
				waitt[player] = waitt_Acea_tbl[lv[player] - 1];
			}

			PlaySE(30);
			StopSE(32);
			bgfadesw = 1;

			if(fadelv[player] != 0) {
				ace_bgmchange[player]++;
				bgmlv = ace_bgmlist[ace_bgmchange[player] + 3];
				changeBGM(player);
			}
		} else if( (li[player] >= lv[player] * 10) && (!ending[player]) && ( anothermode[player] == 2)) {
			// �A�i�U�[2
			lv[player]++;
			if(lv[player] >= 16) over1000_block[player] = 1;	//���x��16�ȍ~��[]
			if((lv[player] >= 6) && (lv[player] < 8)) hidden[player] = 4;
			else if((lv[player] >= 8) && (lv[player] < 16)) hidden[player] = 5;
			else hidden[player] = 0;
			ltime[player] = timeLimitAcea2[lv[player]-1];

			PlaySE(30);
			StopSE(32);
			if((lv[player] >= 11) || (lv[player]%2==1))
			bgfadesw = 1;

			if(fadelv[player] != 0) {
				ace_bgmchange[player]++;
				bgmlv = ace_bgmlist[ace_bgmchange[player] + 6];
				changeBGM(player);
			}
		} else if( (lc[player] > 100) && (!ending[player]) && ( anothermode[player] == 3)) {
			lc[player] = 0;
			// �A�i�U�[3
			lv[player]++;
			if(heboGB[player] == 2){
				if(lv[player]<19){
					sp[player] = lvTabletomoyohebo[lv[player]-1];
				}
			}else{
				if(lv[player]<=15){
					sp[player] = lvTableHeboGB[lv[player]-1];
					wait3[player] = wait3_HeboGB_tbl[lv[player]-1];
					waitt[player] = waitt_HeboGB_tbl[lv[player]-1];
				}
			}

			PlaySE(30);
			StopSE(32);
			bgfadesw = 1;
			if(fadelv[player] != 0) {
				ace_bgmchange[player]++;
				bgmlv = ace_bgmlist[ace_bgmchange[player] + 9];
				changeBGM(player);
			}
		}
	} else if(gameMode[player] == 9){
		if( (c_norm[player] >= lv[player] * 10) && (!ending[player]) && ( std_opt[player] == 2)) {
			lv[player]++;
			c_norm[player] = c_norm[player]-((lv[player]-1) * 10);
			if(repversw < 56)
				sp[player] = lvTableAce55[lv[player]-1];
			else
				sp[player] = lvTableAce[lv[player]-1];

			PlaySE(30);
			StopSE(32);
			bgfadesw = 1;
			timeOn[player] = 0;		// �^�C�����ꎞ�I�Ɏ~�߂�

			if(fadelv[player] != 0) {
				ace_bgmchange[player]++;
				bgmlv = ace_bgmlist[ace_bgmchange[player]];
				changeBGM(player);
			}
		} else if(( c_norm[player] >= lv[player] * 5) && (!ending[player]) && ( std_opt[player] == 3)) {
			//
			lv[player]++;
			c_norm[player] = c_norm[player]-((lv[player]-1) * 5);
			if(repversw < 56)
				sp[player] = lvTableAce55[lv[player]-1];
			else
				sp[player] = lvTableAce[lv[player]-1];

			PlaySE(30);
			StopSE(32);
			bgfadesw = 1;

			if(fadelv[player] != 0) {
				ace_bgmchange[player]++;
				bgmlv = ace_bgmlist[ace_bgmchange[player] + 3];
				changeBGM(player);
			}
		}
	} else if(gameMode[player]==10){
		if(lc[player] > 100) {
			lc[player] = lc[player] - 100;
			lv[player]++;
			recSectionTime(player);
			if(ori_opt[player]==0) {
				if(!ending[player]) {
					if(lv[player] < 101) sp[player] = lvTableBeg39[lv[player]];

					if(lv[player] % 10 == 0) {
						PlaySE(19);
						bgfadesw = 1;
						if(fadelv[player] != 0) {
							bgmlv++;
							changeBGM(player);
						}
					}
				}
			}else if((ori_opt[player]==1)||(ori_opt[player]==2)){
				if(!ending[player]) {
					if(lv[player] < 31) {
						sp[player] = orimasterlvTable[lv[player]];
					}
					if(ori_opt[player]==2)
						sp[player] = 1200;
					if(lv[player] % 6 == 0) {
						PlaySE(19);
						if((lv[player] >= 30) && (lv[player] <= 60)) {
							wait1[player] = wait1_orimaster_tbl[(lv[player] - 30) / 3];
							wait2[player] = wait2_orimaster_tbl[(lv[player] - 30) / 3];
							wait3[player] = wait3_orimaster_tbl[(lv[player] - 30) / 3];
							waitt[player] = waitt_orimaster_tbl[(lv[player] - 30) / 3];
						}
						bgfadesw = 1;
						if((fadelv[player] != 0) && (!ending[player])) {
							bgmlv++;
							changeBGM(player);
						}
					}
				}
			}else if(ori_opt[player]==3){
			sp[player] = 1200;
				if( (!ending[player]) && (lv[player] % 3 == 0) ) {
					PlaySE(19);
					if(lv[player] <= 30) {		// LV40�܂� #1.60c7j5 LV30�܂� #1.60c7j7
						wait1[player] = wait1_oridevil_tbl[lv[player] / 3];
						wait2[player] = wait2_oridevil_tbl[lv[player] / 3];
						wait3[player] = wait3_oridevil_tbl[lv[player] / 3];
						waitt[player] = waitt_oridevil_tbl[lv[player] / 3];

						if(grade[player] < 13)
							grade[player] = lv[player] / 3; // Grade�ݒ� #1.60c7j7
					}
					bgfadesw = 1;
						if((fadelv[player] != 0) && (!ending[player])) {
							bgmlv++;
							changeBGM(player);
						}
//					PlayWave(30);	// rankup.wav
				}
			}
		}
	} else{
		// ���̃��[�h�ł̓��x���A�b�v�������炷
		if(tc[player] / 10 > tr[player]) {
			tr[player]++;
			recSectionTime(player);

			if( (!ending[player]) && (tr[player] % 10 == 0) ) {
				PlaySE(19);
			}
		}
	}
}

/* ���b�v�^�C���ƃX�v���b�g�^�C���L�^�i#1.60c7j7 �`�j */
//LevelUp����Ɨ� #1.60c7j8
void recSectionTime(int player) {
	int tmp, max,temp;

	tmp = 0;

//	if(item_mode[player]||hebo_plus[player])return;//�A�C�e�����w�{�{��������L�^���Ȃ�
	// TGM
 	if(gameMode[player] !=6) {
		if((tr[player] % st_record_interval_tgm == 0) && (tr[player] <= 200) && (tc[player] != 0)) {
			split_time[tr[player] / st_record_interval_tgm - 1 + player * 100] = time[player];
			if(tr[player] / st_record_interval_tgm - 2 < 0) {
				lap_time[tr[player]/st_record_interval_tgm -1 +player*100] = split_time[tr[player]/st_record_interval_tgm -1 +player*100];
			} else {
				lap_time[tr[player]/st_record_interval_tgm -1 +player*200] =
				split_time[tr[player]/st_record_interval_tgm -1 +player*100] - split_time[tr[player]/st_record_interval_tgm -2 +player*100];
			}

			if(st_record_interval_tgm==10){
				//���x���X�g�b�v
				lvstop_time[tr[player]/st_record_interval_tgm -1 +player*20] = time99[player];
				//���̑�
				st_other[tr[player]/st_record_interval_tgm -1 +player*30] = st_bdowncnt[player];
			}
			st_bdowncnt[player] = 0;
			time99[player] = 0;

			// ST���_���l�� #1.60c7p7
			if( (gameMode[player] == 1) || (gameMode[player] == 2) )
				max = 10;
			else
				max = 13;

			if(tr[player] <= max*10) {
				tmp = ST_RankingCheck( player, gameMode[player], (tr[player]/st_record_interval_tgm -1), enable_grade[player] );
				if(tmp == 4){
					stp[player]++;
				} else if(tmp == 3) {
					stg[player]++;
					stp_point[player] = stp_point[player] + 6;
					st_new[(tr[player]/st_record_interval_tgm -1) + player * 20] = 5;
				} else if(tmp == 2) {
					sts[player]++;
					stp_point[player] = stp_point[player] + 2;
					st_new[(tr[player]/st_record_interval_tgm -1) + player * 20] = 6;
				} else if(tmp == 1) {
					stb[player]++;
					stp_point[player] = stp_point[player] + 1;
					st_new[(tr[player]/st_record_interval_tgm -1) + player * 20] = 2;
				}
				if(stp_point[player] >= 20)tmp = 4;
			}
		}
	}

	if((medaltype != 2)&&(gameMode[player] != 0) &&(gameMode[player] != 4) && (gameMode[player] <= 5) ) {
		if(medaltype==0){
			if(tmp > 0){//�Z�N�V�������Ƃɂ�
				if( tmp > medal_st[player] ) {
					medal_st[player] = tmp;
				}
				PlaySE(39);
				objectCreate2(player, 11,233 + 31 * player - 96 * maxPlay, 122,1,0,0,tmp - 1);
			}
		}else if(medaltype==1){
			if( tmp > medal_st[player] ) {//�F���X�V���Ȃ��Ƃ��Ȃ�
				medal_st[player] = tmp;
				PlaySE(39);
				objectCreate2(player, 11,233 + 31 * player - 96 * maxPlay, 122,1,0,0,medal_st[player] - 1);
			}
		}
	}
}
/* �X�e�[�W�N���A�^�C���L�^�j */
void recStageTime(int player) {
	if(stage[player] > 26) return;
	//TOMOYO�X�e�[�W�^�C��ctime[
	stage_time[stage[player] + player * 200] = ctime[player];
	if(st_record_interval_tgm==10){
		st_other[stage[player] +player*30] = st_bdowncnt[player];//�ڒ���
		st_bdowncnt[player] = 0;//���Z�b�g
	}
}
/* �X�e�[�W�N���A�ł��Ȃ��^�C���L�^�j */
void recFaultTime(int player) {
	if(stage[player] > 26) return;
	//TOMOYO�X�e�[�W�^�C��ctime[
	stage_time[stage[player] + player * 200] = 5400;
	if(st_record_interval_tgm==10){
		st_other[stage[player] +player*30] = 99;//�ڒ���
	}
	st_bdowncnt[player] = 0;
}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.07 - �Q�[���I�[�o�[���o
//������������������������������������������������������������������������������
void statGameOver(int player) {
	int		i, j, block, c;

	// �����ꐧ����������#1.60c7f9
	down_flag[player] = 0;
	up_flag[player] = 0;

	// ROT�����[�Ŏ��񂾂Ƃ�
	if((gameMode[player] == 9) && (relaymode[player]) && (!ending[player])){
		stat[player] = 15;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 1;	//�������o
		return;
	}

	// PRACTICE�Ŏ��񂾂Ƃ�
	if(gameMode[player] == 5) {
		flag = -1;
		return;
	}
	// �ΐ�Ŏ��񂾂Ƃ�
	if(gameMode[player] == 4) {
		flag = -3;
		winr = 0;
		winc = 0;
		winu = - 24;
		wink = 0;
		if(IsPlayWave(65)){
			StopWave(65);
			PlayWave(50 +bgmlv);
		}
		if(stat[1 - player] != 7){
			vs_points[1 - player]++;
			PlaySE(41);
			objectCreate(1 - player, 14, 230 + 20*((hnext[1 - player] >= 4) && (1 - player == 0)) + 44 * (1 - player) - 96,26 + (12 * vs_points[1 - player]),0,0,13,0);
		}
		if(vs_points[1 - player] >= winpoint){
			flag = - 2;
			if(!demo) vs_win[1 - player]++;	// #1.60c7n1
		}
		return;
	}

	//�x���������Ă�����~�߂�
	StopSE(40);
	StopSE(32);

	if((gameMode[player]==6)&&(tomoyo_opt[player]==0)){
		recFaultTime(player);//�X�e�[�WNOT�����L���O�p�^�C��
	}

	statc[player * 10 + 1]++;

	hiddeny[player] = 22;

	if( statc[player * 10] > 22 ) {
		if(statc[player * 10 + 1] == 141) {
			//PlayWave(8);

			if( (stat[1 - player] == 0) || (stat[1 - player] == 10) ) {
				if(wavebgm) {
					StopAllBGM();
				} else {
					if(IsPlayMIDI()) StopMIDI();
				}
				statc[player * 10 + 2] = 0;
			} else {
				//statc[player * 10 + 2] = 1;		//2�l�����v���C�t���OON
			}
		}

		tlv[player] = lv[player] - slv[player];

		if(statc[player * 10 + 1] >= 60) {
			if((gameMode[player] == 8)||(cpu_flag[player])){
				// MISSION�p
				stat[player] = 14;//�Q�[���I�[�o�[
			} else if(gameMode[player] == 6) {
				// TOMOYO�p #1.60c7l6
				stat[player] = 20;//�R���e�j���[
			} else {
				stat[player] = 11;// �l�[���G���g���[
			}
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 3] = 0;
			statc[player * 10 + 4] = 0;
			statc[player * 10 + 5] = 0;
			// CPU���� #1.60c7o3
			cpu_flag[player] = 0;
			if(ending[player] == 2){
			if(((gameMode[player] == 0) && (novice_mode[player])) || ((gameMode[player] == 3) && (devil_minus[player]))){
				stat[player] = 22;
				statc[player * 10] = 3740 - edrec[player];
				statc[player * 10 + 1] = 13;
			}
			}
			if(examination[player]){
				stat[player] = 30;	//�i�ʎ�����
				statc[player * 10 + 1] = 1;		//���ʔ��\��
			}
		}

		return;
	}

	if(statc[player * 10] < 0){
		statc[player * 10]++;
		return;
	}

	if(statc[player * 10 + 1] > 4) {
		block = statc[player * 10];
		if(block == 0) {
			if((deadtype) || (heboGB[player])) PlaySE(7);	// ����������͉��͂Ȃ� #1.60c7h3
		}

		statc[player * 10 + 1] = 0;
		for(j = 0; j < 10; j++) {
			// �u���b�N�̐F�ύX�ŁALV1000�u���b�N�͂ق��̃u���b�N�Ƃ͕ʂ̂��̂ɂ���B #1.60c7d
			// ���S�A�j����I�ׂ�悤�ɂ���#1.60c7h3
			if((deadtype) || (heboGB[player])) {
				if(block <= fldsizeh[player]){
					c = fld[j + block * 10 + player * 220];
					if(c != 0) {
						if((c >= 9) || (c < 0))
							fld[j + block * 10 + player * 220] = 10;
						else
							fld[j + block * 10 + player * 220] = 1;
					}
				}
			} else {
				// �X�[�b�Ə����Ă������o #1.60c7k6
				// +=�̂悤�ȑ�����Z�q�͂����˂��d�dcond ? true : false���ʖځd�d
				if(21 - block >= 0) {
					c = fldt[j + (210 - (block * 10)) + player * 220];
					if((c <= -1) || (c > 8)) c = 8;
					fldt[j + (210 - (block * 10)) + player * 220] = c - 4;
				}
				if(block > 0) {
					c = fldt[j + (210 - (block - 1) * 10) + player * 220];
					fldt[j + (210 - (block - 1) * 10) + player * 220] = c - 4;
				}
			}
		}
		statc[player * 10]++;
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.08 - �u���b�N����
//������������������������������������������������������������������������������
// Big�Ή� wait�̈����𒉎��ɂ���#1.60c7 �o�O��� #1.60c7b
void statEraseBlock(int player) {
	int		i, j, k, l, x, y, ty, lines, wait, fldtmp, hardblock,hardblock2,tmp_s[2];
	hardblock = 0;
	hardblock2 = 0;

	if(repversw >= 17) padRepeat(player);	// #1.60c7s6

	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	// �����`����
	if(squaremode[player]) {
		tmp_s[player] = makeSquare(player);
		if( (((mission_type[c_mission] == 40) && (tmp_s[player] >= 1)) || ((mission_type[c_mission] == 41) && (tmp_s[player] >= 2))&& (!ending[player])) ){
			missionNormUp(2);
		}
	}

	ty = 0;
	if((gameMode[player] != 10) || (rots[player] == 8)) wait = 1;
	else wait = (wait2[player] > 12) * 9 + 1;

	hiddenProc(player);
//	UpLineBlockJudge(player);

	// ���𗣂��Ă���ꍇ�A�����ꐧ������#1.60c7n6
	if((!getPressState(player, 1-(1* ((isUDreverse[player]) && (repversw>=44)) ))) && (repversw >= 10)) down_flag[player] = 0;
	if(!getPressState(player, 0+(1*((isUDreverse[player]) && (repversw>=44)) ))) up_flag[player] = 0;

	if(statc[player * 10] < wait) {
		y = fldsizeh[player];
		lines = 0;

		for(i = 0; i <= fldsizeh[player]; i++) {
			if(erase[i + player * 22] != 0) {
				if(erase[i + player * 22] != 2) lines++;	// 2�̎��͑ΐ��DEFENCE�ŏ����郉�C��
				y--;
				if(wait != 1) {//ORIGINAL���[�h
					x = statc[player * 10];

					if(breakeffect) {
						objectCreate(player, 1, (x + 15 + 24 * player - 12 * maxPlay) * 8, (i + 3) * 8, (x - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + lines * 250, fld[x + i * 10 + player * 220], 100);
					}
					fld[x + i * 10 + player * 220] = 0;
					fldt[x + i * 10 + player * 220] = 0;	// #1.60c7j5

				} else {
					if(erase[i + player * 22] == 2)
						objectCreate(player, 13, (15 + 24 * player - 12 * maxPlay) * 8, (i + 3) * 8, 0, 0, 0, 0);
					for(x = 0; x < fldsizew[player]; x++) { // #1.60c7b
						fldtmp = fld[x + i * fldsizew[player] + player * 220];

						if(breakeffect) {
							if((erase[i + player * 22] == 1) && (fldi[x + i * 10 + player * 220] != fldihardno)){
								// super_breakeffect��1�̏ꍇ�͑S�Ẵu���b�N�ɔj��G�t�F�N�g��K�p���� #1.60c7m9
								// �v���`�i�u���b�N��������ꍇ�͖�����
								if( (fld[x + i * fldsizew[player] + player * 220] >= 11) || (super_breakeffect == 1) ||
									( ((breaktype == 0)||((breaktype == 3)&&(gameMode[player] == 0))) && (super_breakeffect == 2) ) ||
									((heboGB[player] != 0) && (super_breakeffect == 2)) ) {
									objectCreate(player, 1, (x + 15 + 24 * player - 12 * maxPlay) * 8, (i + 3) * 8, (x - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + lines * 250, fld[x + i * 10 + player * 220], 100);
								} else if(lines & 1) {
									if((x & 1) == 1) {
										objectCreate(player, 1 + (wait1[player] < 6) * 2, (x + 15 + 24 * player - 12 * maxPlay) * 8 + 4, (i + 3) * 8, (x - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + lines * 250, fld[x + i * 10 + player * 220], 100);
									}
								} else {
									if((x & 1) == 0) {
										objectCreate(player, 1 + (wait1[player] < 6) * 2, (x + 15 + 24 * player - 12 * maxPlay) * 8 + 4, (i + 3) * 8, (x - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + lines * 250, fld[x + i * 10 + player * 220], 100);
									}
								}
								if(fldi[x + i * fldsizew[player] + player * 220])//�A�C�e����������Ƃ��̔����G�t�F�N�g
									if(fldi[x + i * 10 + player * 220] < fldihardno)
										objectCreate(player, 12, (x + 15 + 24 * player - 12 * maxPlay) * 8, (i + 3) * 8, 0, 0, 0, 100);
							}
						}

						// ������u���b�N���v���`�i�u���b�N�Ȃ玞�ԉ��� #1.60c7l5
						if( (fld[x + i * fldsizew[player] + player * 220] >= 11) && (gameMode[player] == 6)) {
							if(stage[player] < 100) ltime[player] = ltime[player] + 60;
							else sc[player] = sc[player] + 100;
							platinaerase_cnt[player] = platinaerase_cnt[player] + 10;
						}

						// �A�C�e���������� #1.60c7n1
						if(fldi[x + i * fldsizew[player] + player * 220] ) {
							if(fldi[x + i * 10 + player * 220] == fldihardno){// �n�[�h�u���b�N������
								hardblock = 1;
								hardblock2 = 1;
							//	erase[i + player * 22] = 0;	//�����L�����Z��
							}else if(fldi[x + i * 10 + player * 220] == fldisno){	// �V���o�[�X�N�E�F�A
								li[player] = li[player] +  5/4;
							}else if(fldi[x + i * 10 + player * 220] == fldigsno){	// �S�[���f���X�N�E�F�A
								li[player] = li[player] +  5/2;
							}else if(fldi[x + i * 10 + player * 220] < fldihardno){	// �n�[�h�u���b�N�ȉ����A�C�e��
								item_waiting[player] = fldi[x + i * 10 + player * 220];

							}
						}

						if(!hardblock){
							fld[x + i * 10 + player * 220] = 0;
							fldt[x + i * 10 + player * 220] = 0;	// #1.60c7j5
							grayoutLackedBlock(player, flds[x + i * 10 + player * 220]);
							flds[x + i * 10 + player * 220] = 0;
						}
						hardblock = 0;
						fldi[x + i * fldsizew[player] + player * 220] = 0;	// #1.60c7n1
					}
					if(hardblock2) erase[i + player * 22] = 0;	//�����L�����Z��
					hardblock2 = 0;
					if(ty == 0) ty = i * (IsBig[player] + 1);

					tomoyoCheckStageClear(player);	//�X�e�[�W�N���A���� #1.60c7l8
					if((item[player] != 0) && (item[player] != fldihardno) && (repversw >= 55))
						item_waiting[player] = item[player];
				}
			}
		}/* for(i = 0; i <= fldsizeh[player]; i++) */

//		statc[player * 10]++;

		// �����郉�C�������������ꍇ
		if(y == fldsizeh[player]) {
			stat[player] = 6;
			statc[player * 10] = wait1[player];
			statc[player * 10 + 1] = 15;
			cmbpts[player] = 0;
			combo[player] = 0;
			hebocombo[player] = 0;
			combo2[player] = 0;
			hanabi_combo[player] = 0;
			scrate[player] = 100;//ori���[�h�p�̃X�R�A���[�g
			pinchCheck(player);
			pinchCheck2(player);
		// 1���C���ȏ�������ꍇ
		} else if(statc[player * 10] == 0) {
			// BIG���[�h�̏ꍇ�A�������C������2�Ŋ��� #1.60c7m6
			if( (IsBig[player]) && (BigMove[player] == 1) && (lines >= 2) ) lines = lines / 2;
			if((tspin_flag[player] == 2) && (lines > 3) && (repversw >= 59)) lines = 3;

			if((lines < 4) && (tspin_flag[player] < 2)){	//Back to Back�I��
				b_to_b_flag[player]=0;
			}

			// �ԉ�
			if( ((gameMode[player] == 0)||((gameMode[player] == 10)&&(ori_opt[player]==0)))
			 && (!no_hanabi) && (!hanabi_flag)&&(!novice_mode[player]) ) {
				if((lines >= 2)||((tspin_flag[player]!= 0)&&(lines != 0))) {//
					if((tspin_flag[player] != 0)&&(lines != 0)){		//T�X�s��
						hanabi_combo[player] = ((hanabi_combo[player] + lines) * 5)/2 ;
					}

					i = lines + hanabi_combo[player] + combo2[player];
					hanabi_combo[player] = i;		// �O�ɑł��グ�������o���Ă���

					if(ending[player] == 2) i = i * 2;		// ���[������2�{
					else if(tc[player] >= 150)   i = i + (i/2);		// LV150�ȍ~��1.5�{

					hanabi_total[player] = hanabi_total[player] + i;
					hanabi_waiting[player] = hanabi_waiting[player] + i;


				} else {
					// T-spin�Ȃ��͈������̓R���{���ł��ꔭ
					hanabi_total[player]++;
					hanabi_waiting[player]++;
				}

				hanabi_frame[player] = 30;
				hanabi_flag = 1;
			}

			if( lines >= 5 )
				PlaySE(10 + 4);		// 5���C���ȏ�̏ꍇ��4���C���̉����o��
			else
				PlaySE(10 + lines);

			if(lines >= 4) {
				if((!ending[player]) &&(medaltype != 2)&&(gameMode[player] != 0) &&(gameMode[player] != 4) && (gameMode[player] <= 5) ) {
					skill[player]++;
					if(gameMode[player] == 3) {
						if( ( (skill[player] == 7) && (medal_sk[player] == 0) )
						 || ( (skill[player] == 13) && (medal_sk[player] == 1) )
						 || ( (skill[player] == 18) && (medal_sk[player] == 2) )
						 || ( (skill[player] == 25) && (medal_sk[player] == 3) ))
						 {
							PlaySE(39);
							medal_sk[player]++;
							objectCreate2(player, 11,208 + 81 * player - 96 * maxPlay,135,2,0,0,medal_sk[player] - 1);
						}
					} else {
						skillg[player]++;
						if( ( (skill[player] == 15) && (medal_sk[player] == 0) )
						 || ( (skill[player] == 27) && (medal_sk[player] == 1) )
						 || ( (skill[player] == 37) && (medal_sk[player] == 2) )
						 || ( (skill[player] == 44) && (medal_sk[player] == 3) ))
						 {
							PlaySE(39);
							medal_sk[player]++;
							objectCreate2(player, 11,208 + 81 * player - 96 * maxPlay, 135,2,0,0,medal_sk[player] - 1);
						}
					}
				}
			}

			if(comboM[player] <= combo2[player]){//�R���{���傫������ێ�
				comboM[player] = combo2[player];

				// ���_���l����
				if( (lines >= 2) && (!ending[player]) &&(medaltype != 2)&&(gameMode[player] != 0) &&(gameMode[player] != 4) && (gameMode[player] <= 5) ) {
					// #1.60c7m9
					if( ( (comboM[player] == 3) && (medal_co[player] == 0) )
					 || ( (comboM[player] == 4) && (medal_co[player] == 1) )
					 || ( (comboM[player] == 6) && (medal_co[player] == 2) ) )
					{
						PlaySE(39);
						medal_co[player]++;
						objectCreate2(player, 11,233 + 31 * player - 96 * maxPlay, 148,5,0,0,medal_co[player] - 1);
					}
				}
			}
			if(hebocombo[player]) PlaySE(18);
			combo[player]++;
			cmbpts[player] = cmbpts[player] + (lines * 2 - 2);
			if(lines >= 2) {
				// 1���C���������܂܂Ȃ��R���{ #1.60c7m8
				combo2[player]++;
			}
			if((combo2[player] >= 3) && (ending[player] != 2) && (lines >= 2) && (gameMode[player] <= 4))
				PlaySE(18);
			if((tc[player] < 500)&&(combo2[player] >= 4)&&(lines >= 2)){
				skillg[player]++;	//�|�C���g���グ�邽�߂̔{��
			}else if((tc[player] >= 500)&&(combo2[player] >= 3)&&(lines >= 2)){
				skillg[player]++;
			}
			if((showcombo != 0) || (gameMode[player] == 10)){
				objectComboClearPl(player);
				if(lines >= 4)
					objectCreate((b_to_b_flag[player] != 0) + (tspin_flag[player] == 2), 2, 156 + player * 120 - 96 * maxPlay,
					 100 + 32 * player, - 900 * (player * 2 - 1), - 600, 4, combo2[player] * isComboMode(player));
				else
					objectCreate((b_to_b_flag[player] != 0) + (tspin_flag[player] == 2), 2, 156 + player * 120 - 96 * maxPlay,
					 100 + 32 * player, - 900 * (player * 2 - 1), - 600, lines, combo2[player] * isComboMode(player));
			}
			// T-SPIN�l�� #1.60c7n6
			// �G���f�B���O�ł��l���ł��� #1.60c7n8
			if(tspin_flag[player]) {
				PlaySE(34);
				last_tspin[player]=lines * (tspin_flag[player] == 2);
				tspin_c[player] = 60 * tspin_flag[player];
			}
			if(b_to_b_flag[player])
					b_to_b_c[player] = 120;
			// �X�R�A�v�Z���u���C�������������u�ԁv�ɕύX
			if((gameMode[player] != 10) && ((!ending[player])||(gameMode[player]==5))) {
				calcScore(player,lines);
			}
			//���[����������J�E���g
			if((ending[player] == 2)&&(enable_grade[player] >= 2)){
				endlines[player] = endlines[player] + lines;
			}
			//Back to Back �̊J�n����(�����SE�I��)
			//�I�������1���C���ȏ�������u�ԁi5179�s�ڂ�����j��
			if(lines >= 4){
				if(b_to_b_flag[player] == 0){
					if(b2bcheck)
						b_to_b_flag[player]=1; //Back to Back����J�n
					PlaySE(17);
				}
				else{ //B to B Heboris
					b_to_b_flag[player]=1;
					PlaySE(18);
				}
			}
			if((tspin_flag[player] == 2) && (b2bcheck == 1) && (lines >= 1)){
				PlaySE(48);
				if(b_to_b_flag[player] == 0){
					PlaySE(17);
					b_to_b_flag[player]=lines+1; //Back to Back����J�n
				}
				else{ //B to B T-Spin erase
					PlaySE(18);
					b_to_b_flag[player]=lines+1;
				}
			}
			if(ismiss[player]) PlaySE(45);
			//�^�[�Q�b�g�ŃX�e�[�W�N���A��ɒn�`���c���Ă��܂��o�O���C��(�Ƃ肠�������}���u) #C7T9.6EX
			if((gameMode[player]==8) && (mission_type[c_mission] == 6) && (stat[0] == 25)) return;
		}
	}

	if(statc[player * 10] >= wait2[player] + (repversw < 27)) {
		y = fldsizeh[player];
		lines = 0;

		for(i = 0; i <= fldsizeh[player]; i++) {
			if(erase[y + player * 22]) {
				for(k = y; k > 0; k--) {
					for(l = 0; l < fldsizew[player]; l++) {
						fld[l + k * fldsizew[player] + player * 220] = fld[l + (k - 1) * fldsizew[player] + player * 220];
						// #1.60c7j5
						fldt[l + k * fldsizew[player] + player * 220] = fldt[l + (k - 1) * fldsizew[player] + player * 220];
						// #1.60c7n1
						fldi[l + k * fldsizew[player] + player * 220] = fldi[l + (k - 1) * fldsizew[player] + player * 220];
						flds[l + k * fldsizew[player] + player * 220] = flds[l + (k - 1) * fldsizew[player] + player * 220];

					}
					erase[k + player * 22] = erase[(k - 1) + player * 22];
				}
				for(l = 0; l < fldsizew[player]; l++) {
					fld[l + player * 220] = 0;
					fldt[l + player * 220] = 0;		// #1.60c7j5
					fldi[l + player * 220] = 0;		// #1.60c7n1
					flds[l + player * 220] = 0;

				}
				erase[player * 22] = 0;
				lines++;
			} else {
				y--;
			}
		}
		if(gameMode[player] == 10) {
			calcScore(player,lines);
		}

		PlaySE(2);

		erasecnt[player]++;		//�����񐔃J�E���g #C7T9.6EX
		if(ismiss[player]){
			ofs_x[player] = 0;
			ofs_x2[player] = 0;
		}
		// �A�C�e������
		eraseItem(player, item_waiting[player]);

		//�G���f�B���O�˓��� #1.60c7j9
		if( (ending[player] == 1) || (ending[player] == 4) ||(ending[player] >= 6)) PlaySE(28);
		stat[player] = 6;
		statc[player * 10] = wait1[player];
		statc[player * 10 + 1] = 15;
		if((gameMode[player] == 9) && (relaymode[player]) || (gameMode[player] == 5)) StopSE(28);

		pinchCheck(player);
		pinchCheck2(player);
	} else {
		//D.R.S��ARE�X�L�b�v
		if( ((rots[player] == 8) && (harddrop[player])) &&
		((getPushState(player, 0)) || (getPushState(player, 1)) || (getPushState(player, 2)) ||
		 (getPushState(player, 3)) || (getPushState(player, 4)) || (getPushState(player, 5)) ||
		 (getPushState(player, 6)) || (getPushState(player, 7))) ){
		 	statc[player * 10] = wait2[player];
		 	are_skipflag[player] = 1;
	 	}
		if(ismiss[player]){
			y = Rand(6);
			ofs_x[player] = y - (6 / 2);
			ofs_x2[player] = ofs_x[player];
		}
		statc[player * 10]++;
	}
	if((repversw >= 55) && (ending[player] == 4) && (gameMode[player] != 8)){
		PlaySE(18);
		stat[player] = 13;
		for(i = 0; i < 10; i++) statc[i + player * 10] = 0;
		return;
	}
}
// �j�Ѓu���b�N����
void grayoutLackedBlock(int player, int no) {
	int i, j;

	if((gameMode[player] < 8) && (gameMode[player] != 5)) return;
	if(no <= 0) return;

	for(j = 0; j < 22; j++) {
		for(i = 0; i < fldsizew[player]; i++) {
			if((fld[i + j * 10 + player * 220] >= 1)&&  (flds[i + j * 10 + player * 220] == no)) {
				flds[i + j * 10 + player * 220] = 0;	// �j�Ђɂ���
				if(squaremode[player]) fld[i + j * 10 + player * 220] = 1;	// �D�F�u���b�N�ɂ���
			}
		}
	}
}
// �X�N�E�F�A�ł�3�R�[�i�[T-SPIN���p�@�S�Ĕj�Љ�
void grayoutAllBlock(int player) {
	int i, j;

	if((gameMode[player] < 8) && (gameMode[player] != 5)) return;

	for(j = 0; j < 22; j++) {
		for(i = 0; i < fldsizew[player]; i++) {
			if(fld[i + j * 10 + player * 220] >= 1) {
				flds[i + j * 10 + player * 220] = 0;	// �j�Ђɂ���
				if((fldi[i + j * 10 + player * 220] == fldigsno) || (fldi[i + j * 10 + player * 220] == fldisno)){
					fldi[i + j * 10 + player * 220] = 0;	//�����`����
				}
				if(squaremode[player]) fld[i + j * 10 + player * 220] = 1;	// �D�F�u���b�N�ɂ���
			}
		}
	}
}
/// �����`���ł��邩�`�F�b�N
// player�F�v���C���[�ԍ� x:�n�_��X���W y:�n�_��Y���W gold:1�̏ꍇ�͈��ނ̃u���b�N�݂̂Ő����`���ł���
int checkSquare(int player, int x, int y, int gold) {
	int i, j, color;

	// �n�_�̐F���擾
	color = getFieldBlock(player, x, y,0);

	// �󔒂������玸�s
	if(color <= 0) return 0;

	// ������܃u���b�N�⏉���z�u��������A�j�Ђ�������A���ɐ����`�������玸�s
	if(getFieldBlockS(player, x, y) <= 0) return 0;

	// �F��2��ވȏ�Ȃ玸�s�igold != 0�̂Ƃ��̂݁j
	if(gold) {
		for(i = 0; i < 4; i++) {
			for(j = 0; j < 4; j++) {
				if(getFieldBlock(player, x + i, y + j,0) != color) return 0;
			}
		}
	}

	// �j�Ђ�����Ύ��s
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			if(getFieldBlockS(player, x + i, y + j) <= 0) return 0;
		}
	}

	// �n�_����Ƀu���b�N���q�����Ă��玸�s
	for(i = 0; i < 4; i++) {
		if(getFieldBlockS(player, x + i, y    ) == getFieldBlockS(player, x + i, y - 1)) return 0;
	}

	// �����`�̒��艺�Ƀu���b�N���q�����Ă��玸�s
	for(i = 0; i < 4; i++) {
		if(getFieldBlockS(player, x + i, y + 3) == getFieldBlockS(player, x + i, y + 4)) return 0;
	}

	// �n�_��荶�Ƀu���b�N���q�����Ă��玸�s
	for(j = 0; j < 4; j++) {
		if(getFieldBlockS(player, x    , y + j) == getFieldBlockS(player, x - 1, y + j)) return 0;
	}

	// �����`�̒[���E�Ƀu���b�N���q�����Ă��玸�s
	for(j = 0; j < 4; j++) {
		if(getFieldBlockS(player, x + 3, y + j) == getFieldBlockS(player, x + 4, y + j)) return 0;
	}

	// ����
	return 1;
}

// �����`�����
int makeSquare(int player) {
	int i, j, k, l, result;
	result = 0;

	for(i = 0; i < 22 - 3; i++) {
		for(j = 0; j < 10 - 3; j++) {
			if(checkSquare(player, j, i, 1)) {
				// ���F
				if(result < 2) result = 2;
				PlaySE(18);
				squarecnt[player]=squarecnt[player]+2;
				// �}�[�N��t����
				for(k = 0; k < 4; k++) {
					for(l = 0; l < 4; l++) {
						fldi[(k + j) + (l + i) * 10 + player * 220] = fldigsno;//�萔
						flds[(k + j) + (l + i) * 10 + player * 220] = -1;
					}
				}
			} else if(checkSquare(player, j, i, 0)) {
				// ��F
				if(result < 1) result = 1;
				PlaySE(17);
				squarecnt[player]++;
				// �}�[�N��t����
				for(k = 0; k < 4; k++) {
					for(l = 0; l < 4; l++) {
						fldi[(k + j) + (l + i) * 10 + player * 220] = fldisno;
						flds[(k + j) + (l + i) * 10 + player * 220] = -1;
					}
				}
			}
		} /* for(j = 0; j < 6; j++) */
	} /* for(i = 0; i < 18; i++) */

	return result;
}
// �����`�p
int getFieldBlockS(int player, int bx1, int by1) {
	if((bx1 < 0) || (bx1 > 9) || (by1 < 0) || (by1 > 21)) return 0;

	return flds[bx1 + by1 * 10 + player * 220];
}

int isComboMode(int player){
	if((gameMode[player] <= 5) || (gameMode[player] == 10)) return 1;
	else if(gameMode[player] == 8) return (mission_type[c_mission] == 27);
	else return 0;
}
/* �X�R�A�v�Z #1.60c7j9 */
void calcScore(int player, int lines) {
	int		i, j, k, l, x, y, bo[2], bai, all[2], tcbuf = 0,btmup,top;

		/* �S�������� */
		all[player] = 1;
		// �S�����`�F�b�N �ŉ��i�����łȂ��S������#1.60c7g7
		for(y = fldsizeh[player]; y > 0; y--) {
			// ���������i�̓`�F�b�N���Ȃ��i���쑬�x����H�j#1.60c7o8
			if(erase[y + player * 22] == 2){	//VS��DEFENCE�ŏ����郉�C���̓m�[�J�E���g
				all[player] = 0;
				break;
			}else if(!erase[y + player * 22]) {
				for(x = 0; x < fldsizew[player]; x++) {
					if(fld[x + fldsizew[player] *y + player * 220]) {
						all[player] = 0;
						break;
					}
				}
			}
		}
		// �S�������o
		if(all[player]) {
			objectCreate2(player, 4, player, 30, 0, 0, 0, 0);
			if((gameMode[player] == 8) && (mission_type[c_mission] == 26)){
				missionNormUp(1);
				return;
			}

			// heboris.ini�őS�����G�t�F�N�g�𖳌��ɂł���悤�ɂ���#1.60c7f6
			if(bravo) {
				for(i = -3; i <= 3; i++)
					for(j = 0; j < 5; j++)
						objectCreate(player, 5, 62 + player * 196, 64 + j * 30 + (i % 2) * 15, 180 * i, - 2000 + j * 200, Rand(7) + 1, 1);
			}
		}
		if((squaremode[player])&&(tspin_flag[player] == 2)){//�{���͕����t���[�t�H���炵�����ǂ킩��Ȃ�����S��
				grayoutAllBlock(player);	// �S�ĊD�F��
				for(i = 0;i < 22;i++) erase[player * 22 + i] = 0;
				stat[player] = 32;
				statc[player * 10 + 0] = 0;
				statc[player * 10 + 1] = 4;		// �X�e�[�^�X
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;
				statc[player * 10 + 4] = 0;
		}
	if(gameMode[player] == 10 ) {
		/* ���C�����Z */
			li[player] = li[player] + lines;

		if ( lines == 1 ){
			bo[player] = 1 * scrate[player];
			scrate[player] = scrate[player] + 5;
		}

		if ( lines == 2 ){
			bo[player] = 4 * scrate[player];
			scrate[player] = scrate[player] + 10;
		}

		if ( lines == 3 ){
			bo[player] = 9 * scrate[player];
			scrate[player] = scrate[player] + 30;
		}

		if ( lines >= 4 ){
			bo[player] =  20 * scrate[player];
			scrate[player] = scrate[player] + 50;
		}

					/* �X�R�A�v�Z */
			if(((rots[player] == 3) || (rots[player] == 4) || (rots[player] == 5) || (rots[player] == 6)) && (repversw >= 20))
				qdrop[player] = qdrop[player] / 2;		//�����������x�̒x�����[���́A�h���b�v�{�[�i�X����
			if(((rots[player] == 7) || (rots[player] == 8)) && (repversw >= 45))
				qdrop[player] = qdrop[player] + (qdrop[player] / 2);		//�����������x���������[���́A�h���b�v�{�[�i�X5����

			bai = 1 + ( sp[player] >= 20 ) + ( sp[player] >= 60 ) + ( sp[player] >= 240 ) + ( sp[player] >= 600 );
			if(all[player])	bai = bai * 10;
			sc[player] = sc[player] + bo[player]*bai + sdrop[player] + qdrop[player];
		checkFadeout(player);
	}else if(( gameMode[player] == 7 )||(gameMode[player] == 9)) {
		/* ���C�����Z */
			li[player] = li[player] + lines;
		if((gameMode[player]==7)&&(anothermode[player]==3)){
					/* �X�R�A�v�Z */
			if(((rots[player] == 3) || (rots[player] == 4) || (rots[player] == 5) || (rots[player] == 6)) && (repversw >= 20))
				qdrop[player] = qdrop[player] / 2;		//�����������x�̒x�����[���́A�h���b�v�{�[�i�X����
			if(((rots[player] == 7) || (rots[player] == 8)) && (repversw >= 45))
				qdrop[player] = qdrop[player] + (qdrop[player] / 2);		//�����������x���������[���́A�h���b�v�{�[�i�X5����
			sc[player]=sc[player] + sdrop[player] + qdrop[player];
			if(lines==1)bo[player] = 100;
			else if(lines==2)bo[player] = 400;
			else if(lines==3)bo[player] = 900;
			else if(lines>=4)bo[player] = 2000;

			if(lv[player]<8){
			bai = (lv[player]+2)/2;
			}else{
			bai = 5;
			}
			if(all[player])	bai = bai * 10;
			sc[player] = sc[player] + bo[player]*bai;
		}
		if(gameMode[player]==9){
			bai=1;//�����{��
			if(tspin_flag[player]){
				bo[player] = 4 * ( last_tspin[player] + 1 );
			}else if(!tspin_flag[player]){
				if(lines==1)bo[player] = 1;
				else if(lines==2)bo[player] = 3;
				else if(lines==3)bo[player] = 5;
				else if(lines>=4)bo[player] = 8;
			}
			//Back to Back Heboris��1.5�{
			if((b_to_b_flag[player] != 0) && (lines >= 4)){
				bai = 3*bai ;
			}
			if(lv[player]==0)lv[player]=sp[player]/100;
			c_norm[player] = c_norm[player] + bo[player] * bai/(1+(b_to_b_flag[player]!=0)) ;//goal�Ƀ��x���A�b�v�p�m���}������
			sc[player] = sc[player] + bo[player] * bai/(1+(b_to_b_flag[player]!=0)) *100*lv[player];//���_
		}
		checkFadeout(player);
	} else if( (gameMode[player] == 8) && (mission_type[c_mission] != 26)&& (mission_type[c_mission] != 40)&& (mission_type[c_mission] != 41)) {
		missionNormUp(lines);
		return;
	} else if( gameMode[player] != 6 ) {
		if( gameMode[player] != 4 ) {
			/* �X�R�A�v�Z */
			if(((rots[player] == 3) || (rots[player] == 4) || (rots[player] == 5) || (rots[player] == 6)) && (repversw >= 20))
				qdrop[player] = qdrop[player] / 2;		//�����������x�̒x�����[���́A�h���b�v�{�[�i�X����
			if(((rots[player] == 7) || (rots[player] == 8)) && (repversw >= 45))
				qdrop[player] = qdrop[player] + (qdrop[player] / 2);		//�����������x���������[���́A�h���b�v�{�[�i�X5����
			bo[player] = (tc[player] + lines) / 4 + sdrop[player] + qdrop[player];
			bai = (lines * 2 - 1 + cmbpts[player] - (lines * 2 - 2)) * lines;
			// �S����������4�{
			if(all[player]) {
				bai = bai * 4;
				if(  (!ending[player]) &&(medaltype != 2)&&(gameMode[player] != 0) &&(gameMode[player] != 4) && (gameMode[player] <= 5) ) {
					allclear[player]++;		// �S�����񐔑��� #1.60c7k4
					if( ( (allclear[player] == 1) && (medal_ac[player] == 0) )
			 		|| ( (allclear[player] == 2) && (medal_ac[player] == 1) )
					|| ( (allclear[player] == 3) && (medal_ac[player] == 2) )
					|| ( (allclear[player] == 4) && (medal_ac[player] == 3) ))
			 		{
			 			PlaySE(39);
						medal_ac[player]++;
						objectCreate2(player, 11,208 + 81 * player - 96 * maxPlay, 122,0,0,0,medal_ac[player] - 1);
					}
				}
			}
			//Back to Back Heboris��1.5�{
			if((b_to_b_flag[player] != 0) && (lines >= 4)){
				bai = bai + (bai/2);
			}
			//T-spin Erase��4�{(DS���̂�)
			if((tspin_flag[player] == 2) && (lines >= 1) && (tspin_type>=2)){
					bai = bai * 4;	//�ʏ펞4�{
				if(b_to_b_flag[player] != 0)
					bai = bai + (bai/2);	//Back to Back�ł����1.5�{
			}
			//novice����6�{
			if((novice_mode[player])&&(gameMode[player] == 0)){
				bai = bai * 6;
			}

			/* ���C�����Z */
			if((!ismiss[player]) || (repversw < 62)){
				sc[player] = sc[player] + bo[player]*bai;
				li[player] = li[player] + lines;

				/* �i�ʏ㏸ */
				if(enable_grade[player] == 1){
					GradeUp(player);
				}else if((enable_grade[player] == 2)||(enable_grade[player] == 3)){
					GradeUp2(player,lines);
				}else if(enable_grade[player] == 4){//
					GradeUp3(player);
				}
			}
		}else{
			li[player] = li[player] + lines;
		}
	}
	/* hebo���x���p */
	lc[player] = lc[player] + lines * 25;

	if((gameMode[player] == 6) && (blind_flag[player]))
		isblind[player] = !isblind[player];

	if(((gameMode[player] == 5) || (playback)) && (lines != 0)){	//PRACTICE�ł͏������C�����J�E���g
		if((lines <= 3) && (tspin_flag[player] != 2))
			p_erase_c[lines-1] = p_erase_c[lines-1] +1;	//�ʏ��1�A2�A3���C������
		else if((lines >= 4) && ((b_to_b_flag[player] == 0) || (!b2bcheck)))
			p_erase_c[3] = p_erase_c[3] +1;				//�w�{���X
		else if((lines >= 4) && (b_to_b_flag[player]))
			p_erase_c[4] = p_erase_c[4] +1;				//B to B �w�{���X
		else if((tspin_flag[player] == 2) &&  ((b_to_b_flag[player] == 0) || (!b2bcheck)) && (tspin_type>=2))
			p_erase_c[4+lines] = p_erase_c[4+lines] +1;	//T-�X�s��erase(DS���̂�)
		else if((tspin_flag[player] == 2) && (b_to_b_flag[player] != 0) && (tspin_type>=2))
			p_erase_c[7+lines] = p_erase_c[7+lines] +1;	//B to B T-�X�s��erase(DS���̂�)
	}

	if((enable_grade[player] == 2)&&(lines >= 2)){
		if((tc[player] < 500)&&(combo2[player] >= 4)){
			skillg[player]++;	//�|�C���g���グ�邽�߂̔{��
		}else if((tc[player] >= 500)&&(combo2[player] >= 3)){
			skillg[player]++;
		}
	}
	if((tspin_flag[player])&&(enable_grade[player] == 2)){//Tspin���i�ʂ����̈ꕔ
		if(lines != 0){
			skillg[player]++;
		}else if(lines == 3){
			skillg[player] = skillg[player]+3;
		}else {
			skillg[player] = skillg[player]+2;
		}
	}
	if((tspin_flag[player])&&(enable_grade[player] == 4)){//Tspin���i�ʂ����̈ꕔ
		 if(lines > 0)
			skillg[player]++;
	}

	// �ΐ탂�[�h�ł̂���オ��J�E���g�iMOVE ERASED�ȊO�j #1.60c7n1
	if((gameMode[player] == 4) && (upLineT[1 - player] != 3)) {
		if(vs_style[player] == 1){//ATTACK
			if(lines == 2){
				upLines[1 - player] = upLines[1 - player] + 3;
			}else if(lines == 3){
				upLines[1 - player] = upLines[1 - player] + 4;
			}else if(lines >= 4){
				upLines[1 - player] = upLines[1 - player] + lines + 2;
				if(b_to_b_flag[player] != 0){
					upLines[1 - player] = upLines[1 - player] + 1 +(vs_style[player] == 1);
				}
			}
		}else {
			if(lines == 2){//���̑�
				upLines[1 - player] = upLines[1 - player] + 1;
			}else if(lines == 3){
				upLines[1 - player] = upLines[1 - player] + 2;
			}else if(lines >= 4){
				upLines[1 - player] = upLines[1 - player] + lines;
				if(b_to_b_flag[player] != 0){
					upLines[1 - player] = upLines[1 - player] + 1 +(vs_style[player] == 1);
				}
			}
		}
		//T-Spin�Ń��C����������ƍU����2�{�ɂȂ�悤����オ�萔��ǉ��iDS���̂݁j#1.60c7T1.1
		if((tspin_flag[player] == 2) && (tspin_type>=2)){
			if(lines == 1)
				upLines[1 - player] = upLines[1 - player] + 2 + (vs_style[player] == 1);
			else if(lines == 2)
				upLines[1 - player] = upLines[1 - player] + 3;
			else if(lines >= 3)
				upLines[1 - player] = upLines[1 - player] + 4;
			if(b_to_b_flag[player] != 0){
				upLines[1 - player] = upLines[1 - player] + 1 + (vs_style[player] == 1);
			}
		}
		// �S���������ꍇ�͍U����2�{
		if(all[player])
			upLines[1 - player] = upLines[1 - player] * 2;
		// �_�u���̎�����{
		if(isdouble[1 - player])
			upLines[1 - player] = upLines[1 - player] * 2;
		if(disrise)//���肠����֎~
			upLines[1 - player] = 0;
		if((!noitem) && (disrise)){		//�A�C�e���I�����[�ł̓Q�[�W�㏸
			item_g[player] = item_g[player] + lines * (1 + ((tspin_flag[player] == 2) && (repversw >= 62)));
			if(item_g[player] > item_inter[player])
				item_g[player] = item_inter[player];
		}
	// MOVE ERASED����オ��
	} else if(gameMode[player] == 4){
		// 2���C���ȏ�A�܂���DS��T-Spin�����Ŏ��s
		top = upLines_waiting[1 - player];
		btmup = 0;
		if( (!disrise) && ((lines >= 2) || ((tspin_flag[player] == 2) && (tspin_type >= 2) && (lines >= 1))) ){
			// �ǉ�����オ��̌v�Z
			if((tspin_flag[player] == 2) && (tspin_type >= 2) || (all[player])){	//DS��T-Spin
				for(i = 0; i <= upLines_waiting[1 - player]; i++) {
					for(j = 0; j < fldsizew[player]; j++) {	//���E���]����1�Z�b�g�ǉ�
						if(vs_style[player] <= 1) k = (fldsizew[player] - 1) - j;
						else k = j;
						fldubuf[k + (i + lines + (vs_style[player] == 1)) * fldsizew[player] + (1 - player) * 220] = fldubuf[j + i * fldsizew[player] + (1 - player) * 220];
					}
				}
				upLines_waiting[1 - player] = upLines_waiting[1 - player] + lines + (vs_style[player] == 1);
			}
			if(b_to_b_flag[player] != 0){	//Back to Back �iDEFENCE�ȊO�j
				for(j = 0; j < fldsizew[player]; j++) {	//�ŏ�i�����E���]����1���C����ǉ�(T-Spin�ł͔��]�����Ȃ�)
					if((tspin_flag[player] == 2) && (tspin_type>=2) || (all[player]) || (vs_style[player] > 1)) k = j;
					else k = (fldsizew[player] - 1) - j;
					fldubuf[k + (upLines_waiting[1 - player]) * fldsizew[player] + (1 - player) * 220] = fldubuf[j + 0 * fldsizew[player] + (1 - player) * 220];
				}
				upLines_waiting[1 - player] = upLines_waiting[1 - player] + 1;
				if(vs_style[player] == 1){	//ATTACK
					for(j = 0; j < fldsizew[player]; j++) {	//����1���C����ǉ�(
						if((tspin_flag[player] == 2) && (tspin_type>=2) || (all[player])||(isdouble[1 - player])) k = (fldsizew[player] - 1) - j;
						else k = j;
						fldubuf[k + (upLines_waiting[1 - player]) * fldsizew[player] + (1 - player) * 220] = fldubuf[j + 0 * fldsizew[player] + (1 - player) * 220];
					}
					upLines_waiting[1 - player] = upLines_waiting[1 - player] + 1;
				}
			}
			if(isdouble[1 - player]){	//DOUBLE�ɂ�邹��グ2�{
				for(i = 0; i <= upLines_waiting[1 - player]; i++) {
					for(j = 0; j < fldsizew[player]; j++) {	//���E���]������1�Z�b�g�ǉ�
						fldubuf[j + (i + upLines_waiting[1 - player]) * fldsizew[player] + (1 - player) * 220] = fldubuf[j + i * fldsizew[player] + (1 - player) * 220];
					}
				}
				upLines_waiting[1 - player] = upLines_waiting[1 - player] * 2;
			}
			//�o�b�t�@���点��オ��t�B�[���h�֑���
			if(upLines[1 - player] + 1 >= 22) btmup = 1;
			for(i = 0; i < upLines_waiting[1 - player]; i++) {
				if(btmup) {
					for(k = 1; k < 22; k++) {
						for(l = 0; l < 10; l++) {
							fldu[l + ( k - 1 ) * 10 + (1 - player) * 220] = fldu[l + k * 10 + (1 - player) * 220];
						}
					}
				}
				for(j = 0; j < fldsizew[player]; j++) {
					fldu[j + upLines[1 - player] * fldsizew[player] + (1 - player) * 220] = fldubuf[j + i * fldsizew[player] + (1 - player) * 220];
				}
				if(upLines[1 - player] < 21) upLines[1 - player]++;
				else btmup = 1;
			}
		}
		upLines_waiting[1 - player] = 0;
		if((!noitem) && (disrise)){		//�A�C�e���I�����[�ł̓Q�[�W�㏸
			item_g[player] = item_g[player] + lines * (1 + ((tspin_flag[player] == 2) && (repversw >= 62)));
			if(item_g[player] > item_inter[player])
				item_g[player] = item_inter[player];
		}
	}

	// HIDDEN�ŉB���ꂽ�i��������悤�ɂ���
	hiddenti[player] = hiddenti[player] + lines;

	while(hiddenti[player] > 0) {
		hiddenti[player]--;
		hiddeny[player]++;
		if(hiddeny[player] > 22) {
			hiddeny[player] = 22;
			hiddentm[player] = 0;
		}
	}

	// 4���C���ȏ�������ꍇ
	if(lines >= 4) {
		hebocombo[player] = 1;	// 4���C�������R���{�J�n
	}

	if((gameMode[player] == 5) && (p_ending!=0))
		return;		//PRACTICE�G���f�B���O���͂����܂�

	/* TGM���x�����グ�� */
	if( gameMode[player] <= 6 ) {
		tcbuf = tc[player];

		// tgm�J�E���^ ���C�����㏸(3, 4������Ń{�[�i�X���Z) #1.60c
		// ���x���A�b�v�{�[�i�X��TI�̏ꍇ�̂݃v���X���� #1.60c7g3

		if(repversw >= 50){
			if(lvupbonus==2){//��������
				if(novice_mode[player]||( ((gameMode[player]==1)||(gameMode[player]==2)) &&(enable_grade[player]!=4))
				||(devil_minus[player])){tc[player] = tc[player] + lines;
				}else {tc[player] = tc[player] + lines + ((lines > 2) * (lines - 2));}
			}else if(lvupbonus==1)
				tc[player] = tc[player] + lines;
			else
				tc[player] = tc[player] + lines+ ((lines > 2) * (lines - 2));;	// tgm�J�E���^ ���C�����㏸
		}else{
			if(lvupbonus)
				tc[player] = tc[player] + lines ;
			else
				tc[player] = tc[player] + lines+ ((lines > 2) * (lines - 2));	// tgm�J�E���^ ���C�����㏸

		}
		if((ismiss[player]) && (repversw >= 62)) tc[player] = tcbuf;

		if((!fpbas_mode[player])&&(gameMode[player]<=6)) lv[player] = tc[player];

		// ���x���X�g�b�v����炷 #1.60c7j8
		if((gameMode[player] == 4) && (repversw >= 61) && (wintype==0) && (vs_goal != 0)){
			if(tc[player] == vs_goal - 1) PlaySE(9);
		}else if((!fpbas_mode[player])&&(gameMode[player]<=6)) {
			if((repversw > 4) && (gameMode[player] >= 3))
				i = 99;
			else
				i = 99 -  (tc[player] > 900);

			if(tc[player] % 100 == i) PlaySE(9);
		}
	}

	// �G���f�B���O�˓��`�F�b�N
	checkEnding(player, tcbuf);

	// ���x���A�b�v�i�G���f�B���O���Ȃ牽���s���Ȃ��j
	LevelUp(player);
}

/* �G���f�B���O�˓����� */
void checkEnding(int player, int tcbuf) {

	// MASTER��20G�ł�TGM���x����999�ɒB������t���OON
	if((gameMode[player] >= 1) && (gameMode[player] <= 2) && (tc[player] >= 999)) {
		// �i�ʔF��#1.60c7g5
		// gm��������������ƃV���h�E���[���ɂȂ�		#1.60c7i2
		if(enable_grade[player] == 1) {
			if((sc[player] > gscore[17]) && (time[player] <= 810 * 60) && (gmflag1[player]) && (gmflag2[player])) {
				objectCreate2(player, 8, Rand(20) + 180 + 192 * player - 96 * maxPlay, 20 + Rand(10), 0, 0, 0, 0);
				PlaySE(43);
				gmflag_r[player] = 1;	// GM�ɂȂ錠�����^������ #1.60c7i2
			}
		} else if(enable_grade[player] == 2) {
		//M�ȏ��8��45�b�ȓ�
			if((grade[player] >= 27) && (time[player] <= 525 * 60) && (gmflag1[player]) && (gmflag2[player])) {
				objectCreate2(player, 8, Rand(20) + 180 + 192 * player - 96 * maxPlay, 20 + Rand(10), 0, 0, 0, 0);
				PlaySE(43);
				gmflag_r[player] = 1;	// GM�ɂȂ錠�����^������ #1.60c7i2
			}
		}  else if(enable_grade[player] == 3) {
		//M�ȏ��8��45�b�ȓ�
			if((grade2[player] >= 29) && (time[player] <= 525 * 60) && (gmflag1[player]) && (gmflag2[player])) {
				objectCreate2(player, 8, Rand(20) + 180 + 192 * player - 96 * maxPlay, 20 + Rand(10), 0, 0, 0, 0);
				PlaySE(43);
				gmflag_r[player] = 1;	// GM�ɂȂ錠�����^������ #1.60c7i2
			}
		} else if(enable_grade[player] == 4) {
		//m5�ȏ��6��30�b�ȓ�
		//skillcool��6�ȏ�Aregret�������o�Ă��Ȃ�
			if((grade[player] >= 22) && (time[player] <= 390 * 60) && (gup3rank[player] == 2) && (gmflag1[player]) && (!gmflag2[player])) {
				objectCreate2(player, 8, Rand(20) + 180 + 192 * player - 96 * maxPlay, 20 + Rand(10), 0, 0, 0, 0);
				PlaySE(43);
				gmflag_r[player] = 1;	// GM�ɂȂ錠�����^������ #1.60c7i2
			}
		} else {
			gmflag_r[player] = 1;
			ending[player] = 1;
		}

		tc[player] = 999;
		lv[player] = tc[player];
		timeOn[player] = 0;
		if((enable_grade[player] == 1) || ((hebo_plus[player]) && (repversw >= 58))){
			ending[player] = 6;
		}else {
			ending[player] = 1;
		}

		end_f[player] = 1;

		// �X�^�b�t���[���pwait�l�Z�b�g#1.60c7j5
		sp[player] = speed_master_roll;

		if(((repversw > 24)&&(enable_grade[player] == 1))||((hebo_plus[player]==1)&&(repversw>=34)&&(repversw<42)&&(gameMode[player] ==1))){
			//���ʂȃ��[�h�̎��͂����Ȃ�
			wait1[player] = wait1_beginner_roll;
			wait2[player] = wait2_beginner_roll;
			wait3[player] = wait3_beginner_roll;
			waitt[player] = waitt_beginner_roll;
		}else if(repversw <= 38) {//38�܂�
			wait1[player] = wait1_master_roll38;
			wait2[player] = wait2_master_roll38;
			wait3[player] = wait3_master_roll38;
			waitt[player] = waitt_master_roll38;
		}else if(enable_grade[player] != 4) {//�i��4�ݒ�ȊO
			wait1[player] = wait1_master_roll;
			wait2[player] = wait2_master_roll;
			wait3[player] = wait3_master_roll;
			waitt[player] = waitt_master_roll;
		}else if(enable_grade[player] == 4) {//�i��4�ݒ�
			wait1[player] = wait1_master_rollG4;
			wait2[player] = wait2_master_rollG4;
			wait3[player] = wait3_master_rollG4;
			waitt[player] = waitt_master_rollG4;
		}
		// 900�`999�̃Z�N�V�����^�C���L�^#1.60c7k7
		tr[player] = 100;
		recSectionTime(player);
	// BEGINNER�Ȃ�200�ŏI��������#1.60c7n2
	} else if((gameMode[player] == 0) && (tc[player] >= 200)&&(!novice_mode[player])) {
		//PlayWave(28);
		tc[player] = 200;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 1;
		end_f[player] = 1;

		//���[�����̉ԉΊԊu����@�ł��グ�͏�̂ق�
		if(hanabi_total[player] >=400) hanabi_int[player] = 12;//�b��5��
		else if((hanabi_total[player] >= 200) && (hanabi_total[player] <= 399)) hanabi_int[player] = 15;//�b��4��
		else hanabi_int[player] = 20;//�b��3��

		// �X�^�b�t���[���pwait�l�Z�b�g#1.60c7j5
		sp[player] = speed_beginner_roll;
		wait1[player] = wait1_beginner_roll;
		wait2[player] = wait2_beginner_roll;
		wait3[player] = wait3_beginner_roll;
		waitt[player] = waitt_beginner_roll;

		//PlayWave(19);
		if(backno <= 1) {
			bgfadesw = 1;
		}
	// NOVICE�Ȃ�300�ŏI��������
	} else if((gameMode[player] == 0) && (tc[player] >= 300) && (novice_mode[player])) {
		//PlayWave(28);

		// �^�C���{�[�i�X
		if((novice_mode[player])&&(time[player] < 18000)) {
			sc[player] = sc[player] + (1253 * (300 - (time[player] / 60)));
		}
		tc[player] = 300;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 6;
		end_f[player] = 1;

		// �X�^�b�t���[���pwait�l�Z�b�g#1.60c7j5
		sp[player] = speed_beginner_roll;
		wait1[player] = wait1_beginner_roll;
		wait2[player] = wait2_beginner_roll;
		wait3[player] = wait3_beginner_roll;
		waitt[player] = waitt_beginner_roll;

		//PlayWave(19);
		if(backno <= 1) {
			bgfadesw = 1;
		}
	// DEVIL-�Ȃ�1000�ŏI��������#1.60c7u0.9
	} else if((((enable_grade[player] == 1) && (repversw < 42)) || (devil_minus[player]))&&(gameMode[player] == 3)&&(repversw >= 31) && (tc[player] >= 1000)) {

		//PlayWave(28);
		tc[player] = 1000;
		grade[player] = 10; // Grade�ݒ� #1.60c7j7
		gflash[player]=120;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 6;
		end_f[player] = 0;//���C���Ȃ�
		// �X�^�b�t���[���pwait�l�Z�b�g#1.60c7j5
		if(repversw >= 54){
			wait1[player] = wait1_devil_tbl[8];
			wait2[player] = wait2_devil_tbl[8];
			wait3[player] = wait3_devil_tbl[8];
			waitt[player] = waitt_devil_tbl[8];
		}
	// DEVIL�Ȃ�1300�ŏI��������#1.60c7f3
	} else if((gameMode[player] == 3) && (tc[player] >= 1300)) {
		if(( ((!isWRule(player)) && (time[player] <= 19200)) || ((isWRule(player)) && (time[player] <= 21000)) )&&(GetRealFPS()>40)) {
			grade[player] = 16;
			objectCreate2(player, 8, Rand(20) + 180 + 192 * player - 96 * maxPlay, 20 + Rand(10), 0, 0, 0, 0);
			PlayWave(43);
		}//�l�\�����𖞂����Ă����炻�̎��_��S13��

		if(death_plus[player]){
			grade[player] = 16;
			gflash[player]=120;
		}else{
			grade[player] = 13; // Grade�ݒ� #1.60c7j7
			gflash[player]=120;
		}
		tc[player] = 1300;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 1;
		end_f[player] = 1;

		// �X�^�b�t���[���pwait�l�Z�b�g#1.60c7j5
		if(repversw >= 57){
			sp[player] = speed_devil_roll;
			wait1[player] = wait1_devil_roll;
			wait2[player] = wait2_devil_roll;
			wait3[player] = wait3_devil_roll;
			waitt[player] = waitt_devil_roll;
		}else if(repversw >= 39){
			sp[player] = speed_devil_roll;
			wait1[player] = wait1_devil_roll56;
			wait2[player] = wait2_devil_roll56;
			wait3[player] = wait3_devil_roll56;
			waitt[player] = waitt_devil_roll56;
		}else if(repversw>18){
			sp[player] = speed_devil_roll;
			wait1[player] = wait1_devil_roll38;
			wait2[player] = wait2_devil_roll38;
			wait3[player] = wait3_devil_roll38;
			waitt[player] = waitt_devil_roll38;
		}else{
			sp[player] = speed_devil_roll;
			wait1[player] = wait1_devil_roll17;
			wait2[player] = wait2_devil_roll17;
			wait3[player] = wait3_devil_roll17;
			waitt[player] = waitt_devil_roll17;
		}

		// ���̃o�[�W�������狭��BIG��#1.60c7h5
		if(repversw > 4) {
			IsBig[player] = 1;
		}
		// DEVIL-��500�ŏI��������#1.60c7v0
	} else if(  (devil_minus[player])&&(gameMode[player] == 3)&&(repversw >= 52) && (tc[player] >= 500) && (tcbuf < 500) &&
			( ((time[player] > timelimitm[player]) && (timelimitm[player] > 0) && ( !isWRule(player) )) ||	// TGM,Ti
			  ((time[player] > timelimitmw[player]) && (timelimitmw[player] > 0) && (isWRule(player) )) )  ) {

		//PlayWave(28);
		tc[player] = 500;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 6;
		end_f[player] = 0;//���C���Ȃ�
		if(repversw >= 54){
			wait1[player] = wait1_devil_m_tbl[8];
			wait2[player] = wait2_devil_m_tbl[8];
			wait3[player] = wait3_devil_m_tbl[8];
			waitt[player] = waitt_devil_m_tbl[8];
		}
	// 500�ő�����#1.60c7g7
	} else if(((gameMode[player] == 1) || (gameMode[player] == 2)) && //�}�X�^�[20G
				(tc[player] >= 500) && (tcbuf < 500) &&
				(time[player] > timelimit[player]) && (timelimit[player] > 0)) {
		//PlayWave(28);
		tc[player] = 500;
		bgfadesw = 1;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 4;
		onRecord[player] = 2;					// �G���f�B���O���[���I���Ɠ����Ƀ��v���C�L�^�I��
	// devil�͓���؂�#1.60c7r2b
	} else if(  ((gameMode[player] == 3) && (!devil_minus[player]) &&//devil
				(tc[player] >= 500) && (tcbuf < 500)) &&
				 ( ( (time[player] > timelimit[player]) && (timelimit[player] > 0) && (!isWRule(player)) )||	// TGM,Ti
				 ( (time[player] > timelimitw[player]) && (timelimitw[player] > 0) && (isWRule(player)) ) )	// ���[���h�n
				) {
		//PlayWave(28);
		tc[player] = 500;
		bgfadesw = 1;
		grade[player]++;	//S5�ɂȂ�
		gflash[player]=120;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 4;
		onRecord[player] = 2;					// �G���f�B���O���[���I���Ɠ����Ƀ��v���C�L�^�I��
	// LV1000�ő��؂� #1.60c7q8
	} else if((gameMode[player] == 3) && (!devil_minus[player]) &&
				(tc[player] >= 1000) && (tcbuf < 1000) &&
				(time[player] > timelimit2[player]) && (timelimit2[player] > 0)) {
		tc[player] = 1000;
		bgfadesw = 1;
		grade[player]++;	//S10�ɂȂ�
		gflash[player]=120;
		lv[player] = tc[player];
		timeOn[player] = 0;
		ending[player] = 4;
		onRecord[player] = 2;					// �G���f�B���O���[���I���Ɠ����Ƀ��v���C�L�^�I��
	// ACE
	} else if((gameMode[player] == 7) && (li[player] >= 150) && (anothermode[player] <= 1)) {
		li[player] = 150;
		timeOn[player] = 0;
		ending[player] = 1;
		end_f[player] = 2;
		onRecord[player] = 2;
	// ANOTHER2 (Lv20)
	} else if((gameMode[player] == 7) && (li[player] >= 200) && (anothermode[player] == 2)) {
		li[player] = 200;
		timeOn[player] = 0;
		ending[player] = 1;
		end_f[player] = 2;
		onRecord[player] = 2;
	//practis
	} else if(gameMode[player] == 5){
		if(p_goaltype==1){//���x��
			if(tc[player] >= p_goaltypenumlist[p_goaltypenum]*10){
				tc[player] = p_goaltypenumlist[p_goaltypenum]*10;
				lv[player] = tc[player];
				ending[player] = 7;		// ���Z�k
			}
		} else if(p_goaltype==2){//���C��
			if(li[player] >= p_goaltypenumlist[p_goaltypenum]){
				li[player] = p_goaltypenumlist[p_goaltypenum];
				ending[player] = 7;		// ���Z�k
			}
		} else if(p_goaltype==3){//�u���b�N
			if(bdowncnt[player] >= p_goaltypenumlist[p_goaltypenum]){
				bdowncnt[player] = p_goaltypenumlist[p_goaltypenum];
				ending[player] = 7;		// ���Z�k
			}
		} else if(p_goaltype==4){//�^�C��
			if(ltime[player] <= 0){
				lv[player] = tc[player];
				ending[player] = 7;		// ���Z�k
			}
		}
		if(ending[player] == 7){
			timeOn[player] = 0;
			onRecord[player] = 2;
		}
	// 40Line
	}else if((gameMode[player] == 9) &&(std_opt[player]==0)&& (li[player] >= 40)) {
		li[player] = 40;
		timeOn[player] = 0;
		ending[player] = 7;
		end_f[player] = 2;
		onRecord[player] = 2;
	// ULTRA
	} else if((gameMode[player] == 9) &&(std_opt[player]==1)&& (ltime[player] <= 0)) {
		timeOn[player] = 0;
		ending[player] = 7;
		end_f[player] = 2;
		onRecord[player] = 2;
	// SQUARE
	}else if((gameMode[player] == 9) &&(std_opt[player]==2)&& (li[player] >=150)&& (lv[player] >=15)) {
		timeOn[player] = 0;
		ending[player] = 1;
		end_f[player] = 2;
		onRecord[player] = 2;
	}else if((gameMode[player] == 9) &&(std_opt[player]==3)&& (li[player] >=75)&& (lv[player] >=15)) {
		timeOn[player] = 0;
		ending[player] = 1;
		end_f[player] = 2;
		onRecord[player] = 2;
	}

}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.10 - �ΐ탂�[�h���茈��҂�
//������������������������������������������������������������������������������
void statVersusWait(int player) {
	// �������Ȃ��悤�ɂ���(PRACTICE��2P�p) #1.60cd

	// �ΐ탂�[�h�����ɂ��ύX#1.60c7g1
	if(gameMode[0] == 4) {
		if(count % 60 > 30) {
			ExBltRect(81, 110+192 * player -96 * maxPlay , 91 , 100, 0, 100, 50);
		}

		//��]�@���̃����_���Z���N�g
		if((versus_rot[player] == 9) && (stat[1 - player] != 38)){
			rots[player] = Rand(9);
			setNextBlockColors(player, 1);
		}

		if((stat[0] == 10) && (player == 1)) {
			vs_match++;		// #1.60c7n1
			first_rot[0] = rots[0];
			first_rot[1] = rots[1];
			stat[0] = 3;
			stat[1] = 3;
		}
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.11 - �l�[���G���g���[
//������������������������������������������������������������������������������
void statNameEntry(int player) {
	int		move, len, j,k;
	int		i, rank, add;		// #1.60c7i5
	int		st_update,cat[2],ex[2];
	int		temp[2],temp2[2],color[2];

	add = 0;

	// ���������߂�
	if(gameMode[player] == 0) {
		if(!novice_mode[player]){
		temp[player] = hanabi_total[player];//�ԉΑ���		// BEGINNER
		}else{
		temp[player] = sc[player];//�X�R�A		// BEGINNER
		}
		temp2[player] = tc[player];
	}else if( (gameMode[player] >= 1) && (gameMode[player] <= 2) ) {
		temp[player] = grade[player];//�i��		// MASTER & 20G
		temp2[player] = tc[player];//���x��
	} else if(gameMode[player] == 3) {//devil
		temp[player] = tc[player];	// ���x��
		temp2[player] = grade[player];//�i��
	}else if(gameMode[player] == 6) {//tomoyo
		if(tomoyo_opt[player]<2){
			temp[player] = stage[player];	// ���B�X�e�[�W
			temp2[player] = clearp[player];//�N���A��
		}else{
			temp[player] = stage[player];	// ���B�X�e�[�W
			temp2[player] = sc[player];//�X�R�A
		}
	} else if(gameMode[player] == 7) {//ace
		temp[player] = li[player];	//���C��
		temp2[player] = lv[player]-1;	//���x��
	} else if(gameMode[player] == 9) {//STD
		if(std_opt[player]<2){
			temp[player] = li[player];	//���C��
			temp2[player] = bdowncnt[player];	//�u���b�N
		}else if(std_opt[player]==2){
			temp[player] = squarecnt[player];	//�X�N�E�F�A��
			temp2[player] =sc[player];	//�X�R�A
		}else if(std_opt[player]==3){
			temp[player] = sc[player];	//���C��
			temp2[player] = lv[player];	//�X�R�A
		}
	}else if(gameMode[player]==10){
		temp[player] = sc[player];					//
		temp2[player] = ori_opt[player];
	}else{
		temp[player] = 0;					// �����L���O�Ȃ�		temp[player] = tc[player];
		temp2[player] = 0;
	}
	// ���ʂ��擾����
	if(ranking_type==0){
		rank = RankingCheck(gameMode[player],0,sc[player],time[player],lv[player],(ending[player]==3));
	}else if(ranking_type==1){
	//���[�h�Ɛݒ肩��J�e�S���ݒ�
		if(gameMode[player]==0){
		cat[player] = 0;
		}else if(gameMode[player]==1){
			if(enable_grade[player]==1){
			cat[player] = 1;
			}else if(enable_grade[player]==2){
			cat[player] = 2;
			}else if(enable_grade[player]==3){
			cat[player] = 3;
			}else if(enable_grade[player]==4){
			cat[player] = 4;
			}
		}else if(gameMode[player]==2){
			if(enable_grade[player]<=3){
			cat[player] = 5;
			}else if(enable_grade[player]==4){
			cat[player] = 6;
			}
		}else if(gameMode[player]==3){
			if(devil_minus[player]==0){
			cat[player] = 7;
			}else if(devil_minus[player]==1){
			cat[player] = 8;
			}
		}else if(gameMode[player]==6){
			if(tomoyo_opt[player]==0){
			cat[player] = 9;
			}else if(tomoyo_opt[player]==1){
			cat[player] = 10;
			}
		}else if(gameMode[player]==7){
			if(anothermode[player]==0){
			cat[player] = 11;
			}else if(anothermode[player]==1){
			cat[player] = 12;
			}else if(anothermode[player]==2){
			cat[player] = 13;
			}
		}
		rank = RankingCheck2(cat[player], rots[player], temp[player], time[player], end_f[player]);
	}else{
			//���[�h�Ɛݒ肩��J�e�S���ݒ�
		if(gameMode[player]==0){
			if(novice_mode[player]){
				cat[player] = 0;
				ex[player] = 1;
			}else{
				cat[player] = 0;
				ex[player] = 0;
			}
		}else if(gameMode[player]==1){
			if(enable_grade[player]==1){
				cat[player] = 1;
				ex[player] = 0;
			}else if(enable_grade[player]==2){
				cat[player] = 1;
				ex[player] = 1;
			}else if(enable_grade[player]==3){
				cat[player] = 2;
				ex[player] = 0;
			}else if(enable_grade[player]==4){
				cat[player] = 2;
				ex[player] = 1;
			}
		}else if(gameMode[player]==2){
			if(enable_grade[player]<=3){
				cat[player] = 3;
				ex[player] = 0;
			}else if(enable_grade[player]==4){
				cat[player] = 3;
				ex[player] = 1;
			}
		}else if(gameMode[player]==3){
			if(devil_minus[player]==0){
				cat[player] = 4;
				ex[player] = 0;
			}else if(devil_minus[player]==1){
				cat[player] = 4;
				ex[player] = 1;
			}
		}else if(gameMode[player]==6){
			if(tomoyo_opt[player]==0){
				cat[player] = 5;
				ex[player] = 0;
			}else if(tomoyo_opt[player]==1){
				cat[player] = 5;
				ex[player] = 1;
			}else if(tomoyo_opt[player]==2){
				cat[player] = 6;
				ex[player] = 0;
			}else if(tomoyo_opt[player]==3){
				cat[player] = 6;
				ex[player] = 1;
			}
		}else if(gameMode[player]==7){
			if(anothermode[player]==0){
				cat[player] = 7;
				ex[player] = 0;
			}else if(anothermode[player]==1){
				cat[player] = 7;
				ex[player] = 1;
			}else if(anothermode[player]==2){
				cat[player] = 8;
				ex[player] = 0;
			}else if(anothermode[player]==3){
				cat[player] = 8;
				ex[player] = 1;
			}
		}else if(gameMode[player]==10){
			cat[player] = 9;
			ex[player] = 0;
		}else if(gameMode[player]==9){
			if(std_opt[player]==0){
				cat[player] = 10;
				ex[player] = 0;
			}else if(std_opt[player]==1){
				cat[player] = 10;
				ex[player] = 1;
			}else if(std_opt[player]==2){
				cat[player] = 11;
				ex[player] = 0;
			}else if(std_opt[player]==3){
				cat[player] = 11;
				ex[player] = 1;
			}
		}
		rank = RankingCheck3(cat[player],ex[player], rots[player], temp[player], time[player], end_f[player]);


		if((gameMode[player]==10)&&(rank==-1)){//ori�ł�4�ʈȉ������ׂ�
			cat[player] = 9;
			ex[player] = 1;
			rank = RankingCheck3(cat[player],ex[player], rots[player], temp[player], time[player], end_f[player]);
		}
			// TOMOYO���[�h��1�ʈȊO����n�߂��ꍇ�͋L�^�Ɏc���Ȃ�
		if(gameMode[player]==6){
			if(((tomoyo_opt[player]==0) && (start_stage[player] != 0)) || ((tomoyo_opt[player]==1) && (start_stage[player] != 27))||(tomoyo_opt[player] == 3)){
				stat[player] = 21;
				rank = -1;
			}
		}
		// �A�C�e����+�͎c���Ȃ�
		// TOMOYO�̃^�[�Q�b�g�Ƃ����c���Ȃ�
		if(IsBigStart[player] || item_mode[player] || hebo_plus[player] || relaymode[player]){
			stat[player] = 21;
			rank = -1;
		}

	}


	// �Z�N�V�����^�C���X�V�`�F�b�N
	// TOMOYO��EH�ȍ~�͎c���Ȃ��i���j
	if( playback || demo || IsBigStart[player] || item_mode[player] || hebo_plus[player] || ((gameMode[player] == 6) && (tomoyo_opt[player] != 0))||(gameMode[player] == 0)||(gameMode[player] >= 7)) {
		st_update = 0;
	} else {
		st_update = ST_RankingCheckAll(player, gameMode[player], enable_grade[player]);
	}


	// �����N�O�Ȃ瑦���U���g��
	if( (rank == -1)&& (!st_update) ) {
		if(gameMode[player] == 6)
			stat[player] = 21;
		else if(show_result)
			stat[player] = 14;
		else
			stat[player] = 21;

		statc[player * 10] = 0;
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		return;
	}

	// ���y�𗬂� #1.60c7l2
	// 2�l�����ŏd�Ȃ�Ȃ��悤�ɏC�� #1.60c7m1
	if( ((stat[1 - player] == 0) || (stat[1 - player] == 10)) && (!IsPlayWave(63)) && (wavebgm > 0) )
		PlayWave(63);
/*
	// ���v���C�Z�[�u#1.60c7i5
	if((textguide) && (!playback) && (!demo)){
		if(!player) printFont(13+24 * player - 12 * maxPlay, 26, "0-9 KEY:REPLAY", 0);
		else printFont(13+24 * player - 12 * maxPlay, 26, "Q-P KEY:REPLAY", 0);
	}
	ReplaySaveCheck(player, 3);

	add = 3 * ((enable_grade[player] == 4) && (sgrade[player] >= min_sgrade) && ((gameMode[player] == 1) || (gameMode[player] == 2)));

	if(statc[player * 10 + 3]) {
		if( sgrade[player] >= min_sgrade ) {	//���i�ʕ\�����ɏd�Ȃ�̂�
			sprintf(string[0], "SAVED : %02d", statc[player * 10 + 3]);
			printFont(15 + 24 * player - 12 * maxPlay, 24, string[0], 5);
		} else {
			printFont(15 + 24 * player - 12 * maxPlay, 20, "YOUR PLAY", 7);
			printFont(16 + 24 * player - 12 * maxPlay, 21, "WAS SAVED", 7);
			sprintf(string[0], "FILE NO.%02d", statc[player * 10 + 3]);
			printFont(15 + 24 * player - 12 * maxPlay, 23, string[0], 5);
		}
	}
*/
	// GRADE #1.60c7m9
		if((enable_grade[player] == 4) && ((gameMode[player] == 1) || (gameMode[player] == 2))) {
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 137 - (add * 3), 228, 119, 26, 7);

				if(grade[player] == 32) {
					// Gm
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 144 - (add * 3), 270 ,((count % 4 / 2)*216)+120,90,48);
				}else if( grade[player] >= 28 ) {
					// MK-MM
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 144 - (add * 3), 270 ,((count % 4 / 2)*216)+((grade[player]-28)*24),90,24);
				}  else if( grade[player] == 27 ) {
					//Master
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 144 - (add * 3), 270 ,((count % 4 / 2)*216),90,24);
				} else if( grade[player] >= 18 ) {
					// m1�`m9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 144 - (add * 3), 180 ,((count % 4 / 2)*216)+((grade[player]-18)*24),90,24);
				} else if( grade[player] >= 9 ) {
					// S1�`S9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 144 - (add * 3), 90 ,((count % 4 / 2)*216)+((grade[player]-9)*24),90,24);
				} else {
					// 9�`1
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 144 - (add * 3), 0 ,((count % 4 / 2)*216)+(grade[player]*24),90,24);
				}
		}
		// S-GRADE #1.60c7o1
		if( sgrade[player] >= min_sgrade ) {
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 160, 220, 91, 31, 7);
			ExBltRect(3, 152 + 192 * player - 96 * maxPlay, 160, 228, 119, 26, 7);
			if( sgrade[player] == 18 ) {
				// GM
				ExBltRect(26,115 + 192 * player -96 * maxPlay , 168, 270 ,((count % 4 / 2)*216)+168,90,24);
			} else if( sgrade[player] >= 9 ) {
				// S1�`S9
				ExBltRect(26,115 + 192 * player -96 * maxPlay , 168, 90 ,((count % 4 / 2)*216)+((sgrade[player]-9)*24),90,24);
			} else {
				// 9�`1
				ExBltRect(26,115 + 192 * player -96 * maxPlay , 168, 0 ,((count % 4 / 2)*216)+(sgrade[player]*24),90,24);
			}
		}
	if(statc[player * 10 + 1] == 0)
		StrCpy(string[player + 2], "");

	len = StrLen(string[player + 2]);

	// ���ʂɓ��������\��#1.60c7i5
	if(rank != -1) {
		sprintf(string[0], "RANK %d", rank + 1+(3*((cat[player] == 9)&&(ex[player]==1))));
		printFont(17 + 24 * player - 12 * maxPlay, 8-add, string[0], 5);
	}
	// �Z�N�V�����^�C���X�V
	if(st_update) {
		printFont(15 + 24 * player - 12 * maxPlay, 9-add, "NEW ST REC", 3);
	}

	printFont(15 + 24 * player - 12 * maxPlay, 10-add, "ENTER NAME", 4);

	if((stat[1] == 10) && (player == 0)) {
		stat[0] = 3;
		stat[1] = 3;
	}

	statc[player * 10 + 1]++;

	if(statc[player * 10 + 1] < 45 * 60){
		padRepeat(player);

		move = getPressState(player, 3) - getPressState(player, 2);
		if(move)
			if((mpc[player] == 1) || (mpc[player] >= 15)) {
				if(mpc[player] >= 15) mpc[player] = 12;
				statc[player * 10 + 2] = statc[player * 10 + 2] + move;
				PlaySE(5);
			}

		if(statc[player * 10 + 2] > 54)
			statc[player * 10 + 2] = (len == 3) * 53;
		if(statc[player * 10 + 2] < (len == 3) * 53)
			statc[player * 10 + 2] = 54;

		MidStr(RankString, statc[player * 10 + 2] + 1, 1, string[4]);

	//	statc[player * 10 + 1]++;

		printFont(18 + 24 * player+len - 12 * maxPlay, 14-add, string[4], 2 * (count % 20 > 10));
		printFont(18 + 24 * player - 12 * maxPlay, 14-add, string[player + 2], 0);
		sprintf(string[0], "%2d", 45 - (statc[player * 10 + 1] / 60));
		printFont(16 + 24 * player - 12 * maxPlay, 16-add, "TIME", 6);
		printFont(22 + 24 * player - 12 * maxPlay, 16-add, string[0], 0);

		for(k = 0;k <= 9;k++){
			if(k > statc[player * 10 + 1] / 2) break;
			j = statc[player * 10 + 2]-3-len + k;
			MidStr(RankString, j + 1 + (55 * (j < 0)) - (55 * (j > 54)), 1, string[0]);
			if(j==statc[player * 10 + 2]){
				printFont(15 + k + 24 * player - 12 * maxPlay, 12-add, string[0], 2 * (count % 20 > 10));
				printFont(15 + k + 24 * player - 12 * maxPlay, 13-add, "n", count % 9);
			} else printFont(15 + k + 24 * player - 12 * maxPlay, 12-add, string[0], 0);
		}
		if(getPushState(player, 4)) {
			PlaySE(10);
			if(statc[player * 10 + 2] == 53) {
				if(len) {
					MidStr(string[player + 2], 1, len - 1, string[player + 2]);
				}
			} else if(statc[player * 10 + 2] == 54) {
				statc[player * 10 + 1] = 45 * 60;
			} else
				StrCat(string[player + 2], string[4]);
		}
	} else{
		printFont(18 + 24 * player - 12 * maxPlay, 14-add, string[player + 2], (count % 4 / 2) * digitc[rots[player]]);
	}

	if(statc[player * 10 + 1] >= 45 * 60) {
		if(statc[player * 10 + 1] == 45 * 60) {
			if(!len) StrCpy(string[player + 2], "NOP");
			PlaySE(18);
		}
		if(statc[player * 10 + 1] == (46 * 60) + 30){
			sprintf(string[player + 2], "%s   ", string[player + 2]);
			LeftStr(string[player + 2], 3, string[player + 2]);

			if(ranking_type==0){
				RankingRegist(gameMode[player], 0, sc[player], li[player], lv[player], time[player], (ending[player]==3), string[player + 2]);
				RankingSave();

			}else if(ranking_type==1){
				RankingRegist2(cat[player], rots[player], temp[player], time[player],  end_f[player], temp2[player], string[player + 2], rank, medal_ac[player], medal_st[player], medal_sk[player], medal_co[player],medal_re[player]);
				RankingSave2();
			}else {
				RankingRegist3(cat[player], ex[player],rots[player], temp[player], time[player],  end_f[player], temp2[player], string[player + 2], rank, medal_ac[player], medal_st[player], medal_sk[player], medal_co[player],medal_re[player]);
				RankingSave3();
			}

			SaveConfig();

			// �G���f�B���O���B�`�F�b�N
			if(ending[player] == 3) {
				i = 2;
			}
			else if ( ((gameMode[player] == 0) &&(novice_mode[player] ==0) &&(tc[player] == 200))  ||
			((gameMode[player] == 0) &&(novice_mode[player] ==1) &&(tc[player] == 300))  ||
					  ((gameMode[player] == 3) && (tc[player] == 1300)) ||
					  ((gameMode[player] >= 1) && (gameMode[player] <= 2) && (tc[player] == 999))
					)
			{
				i = 1;
			}
			else {
				i = 0;
			}
			// �Z�N�V�����^�C���X�V
			if(st_update) {
				ST_RankingUpdate(player, gameMode[player], i, enable_grade[player]);

			}
			ST_RankingSave();
			PlayerdataSave();

			if(gameMode[player] == 6){
				if(!playback){
					stat[player] = 38;
				}else{
					stat[player] = 21;	// �Q�[���I�[�o�[�\�� #1.60c7p1
				}
			}else{
				stat[player] = 14;	// ���ʉ�ʂ� #1.60c7p1
			}
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 3] = 0;
		}
	}
}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.13 - �G���f�B���O�E���[��
//������������������������������������������������������������������������������
void statEnding(int player) {
	int	i, j, k;
//sprintf(string[0],"END %2d %2d",ending[player],gameMode[player]);
//printFont(0, 0, string[0], (count % 4 / 2) * digitc[rots[i]]);
	if ( (ending[player] == 1) || (ending[player] == 4) ){
		// ���y��~ #1.60c7j9
if (bgmteisiflg == 0) {
bgmteisiflg = 1;
		if((gameMode[player] != 8) || ((gameMode[player] == 8) && (mission_end[c_mission ] >= 4)))
		StopAllBGM();
		pinch[player] = 0;
		// ACE�ł̎c�莞�Ԃ����Ȃ����̌��ʉ�����~
		StopSE(32);
}
//sprintf(string[0],"-STOP- %2d %2d",ending[player],gameMode[player]);
//printFont(0, 1, string[0], (count % 4 / 2) * digitc[rots[i]]);
		if((onRecord[player]) && (repversw >= 59)) padRepeat(player);

		//��Ɉړ�
		if((gameMode[player] == 6) && (stage[player] == 199)){
			printFont(15 + 24 * player - 12 * maxPlay, 11, "COMPLETE!", (count % 4 / 2) * digitc[rots[player]]);
			printFont(14 + 24 * player - 12 * maxPlay, 14, "+100000 PTS", (count % 4 / 2) * digitc[rots[player]]);
		}

		// �u���b�N������
		// BIG�Ή� #1.60c7j5
		if(statc[player * 10] % 6 == 0) {
			j = (fldsizeh[player] + 1) - (statc[player * 10] / 6);
			if((j >= 0) && (j <= fldsizeh[player])) {
			for(i = 0; i < fldsizew[player]; i++) {
				// ���C�������G�t�F�N�g�ŏ����� #1.60c7n5
				if( fld[i+ j * fldsizew[player] + player * 220] != 0) {
					objectCreate(player, 1, (i + 15 + 24 * player - 12 * maxPlay) * 8,(j + 3) * 8, (i - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + 1 * 250, fld[i+ j * fldsizew[player] + player * 220], 100);
				}

				fld[i+ j * fldsizew[player] + player * 220] = 0;
				fldt[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7j5
				fldi[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7n1
				flds[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7n1
			}
			}
		}

		// �A�j���I��
		if(statc[player * 10] == 132) {
			if(repversw >= 33) edrec[player] = 125;
			else edrec[player] = 123;
			if(ending[player] ==1) {
				// TOMOYO�N���A #1.60c7l9
				if(gameMode[player] >= 6) {
					stat[player] = 13;
					ending[player] = 3;
					if((gameMode[player] == 6) && (stage[player] == 44) && (!t_training[player])){
						// �X�^�b�t���[���J�n
						if(repversw >= 40){
							sp[player] = 1200;
							wait1[player] = wait1_master_rollG4;
							wait2[player] = wait2_master_rollG4;
							wait3[player] = wait3_master_rollG4;
							waitt[player] = waitt_master_rollG4;
							isblind[player] = 1;
						}
						ending[player] = 2;
						// �G���f�B���OBGM�Đ�
						PlayWave(56);
fadelv[player] = 0;
					}
					else if((gameMode[player] == 8) && (mission_end[c_mission ] < 4))
						PlaySE(36);
					else if(gameMode[player] != 8)
						PlaySE(29);
					else{	//(mission_end[c_mission ] == 3)
						// �X�^�b�t���[���J�n
						ending[player] = 2;
						if(mission_end[c_mission] >= 5)
							hidden[player] = 8;
						if(mission_end[c_mission] == 6){
							if(repversw >= 57){
								sp[player] = speed_devil_roll;
								wait1[player] = wait1_devil_roll;
								wait2[player] = wait2_devil_roll;
								wait3[player] = wait3_devil_roll;
								waitt[player] = waitt_devil_roll;
							}else{
								sp[player] = speed_devil_roll;
								wait1[player] = wait1_devil_roll56;
								wait2[player] = wait2_devil_roll56;
								wait3[player] = wait3_devil_roll56;
								waitt[player] = waitt_devil_roll56;
							}
							hidden[player] = 8;
							IsBig[player] = 1;
						}
						// �G���f�B���OBGM�Đ�
						PlayWave(56);
fadelv[player] = 0;
					}
				} else {

					// �X�^�b�t���[���J�nfastroll[player]
					ending[player] = 2;
					// �G���f�B���OBGM�Đ�
						PlayWave(56);
fadelv[player] = 0;
//sprintf(string[0],"-3- %2d %2d PLAY56",ending[player],gameMode[player]);
//printFont(0, 4, string[0], (count % 4 / 2) * digitc[rots[i]]);
					if((repversw<=23)||(enable_grade[player]!=1)){
						if((gameMode[player] >= 1) && (gameMode[player] <= 2) && (hidden[player] != 8)) {
							if((enable_grade[player]==4)&&(grade[player]>=23)){
								hidden[player]=10;//������Ƒ���������
							}
							shadow_timer_flag[player] = p_shadow_timer;
							semigmflag_r[player] = 1;//�����郍�[��
						}

						// �������[�� (�ړ] #1.60c7p9ex����)
						if((shadow_heboris) && (gmflag_r[player])) hidden[player] = 8;
					}

				}
				scanItem(player);
			} else {
				// ���؂�
				ending[player] = 5;
			}
			statc[player * 10] = 0;
		}

		statc[player * 10]++;
	}
	else if ( ending[player] == 2 )//ending==1�ł��łɏ������[���Ȃǂ̐F�X�Ȑݒ�����Ă���
	{
fadelv[player] = 0;
		bgmteisiflg = 0;
		stat[player] = 4;
		if(repversw >= 54) statBlock(player);
	}
	else if ( ending[player] == 3 )
	{
		statc[player * 10]++;
		hidden[player] = 0;	// �V���h�E���[������ #1.60c7h8
		shadow_timer_flag[player] = 0;	// #1.60c7j5
		if(stopmirror_flag[player]) fldMirrorProc(player);
		hiddeny[player] = 22;

		// �ԉ�
		if((statc[player * 10] % 9 == 0)&&(endingcnt[player] < 30)) {//30���オ��Ƃ�߂�
			PlaySE(35);
			objectCreate2(player, 7, Rand(80) + 72 + 192 * player - 96 * maxPlay, 16 + Rand(24), 0, 0, Rand(7)+1, 0);
			hanabi_total[player]++;
			endingcnt[player]++;
		}
		if(gameMode[player] != 0)StopAllBGM();
		if(gameMode[player] == 8) {
			// �~�b�V�������[�h�p
			ExBltRect(3, 105 + 192 * player - 96 * maxPlay, 76, 195, 230, 109, 20);
		} else if((grade[player] == 32)||
			((gameMode[player] == 7) && (anothermode[player] == 2))) {
			// YOU ARE GRAND MASTER!!
			// GM�ɂȂ��Ă���ꍇ�̂� #1.60c7k3
			if(statc[player * 10] < 64) {
				k = 128 - statc[player * 10];
				i = (80 * k / 64 - 80) / 2;
				j = (36 * k / 64 - 36) / 2;
				k = 65536 * k / 64;
				ExBltRectR(3, 120 - i + 192 * player - 96 * maxPlay, 102 - j, 208, 126, 80, 36, k, k);
			}
			else{
				ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 102, 208, 126, 80, 36);
			}
		} else if((gameMode[player] == 3) && (grade[player] == 16) ){
			// YOU ARE GOD
			if(statc[player * 10] < 64) {
				k = 128 - statc[player * 10];
				i = (112 * k / 64 - 112) / 2;
				j = (66 * k / 64 - 66) / 2;
				k = 65536 * k / 64;
				ExBltRectR(3, 105 - i + 192 * player - 96 * maxPlay, 70 - j, 191, 163, 112, 66, k, k);
			}
			else{
				ExBltRect(3, 105 + 192 * player - 96 * maxPlay, 70, 191, 163, 112, 66);
			}
		} else {
			// GM�ɂȂ��Ă��Ȃ��ꍇ #1.60c7k3

			// EXCELLENT
			if(statc[player * 10] <= 5){
				k = 10 - statc[player * 10];
				i = (75 * k / 5 - 75) / 2;
				j = (9 * k / 5 - 9) / 2;
				k = 65536 * k / 5;
				ExBltRectR(3, 122 - i + 192 * player - 96 * maxPlay, 96 - j, 212, 73, 75, 9, k, k);
			} else {
				ExBltRect(3, 122 + 192 * player - 96 * maxPlay, 96, 212, 73, 75, 9);
			}

			// DEVIL-
			if((gameMode[player] == 3) && (devil_minus[player]==1)){
				printSMALLFont(130 + 192 * player - 96 * maxPlay, 157, "Try Next", 0);
				ExBltRect(86, 130 + 192 * player - 96 * maxPlay, 166, 0, 27, 72, 9);	// DEVIL-DOOM
				printSMALLFont(130 + 192 * player - 96 * maxPlay, 175, "   Mode", 0);
			}
			// �Q�[�����[�h�̕\��
			ExBltRect(86, 125 + 192 * player - 96 * maxPlay, 110, 72*getModeAdd(player), 99 + (9*gameMode[player]), 72, 9);
			printFont(18 + 24 * player - 12 * maxPlay, 15, "MODE", 0);
			printFont(15 + 24 * player - 12 * maxPlay, 16, "ALL CLEAR", 0);

			// TOMOYO�Ŋ��S�N���A���ĂȂ��i27�ʂ��O�~�܂�j�Ȃ�H������
			if( (gameMode[player] == 6) && (stage[player] < 26) )
				printFont(24 + 24 * player - 12 * maxPlay, 16, "?", 0);
			else
				printFont(24 + 24 * player - 12 * maxPlay, 16, "!", 0);

			if(((gameMode[player] == 1) || (gameMode[player] == 2)) && (enable_grade[player]!=4)  && (examination[player]==0)){
				ExBltRect(85, 126 + 192 * player - 96 * maxPlay, 157, 0,15*7, 64, 14);//TRY AGAIN�]�X�̕����摜
			}
		}

		if(statc[player * 10] >= 450) {
			setGameOver(player);
			fadelv[player] = 100;
			hanabi_waiting[player] = 0;
			statc[player * 10] = 21;
			statc[player * 10 + 1] = 140;
			if(checkFieldTop(player) != 22){	//�t�B�[���h����̏ꍇ
				statc[player * 10 + 1] = 0;
				statc[player * 10] = 0;
			}
		}
	}
	else if ( ending[player] == 5 )		// �Ƃ�J����ǉ�1.60c7g7
	{
		StopAllBGM();
		statc[player * 10]++;
		if(statc[player * 10] < 220) {
			if(gameMode[player] == 8)
				ExBltRect(3, 105 + 192 * player - 96 * maxPlay, 76, 195, 250, 109, 20);
			else{
				// EXCELLENT
				if(statc[player * 10] <= 5){
					k = 10 - statc[player * 10];
					i = (75 * k / 5 - 75) / 2;
					j = (9 * k / 5 - 9) / 2;
					k = 65536 * k / 5;
					ExBltRectR(3, 122 - i + 192 * player - 96 * maxPlay, 96 - j, 212, 73, 75, 9, k, k);
				} else {
					ExBltRect(3, 122 + 192 * player - 96 * maxPlay, 96, 212, 73, 75, 9);
				}
			}
			if((statc[player * 10] % 40 == 0)&&(endingcnt[player] < 4)) {
				PlaySE(35);
				objectCreate2(player, 7, Rand(80) + 72 + 192 * player - 96 * maxPlay, 32 + Rand(20), 0, 0, Rand(7)+1, 0);
			}
		} else {
			if(statc[player * 10] == 220) objectClearPl(player);	// Ti���ۂ��ԉ΂�����
			if(gameMode[player] == 8)
				ExBltRect(3, 105 + 192 * player - 96 * maxPlay, 76, 195, 250, 109, 20);
			else
				ExBltRect(3, 122 + 192 * player - 96 * maxPlay, 96, 212, 73, 75, 9);

			printFont(16 + 24 * player - 12 * maxPlay, 14, "BUT...", 0);
			if(gameMode[player] != 8){
			printFont(16 + 24 * player - 12 * maxPlay, 15, "LET'S GO", 0);
			printFont(16 + 24 * player - 12 * maxPlay, 16, "BETTER", 0);
			printFont(16 + 24 * player - 12 * maxPlay, 17, "NEXT TIME", 0);
			}
			else{
			printFont(16 + 24 * player - 12 * maxPlay, 15, "LAST", 0);
			printFont(16 + 24 * player - 12 * maxPlay, 16, "ERASE", 0);
			printFont(16 + 24 * player - 12 * maxPlay, 17, "2 LINES", 0);
			}
			// �{�^���ŃX�L�b�v
			if(getPushState(player, 4)) {
				statc[player * 10] = 420;
			}
			if(statc[player * 10] >= 420) {
				setGameOver(player);
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 1] = 140; 	// gameover���̒n�`�̊D�F���������΂�
				statc[player * 10] = 21;
				if(checkFieldTop(player) != 22){	//DEVIL-
					statc[player * 10 + 1] = 0;
					statc[player * 10] = 0;
				}
			}
		}
	}else if ( ending[player] == 6 ){//���̂܂܃��[���˓�
		if(repversw <= 49){
			ending[player] =1;
		}
		if((gameMode[player]!=1) || ((hebo_plus[player]) && (repversw >= 58))){//MASTER�ȊO������
			fastroll[player]=1;
		}
		if(!gameMode[player]){//�{�[�i�X�̕����\��
			gflash[player] = 120;
		}

		// ���y��~ #1.60c7j9
		if((gameMode[player] != 8) || ((gameMode[player] == 8) && (mission_end[c_mission ] >= 4)))
		StopAllBGM();
		pinch[player] = 0;
		// ACE�ł̎c�莞�Ԃ����Ȃ����̌��ʉ�����~
		StopSE(32);

		// �X�^�b�t���[���J�n
		ending[player] = 2;
		// �G���f�B���OBGM�Đ�
		if(gameMode[player] == 3){
			if(tc[player] >= 1000) bgmlv = 5;
			else bgmlv = 3;
			changeBGM(player);
		}else if(gameMode[player] == 0){
			bgmlv = 1;
			changeBGM(player);
		}else if(gameMode[player] == 5){
			bgmlv = p_bgmlv;
			changeBGM(player);
		}else
			PlayWave(56);

		statc[player * 10]++;
	}else if (ending[player] == 7){//���Z�k
		// ���y��~ #1.60c7j9
		if((gameMode[player] != 8) || ((gameMode[player] == 8) && (mission_end[c_mission ] >= 4)))
		StopAllBGM();
		if((gameMode[player] == 5) && (statc[player * 10] <= 132)) statc[player * 10] = 133;	// �u���b�N�������X�L�b�v
		pinch[player] = 0;
		// ACE�ł̎c�莞�Ԃ����Ȃ����̌��ʉ�����~
		StopSE(32);

		// �u���b�N������
		// BIG�Ή� #1.60c7j5
		if(statc[player * 10] % 6 == 0) {
			j = (fldsizeh[player] + 1) - (statc[player * 10] / 6);
			if((j >= 0) && (j <= fldsizeh[player])) {
				for(i = 0; i < fldsizew[player]; i++) {
				// ���C�������G�t�F�N�g�ŏ����� #1.60c7n5
				if( fld[i+ j * fldsizew[player] + player * 220] != 0) {
					objectCreate(player, 1, (i + 15 + 24 * player - 12 * maxPlay) * 8,(j + 3) * 8, (i - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + 1 * 250, fld[i+ j * fldsizew[player] + player * 220], 100);
				}

				fld[i+ j * fldsizew[player] + player * 220] = 0;
				fldt[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7j5
				fldi[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7n1
				flds[i+ j * fldsizew[player] + player * 220] = 0;		// #1.60c7n1
				}
			}
		}
		if((statc[player * 10] > 132)&&(statc[player * 10] < 270)){
			if(stopmirror_flag[player]) fldMirrorProc(player);
			// �ԉ�
			if((statc[player * 10] % 9 == 0)&&(endingcnt[player] < 10)) {
				PlaySE(35);
				objectCreate2(player, 7, Rand(80) + 72 + 192 * player - 96 * maxPlay, 32 + Rand(20), 0, 0, Rand(7)+1, 0);
				hanabi_total[player]++;
				endingcnt[player]++;
			}
			// EXCELLENT
			if(statc[player * 10] <= 138){
				k = 10 - (statc[player * 10] - 133);
				i = (75 * k / 5 - 75) / 2;
				j = (9 * k / 5 - 9) / 2;
				k = 65536 * k / 5;
				ExBltRectR(3, 122 - i + 192 * player - 96 * maxPlay, 96 - j, 212, 73, 75, 9, k, k);
			} else {
				ExBltRect(3, 122 + 192 * player - 96 * maxPlay, 96, 212, 73, 75, 9);
			}
		}
						// �A�j���I��
		if(statc[player * 10] == 240) {
			setGameOver(player);
			fadelv[player] = 100;
			hanabi_waiting[player] = 0;
			setGameOver(player);
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 1] = 140; 	// gameover���̒n�`�̊D�F���������΂�
			statc[player * 10] = 21;
		}

		statc[player * 10]++;
	}
//bgmteisiflg = 0;
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.14 - ���ʕ\�� #1.60c7f3
//������������������������������������������������������������������������������
void statResult(int player) {
	int i, color, best, worst, bestT, worstT, tmp;
	statc[player * 10 + 1]++;

	// ���y�𗬂� #1.60c7l2
	// 2�l�����ŏd�Ȃ�Ȃ��悤�ɏC�� #1.60c7m1
	if( ((stat[1 - player] == 0) || (stat[1 - player] == 10)) && (!IsPlayWave(63)) && (wavebgm > 0) )
		PlayWave(63);

	//�x���������Ă�����~�߂�
	StopSE(40);

	if((statc[player*10+1]==1)&&(gameMode[player]==1)&&(enable_grade[player]==4)&&(enable_randexam==2)){
		grade_pasttime[player]++;//�����̊Ԃ̃X�p��
	}

	if((statc[player*10+1]==1)&&(enable_randexam==2)&&(enable_grade[player]==4)&&(gameMode[player]==1)){
		grade_his[4+player*5]=grade_his[3+player*5];//�����Ŏb��i�ʗ��������炷
		grade_his[3+player*5]=grade_his[2+player*5];
		grade_his[2+player*5]=grade_his[1+player*5];
		grade_his[1+player*5]=grade_his[0+player*5];
		grade_his[0+player*5]=grade[player];
	}
/*
	// ���v���C�Z�[�u
	if((textguide) && (!playback) && (!demo)){
		if(!player) printFont(13+24 * player - 12 * maxPlay, 26, "0-9 KEY:REPLAY", 0);
		else printFont(13+24 * player - 12 * maxPlay, 26, "Q-P KEY:REPLAY", 0);
	}
	ReplaySaveCheck(player, 3);

	if(statc[player * 10 + 3]) {
		if( (sgrade[player] >= min_sgrade) || (relaymode[player])) {	//���i�ʕ\�����ɏd�Ȃ�̂�
			sprintf(string[0], "SAVED : %02d", statc[player * 10 + 3]);
			printFont(15 + 24 * player - 12 * maxPlay, 24+relaymode[player], string[0], 5);
		} else {
			printFont(15 + 24 * player - 12 * maxPlay, 20, "YOUR PLAY", 7);
			printFont(16 + 24 * player - 12 * maxPlay, 21, "WAS SAVED", 7);
			sprintf(string[0], "FILE NO.%02d", statc[player * 10 + 3]);
			printFont(15 + 24 * player - 12 * maxPlay, 23, string[0], 5);
		}
	}
*/
	printFont(15 + 24 * player - 12 * maxPlay, 6 - (2 * relaymode[player]), "PLAY DATA", 4);

	if((gameMode[player] == 9) && (relaymode[player])){	// ROT�����[
		printFont(15 + 24 * player - 12 * maxPlay, 5, "HEBORIS", fontc[0]);
		printFont(15 + 24 * player - 12 * maxPlay, 7, "TI-ARS",  fontc[1]);
		printFont(15 + 24 * player - 12 * maxPlay, 9, "TI-WORLD",fontc[2]);
		printFont(15 + 24 * player - 12 * maxPlay, 11, "ACE-SRS", fontc[3]);
		printFont(15 + 24 * player - 12 * maxPlay, 13, "ACE-ARS", fontc[4]);
		printFont(15 + 24 * player - 12 * maxPlay, 15, "ACE-ARS2",fontc[5]);
		printFont(15 + 24 * player - 12 * maxPlay, 17, "DS-WORLD",fontc[6]);
		printFont(15 + 24 * player - 12 * maxPlay, 19, "SRS-X",   fontc[7]);
		printFont(15 + 24 * player - 12 * maxPlay, 21, "D.R.S",   fontc[8]);

		bestT = relaydata[player * 9 + 0];
		worstT = relaydata[player * 9 + 0];
		best = 0;
		worst = 0;

		for(i = 0;i < 9;i++){
			if(std_opt[player] == 0){	//time
				if(relaydata[player * 9 + best] > relaydata[player * 9 + i]){
					bestT = relaydata[player * 9 + i];
					best = i;
				}else if(relaydata[player * 9 + worst] < relaydata[player * 9 + i]){
					worstT = relaydata[player * 9 + i];
					worst = i;
				}
			}else{	//lines
				if(relaydata[player * 9 + best] < relaydata[player * 9 + i]){
					bestT = relaydata[player * 9 + i];
					best = i;
				}else if(relaydata[player * 9 + worst] > relaydata[player * 9 + i]){
					worstT = relaydata[player * 9 + i];
					worst = i;
				}
			}
		}
		for(i = 0;i < 9;i++){
			best = (relaydata[player * 9 + i] == bestT);
			worst = (relaydata[player * 9 + i] == worstT);
			color = 0;
			if(best) color = (count % 4 / 2) * 7;
			if(worst) color = (count % 4 / 2) * 2;

			if(std_opt[player] == 0){
				getTime(relaydata[player * 9 + i]);
				printFont(17 + 24 * player - 12 * maxPlay, 6 + (2 * i), string[0], color);
			}else {
				sprintf(string[0],"%3dLINES",relaydata[player * 9 + i]);
				printFont(17 + 24 * player - 12 * maxPlay, 6 + (2 * i), string[0], color);
			}
		}
		if(std_opt[player] == 0){
			printFont(15 + 24 * player - 12 * maxPlay, 23, "TOTAL TIME",   4);
			getTime(time[player]);
		}else{
			printFont(15 + 24 * player - 12 * maxPlay, 23, "TOTAL LINES",   4);
			sprintf(string[0],"%3dLINES" , li[player]);
		}
		printFont(17 + 24 * player - 12 * maxPlay, 24, string[0], count % 9);


	}else if(gameMode[player] == 8) {
		// MISSION���[�h #1.60c7s4
		// MISSION
		ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 65, 220, 84, 31, 7);
		sprintf(string[0], "%4d", clear_mission);
		printSMALLFont(176 + 192 * player - 96 * maxPlay, 65, string[0], 0);
		//TIME
		ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 85, 180, 119, 19, 7);
		getTime(time[player]);
		printSMALLFont(152 + 192 * player - 96 * maxPlay, 85, string[0], 0);
	} else {
		if((gameMode[player] == 7)||(gameMode[player] == 9)) {
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 65, 154, 119, 23, 7);
			sprintf(string[0], "%4d", li[player]);
			printSMALLFont(176 + 192 * player - 96 * maxPlay, 65, string[0], 0);
		} else if(!((gameMode[player] == 0) && (novice_mode[player])) ){
			// SCORE
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 65, 154, 112, 26, 7);
			sprintf(string[0], "%7d", sc[player]);
			printSMALLFont(158 + 192 * player - 96 * maxPlay, 65, string[0], 0);
		}
		// LEVEL
		ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 85, 180, 112, 26, 7);
		sprintf(string[0], "%4d", lv[player]);
		printSMALLFont(176 + 192 * player - 96 * maxPlay, 85, string[0], 0);

		// TIME
		ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 105, 180, 119, 19, 7);
		getTime(time[player]);
		printSMALLFont(152 + 192 * player - 96 * maxPlay, 105, string[0], 0);


		// GRADE #1.60c7m9
		if((gameMode[player] != 0)&& (gameMode[player] < 6)) {
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 125, 228, 119, 26, 7);

			if(gameMode[player] != 3) {
				// ��DEVIL
				if(grade[player] == 32) {
					if(enable_grade[player]==1){
					//GM
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 443 ,((count % 4 / 2)*216)+180,90,32);
					}else{
					// Gm
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 270 ,((count % 4 / 2)*216)+120,90,48);
					}
				}else if( grade[player] >= 28 ) {
					// MK-MM
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 270 ,((count % 4 / 2)*216)+((grade[player]-28)*24),90,24);
				}  else if( grade[player] == 27 ) {
					if((enable_grade[player] == 2)||(enable_grade[player] == 4)){
						//Master
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 270 ,((count % 4 / 2)*216),90,24);
					}else{
						//m
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135,443 ,((count % 4 / 2)*216),90,24);
					}
				} else if( grade[player] >= 18 ) {
					// m1�`m9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 180 ,((count % 4 / 2)*216)+((grade[player]-18)*24),90,24);
				} else if( grade[player] >= 9 ) {
					// S1�`S9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 90 ,((count % 4 / 2)*216)+((grade[player]-9)*24),90,24);
				} else {
					// 9�`1
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 0 ,((count % 4 / 2)*216)+(grade[player]*24),90,24);
				}
			} else {
				// DEVIL
				if( grade[player] == 0 ) {
					// 1
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 0 ,((count % 4 / 2)*216)+192,90,24);
				} else {
					if(grade[player] < 10) { /* S1�`S9 */
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 90 ,((count % 4 / 2)*216)+((grade[player]-1)*24),90,24);
					} else if(grade[player] < 14)  { /* S10�`S13 */
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 360 ,((count % 4 / 2)*216)+((grade[player]-10)*24),90,24);
					} else if(grade[player] == 14) { /* m */
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135,443 ,((count % 4 / 2)*216),90,24);
					} else if(grade[player] == 15) { /* Gm */
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 135, 270 ,((count % 4 / 2)*216)+120,90,48);
					} else if(grade[player] == 16) { /* �l�\ */
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 130, 360 ,((count % 4 / 2)*216)+96,90,48);
					}
				}
			}
		}

		if(gameMode[player] == 0){
			if(!novice_mode[player]){
				printSMALLFont(152 + 192 * player - 96 * maxPlay, 157, "TAMAYA",(count % 4 / 2) * digitc[rots[player]]);
				sprintf(string[0], "%4d", hanabi_total[player]);
				printBIGFont(128 + 192 * player - 96 * maxPlay, 139, string[0], (count % 4 / 2) * digitc[rots[player]]);
			}else{
				ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 125, 154, 112, 26, 7);
				printSMALLFont(152 + 192 * player - 96 * maxPlay, 157, "Points",(count % 4 / 2) * digitc[rots[player]]);
				sprintf(string[0], "%6d", sc[player]);
				printBIGFont(122 + 192 * player - 96 * maxPlay, 139, string[0], (count % 4 / 2) * digitc[rots[player]]);
			}
		}

		// S-GRADE #1.60c7o1
		if( sgrade[player] >= min_sgrade ) {
			tspin_c[player] = 0;
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 160, 220, 91, 31, 7);
			ExBltRect(3, 152 + 192 * player - 96 * maxPlay, 160, 228, 119, 26, 7);
			if( sgrade[player] == 18 ) {
				// GM
				ExBltRect(26,115 + 192 * player -96 * maxPlay , 168, 270 ,((count % 4 / 2)*216)+168,90,24);
			} else if( sgrade[player] >= 9 ) {
				// S1�`S9
				ExBltRect(26,115 + 192 * player -96 * maxPlay , 168, 90 ,((count % 4 / 2)*216)+((sgrade[player]-9)*24),90,24);
			} else {
				// 9�`1
				ExBltRect(26,115 + 192 * player -96 * maxPlay , 168, 0 ,((count % 4 / 2)*216)+(sgrade[player]*24),90,24);
			}
		}
	}

	// �{�^���ŃX�L�b�v
	if(getPushState(player, 4)) {
		statc[player * 10 + 1] = 1000;
	}

	// �I��
	if(statc[player * 10 + 1] >= 500 + (300 * (relaymode[player]))) {

	if(!playback){
		stat[player] = 38;
	}else{
		if( (stat[1 - player] == 0) || (stat[1 - player] == 10) )
			StopAllBGM();		// ���y��~ #1.60c7l3
		stat[player] = 21;	// �Q�[���I�[�o�[�\�� #1.60c7p1
	}

		statc[player * 10] = 0;
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		statc[player * 10 + 5] = 0;
	}
}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.38 - ���v���C�ۑ����
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�ԍ�
// statc[player * 10 + 1]�F���v���C�̗L��
// statc[player * 10 + 2]�F�ۑ����͂�������
void statReplaySave(int player) {
	int i;

	// ���v���C�̑��݂𒲂ׂ�
	if(!statc[player * 10 + 0]) {
		statc[player * 10 + 1] = loadReplayData2(player,1);
		statc[player * 10 + 0] = 1;
	}

	printFont(16 + 24 * player - 12 * maxPlay, 5, "SAVE", 4);
	printFont(16 + 24 * player - 12 * maxPlay, 6, " REPLAY?", 4);


	if((time2[player] > 72000 - 36000 * (gameMode[player] == 4)) || (!replay_save[player])){	//���v���C�L�^�s��
		printFont(15 + 24 * player - 12 * maxPlay, 12, "THIS PLAY", 2);
		printFont(15 + 24 * player - 12 * maxPlay, 13, "  CAN'T BE", 2);
		printFont(15 + 24 * player - 12 * maxPlay, 14, "     SAVED", 2);
		if((time2[player] > 72000) && (gameMode[player] != 4)) printFont(15 + 24 * player - 12 * maxPlay, 16, "OVER 20MIN", 2);
		if((time2[player] > 36000) && (gameMode[player] == 4)) printFont(15 + 24 * player - 12 * maxPlay, 16, "OVER 10MIN", 2);
	}else if(statc[player * 10 + 1] != 0){	//��
		if(statc[player * 10 + 2] == 0) printFont(15 + 24 * player - 12 * maxPlay, 8, " <      >", count % 9);
		sprintf(string[0],"   NO.%d",statc[player * 10 + 0]);
		printFont(15 + 24 * player - 12 * maxPlay, 8, string[0], 0);
		printSMALLFont(142 + 192 * player - 96 * maxPlay, 127, "Empty", 0);
	}else{	//���Ƀ��v���C����
		if(statc[player * 10 + 2] == 0) printFont(15 + 24 * player - 12 * maxPlay, 8, " <      >", count % 9);
		sprintf(string[0],"   NO.%d",statc[player * 10 + 0]);
		printFont(15 + 24 * player - 12 * maxPlay, 8, string[0], 0);

		sprintf(string[0],"    VER:%d",repdata[3 + player * 20]);	//�o�[�W����
		printFont(15 + 24 * player - 12 * maxPlay, 9, string[0], 0);

		ExBltRect(85, 120 + 192 * player - 96 * maxPlay, 77, 0, 98, 22, 7);	//���[�h
		ExBltRect(86, 125 + 192 * player - 96 * maxPlay, 87, 72*repdata[1 + player * 20], 99 + (9*repdata[0 + player * 20]), 72, 9);

		ExBltRect(85, 120 + 192 * player - 96 * maxPlay, 105, 35, 42, 22, 7);	//Rots
		if(repdata[2 + player * 20] != 9)
			ExBltRect(55,128 + 8 * (repdata[0 + player * 20] == 4) + 192 * player -96 * maxPlay , 113 - (4 * (getDrawRate() == 1)), 64*repdata[2 + player * 20] ,
					32*fontc[repdata[2 + player * 20]] + (7 * (getDrawRate() == 1)),64,12 + (5 * (getDrawRate() == 1)));
		else
			printFont(15 + 24 * player - 12 * maxPlay, 15, "   RANDOM", 0);

		if(repdata[0 + player * 20] == 6){	//TOMOYO
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 131, 228, 112, 26, 7);
			sprintf(string[0], "%6d", repdata[4 + player * 20] + 1);
			printSMALLFont(158 + 192 * player - 96 * maxPlay, 131, string[0], 0);

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 147, 180, 119, 19, 7);
			getTime(repdata[5 + player * 20]);
			printSMALLFont(146 + 192 * player - 96 * maxPlay, 147, string[0], 0);
		}else if(repdata[0 + player * 20] == 4){	//VS
			printFont(15 + 24 * player - 12 * maxPlay, 14, "1P", 0);
			printFont(15 + 24 * player - 12 * maxPlay, 17, "2P", 0);

			if(repdata[4 + player * 20] != 9)
				ExBltRect(55,128 + 8 + 192 * player -96 * maxPlay , 137 - (4 * (getDrawRate() == 1)), 64*repdata[4 + player * 20] ,
						32*fontc[repdata[4 + player * 20]] + (7 * (getDrawRate() == 1)),64,12 + (5 * (getDrawRate() == 1)));
			else
				printFont(15 + 24 * player - 12 * maxPlay, 18, "   RANDOM", 0);

			sprintf(string[0], "%2d POINT", repdata[5 + player * 20]);
			printFont(15 + 24 * player - 12 * maxPlay, 20, string[0], 0);
			printFont(15 + 24 * player - 12 * maxPlay, 21, "    MATCH", 0);

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 179, 180, 119, 19, 7);
			getTime(repdata[6 + player * 20]);
			printSMALLFont(146 + 192 * player - 96 * maxPlay, 179, string[0], 0);
		}else if(repdata[0 + player * 20] == 7){	//ACE
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 131, 180, 112, 26, 7);
			sprintf(string[0], "%6d", repdata[4 + player * 20]);
			printSMALLFont(158 + 192 * player - 96 * maxPlay, 131, string[0], 0);

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 147, 154, 119, 23, 7);
			sprintf(string[0], "%6d", repdata[5 + player * 20]);
			printSMALLFont(158 + 192 * player - 96 * maxPlay, 147, string[0], 0);

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 163, 180, 119, 19, 7);
			getTime(repdata[6 + player * 20]);
			printSMALLFont(146 + 192 * player - 96 * maxPlay, 163, string[0], 0);
		}else if(repdata[0 + player * 20] == 8){	//MISSION
			getRoadName(repdata[4 + player * 20]);
			printFont(14 + 24 * player - 12 * maxPlay, 17, string[0], 0 );

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 147, 180, 119, 19, 7);
			getTime(repdata[5 + player * 20]);
			printSMALLFont(146 + 192 * player - 96 * maxPlay, 147, string[0], 0);
		}else if(repdata[0 + player * 20] == 9){	//SIMPLE
			ExBltRect(85, (18 + 24 * player - 12 * maxPlay)*8, 96, 0, 7*(25 + repdata[4 + player * 20]), 50, 7);
			if(repdata[4 + player * 20] > 1){
				ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 131, 154, 112, 26, 7);
				sprintf(string[0], "%6d", repdata[5 + player * 20]);
				printSMALLFont(158 + 192 * player - 96 * maxPlay, 131, string[0], 0);
			}
			if(repdata[4 + player * 20] != 0){
				ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 147, 154, 119, 23, 7);
				sprintf(string[0], "%6d", repdata[6 + player * 20]);
				printSMALLFont(158 + 192 * player - 96 * maxPlay, 147, string[0], 0);
			}
			if(repdata[4 + player * 20] != 1){
				ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 163, 180, 119, 19, 7);
				getTime(repdata[7 + player * 20]);
				printSMALLFont(146 + 192 * player - 96 * maxPlay, 163, string[0], 0);
			}
		}else{		//��(BEGINNER�`DEVIL�AORIGINAL)
			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 131, 180, 112, 26, 7);
			sprintf(string[0], "%6d", repdata[4 + player * 20]);
			printSMALLFont(158 + 192 * player - 96 * maxPlay, 131, string[0], 0);

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 147, 180, 119, 19, 7);
			getTime(repdata[5 + player * 20]);
			printSMALLFont(146 + 192 * player - 96 * maxPlay, 147, string[0], 0);

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 163, 154, 112, 26, 7);
			sprintf(string[0], "%6d", repdata[6 + player * 20]);
			printSMALLFont(158 + 192 * player - 96 * maxPlay, 163, string[0], 0);

			ExBltRect(3, 120 + 192 * player - 96 * maxPlay, 179, 154, 119, 23, 7);
			sprintf(string[0], "%6d", repdata[7 + player * 20]);
			printSMALLFont(158 + 192 * player - 96 * maxPlay, 179, string[0], 0);
		}
		if(repdata[9 + player * 20]) ExBltRect(85, 136 + 192 * player - 96 * maxPlay, 96, 154, 112, 14, 7);
	}
	if(statc[player * 10 + 2] == 0){
		printFont(16+24 * player - 12 * maxPlay, 25, "B:NO SAVE", 0);

		// �L�[����
		padRepeat(player);
		// ��
		if( (mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) || getPressState(player, 6) )
		if( getPressState(player, 2) ) {
			PlaySE(3);
			statc[player * 10 + 0]--;
			if(statc[player * 10 + 0] < 1) statc[player * 10 + 0] = 40;
			statc[player * 10 + 1] = loadReplayData2(player,statc[player * 10 + 0]);
		}
		// ��
		if( (mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) || getPressState(player, 6) )
		if( getPressState(player, 3) ) {
			PlaySE(3);
			statc[player * 10 + 0]++;
			if(statc[player * 10 + 0] > 40) statc[player * 10 + 0] = 1;
			statc[player * 10 + 1] = loadReplayData2(player,statc[player * 10 + 0]);
		}
		// A (SAVE)
		if( getPushState(player, 4) ) {
			if((time2[player] > 72000 - 36000 * (gameMode[player] == 4)) || (!replay_save[player])){
				statc[player * 10 + 2] = 120;
			}else{
				if(abs_YGS2K(GetRealFPS() - max_fps_2) < 10){
					PlaySE(10);
					saveReplayData(player, statc[player * 10 + 0]);
					statc[player * 10 + 2]++;
					statc[player * 10 + 1] = loadReplayData2(player,statc[player * 10 + 0]);
				}
			}
		}
		// B (NO SAVE)
		if( getPushState(player, 5) ) {
			statc[player * 10 + 2] = 120;
		}
	}else{
		statc[player * 10 + 2]++;
		if(statc[player * 10 + 2] < 120){
			printFont(18 + 24 * player - 12 * maxPlay, 25, "SAVED", (count % 4 / 2) * digitc[rots[player]]);
		}else{
			if( (stat[1 - player] == 0) || (stat[1 - player] == 10) )
				StopAllBGM();		// ���y��~ #1.60c7l3
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 3] = 0;
			statc[player * 10 + 4] = 0;
			statc[player * 10 + 5] = 0;
			if(gameMode[player] == 4){	// VS
				// wait�l���o�b�N�A�b�v����߂� #1.60c7o9
				wait1[0] = b_wait1[0];
				wait2[0] = b_wait2[0];
				wait3[0] = b_wait3[0];
				waitt[0] = b_waitt[0];
				sp[0]    = b_sp[0];

				wait1[1] = b_wait1[1];
				wait2[1] = b_wait2[1];
				wait3[1] = b_wait3[1];
				waitt[1] = b_waitt[1];
				sp[1]    = b_sp[1];
				enterVersusMode(0);		// VS���j���[��
				return;
			}else{
				stat[player] = 21;	// �Q�[���I�[�o�[�\�� #1.60c7p1
			}
		}
	}

}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.16 - �ΐ탂�[�h�ݒ��� #1.60c7g1
//������������������������������������������������������������������������������
void statVersusSelect(int player) {
	int	i;
	if(demo){	//�f���Ȃ�^�C�g����
		StopAllBGM();
		StopSE(40);
		cpu_flag[0] = 0;
		cpu_flag[1] = 0;
		gameMode[0] = 0;
		gameMode[1] = 0;
		rots[0] = setupBak[4] % 10;
		rots[1] = setupBak[4] / 10;
		if(!tmp_maxPlay)
			maxPlay = 0;
		flag = 1;
		return;
	}

	if(hidden[player] < 0) hidden[player] = 0;
	printFont(3 + 24 * player, 5, "SELECT", 4);

	printFont(3 + 24 * player, 7, "ROT. ", 6);
	ExBltRect(55,158 + 192 * player -96 * maxPlay , 40, (64*rots[player]) ,384,64,21);

	if(vslevel[player] == 2)
		printFont(3 + 24 * player, 6, "A:LOAD SP", 7);
	else
		printFont(3 + 24 * player, 6, "A:READY", 7);

	// ��]�@��
	if(versus_rot[player] == 0)
		printFont(6 + 24 * player, 8, "HEBORIS",     count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 1)
		printFont(7 + 24 * player, 8, "TI-ARS",      count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 2)
		printFont(5 + 24 * player, 8, "TI-WORLD",    count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 3)
		printFont(6 + 24 * player, 8, "ACE-SRS",   count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 4)
		printFont(6 + 24 * player,8, "ACE-ARS",     count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 5)
		printFont(5 + 24 * player, 8, "ACE-ARS2",     count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 6)
		printFont(5 + 24 * player, 8, "DS-WORLD",   count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 7)
		printFont(8 + 24 * player, 8, "SRS-X",   count % 9 * (vslevel[player] == 0));
	else if(versus_rot[player] == 8)
		printFont(8 + 24 * player, 8, "D.R.S",   count % 9 * (vslevel[player] == 0));

	else
		printFont(7 + 24 * player, 8, "RANDOM",      count % 9 * (vslevel[player] == 0));

	// ����グ�^�C�v
	printFont(3 + 24 * player, 9, "UPLINE", 6);
	if(upLineT[player] == 0)
		printFont(3 + 24 * player, 10, "COPYBOTTOM", count % 9 * (vslevel[player] == 1));
	else if(upLineT[player] == 1)
		printFont(8 + 24 * player, 10, "HEBO+",    count % 9 * (vslevel[player] == 1));
	else if(upLineT[player] == 2)// ��������オ��#1.60c7g2
		printFont(4 + 24 * player, 10, "DS-RANDOM",  count % 9 * (vslevel[player] == 1));
	else
		printFont(3 + 24 * player, 10, "MOVEERASED",  count % 9 * (vslevel[player] == 1));

	// �X�s�[�h�ݒ�
	printFont(3 + 24 * player, 11, "SP PRESET", 6);

	//���x�e���v���[�g
	if(sptmp[player] == -10){
		printFont(3 + 24 * player, 12, "OOBAKA(!)",   count % 9 * (vslevel[player] == 2));
	}else if(sptmp[player] < 0){
		printFont(3 + 24 * player, 12, waitname[0],     count % 9 * (vslevel[player] == 2));
	}else{
		printFont(3 + 24 * player, 12, waitname[sptmp[player]],   count % 9 * (vslevel[player] == 2));
	}
	// �u���b�N�����X�s�[�h(1200 = 20G)
	printFont(3 + 24 * player, 13, "WAITS",   6);
	sprintf(string[0], "%7d", sp[player]);
	printFont(6 + 24 * player, 13, string[0], count % 9 * (vslevel[player] == 3));

	// WAITS 26402815
	sprintf(string[0], "W1:%2d", wait1[player]);//SYUTUGEN
	printFont(3 + 24 * player, 14, string[0], count % 9 * (vslevel[player] == 4));
	sprintf(string[0], "W2:%2d", wait2[player]);//SYOUKYO
	printFont(8 + 24 * player, 14, string[0], count % 9 * (vslevel[player] == 5));
	sprintf(string[0], "W3:%2d", wait3[player]);//SETTYAKU
	printFont(3 + 24 * player, 15, string[0], count % 9 * (vslevel[player] == 6));
	sprintf(string[0], "WT:%2d", waitt[player]);//YOKOTAME
	printFont(8 + 24 * player, 15, string[0], count % 9 * (vslevel[player] == 7));

	//���ꂼ�ꍀ�ږ��\��
	if(!english){
	if(vslevel[player] == 3)
		printFont(3 + 24 * player, 16, "FALL SPEED",    8);
	else if(vslevel[player] == 4)
		printFont(3 + 24 * player, 16, "SYUTUGEN",    8);
	else if(vslevel[player] == 5)
		printFont(3 + 24 * player, 16, "SYOUKYO",     8);
	else if(vslevel[player] == 6)
		printFont(3 + 24 * player, 16, "SETTYAKU",    8);
	else if(vslevel[player] == 7)
		printFont(3 + 24 * player, 16, "YOKOTAME",   8);
	} else {
	if(vslevel[player] == 3)
		printFont(3 + 24 * player, 16, "FALL SPEED",    8);
	else if(vslevel[player] == 4)
		printFont(3 + 24 * player, 16, "ARE",    8);
	else if(vslevel[player] == 5)
		printFont(3 + 24 * player, 16, "LINE CLEAR",     8);
	else if(vslevel[player] == 6)
		printFont(3 + 24 * player, 16, "LOCK",    8);
	else if(vslevel[player] == 7)
		printFont(3 + 24 * player, 16, "DAS",   8);
	}

	if((vsmodesl==0)||(vsmodesl==3)){
		printFont(3 + 24 * player, 17, "USEITEM", 6);
		if(use_item[player] == 0){
			printFont(10 + 24 * player, 17, "ALL", count % 9 * (vslevel[player] == 8));
		}else if((use_item[player] > 0)&&(use_item[player]<=item_num)){
			sprintf(string[0], "%2d", use_item[player]);
			printFont(10 + 24 * player, 17, string[0], count % 9 * (vslevel[player] == 8));
			ExBltRect(46,(12 + 24 * player)*8, 136,(8*(use_item[player]-1))+56,0,8,8);
			ExBltRect(28,(7 + 24 * player)*8, 144, 0, (use_item[player] - 1) * 16, 48, 16);
		}else if(use_item[player] == item_num+1){
			printFont(10 + 24 * player, 17, "FEW", count % 9 * (vslevel[player] == 8));
			ExBltRect(46,(3 + 24 * player)*8, 144,56,0,40,8);
		}else if(use_item[player] == item_num+2){
			printFont(10 + 24 * player, 17, "DS", count % 9 * (vslevel[player] == 8));
			ExBltRect(46,(3 + 24 * player)*8, 144,(8*5)+56,0,8,8);
			ExBltRect(46,(4 + 24 * player)*8, 144,(8*6)+56,0,8,8);
			ExBltRect(46,(5 + 24 * player)*8, 144,(8*11)+56,0,8,8);
			ExBltRect(46,(6 + 24 * player)*8, 144,(8*12)+56,0,8,8);
			ExBltRect(46,(7 + 24 * player)*8, 144,(8*17)+56,0,8,8);
			ExBltRect(46,(8 + 24 * player)*8, 144,(8*25)+56,0,8,8);
		}else if(use_item[player] == item_num+3){
			printFont(10 + 24 * player, 17, "TGM", count % 9 * (vslevel[player] == 8));
			ExBltRect(46,(3 + 24 * player)*8, 144,56,0,40,8);
			ExBltRect(46,(8 + 24 * player)*8, 144,176,0,40,8);
			ExBltRect(46,(3 + 24 * player)*8, 152,216,0,40,8);
			ExBltRect(46,(8 + 24 * player)*8, 152,272,0,32,8);
		}
	}else{
		printFont(3 + 24 * player, 17, "NO ITEM", count % 9 * (vslevel[player] == 8));
	}

	// HIDDEN #1.60c7g2
	printFont(3 + 24 * player, 20, "WIN TYPE",6);
	if(wintype == 0){
		sprintf(string[0], "GOAL LV", 0);
		printFont(3 + 24 * player, 21, string[0], count % 9 * (vslevel[player] == 9));
	}else if(wintype == 1){
		sprintf(string[0], "GOAL LINE");
		printFont(3 + 24 * player, 21, string[0], count % 9 * (vslevel[player] == 9));
	}else if(wintype == 2){
		sprintf(string[0], "SURVIVAL");
		printFont(3 + 24 * player, 21, string[0], count % 9 * (vslevel[player] == 9));
	}

	// BIG #1.60c7g2
	printFont(3 + 24 * player, 22, "BIG", 6);
	if(IsBigStart[player])
		printFont(11 + 24 * player, 22, "ON", count % 9 * (vslevel[player] == 10));
	else
		printFont(10 + 24 * player, 22, "OFF", count % 9 * (vslevel[player] == 10));

	// ITEM #1.60c7q7 + CEMENT #1.60c7r4
	printFont(3 + 24 * player, 23, "MODE", 6);
	if(vsmodesl == 0)
		printFont(7 + 24 * player, 23, "NORMAL", count % 9 * (vslevel[player] == 11));
	else if(vsmodesl == 1)
		printFont(7 + 24 * player, 23, "NOITEM", count % 9 * (vslevel[player] == 11));
	else if(vsmodesl == 2)
		printFont(7 + 24 * player, 23, "CEMENT", count % 9 * (vslevel[player] == 11));
	else
		printFont(7 + 24 * player, 23, "NORISE", count % 9 * (vslevel[player] == 11));

	if(vs_goal == 0){
		printFont(3 + 24 * player, 24, "SURVIVAL",   6);
	}else if(wintype==0){
		// WINLV)
		printFont(3 + 24 * player, 24, "WIN LV",   6);
		if(vs_goal!=0)sprintf(string[0], "%4d", vs_goal);
		else sprintf(string[0], " NON");
		printFont(9 + 24 * player, 24, string[0], count % 9 * (vslevel[player] == 12));
	}else if(wintype==1){	// WINLINE
		printFont(3 + 24 * player, 24, "WINLINE",   6);
		if(vs_goal!=0)sprintf(string[0], "%3d", vs_goal/10);
		else sprintf(string[0], " NON");
		printFont(10 + 24 * player, 24, string[0], count % 9 * (vslevel[player] == 12));
	}else{
		printFont(3 + 24 * player, 24, "SURVIVAL",   6);
	}

	printFont(18, 5, "HOLD",  0);
	printFont(18, 6, "  +",  0);
	printFont(18, 7, "kUDn",  0);
	printFont(18, 9, "WIN",  0);
	printFont(18,10, " PTS",  0);

	// �㉺�ړ����������ςȂ��ł��ł���悤�ɕύX #1.60c7l3
	padRepeat2(player);

	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
	if(getPressState(player, 0)) {
		PlaySE(5);

		if(getPressState(player, 7)){
			winpoint--;
			if(winpoint <= 0) winpoint = 10;
		}else{
			vslevel[player]--;
			if(vslevel[player] < 0) vslevel[player] = 12;
		}
	}

	// ��
	if( (mpc2[player] == 1) || ((mpc2[player] > tame3) && (mpc2[player] % tame4 == 0)) )
	if(getPressState(player, 1)) {
		PlaySE(5);

		if(getPressState(player, 7)){
			winpoint++;
			if(winpoint > 10) winpoint = 1;
		}else{
			vslevel[player]++;
			if(vslevel[player] > 12) vslevel[player] = 0;
		}
	}

	padRepeat(player);

	// ��
	if((mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) || (getPressState(player, 6)))
	if(getPressState(player, 2)) {
		PlaySE(3);

		// ��]�@��
		if(vslevel[player] == 0) {
			versus_rot[player]--;
			if(versus_rot[player] < 0) versus_rot[player] = 9;
			if(versus_rot[player] != 9) rots[player] = versus_rot[player];
			setNextBlockColors(player, 1);
		}
		// ����グ�^�C�v
		if(vslevel[player] == 1) {
			upLineT[player]--;
			if(upLineT[player] < 0) upLineT[player] = 3;
		}
		// ���x�e���v���[�g
		if(vslevel[player] == 2) {
			if(sptmp[player] > -10)
				sptmp[player]--;
			else StopSE(3);
		}
		// �����X�s�[�h
		if(vslevel[player] == 3) {
			sp[player]--;
			if(sp[player] < 0) sp[player] = 1200; // 0�ȉ���������1200��
		}
		// �o��
		if(vslevel[player] == 4) {
			wait1[player]--;
			if(wait1[player] < 0) wait1[player] = 99;
		}
		// ����
		if(vslevel[player] == 5) {
			wait2[player]--;
			if(wait2[player] < 0) wait2[player] = 99;
		}
		// �ڒ�
		if(vslevel[player] == 6) {
			wait3[player]--;
			if(wait3[player] < 0) wait3[player] = 99; // 0�ȉ���������99��
		}
		// ������
		if(vslevel[player] == 7) {
			waitt[player]--;
			if(waitt[player] < 0) waitt[player] = 99;
		}
		// �g�p����A�C�e���@0�őS��
		if(vslevel[player] == 8) {
			use_item[player]--;
			if(use_item[player] < 0) use_item[player] = item_num+3;
		}
		// WINTYPE #1.60c7g2
		if(vslevel[player] == 9) {
			wintype--;
			if(wintype< 0) wintype= 2;
		}
		// BIG #1.60c7g2
		if(vslevel[player] == 10) {
			IsBigStart[player] = !IsBigStart[player];
		}
		// ITEM #1.60c7q7 + CEMENT #1.60c7r4
		if(vslevel[player] == 11) {
			vsmodesl--;
			if(vsmodesl < 0) vsmodesl = 3;
		}
		//vs_goal
		if(vslevel[player] == 12) {
			vs_goal = vs_goal - 50;
			if(vs_goal <= 0) vs_goal = 1000;
		}
	}

	// ��
	if((mpc[player] == 1) || ((mpc[player] > tame1) && (mpc[player] % tame2 == 0)) || (getPressState(player, 6)))
	if(getPressState(player, 3)) {
		PlaySE(3);
		// ��]�@��
		if(vslevel[player] == 0) {
			versus_rot[player]++;
			if(versus_rot[player] > 9) versus_rot[player] = 0;
			if(versus_rot[player] != 9) rots[player] = versus_rot[player];
			setNextBlockColors(player, 1);
		}
		// ����グ�^�C�v
		if(vslevel[player] == 1) {
			upLineT[player]++;
			if(upLineT[player] > 3) upLineT[player] = 0;
		}
		// ���x�e���v���[�g
		if(vslevel[player] == 2) {
			if(sptmp[player] < skip_fwait){
				sptmp[player]++;
				if(sptmp[player] < 0) sptmp[player] = 0;
			}else StopSE(3);
		}
		// �����X�s�[�h
		if(vslevel[player] == 3) {
			sp[player]++;
			if(sp[player] > 1200) sp[player] = 0;
		}
		// �o��
		if(vslevel[player] == 4) {
			wait1[player]++;
			if(wait1[player] > 99) wait1[player] = 0;
		}
		// ����
		if(vslevel[player] == 5) {
			wait2[player]++;
			if(wait2[player] > 99) wait2[player] = 0;
		}
		// �ڒ�
		if(vslevel[player] == 6) {
			wait3[player]++;
			if(wait3[player] > 99) wait3[player] = 0; // 0�ȉ���������99��
		}
		// ������
		if(vslevel[player] == 7) {
			waitt[player]++;
			if(waitt[player] > 99) waitt[player] = 0;
		}
		// �g�p����A�C�e���@0�őS��
		if(vslevel[player] == 8) {
			use_item[player]++;
			if(use_item[player] > item_num+3) use_item[player] = 0;
		}
		// WINTYPE #1.60c7g2
		if(vslevel[player] == 9) {
			wintype++;
			if(wintype > 2) wintype = 0;
		}
		// BIG #1.60c7g2
		if(vslevel[player] == 10) {
			IsBigStart[player] = !IsBigStart[player];
		}
		// ITEM #1.60c7q7 + CEMENT #1.60c7r4
		if(vslevel[player] == 11) {
			vsmodesl++;
			if(vsmodesl > 3) vsmodesl = 0;
		}
		if(vslevel[player] == 12) {
			vs_goal = vs_goal + 50;
			if(vs_goal > 1000) vs_goal = 50;
		}
	}

	//VSMODE
	if(vsmodesl == 0){//�m�[�}��
		disrise = 0;
		noitem = 0;
	}else if(vsmodesl == 1){//�m�[�A�C�e��
		noitem = 1;
		disrise = 0;
	}else if(vsmodesl == 2){//�Z�����g
		noitem = 1;
		disrise = 1;
	}else if(vsmodesl == 3){//�m�[���C�Y
		noitem = 0;
		disrise = 1;
	}
	//��]�@���̃����_���Z���N�g
	if(versus_rot[player] == 9){
		rots[player] = Rand(9);
		setNextBlockColors(player, 1);
	}

	// B�{�^��
	if(getPushState(player, 5)) {
		upLineT[0] = uplinetype;
		use_item[0] = 0;
		upLineT[1] = uplinetype;
		use_item[1] = 0;
		gameMode[0] = 0;
		gameMode[1] = 0;
		if(!tmp_maxPlay) {
			maxPlay = 0;
		}
		setupBak[23] = wintype;
		setupBak[24] = vs_goal;
		setupBak[25] = noitem;
		setupBak[26] = disrise;
		flag = 1;
	}

	// A�{�^��
	if(getPushState(player, 4)) {
		if(vslevel[player] == 2) {
			PlaySE(3);
			if(sptmp[player] == -10){
				sp[player] = 1200;
				wait1[player] = 1;
				wait2[player] = 0;
				wait3[player] = 0;
				waitt[player] = 5;
				PlaySE(18);
			}else if((sptmp[player] >= 0) && (sptmp[player] <= skip_fwait))
				loadWait(player, sptmp[player]); // �Ή������ݒ��ǂݍ��ށB
			else if(sptmp[player] > -10)
				loadWait(player, 0);
		}else{
			PlaySE(10);
			bgmlv = 10;							// vsmode.wav��炷
			upLines[player] = 0;
			hiddenProc(player);
			if(IsBigStart[player]) {
				IsBig[player] = 1;
			}
			// �������Ԑݒ� #1.60c7r5
			if(vs_time != 0) {
				ltime[0] = vs_time;
				ltime[1] = vs_time;
			}

			// wait�l���o�b�N�A�b�v #1.60c7l3
			b_wait1[player] = wait1[player];
			b_wait2[player] = wait2[player];
			b_wait3[player] = wait3[player];
			b_waitt[player] = waitt[player];
			b_sp[player]    = sp[player];

			stat[player] = 1;					// �u���b�N�V���b�^�[���s
			statc[player * 10] = 0;				// �X�e�[�^�X�J�E���^��0��
			statc[player * 10 + 1] = 10;		// �V���b�^�[��̓X�e�[�^�XNo.3
		}
	}
}
//������������������������������������������������������������������������������
//  ���s���� #1.60c7g1
//������������������������������������������������������������������������������
void winner() {
	int		player, i, j, block, win, obj, c, kosa;

	// BGM��~
	if(wavebgm > 0) StopAllBGM();
	// �c�莞�Ԃ����Ȃ����̌��ʉ�����~
	StopSE(32);

	timeOn[0] = 0;
	timeOn[1] = 0;
	onRecord[0] = 0;
	onRecord[1] = 0;
//	time[1] = time[0];

	winc++;
	wink++;
	statc[0]++;
	winu = winu + wink / 4;
	if(winu > 140) {
		winu = 140;
		wink = - 20;
	}

	win = (stat[1] == 7) + ((stat[0] == 7) && (stat[1] == 7));//����

	StopSE(40);
//	pinch[0] = 0;
//	pinch[1] = 0;

	for(player = 0; player <= 1; player++) {
		hiddeny[player] = 22;
		cpu_flag[player] = 0;
		if(winc == 0) statusClear(player);

		if(win == player)
			obj = 1;
		else if(win != 2){
			pinch[player] = 0;
			obj = 0;
		}else
			obj = 2;
		if((stat[player] != 7) && (stat[player] == 5)){
			kosa = bk[player] * 7 / (wait3[player] + (wait3[player] == 0));
			if(kosa > 6) kosa = 6;
			drawCBlock (player, blk[player] + 1, kosa, 0 , 0 , 0);
			if(spawn_y_type)// �t�B�[���h�g
				viewFldFrame(1,player);
		}
		ExBltRect(3, 22 + player * 192, winu, 96, obj * 25, 86, 24);

		if( (obj == 0) && (winr > 10) ) {
			if(wintype == 1){
				if(li[player] == vs_goal/10) {
					printFont(15 + 24 * player - 12 * maxPlay, 23, "GOAL  TIME", 7);
					getTime(time[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				} else if( ltime[player] <= 0 ) {
					printFont(16 + 24 * player - 12 * maxPlay, 22, "BY LINES", 7);
					sprintf(string[0],"1P:%5d",li[0]);
					printFont(16 + 24 * player - 12 * maxPlay, 23, string[0], 0);
					sprintf(string[0],"2P:%5d",li[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				}
			}else{
				if(tc[player] == vs_goal) {
					printFont(15 + 24 * player - 12 * maxPlay, 23, "GOAL  TIME", 7);
					getTime(time[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				} else if( ltime[player] <= 0 ) {
					printFont(16 + 24 * player - 12 * maxPlay, 22, "BY LEVEL", 7);
					sprintf(string[0],"1P:%5d",tc[0]);
					printFont(16 + 24 * player - 12 * maxPlay, 23, string[0], 0);
					sprintf(string[0],"2P:%5d",tc[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				}
			}
		}
		// A�{�^���Őݒ��ʂɖ߂�
		if((getPushState(player, 4) && (winr > 22) && (!playback)) || (demo) && (winr > 19) || (winr > 80)) {
			if((playback) || (demo)){
				if(!tmp_maxPlay)
					maxPlay = 0;
				if(playback) restoreSetups();
				flag = 1;
				gameMode[0] = 0;
				gameMode[1] = 0;
				return;
			}
			if(cp_player_1p && cp_player_2p && (!playback)){	// �E�I�b�`���[�h�̓��v���C�ۑ��s��
				enterVersusMode(0);
			}else if(!playback){
				for(i = 0; i < 10; i++)
					for(j = 0; j < 22; j++) {
						fld[i + j * 10 + 0 * 220] = 0;
						fldt[i + j * 10 + 0 * 220] = 0;
						fldi[i + j * 10 + 0 * 220] = 0;
						flds[i + j * 10 + 0 * 220] = 0;
						fld[i + j * 10 + 1 * 220] = 0;
						fldt[i + j * 10 + 1 * 220] = 0;
						fldi[i + j * 10 + 1 * 220] = 0;
						flds[i + j * 10 + 1 * 220] = 0;
					}
				stat[0] = 38;	// 1P�͂�v���C�ۑ���ʂ�
				statc[0] = 0;
				statc[1] = 0;
				statc[2] = 0;
				statc[3] = 0;
				statc[4] = 0;
				statc[5] = 0;
				b_to_b_c[0] = 0;
				tspin_c[0] = 0;

				stat[1] = 10; // 2P�͑ҋ@
				b_to_b_c[1] = 0;
				tspin_c[1] = 0;
			}
			flag = 0;
		}
		// �ԉ�
		if( (statc[0] % 9 == 0) && (endingcnt[player] <= 30) && (obj == 0)) {
			PlaySE(35);
			objectCreate2(player, 7, Rand(80) + 72 + 192 * player - 96 * maxPlay, 32 + Rand(20), 0, 0, Rand(7)+1, 0);
			endingcnt[player]++;
		}
	}

	if(winc > 4) {
		winc = 0;

		block = winr;

		// ����������͉��Ȃ� #1.60c7h3
		if((winr == 0) && (deadtype)) PlaySE(7);

		for(player = 0; player <= 1; player++) {
			if( winr <= 22	 ) {
				for(j = 0; j < 10; j++)
					if(stat[player] == 7) {
						// ���S�A�j����I�ׂ�悤�ɂ���#1.60c7h3
						if(deadtype) {
							if(block <= fldsizeh[player]){
								c = fld[j + block * 10 + player * 220];
								if(c != 0) {
									if(c >= 9)
										fld[j + block * 10 + player * 220] = 10;
									else
										fld[j + block * 10 + player * 220] = 1;
								}
							}
						} else {
							// �X�[�b�Ə����Ă������o #1.60c7k6
							// �ΐ�ł��L�� #1.60c7k9
							if(21 - block >= 0) {
								c = fldt[j + (210 - (block * 10)) + player * 220];
								if((c <= -1) || (c > 8)) c = 8;
								fldt[j + (210 - (block * 10)) + player * 220] = c - 4;
							}
							if(block > 0) {
								c = fldt[j + (210 - (block - 1) * 10) + player * 220];
								fldt[j + (210 - (block - 1) * 10) + player * 220] = c - 4;
							}
						}
                    }
			} /* if( winr <= (20 + IsBig[player]) ) */
		}/* for(player = 0; player <= 1; player++) */
		winr++;
	}
}

void winner2() {
	int		player, i, j, block, win, obj, c, kosa, sbak[30];

	StopSE(32);

	timeOn[0] = 0;
	timeOn[1] = 0;
//	time[1] = time[0];

	winc++;
	wink++;
	winu = winu + wink / 4;
	if(winu > 140) {
		winu = 140;
		wink = - 20;
	}

	win = (stat[1] == 7) + ((stat[0] == 7) && (stat[1] == 7));//����

	StopSE(40);

	for(player = 0; player <= 1; player++) {
		padRepeat(player);
		hiddeny[player] = 22;
		cpu_flag[player] = 0;
		if(winc == 0) statusClear(player);

		if(win == player)
			obj = 1;
		else if(win != 2){
			pinch[player] = 0;
			obj = 0;
		}else
			obj = 2;
		if((stat[player] != 7) && (stat[player] == 5)){
			kosa = bk[player] * 7 / (wait3[player] + (wait3[player] == 0));
			if(kosa > 6) kosa = 6;
			drawCBlock (player, blk[player] + 1, kosa, 0 , 0 , 0);
			if(spawn_y_type)// �t�B�[���h�g
				viewFldFrame(1,player);
		}
		if(obj == 2) ExBltRect(3, 22 + player * 192, winu, 96, obj * 25, 86, 24);

		if( (obj == 0) && (winr > 10) ) {
			if(wintype == 1){
				if(li[player] == vs_goal/10) {
					printFont(15 + 24 * player - 12 * maxPlay, 23, "GOAL  TIME", 7);
					getTime(time[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				} else if( ltime[player] <= 0 ) {
					printFont(16 + 24 * player - 12 * maxPlay, 22, "BY LINES", 7);
					sprintf(string[0],"1P:%5d",li[0]);
					printFont(16 + 24 * player - 12 * maxPlay, 23, string[0], 0);
					sprintf(string[0],"2P:%5d",li[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				}
			}else{
				if(tc[player] == vs_goal) {
					printFont(15 + 24 * player - 12 * maxPlay, 23, "GOAL  TIME", 7);
					getTime(time[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				} else if( ltime[player] <= 0 ) {
					printFont(16 + 24 * player - 12 * maxPlay, 22, "BY LEVEL", 7);
					sprintf(string[0],"1P:%5d",tc[0]);
					printFont(16 + 24 * player - 12 * maxPlay, 23, string[0], 0);
					sprintf(string[0],"2P:%5d",tc[1]);
					printFont(16 + 24 * player - 12 * maxPlay, 24, string[0], 0);
				}
			}
		}
		increment_time(player);
	}

	// ���̃��E���h��
	if(winr > 30) {
		flag = 0;
	}

	if(flag == 0){	// ���̃��E���h�ւ̏���
	for(player = 0; player <= 1; player++) {
		// ����������Ă͍�����̂��o�b�N�A�b�v�ɃR�s�[
		sbak[0]  = IsBigStart[player];
		sbak[1]  = upLineT[player];
		sbak[2]  = nextc[player];	// NEXT�J�E���g
		sbak[3]  = next[player];	// NEXT�u���b�N
		sbak[4]  = use_item[player];
		sbak[5]  = item_num;
		sbak[6]  = item_interval;
		sbak[7]  = replay_save[player];	// �L�^�\�t���O
		sbak[8]  = time2[player];	// ���v���C�p�v���C�^�C��
		sbak[9]  = bgmlv;			// BGM
		sbak[10] = repversw;
		sbak[11] = rots[player];
		sbak[12] = sp[player];		// �e�푬�x
		sbak[13] = wait1[player];	//
		sbak[14] = wait2[player];	//
		sbak[15] = wait3[player];	//
		sbak[16] = waitt[player];	//
		sbak[17] = vs_round;
		sbak[18] = first_rot[player];
		sbak[19] = time[player];
		sbak[20] = vs_points[player];

		playerInitial(player);

		IsBigStart[player] = sbak[0];
		upLineT[player]    = sbak[1];
		nextc[player]      = sbak[2];	// NEXT�J�E���g
		next[player]       = sbak[3];	// NEXT�u���b�N
		use_item[player]   = sbak[4];
		item_num           = sbak[5];
		item_interval      = sbak[6];
		replay_save[player]= sbak[7];	// �L�^�\�t���O
		time2[player]      = sbak[8];	// ���v���C�p�v���C�^�C��
		bgmlv              = sbak[9];	// BGM
		repversw           = sbak[10];	//
		rots[player]       = sbak[11];
		sp[player]         = sbak[12];	// �e�푬�x
		wait1[player]      = sbak[13];	//
		wait2[player]      = sbak[14];	//
		wait3[player]      = sbak[15];	//
		waitt[player]      = sbak[16];	//
		vs_round           = sbak[17];
		first_rot[player]  = sbak[18];
		if(!player) time[player]       = sbak[19];
		vs_points[player]  = sbak[20];

		b_wait1[player] = wait1[player];
		b_wait2[player] = wait2[player];
		b_wait3[player] = wait3[player];
		b_waitt[player] = waitt[player];
		b_sp[player]    = sp[player];

		if(vs_time != 0) {
			ltime[player] = vs_time;
		}

		if(IsBigStart[player])
			IsBig[player] = 1;

		item_inter[player] = item_interval;
		//��]�@���̃����_���Z���N�g
		if(versus_rot[player] == 9){
			rots[player] = rand(9,player);
		}
		setNextBlockColors(player, 1);

		stat[player] = 3;					// Ready
	}
	vs_round++;
	return;
	}

	if(winc > 4) {
		winc = 0;

		block = winr;

		// ����������͉��Ȃ� #1.60c7h3
		if((winr == 0) && (deadtype)) PlaySE(7);

		for(player = 0; player <= 1; player++) {
			if( winr <= 22	 ) {
				for(j = 0; j < 10; j++)
					if(stat[player] == 7) {
						// ���S�A�j����I�ׂ�悤�ɂ���#1.60c7h3
						if(deadtype) {
							if(block <= fldsizeh[player]){
								c = fld[j + block * 10 + player * 220];
								if(c != 0) {
									if(c >= 9)
										fld[j + block * 10 + player * 220] = 10;
									else
										fld[j + block * 10 + player * 220] = 1;
								}
							}
						} else {
							// �X�[�b�Ə����Ă������o #1.60c7k6
							// �ΐ�ł��L�� #1.60c7k9
							if(21 - block >= 0) {
								c = fldt[j + (210 - (block * 10)) + player * 220];
								if((c <= -1) || (c > 8)) c = 8;
								fldt[j + (210 - (block * 10)) + player * 220] = c - 4;
							}
							if(block > 0) {
								c = fldt[j + (210 - (block - 1) * 10) + player * 220];
								fldt[j + (210 - (block - 1) * 10) + player * 220] = c - 4;
							}
						}
                    }
			} /* if( winr <= (20 + IsBig[player]) ) */
		}/* for(player = 0; player <= 1; player++) */
		winr++;
	}
}

//������������������������������������������������������������������������������
//  �A�C�e���������� #1.60c7n1
//������������������������������������������������������������������������������
void eraseItem(int player, int type) {
	int i, enemy, attack;
	int bx2, by2;

	if((type <= 0) || (type >= fldihardno) || (gameMode[player] > 5)) return;
	attack = 0;
	// �U���Ώۂ����߂�
	if((gameMode[player] == 4)&&(!isreflect[1-player])) {
		enemy = 1 - player;
	} else {
		enemy = player;
	}
	if((type != 13) && (type != 17) && (type != 18) && (type != 19) && ((type != 26) || (repversw >= 65)) && (type != 27) &&
	   (type != 28) && (type != 29) && (type != 30) && (type != 32) && (type != 33) && (type != 35) &&
	   ((type != 36) || (repversw < 58))){
		attack = 1;
	}
	// �U���Ώۂ̃A�C�e����S�ĉ����i�U���A�C�e���̂݁j
	if( attack ){
		statusClear(enemy);
		if((!isfever[enemy]) && (repversw >= 44)){
			item_t[enemy] = 0;
			item_timer[enemy] = 0;
		}
		if((!isfever[enemy]) && (isreflect[enemy]) && (gameMode[enemy] != 4) && (repversw >= 65) && (type != 24) && (type != 37)){
			PlaySE(41);
			objectCreate2(enemy, 10, 1, 0, 0, 2, 33, 0);
			isreflect[enemy] = 0;
			for(i = 0; i < 220; i++) {
				if((fldi[i + player * 220] < fldihardno))
					fldi[i + player * 220] = 0;
			}
			scanItem(enemy);
			return;
		}
		if(isfever[enemy]){
			PlaySE(41);
			objectCreate2(enemy, 10, 1, 0, 0, 2, 13, 0);
		}
	}

	if(!isfever[enemy]){		//�U���A�C�e���iFEVER���͖����j
		if(repversw < 44){
			item_t[enemy] = 0;
			item_timer[enemy] = 0;
		}

		// MIRROR
		if( type == 1 ) {
			isfmirror[enemy] = 1;
		}
		// ROLL ROLL
		if( type == 2 ) {
			isrollroll[enemy] = 1;
			item_rollroll[enemy] = 1;
		}
		// DEATH BLOCK
		if( type == 3 ) {
			IsBig[enemy] = 1;
		}
		// X-RAY
		if( type == 4 ) {
			isxray[enemy] = 1;
			xray_flag[enemy] = 1;
		}
		// COLOR
		if( type == 5 ) {
			iscolor[enemy] = 1;
			color_flag[enemy] = 1;
		}
		//ROTATE LOCK
		if( type == 6 ) {
			isrotatelock[enemy] = 1;
			PlaySE(37);
			// NEXT�u���b�N�̌����������_����
			rt_nblk[0 + 6 * enemy] = rand(4,enemy);
			rt_nblk[1 + 6 * enemy] = rand(4,enemy);
			rt_nblk[2 + 6 * enemy] = rand(4,enemy);
			rt_nblk[3 + 6 * enemy] = rand(4,enemy);
			rt_nblk[4 + 6 * enemy] = rand(4,enemy);
			rt_nblk[5 + 6 * enemy] = rand(4,enemy);
			thunder_timer = 30;
			item_timer[enemy] = 600 / (1+ ((sp[enemy] >= 180) && (repversw >= 40)) );//3G�ȏ�Ŕ���
			if(cpu_flag[enemy]) {
				cpuCheckBestSpot(enemy);
			}
			if((gameMode[enemy] == 3) && (tc[player] >= 300))
				item_timer[enemy] = 180;
		}
		//HIDE NEXT
		if( type == 7 ) {
			ishidenext[enemy] = 1;
			item_timer[enemy] = 900 - ( ((sp[enemy] >= 1200) && (repversw >= 40)) * 300);
		}
		//MAGNET BLOCK
		if( type == 8 ) {
			ismagnetblock[enemy] = 1;
		}
		//TIME STOP
		if( type == 9 ) {
			istimestop[enemy] = 1;
			PlaySE(47);
			item_timer[enemy] = 300;
			if(gameMode[enemy] == 3)
				item_timer[enemy] = 120;
		}
		//HOLD LOCK
		if( type == 10 ) {
			isholdlock[enemy] = 1;
		}
		//���� REVERSE
		if( type == 11 ) {
			isLRreverse[enemy] = 1;
			item_timer[enemy] = 600;
		}
		//BOOST FIRE
		if( type == 12 ) {
			isboost[enemy] = 1;
			item_timer[enemy] = 600 / (1+ ((sp[enemy] >= 1200) && (repversw >= 54)) );
			if((gameMode[enemy] == 3) && (tc[player] >= 300))
				item_timer[enemy] = 180 - (60 * (tc[player] >= 500));
		}

		//���� REVERSE
		if( type == 14 ) {
			isUDreverse[enemy] = 1;
			item_timer[enemy] = 600;
		}
		//REMOTE CONTROL
		if( type == 15 ) {
			isremote[enemy] = 1;
		}
		//DARK
		if( type == 16 ) {
			isdark[enemy] = 1;
			item_timer[enemy] = 480;
			if((gameMode[enemy] == 3) && (tc[player] >= 300))
				item_timer[enemy] = 300;
		}

		//TRANCE FORM
		if( type == 20 ) {
			istrance[enemy] = 1;
		}

		//LASER(���쒆�ȊO)
		if( type == 21 ) {
			dolaser[enemy] = 1;
		}
		//NEGA FIELD(���쒆�ȊO)
		if( type == 22 ) {
			donega[enemy] = 1;
		}

		//SHOT GUN!(���쒆�ȊO)
		if( type == 23 ) {
			doshotgun[enemy] = 1;
		}
		//EXCHG FIELD(���쒆�ȊO)
		if( type == 24 ) {
			doexchg[enemy] = 1;
			doexchg[player] = 1;
		}
		//HARD BLOCK
		if( type == 25 ) {
			item_nblk[0 + enemy * 6] = fldihardno;
			scanItem(enemy);
		}
		//SHUFFLE FIELD
		if( type == 26 ) {
			isbanana[enemy] = 1;
		}
		//180��FIELD(���쒆�ȊO)
		if( type == 31 ) {
			do180field[enemy] = 1;
		}

		//�_�u��
		if( type == 34 ) {
			isdouble[enemy] = 1;
			item_timer[enemy] = 600;
		}
		//MISS(������)
		if( type == 36 ) {
			ismiss[player] = 1;
			misstimer[player] = item_interval;
		}
		//COPY FIELD(���쒆�ȊO)
		if( type == 37 ) {
			doexchg[enemy] = 1;
			docopyfld[player] = 1;
		}
		//faKE NEXT
		if( type == 38 ) {
			isfakenext[enemy] = 1;
			item_timer[enemy] = 480 ;
		}
		//[] BLOCK(���쒆�ȊO)
		if( type == 39 ) {
			item_monochrome[enemy] = 1;
		}

	}	//!isfever[enemy]

	//�T�|�[�g�A�C�e��

	//FEVER!!
	if( type == 13 ) {
	// �����҂̃A�C�e����S�ĉ���
		statusClear(player);
		ismiss[player] = 0;

		item_t[player] = 0;
		misstimer[player] = 0;
	// ���������܂�
		if(!ending[player]){	//���[������BGM��ς��Ȃ�
			StopWave(50 +bgmlv);
			PlayWave(65);
		}
		isfever[player] = 1;
		item_timer[player] = 600;
		next[player] = 0;	//NEXT��_�ɕω�
		if(isWRule(player)){	//�F���_�ɕϊ�
			c_cblk[player] = wcol[0];
			c_cblk_r[player] = wcol[0];
		} else if((rots[player] >= 4) && (rots[player] != 8)){
			c_cblk[player] = acol[0];
			c_cblk_r[player] = acol[0];
		} else{
			c_cblk[player] = ccol[0];
			c_cblk_r[player] = ccol[0];
		}
	}
	if(type == 17){
		isUPdelfield[player] = 1;
	}
	if(type == 18){
		isDWdelfield[player] = 1;
	}
	if(type == 19){
		isdeleven[player] = 1;
	}
	//RANDOM
	if( type == 27 ){
		dorulet[player] = 1;
	}
	//FREE FALL
	if(type == 28){
		isFreefall[player] = 1;
	}
	if(type == 29){
		isLmovfield[player] = 1;
	}
	if(type == 30){
		isRmovfield[player] = 1;
	}
	//16t
	if( type == 32 ) {
		do16t[player] = 1;
	}
	//REFLECT
	if( type == 33 ) {
		if(repversw >= 65){
			statusClear(player);
			item_t[player] = 0;
		}
		misstimer[player] = 0;
		isreflect[player] = 1;
		item_timer[player] = 600;
		if((gameMode[player] != 4) && (repversw >= 65))
			item_timer[player] = 1800;
	}
	if(type == 35){
		isallclear[player] = 1;
	}


	// ���쒆�̏ꍇ�͋����I�Ɏ��̃u���b�N���o��
	if((stat[enemy] == 5) && (type != 6) && (type != 7) && (type != 11) && (type != 12)
	 && (type != 13) && (type != 14) && (type != 17) && (type != 18) && (type != 19)&& (type != 26)
	 && ((type < 27) || (type > 30)) && (!isfever[enemy])&& (type != 32)
	 && (type != 33) && (type != 34) && (type != 35) && (type != 36)) {
		// �e����ԃA�j���[�V���� #1.60c7o6
		if(!((type==9) && (repversw >= 35))){
			for(i = 0; i < 4; i++) {
				if(rots[enemy] == 8) {
					bx2 = (bx[enemy] + blkDDataX[blk[enemy] * 16 + rt[enemy] * 4 + i]);
					by2 = (by[enemy] + blkDDataY[blk[enemy] * 16 + rt[enemy] * 4 + i]);
				} else if(isWRule(enemy)) {
					bx2 = (bx[enemy] + blkWDataX[blk[enemy] * 16 + rt[enemy] * 4 + i]);
					by2 = (by[enemy] + blkWDataY[blk[enemy] * 16 + rt[enemy] * 4 + i]);
				} else {
					bx2 = (bx[enemy] + blkDataX[blk[enemy] * 16 + rt[enemy] * 4 + i]);
					by2 = (by[enemy] + blkDataY[blk[enemy] * 16 + rt[enemy] * 4 + i]);
				}
				objectCreate(enemy, 6, (bx2 + 15 + 24 * enemy - 12 * maxPlay) * 8, (by2 + 3) * 8, (bx2 - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + 250, c_cblk[enemy]+1, 100);
			}
			ndelay[enemy] = 1;
			stat[enemy] = 22;
			dhold[player] = disable_hold;		// hold�g�p�\��
			statc[enemy * 10 + 0] = 60;		// �҂�����
		}
		if( (type == 9) && (repversw < 35) ) {				//TIME STOP��~����
			statc[enemy * 10 + 0] = 300;
		}
		if( type == 21) {	//LASER(���쒆)
			dolaser[enemy] = 0;
			stat[enemy] = 26;
			statc[enemy * 10 + 0] = 0;
		}
		if( type == 22) {	//NEGA FIELD(���쒆)
			donega[enemy] = 0;
			stat[enemy] = 27;
			statc[enemy * 10 + 0] = 0;
		}
		if( type == 23) {	//SHOT GUN!(���쒆)
			doshotgun[enemy] = 0;
			stat[enemy] = 28;
			statc[enemy * 10 + 0] = 0;
		}
		if( type == 24) {	//EXCHG FIELD(���쒆)
			doexchg[enemy] = 0;
			stat[player] = 29;
			stat[enemy] = 29;
			statc[enemy * 10 + 0] = 0;
		}
		if( type == 31) {	//180��FIELD(���쒆)
			do180field[enemy] = 0;
			stat[enemy] = 34;
			statc[enemy * 10 + 0] = 0;
		}
		if( type == 37) {	//COPY FIELD(���쒆)
			doexchg[enemy] = 0;
			//stat[player] = 38;
			stat[enemy] = 29;
			statc[enemy * 10 + 0] = 0;
			statc[player * 10 + 3] = 1;
		}
		statc[enemy * 10 + 1] = 4;		// �X�e�[�^�X
		statc[enemy * 10 + 2] = 0;
		statc[enemy * 10 + 3] = 0;
		statc[enemy * 10 + 4] = 0;
		bdowncnt[enemy]++;

		// �A�C�e����΂� #1.60c7o6
		if(item[enemy]) {
			item[enemy] = 0;
			scanItem(enemy);
		}
	}
	if((gameMode[player] == 4) && (attack) && (isreflect[1-player])){
		objectCreate2(player, 10, 0, 0, 0, 1, 33, 0);
		PlaySE(38);
	}

	if(!isfever[enemy])
	if((type <= 5) || (type == 8) || (type == 10) || (type == 15) || (type == 16) ||
		(type == 20) || (type == 22) || (type == 23) || (type == 25) || (type == 31)||
		(type == 34)|| (type == 37)|| (type == 38)|| (type == 39)){
		if((gameMode[player] != 4) || (!isreflect[1-player]))
			objectCreate2(enemy, 10, 0, 0, 0, 0, type, 0);//WARNIG�̃G�t�F�N�g
		PlaySE(38);
		if(((type == 3) && (IsBigStart[enemy])) || ((type == 37) && (gameMode[player] != 4)))
			StopSE(38);
	}
	// �t�B�[���h��Ɏc���Ă���A�C�e����S�ď��� #1.60c7n1
	for(i = 0; i < 220; i++) {
		if((fldi[i + player * 220] < fldihardno) || (repversw < 32))	//�n�[�h�u���b�N�������Ă��������C�� C7U1.5
			fldi[i + player * 220] = 0;
	}
	scanItem(player);
}
//�X�e�[�^�X�ُ���N���A
void statusClear(int player){
	if(isfmirror[player])
		stopmirror_flag[player] = 1;
	isrollroll[player] = 0;
	item_rollroll[player] = 0;
	if(!IsBigStart[player]) {	// �n�߂���BIG�̏ꍇ�͉������Ȃ� #1.60c7r3
		IsBig[player] = 0;
	}
	isxray[player] = 0;
	xray_flag[player] = 0;
	iscolor[player] = 0;
	color_flag[player] = 0;
	if(isrotatelock[player]){
		isrotatelock[player] = 0;
		rt_nblk[0 + 6 * player] = 0;
		rt_nblk[1 + 6 * player] = 0;
		rt_nblk[2 + 6 * player] = 0;
		rt_nblk[3 + 6 * player] = 0;
		rt_nblk[4 + 6 * player] = 0;
		rt_nblk[5 + 6 * player] = 0;
		if(cpu_flag[player]) {
			cpuCheckBestSpot(player);
		}
	}
	ishidenext[player] = 0;
	ismagnetblock[player] = 0;
	isholdlock[player] = 0;
	istimestop[player] = 0;
	isLRreverse[player] = 0;
	isUDreverse[player] = 0;
	istrance[player] = 0;
	isdouble[player] = 0;
	isfakenext[player] = 0;
	isboost[player] = 0;
	isremote[player] = 0;
	isdark[player] = 0;
	item_monochrome[player] = 0;
}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.21 - �Q�[���I�[�o�[�\��
//������������������������������������������������������������������������������
void statGameOver2(int player) {
	int i;

	// �J�E���^����
	statc[player * 10]++;

	if( (stat[1 - player] == 0) || (stat[1 - player] == 10) ) StopAllBGM();	// ���y��~

	// ���v���C�ۑ�
	/*
	if((textguide) && (!playback) && (!demo)){
		if(!player) printFont(13+24 * player - 12 * maxPlay, 26, "0-9 KEY:REPLAY", 0);
		else printFont(13+24 * player - 12 * maxPlay, 26, "Q-P KEY:REPLAY", 0);
	}
	ReplaySaveCheck(player, 3);

	if(statc[player * 10 + 3]) {
		printFont(15 + 24 * player - 12 * maxPlay, 20, "YOUR PLAY", 7);
		printFont(16 + 24 * player - 12 * maxPlay, 21, "WAS SAVED", 7);
		sprintf(string[0], "FILE NO.%02d", statc[player * 10 + 3]);
		printFont(15 + 24 * player - 12 * maxPlay, 23, string[0], 5);
	}
	*/
	// �Q�[���I�[�o�[��
	if(statc[player * 10] == 1) PlaySE(8);
	if(statc[player * 10] >= 2) {
		ExBltRect(81, 110+192 * player -96 * maxPlay , 95 , 0, 0, 100, 50);
	}

	// �{�^���ŃX�L�b�v
	if(getPushState(player, 4)) {
		statc[player * 10] = 480;
	}

	// �I��
	if(statc[player * 10] >= 480) {
		ndelay[player] = 1;
		if(gameMode[player] == 8) {
			StopSE(8);
			versusInit(0);
			playerInitial(player);
			loadMissionData(mission_file);
			stat[player] = 23;		// �~�b�V�������[�h�̏ꍇ
			if(playback)
				stat[player] = 0;
		} else {
			if((gameMode[player] == 6) && (tmp_maxPlay != maxPlay))
				maxPlay = tmp_maxPlay;
				bgfadesw = 0;
			tomoyo_domirror[player] = 0;
			pinch[player] = 0;
			stat[player] = 0;		// ����ȊO
		}

		for(i=0; i<10; i++) statc[player * 10 + i] = 0;

		if( (stat[1 - player] == 0) || (stat[1 - player] == 10) ) bgfadesw = 1;
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.22 - ��莞�ԉ������Ȃ�
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�҂�����
// statc[player * 10 + 1]�F�҂����ԏI����Ɉړ�����X�e�[�^�X
// statc[player * 10 + 3]�F�~�b�V������erace�l�ɂ�邹��オ��
// statc[player * 10 + 4]�F���g�p���̂���オ��^�C�v
void statNothing(int player) {
	int i;

	if(repversw >= 30) padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	statc[player * 10 + 2]++;

	if(statc[player * 10 + 2] >= statc[player * 10 + 0]) {
		if((statc[player * 10 + 3] != 0) && (gameMode[player] == 8)){
			statc[player * 10 + 3]--;
			upLines[player]++;	//UpLineBlock��-1�����
			UpLineBlockJudge(player);
			if(statc[player * 10 + 3] == 0){
				if(mission_type[c_mission] == 21)
					upLineT[player] = 2;
				else
					upLineT[player] = uplinetype;
				pinchCheck(player);
			}
			return;
		}
		if(repversw >= 48){
			if((fmirror_cnt[player] == -20) && (gameMode[player] != 8) && (gameMode[player] >= 4))
				if(UpLineShirase(player)) return;
			if(fldMirrorProc(player)) return;
		}else
			if(fldMirrorProc(player)) return;

		stat[player] = statc[player * 10 + 1];
		for(i=0; i<10; i++) statc[player * 10 + i] = 0;
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.25 - ���C����������
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
// statc[player * 10 + 2]�F�I����ɃX�e�[�W�ǂݍ���(0=�Ȃ� 1=����j
void statDelField(int player) {
	int i, j, y,k,l,waitA;

	statc[player * 10]++;

	if((repversw < 64) || (statc[player * 10 + 2]))
		waitA = 1;
	else
		waitA = 9 - 4 * ((wait2[player] <= 12) && ((timeOn[player]) || (ending[player] == 2) || (repversw >= 65)) );

	if(repversw >= 30) padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if(statc[player * 10] < 15+(wait1[player] * 2))
	for(i = 0; i <= fldsizeh[player]; i++) {
		if(erase[i + player * 22]) {
			if(statc[player * 10] == wait1[player] + 1) {
				if(i >= 2) {
					objectCreate(player, 13, (15 + 24 * player - 12 * maxPlay) * 8, (i + 3) * 8, 0, 0, 0, ((!statc[player * 10 + 2]) && (repversw >= 64)));
				}
			}
			if(statc[player * 10] == wait1[player] + waitA) {
				for(j = 0; j < fldsizew[player]; j++){
					fld[j + i * fldsizew[player] + player * 220] = 0;
					fldt[j + i * fldsizew[player] + player * 220] = 0;
					fldi[j + i * fldsizew[player] + player * 220] = 0;
					grayoutLackedBlock(player, flds[j + i * 10 + player * 220]);
					flds[j + i * fldsizew[player] + player * 220] = 0;
				}
			}
		}
	}

	if(statc[player * 10] == wait1[player] + 1) {
		if(statc[player * 10 + 2]) {
			loadTargetStage();
			dhold[player] = disable_hold;
		}
	}

	if(statc[player * 10] == 15+(wait1[player] * 2)) {
		if((isDWdelfield[player]) || (isdeleven[player])){	//������Ƀu���b�N����������ꍇ�A�����������s��
			y = fldsizeh[player];
			for(i = 0; i <= fldsizeh[player]; i++) {
				if(erase[y + player * 22]) {
					for(k = y; k > 0; k--) {
						for(l = 0; l < fldsizew[player]; l++) {
							fld[l + k * fldsizew[player] + player * 220] = fld[l + (k - 1) * fldsizew[player] + player * 220];
							// #1.60c7j5
							fldt[l + k * fldsizew[player] + player * 220] = fldt[l + (k - 1) * fldsizew[player] + player * 220];
							// #1.60c7n1
							if((gameMode[player] == 4) || (item_mode[player]))
							fldi[l + k * fldsizew[player] + player * 220] = fldi[l + (k - 1) * fldsizew[player] + player * 220];
						}
						erase[k + player * 22] = erase[(k - 1) + player * 22];
					}
					for(l = 0; l < fldsizew[player]; l++) {
						fld[l + player * 220] = 0;
						fldt[l + player * 220] = 0;		// #1.60c7j5
						if((gameMode[player] == 4) || (item_mode[player])) fldi[l + player * 220] = 0;		// #1.60c7n1
						erase[player * 22] = 0;
					}
				} else {
					y--;
				}
			}
			PlaySE(2);
//			for(i = 0; i < 21; i++) erase[i + player * 21] = 0;
		}
	}
	if( statc[player * 10] > 15 + (wait1[player] * 2)+(wait1[player]*( (isDWdelfield[player]) || (isdeleven[player]) )) ) {
		stat[player] = statc[player * 10 + 1];
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 0;
		if(repversw >= 48){
			statc[player * 10 + 1] = stat[player];
			stat[player] = 22;
		}
		pinchCheck(player);
		pinchCheck2(player);
		isUPdelfield[player] = 0;
		isDWdelfield[player] = 0;
		isdeleven[player] = 0;
		if(statc[player * 10 + 2]) {
			dhold[player] = disable_hold;
		}
		statc[player * 10 + 2] = 0;
		for(i = 0; i < 22; i++) erase[i + player * 22] = 0;
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.26 - ���[�U�[�i16t�j
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
// statc[player * 10 + 2]�F16t���H
void statLaser(int player) {
	int i,j,move,waitA,waitB;

//	dolaser[player] = 0;
	if(repversw < 63){
		waitA = 120;
		waitB = 180;
	}else{
		waitA = 30 + (wait1[player] * 3);
		waitB = waitA + 34 + wait1[player];
	}

	padRepeat(player);
	if((ace_irs) && (statc[player * 10 + 0] > 120)) doIRS2(player);	// ACE��IRS C7U1.5

	if(statc[player * 10 + 0] == 0){	//�ŏ�
		if(statc[player * 10 + 2] == 0){//���[�U�[
			lasernum[player] = 1;
			laserpos[0 + 4 * player] = bx[player] + rand(4,player) - 2;
			if(laserpos[0 + 4 * player] < 0) laserpos[0 + 4 * player] = 0;
			if(laserpos[0 + 4 * player] > fldsizew[player] - 1) laserpos[0 + 4 * player] = fldsizew[player] - 1;
			rapid_c[player] = 0;
			statc[player * 10 + 0]++;
		}else{//16t
			lasernum[player] = 1;
			laserpos[0 + 4 * player] = bx[player] + rand(4,player) - 2;//���[
			if(laserpos[0 + 4 * player] < 0) laserpos[0 + 4 * player] = 0;
			if(laserpos[0 + 4 * player] > fldsizew[player] - 3) laserpos[0 + 4 * player] = fldsizew[player] - 3;
			rapid_c[player] = 0;
			statc[player * 10 + 0]++;
		}
	} else {
		if(statc[player * 10 + 2] == 0){//���[�U�[
			if(statc[player * 10 + 0] < waitA){	//���[�U�[���ˑO
				if(statc[player * 10 + 0] % 5 == 0)
					PlaySE(3);
				if( ( getPushState(player, 4)) || ( getPushState(player, 5)) || ( getPushState(player, 6)) )
					rapid_c[player]++;
				if((rapid_c[player] > 4) && (lasernum[player] < 4)){	//���[�U�[�𑝂₷�i�ő�4�{�j
					lasernum[player]++;
					laserpos[lasernum[player] - 1 + 4 * player ] = rand(fldsizew[player] - 1,player);
					rapid_c[player] = 0;
				}
				//�Ə����ړ�
				// ��	�Ə��͓������ɂ�������
				if((getPushState(player, 3)) && (statc[player * 10 + 0] % 10 < 2)){
					for(i = 0; i < lasernum[player]; i++){
						if(laserpos[i + 4 * player] < fldsizew[player] - 1) laserpos[i + 4 * player]++;
					}
				}
				// ��	�ړ����͂̎�t�͈��Ԋu��
				if((getPushState(player, 2)) && (statc[player * 10 + 0] % 10 < 2)){
					for(i = 0; i < lasernum[player]; i++){
						if(laserpos[i + 4 * player] > 0) laserpos[i + 4 * player]--;
					}
				}
				// �Ə���`��
				for(i = 0; i < lasernum[player]; i++){
					ExBltRect(78, ((laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) - 1) * 8, (4 - 1) * 8, 0, ((statc[player * 10 + 0] % 36) / 6) * 24, 24, 24);
				}
			} else if(statc[player * 10 + 0] == waitA){	// ���[�U�[����
				PlaySE(12);
				for(i = 0; i < lasernum[player]; i++){	// �Ə������̃u���b�N������
					ExBltRect(78, (laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) * 8, 5 * 8, 24, 0, 8, 160);
					ExBltRect(78, ((laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) - 1) * 8, (4 - 1) * 8, 0, 0, 24, 24);
					for(j = 0; j <= fldsizeh[player]; j++){
						if(fld[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] != 0){
							objectCreate(player, 1, (laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) * 8, (j + 3) * 8, (laserpos[i + 4 * player] - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150), fld[laserpos[i + 4 * player] + j * 10 + player * 220], 100);
							fld[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;
							fldt[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;
							fldi[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;
							grayoutLackedBlock(player, flds[laserpos[i + player * 4] + j * 10 + player * 220]);
							flds[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;

						}
					}
				}
				scanItem(player);
			} else {	// ���[�U�[���ˌ�
				for(i = 0; i < lasernum[player]; i++){
					if(statc[player * 10 + 0] - waitA < 34){
						j = (statc[player * 10 + 0] - waitA) / 2;
						ExBltRect(78, (laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) * 8, 5 * 8, 24+(j*8), 0, 8, 160);
					}
					ExBltRect(78, ((laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) - 1) * 8, (4 - 1) * 8, 0, 0, 24, 24);
				}
			}
		}else{//16t
			if(statc[player * 10 + 0] < waitA){	//���[�U�[���ˑO
				if(statc[player * 10 + 0] % 6 == 0)
					PlaySE(5);//�J�`�J�`
				laserpos[1 + 4 * player ] = laserpos[0 + 4 * player ] + 1;//�������Ԗ�
				laserpos[2 + 4 * player ] = laserpos[0 + 4 * player ] + 2;//������3�Ԗ�
				//�Ə����ړ�
				// ��	�Ə��͓������ɂ�������
				if(getPushState(player, 3)){
						if(laserpos[0 + 4 * player] < fldsizew[player] - 3) laserpos[0 + 4 * player]++;
				}
				// ��	�ړ����͂̎�t�͈��Ԋu��
				if(getPushState(player, 2)){
						if(laserpos[0 + 4 * player] > 0) laserpos[0 + 4 * player]--;
				}
				// ����`��
				ExBltRect(3, ((laserpos[0 + 4 * player] + 15 + 24 * player - 12 * maxPlay) - 1) * 8, 10, 260, 399, 40, 21);
				printFont(16+laserpos[0 + 4 * player]+24 * player - 12 * maxPlay, 5, "k", (count % 2));
				printFont(15+24 * player - 12 * maxPlay, 6, "<L R>:MOVE", (count % 2));
			} else if(statc[player * 10 + 0] >= waitA){	// ���[�U�[����
				for(i = 0; i < 3; i++){	// �Ə������̃u���b�N������
//					for(j = 0; j <= fldsizeh[player]; j++){
					j = (statc[player * 10 + 0] - waitA) * 2;
					if((j - 1 >= 0) && (j - 1 <= fldsizeh[player])){
						if(fld[laserpos[i + 4 * player] + (j-1) * fldsizew[player] + player * 220] != 0){
						//	objectCreate(player, 1, (laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) * 8, (j + 2) * 8, (laserpos[i + 4 * player] - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150), fld[laserpos[i + 4 * player] + j * 10 + player * 220], 100);
							fld[laserpos[i + 4 * player] + (j-1) * fldsizew[player] + player * 220] = 0;
							fldt[laserpos[i + 4 * player] + (j-1) * fldsizew[player] + player * 220] = 0;
							fldi[laserpos[i + 4 * player] + (j-1) * fldsizew[player] + player * 220] = 0;
							grayoutLackedBlock(player, flds[laserpos[i + player * 4] + (j-1) * 10 + player * 220]);
							flds[laserpos[i + 4 * player] + (j-1) * fldsizew[player] + player * 220] = 0;
							PlaySE(2);
						}
					}
					if((j >= 0) && (j <= fldsizeh[player])){
						if(fld[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] != 0){
						//	objectCreate(player, 1, (laserpos[i + 4 * player] + 15 + 24 * player - 12 * maxPlay) * 8, (j + 3) * 8, (laserpos[i + 4 * player] - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150), fld[laserpos[i + 4 * player] + j * 10 + player * 220], 100);
							fld[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;
							fldt[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;
							fldi[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;
							grayoutLackedBlock(player, flds[laserpos[i + player * 4] + j * 10 + player * 220]);
							flds[laserpos[i + 4 * player] + j * fldsizew[player] + player * 220] = 0;
							PlaySE(2);
						}
					}
				}
				if(j <= fldsizeh[player]) scanItem(player);
			//	j = statc[player * 10 + 0] - waitA;
				ExBltRect(3, ((laserpos[0 + 4 * player] + 15 + 24 * player - 12 * maxPlay) - 1) * 8, ((j + 3)*8) - 20, 260, 399, 40, 21);
			}
		}

		statc[player * 10 + 0]++;

		if(statc[player * 10 + 0] >= waitB){
			stat[player] = statc[player * 10 + 1];
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			statc[player * 10 + 2] = 0;
			if(repversw >= 48){
				statc[player * 10 + 1] = stat[player];
				stat[player] = 22;
			}
		}
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.27 - �l�K�t�B�[���h
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
void statNegafield(int player) {
	int i,j,y,waitA;

//	donega[player] = 0;
	if(repversw < 63)
		waitA = 120;
	else
		waitA = 90 + wait1[player];

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if(statc[player * 10 + 0] == 0){	//�ŏ�
		for(i = 0;i < 10; i++)
//			nega_pos[i + 10 * player] = checkFieldTop2(player,i);
			nega_pos[i + 10 * player] = checkFieldTop(player);
		statc[player * 10 + 0]++;
	} else {
		if(statc[player * 10 + 0] <= 88){
		if(statc[player * 10 + 0] % 4 == 0){
			y = 22 - (statc[player * 10 + 0] / 4);
			for(i = 0;i < 10; i++){
				if(fld[i + y * fldsizew[player] + player * 220] != 0){	// �u���b�N���󔒂�
					PlaySE(5);
					fld[i + y * fldsizew[player] + player * 220] = 0;
					fldt[i + y * fldsizew[player] + player * 220] = 0;
					fldi[i + y * fldsizew[player] + player * 220] = 0;
					grayoutLackedBlock(player, flds[i + y * 10 + player * 220]);
					flds[i + y * fldsizew[player] + player * 220] = 0;
				} else if(y >= nega_pos[i + 10 * player]){			// �󔒂��u���b�N��
					PlaySE(5);
					fld[i + y * fldsizew[player] + player * 220] = (y % 7) + 2;
					fldt[i + y * fldsizew[player] + player * 220] = -1;
					grayoutLackedBlock(player, flds[i + y * 10 + player * 220]);
					flds[i + y * fldsizew[player] + player * 220] = 0;
					if((hidden[player] == 8) && (m_roll_blockframe))
						fldt[i + y * fldsizew[player] + player * 220] = -60;
					else if(hidden[player] == 8)
						fldt[i + y * fldsizew[player] + player * 220] = 0;
				}
			}
			scanItem(player);
		}
		}
		statc[player * 10 + 0]++;
		if(statc[player * 10 + 0] >= waitA){
			stat[player] = statc[player * 10 + 1];
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			if(repversw >= 48){
				statc[player * 10 + 1] = stat[player];
				stat[player] = 22;
			}
		}
	}

}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.28 - �V���b�g�K��
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
void statShotgun(int player) {
	int i,j,x,limit,waitA,waitB;
	j = 0;

//	doshotgun[player] = 0;
	limit = 0;

	if(repversw < 63){
		waitA = 60;
		waitB = 120;
	}else{
		waitA = 6 + (wait1[player] * 2);
		waitB = waitA + 30 + wait1[player];
	}

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if(statc[player * 10 + 0] == 0){	//�ŏ�
		for(i = checkFieldTop(player); i < 22; i++){
			if(i == 0){
				do{
					x = rand(fldsizew[player],player);
				} while(fld[x + i * fldsizew[player] + player * 220] == 0);
			} else {
				do{
					x = rand(fldsizew[player],player);
					limit++;
					if(limit > 100000) break;
				} while( ((x == shotgunpos[(i - 1) + 22 * player]) && (limit < 50000)) || (fld[x + i * fldsizew[player] + player * 220] == 0) );
			}

			shotgunpos[i + 22 * player] = x;
		}
		statc[player * 10 + 0]++;
	} else {
		if(statc[player * 10 + 0] == waitA){
			PlaySE(14);
			thunder_timer = 10;
			for(i = checkFieldTop(player); i < 22; i++){
				if(fld[shotgunpos[i + 22 * player] + i * fldsizew[player] + player * 220] != 0){
					objectCreate(player, 1, (shotgunpos[i + 22 * player] + 15 + 24 * player - 12 * maxPlay) * 8, (i + 3) * 8, (shotgunpos[i + 22 * player] - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150), fld[shotgunpos[i + 22 * player] + i * 10 + player * 220], 100);
					fld[shotgunpos[i + 22 * player] + i * fldsizew[player] + player * 220] = 0;
					fldt[shotgunpos[i + 22 * player] + i * fldsizew[player] + player * 220] = 0;
					fldi[shotgunpos[i + 22 * player] + i * fldsizew[player] + player * 220] = 0;
					grayoutLackedBlock(player, flds[j + i * 10 + player * 220]);
					flds[shotgunpos[i + 22 * player] + i * fldsizew[player] + player * 220] = 0;
				}
			}
			scanItem(player);
		}
		statc[player * 10 + 0]++;
		if(statc[player * 10 + 0] >= waitB){
			stat[player] = statc[player * 10 + 1];
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			if(repversw >= 48){
				statc[player * 10 + 1] = stat[player];
				stat[player] = 22;
			}
		}
	}

}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.29 - �t�B�[���h����
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
// statc[player * 10 + 2]�F����Ɠ�������邽�߂̃t���O
// statc[player * 10 + 3]�F�����͌������Ȃ��i�t�B�[���h�R�s�[�j
void statExchangefield(int player) {
	int i,j,enemy;

	doexchg[player] = 0;
	docopyfld[player] = 0;
	enemy = 1 - player;		//�Ώۂ����߂�
	if(gameMode[player] != 4)
		enemy = player;

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if(statc[player * 10 + 0] == 0){	//�ŏ�
		if( ((stat[enemy] == 29) && (statc[enemy * 10 + 2] == 1)) || (item_mode[player]) ){	//�����`�F�b�N
			// �t�B�[���h���o�b�t�@�Ɋm�ہi�ύX�O�j
			if(repversw < 48){
				for(i = 0; i <= fldsizeh[player]; i++) {
					for(j = 0; j < fldsizew[player]; j++) {
						fldbuf[j + i * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
						fldtbuf[j + i * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
						fldibuf[j + i * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
						fldsbuf[j + i * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
					}
				}
			}
			statc[player * 10 + 0]++;
		}
		statc[player * 10 + 2] = 1;
	} else {
		// ����t�B�[���h�������̃o�b�t�@�Ɋm�ہi�����J�n���O�ɕύX�j
		if((statc[player * 10 + 0] == 58) && (repversw >= 48)){
			for(i = 0; i < 220; i++) {
				fldbuf[i + player * 220] = fld[i + enemy * 220];
				fldtbuf[i + player * 220] = fldt[i + enemy * 220];
				fldibuf[i + player * 220] = fldi[i + enemy * 220];
				fldsbuf[i + player * 220] = flds[i + enemy * 220];
			}
		}

		if((statc[player * 10 + 0] >= 60) && (statc[player * 10 + 0] < 70) && (!statc[player * 10 + 3])){
			for(i = 0; i < 22; i++) {
				j = statc[player * 10 + 0] - 60;
				fld[j + i * 10 + player * 220] = fldbuf[j + i * 10 + player * 220];
				fldt[j + i * 10 + player * 220] = fldtbuf[j + i * 10 + player * 220];
				fldi[j + i * 10 + player * 220] = fldibuf[j + i * 10 + player * 220];
				flds[j + i * 10 + player * 220] = fldsbuf[j + i * 10 + player * 220];
				if((fld[j + i * 10 + player * 220] < 0) && (rots[player] != 6))
					fld[j + i * 10 + player * 220] = 8;
			}
		ExBltFast(27, 120+ ((statc[player * 10 + 0] - 60) * 8) + 192 * player - 96 * maxPlay, 40);
		scanItem(player);
		}
		if(gameMode[player] != 4)		// 1�l�p�A�C�e�����[�h�ł͌��ʂȂ�
			printFont(15 + 24 * player - 12 * maxPlay, 15, "NO EFFECT", fontc[rots[player]]);
		statc[player * 10 + 0]++;
		if(statc[player * 10 + 0] >= 120){
			stat[player] = statc[player * 10 + 1];
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 3] = 0;
			if(repversw >= 48){
				statc[player * 10 + 1] = stat[player];
				stat[player] = 22;
			}
		}
	}
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.30 - �i�ʔF�莎�����ۂ���
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F0�Ȃ�J�n�錾�A���Ȃ猋�ʔ��\

void statExamination(int player){
	int i,k;
	if(statc[player * 10 + 1] == 0){		//�J�n�錾
		if(statc[player * 10 + 0] == 0){//�v���v��
			PlaySE(7);
			purupuru[player] = 1;
		} else if((statc[player * 10 + 0] >= 0) && (statc[player * 10 + 0] < 110)){
			ofs_x[player] = Rand(16) - 8;
			ofs_x2[player] = ofs_x[player];
		} else if(statc[player * 10 + 0] == 110){//�v���v�������
			PlaySE(39);
			purupuru[player] = 0;
			ofs_x[player] = 0;
			ofs_x2[player] = 0;
		} else if(statc[player * 10 + 0] > 110){		//�����ł���`
			if(statc[player * 10 + 0] < 170)
				ExBltRectR(81, 110 - ((100 * 22 / 12 - 100) / 2) +192 * player -96 * maxPlay , 80 , 200, 100 + 25 * (count % 4 / 2), 100, 25,65536 * 22 / 12,65536 * 22 / 12);
			else if(statc[player * 10 + 0] < 192){
				k = 192 - statc[player * 10 + 0];
				i = (100 * k / 12 - 100) / 2;
				k = 65536 * k / 12;
				if(k < 65536){
					k = 65536;
					i=0;
				}
				ExBltRectR(81, 110 - i + 192 * player -96 * maxPlay , 48 + 192 - statc[player * 10 + 0] , 200, 100 + 25 * (count % 4 / 2), 100, 25,k,k);
			}else
				ExBltRect(81, 110+192 * player -96 * maxPlay , 48 , 200, 100 + 25 * (count % 4 / 2), 100, 25);
			if(statc[player * 10 + 0] > 210){		//�ڕW�i�ʂ̕\��
				ExBltRect(81, 110+192 * player -96 * maxPlay , 74 , 200, 180, 100, 20);
				printSMALLFont(122 + 192 * player - 96 * maxPlay, 93, " Examination",0);
				printSMALLFont(122 + 192 * player - 96 * maxPlay, 102, "    Grade     ",0);
				if(exam_grade[player]== 32) {
					// GM
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 115, 270 ,((count % 4 / 2)*216)+120,90,48);
				} else if( exam_grade[player] >= 28 ) {
					// MK-MM
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 270 ,((count % 4 / 2)*216)+((exam_grade[player]-28)*24),90,24);
				} else if( exam_grade[player] >= 27 ) {
					if((enable_grade[player]==2)||(enable_grade[player]==4)){
						// M
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 127,270 ,((count % 4 / 2)*216)+((exam_grade[player]-27)*24),90,24);
					}else{
						// m
						ExBltRect(26,124 + 192 * player -96 * maxPlay , 127,450 ,((count % 4 / 2)*216)+((exam_grade[player]-27)*24),90,24);
					}
				} else if( exam_grade[player] >= 18 ) {
					// m1�`m9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 180 ,((count % 4 / 2)*216)+((exam_grade[player]-18)*24),90,24);
				} else if( exam_grade[player] >= 9 ) {
					// S1�`S9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 90 ,((count % 4 / 2)*216)+((exam_grade[player]-9)*24),90,24);
				} else {
					// 9�`1
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 0 ,((count % 4 / 2)*216)+(exam_grade[player]*24),90,24);
				}
			}
			if(statc[player * 10 + 0] > 360){
				// �Q�[���J�n
				stat[player] = 3;				// Ready
				statc[player * 10 + 0] = 0;		// �X�e�[�^�X�J�E���^��0��
				statc[player * 10 + 1] = 0;
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;
				return;
			}
		}
	} else {		// ���ʔ��\.
		if(statc[player * 10 + 0] == 0){
			purupuru[player] = 2;
			endingcnt[player] = 0;
		} else if((statc[player * 10 + 0] >= 0) && (statc[player * 10 + 0] < 60)){
			ofs_x[player] = Rand(8) - 4;
			ofs_x2[player] = ofs_x[player];
		} else if(statc[player * 10 + 0] == 60){
			PlaySE(39);
			purupuru[player] = 0;
			ofs_x[player] = 0;
			ofs_x2[player] = 0;
		} else if(statc[player * 10 + 0] > 60){		//���ʔ��\�`
			ExBltRect(81, 110+192 * player -96 * maxPlay , 48 , 200, 150, 100, 30);
			printSMALLFont(119 + 192 * player - 96 * maxPlay, 78, "    RESULT    ",0);
			if(statc[player * 10 + 0] > 90){		//�ڕW�i�ʂ̕\��
				printSMALLFont(122 + 192 * player - 96 * maxPlay, 93, " Examination",0);
				printSMALLFont(122 + 192 * player - 96 * maxPlay, 102, "    Grade     ",0);
				if(exam_grade[player] == 32) {
					// GM
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 115, 270 ,((count % 4 / 2)*216)+120,90,48);
				} else if( exam_grade[player] >= 28 ) {
					// M-MM
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 270 ,((count % 4 / 2)*216)+((exam_grade[player]-28)*24),90,24);
				} else if( exam_grade[player] >= 27 ) {
					if((enable_grade[player]==2)||(enable_grade[player]==4)){
						// M
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 127,270 ,((count % 4 / 2)*216)+((exam_grade[player]-27)*24),90,24);
					}else{
						// m
						ExBltRect(26,115 + 192 * player -96 * maxPlay , 127,450 ,((count % 4 / 2)*216)+((exam_grade[player]-27)*24),90,24);
					}
				}else if( exam_grade[player] >= 18 ) {
					// m1�`m9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 180 ,((count % 4 / 2)*216)+((exam_grade[player]-18)*24),90,24);
				} else if( exam_grade[player] >= 9 ) {
					// S1�`S9
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 90 ,((count % 4 / 2)*216)+((exam_grade[player]-9)*24),90,24);
				} else {
					// 9�`1
					ExBltRect(26,115 + 192 * player -96 * maxPlay , 127, 0 ,((count % 4 / 2)*216)+(exam_grade[player]*24),90,24);
				}
			}
			if(statc[player * 10 + 0] == 150){
				if((abs_YGS2K(exam_grade[player] - grade[player]) > 3) || (grade[player] == 32))	//�����傫����΃��[���b�g���o���Ƃ΂�
					statc[player * 10 + 0] = 350;
			}
			if((statc[player * 10 + 0] > 150) && (statc[player * 10 + 0] < 350)){	//���[���b�g
				if((statc[player * 10 + 0] % 5 == 0) && (statc[player * 10 + 0] < 320))
					PlaySE(5);
				if((statc[player * 10 + 0] % 10 < 5) || (statc[player * 10 + 0] >= 320)){
					ExBltRect(81, 125+192 * player -96 * maxPlay , 162 , 215, 250, 70, 25);
					printSMALLFont(125 + 192 * player - 96 * maxPlay, 189, "   FAILED   ",0);
				}else{
					ExBltRect(81, 125+192 * player -96 * maxPlay , 162 , 215, 200, 70, 25);
					printSMALLFont(122 + 192 * player - 96 * maxPlay, 189, "   SUCCESS   ",0);
				}
			}
			if(statc[player * 10 + 0] == 350){
				if(exam_grade[player] <= grade[player]){	//���i
					PlaySE(18);
					if((examination[player]==1) && (enable_grade[player] == 4) && (!playback)){
						admit_grade[player]=exam_grade[player];
					}
				}else{									//�s���i
					PlaySE(45);
					if((examination[player]==2) && (enable_grade[player] == 4) && (!playback)){
						admit_grade[player]=exam_grade[player];
					}
				}
			}
			if(statc[player * 10 + 0] >= 350){
				if(exam_grade[player] <= grade[player]){	//���i
					if((statc[player * 10] % 10 == 0)&&(endingcnt[player] < 20)) {
						PlaySE(35);
						objectCreate2(player, 7, Rand(80) + 72 + 192 * player - 96 * maxPlay, 32 + Rand(20), 0, 0, Rand(7)+1, 0);
						endingcnt[player]++;
					}
					ExBltRect(81, 125+192 * player -96 * maxPlay , 162 , 215, 200 + 25 * (count % 4 / 2), 70, 25);
					printSMALLFont(122 + 192 * player - 96 * maxPlay, 189, "   SUCCESS   ",(count % 4 / 2) * digitc[rots[player]]);
				}else{										//�s���i
					ExBltRect(81, 125+192 * player -96 * maxPlay , 162 , 215, 250 + 25 * (count % 4 / 2), 70, 25);
					printSMALLFont(125 + 192 * player - 96 * maxPlay, 189, "   FAILED   ",(count % 4 / 2) * 2);
				}
			}

			if(statc[player * 10 + 0] > 720){
				if(exam_ranking){stat[player] = 11;//�l�[���G���g���[
				}else {
					PlayerdataSave();
					stat[player]=14;

				}	// ����
				grade_pasttime[player] = 0;		//�O�̎�������̌o�ߎ��Ԃ����Z�b�g
				statc[player * 10 + 0] = 0;		// �X�e�[�^�X�J�E���^��0��
				statc[player * 10 + 1] = 0;
				statc[player * 10 + 2] = 0;
				statc[player * 10 + 3] = 0;
				return;
			}
		}
	}
	statc[player * 10 + 0]++;
}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.31 - �A�C�e�����[���b�g
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
// statc[player * 10 + 2]�F�����A�C�e��
void statItemRulet(int player) {
	int i,j,y,waitA;

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if(repversw < 63){
		waitA = 180;
	}else{
		waitA = 150 + wait1[player];
	}

	if(statc[player * 10 + 0] == 0){	//�ŏ�

		statc[player * 10 + 0]++;
	} else {
		if(statc[player * 10 + 0] <= 119){//�V���b�t����
			if(statc[player * 10 + 0] % 3 == 0){
				PlaySE(5);
				statc[player * 10 + 2] = Rand(item_num) + 1;
			}
		}
		if(statc[player * 10 + 0] == 120){//����
			PlaySE(10);
			statc[player * 10 + 2] = rand(item_num,player) + 1;
			if(repversw < 48)
				eraseItem(player, statc[player * 10 + 2]);
			else if((rand(10,player) < 1) || (statc[player * 10 + 2] == item_num + 1)){	//�X�J
				statc[player * 10 + 2] = 36;
				PlaySE(45);
				if(repversw >= 54){
					eraseItem(player, statc[player * 10 + 2]);
					item_t[player] = item_interval / 4;
				}
			}else{//����������
				eraseItem(player, statc[player * 10 + 2]);
				if((repversw >= 54) && (statc[player * 10 + 2] == 36)){
					PlaySE(45);
					misstimer[player] = item_interval / 4;
				}
			}

			if(stat[player] != 31){
				statc[player * 10 + 1] = stat[player];
				stat[player] = 31;
			}
			if((dorulet[player]) && (repversw >= 48) && (repversw < 62)){
				dorulet[player] = 0;
				eraseItem(player, rand(item_num,player) + 1);
			}
		}
		if((statc[player * 10 + 0] > 120) && (statc[player * 10 + 0] <= 150) && (statc[player * 10 + 2] == 36)){
			y = Rand(8);
			ofs_x[player] = y - (8 / 2);
			ofs_x2[player] = ofs_x[player];
		}else{
			ofs_x[player] = 0;
			ofs_x2[player] = 0;
		}
		if(statc[player * 10 + 0] <= 150)ExBltFastRect(89, 120+192 * player -96 * maxPlay , 142 , 80 * ((statc[player * 10 + 2] - 1) / 10), 36 * ((statc[player * 10 + 2] - 1) % 10), 80, 36);
		ExBltFastRect(46,(4 + 24 * player + 12 * (!maxPlay))*8, 182,(8*(statc[player * 10 + 2] - 1))+56,0,8,8);
		ExBltFastRect(46,(11 + 24 * player + 12 * (!maxPlay))*8, 182,(8*(statc[player * 10 + 2] - 1))+56,0,8,8);
		ExBltRect(28,(5 + 24 * player + 12 * (!maxPlay))*8, 178, 0, (statc[player * 10 + 2] - 1) * 16, 48, 16);
		statc[player * 10 + 0]++;
		if(statc[player * 10 + 0] >= waitA){
			if(repversw >= 48){
				if(fmirror_cnt[player] == -20)
					if(UpLineShirase(player)) return;
				if(fldMirrorProc(player)) return;
			}else if(repversw >= 40)
				if(fldMirrorProc(player)) return;
			stat[player] = statc[player * 10 + 1];
			statc[player * 10] = 0;
			statc[player * 10 + 1] = 0;
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 3] = 0;
			statc[player * 10 + 4] = 0;
	// �A�C�e�������̑Ώۂ������������ꍇ
	//��DEL FIELD
	if(isUPdelfield[player]){
		j = (22-checkFieldTop(player)) / 2;
		for(i = checkFieldTop(player); i <= 22; i++) {
			erase[i + player * 22] = 1;
			j--;
			if(j < 0) break;
		}
		stat[player] = 25;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	//��DEL FIELD
	if(isDWdelfield[player]){
		j = (22-checkFieldTop(player)) / 2;
		for(i = 22; i > checkFieldTop(player); i--) {
			erase[i + player * 22] = 1;
			j--;
			if(j < 0) break;
		}
		stat[player] = 25;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	//DEL EVEN
	if(isdeleven[player]){
		for(i = 22; i >= checkFieldTop(player); i--) {
			erase[i + player * 22] = 1;
			i--;
		}
		stat[player] = 25;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	//FREE FALL
	if(isFreefall[player]){
		stat[player] = 32;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		return;
	}
	//MOV FIELD
	if((isLmovfield[player]) || (isRmovfield[player])){
		stat[player] = 33;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		return;
	}
		//ALLCLEAR
	if(isallclear[player]){
//		for(i = 0; i < 22; i++) {
//			erase[i + player * 22] = 1;
//		}
		stat[player] = 35;
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 4;	// �����J�n
		statc[player * 10] = -wait1[player];
		statc[player * 10 + 2] = 21;
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		return;
	}
	if(doshotgun[player]){	//�V���b�g�K������
		stat[player] = 28;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		doshotgun[player] = 0;
		return;
	}
	if(dolaser[player]){	//���[�U�[����
		stat[player] = 26;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		dolaser[player] = 0;
		return;
	}
	if(donega[player]){	//�l�K�t�B�[���h����
		stat[player] = 27;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		donega[player] = 0;
		return;
	}
	if(dorulet[player]){	//�A�C�e�����[���b�g����
		stat[player] = 31;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		dorulet[player] = 0;
		return;
	}
	if(do180field[player]){	//180���t�B�[���h����
		stat[player] = 34;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		do180field[player] = 0;
		return;
	}
	if(doexchg[player]){	//�t�B�[���h��������
		stat[player] = 29;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 0;
		statc[player * 10 + 4] = 0;
		doexchg[player] = 0;
		return;
	}
	if(docopyfld[player]){	//�t�B�[���h�R�s�[����
		stat[player] = 29;
		statc[player * 10 + 0] = 0;
		statc[player * 10 + 1] = 4;		// �X�e�[�^�X
		if(ending[player])				//�G���f�B���O��
			statc[player * 10 + 1] = 13;
		statc[player * 10 + 2] = 0;
		statc[player * 10 + 3] = 1;
		statc[player * 10 + 4] = 0;
		docopyfld[player] = 0;
		return;
	}
		}
	}

}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.32 - �t���[�t�H�[��
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
// statc[player * 10 + 2]�F�Ă���オ�莞�̌��̈ʒu
void statFreefall(int player) {
	int i,j,x,y = 0,l,k,tmp;

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if((statc[player * 10 + 0] >= wait1[player]) && (statc[player * 10 + 0] <= (wait1[player] * 2) + 40)){
		if(statc[player * 10 + 0] < wait1[player] + 25){
			ofs_y[player] = ofs_y[player] - 2;
			ofs_y2[player] = ofs_y2[player] - 2;
		}
		if((statc[player * 10 + 0] >= wait1[player] + 25) && (statc[player * 10 + 0] < wait1[player] + 30)){
			ofs_y[player] = ofs_y[player] + 10;
			ofs_y2[player] = ofs_y2[player] + 10;
		}
		if(statc[player * 10 + 0] == wait1[player] + 30){	//���R��������
			ofs_y[player] = 0;
			ofs_y2[player] = 0;
			PlaySE(2);
			for(y = fldsizeh[player] - 1;y >= 0;y--){	//�ŉ��i�͒��ׂȂ�
				for(i = 0;i < fldsizew[player];i++){
					if((fld[i + y * fldsizew[player] + player * 220] != 0) && (fld[i + (y + 1) * fldsizew[player] + player * 220] == 0)){	//�u���b�N����1�i�����󔒂Ȃ�
						tmp = y;
						do{
							if(tmp + 1 > fldsizeh[player]) break;	//�ŉ��i�ɓ��B
							j = fld[i + tmp * fldsizew[player] + player * 220];
							fld[i + tmp * fldsizew[player] + player * 220] = 0;
							fld[i + (tmp + 1) * fldsizew[player] + player * 220] = j;
							j = fldt[i + tmp * fldsizew[player] + player * 220];
							fldt[i + tmp * fldsizew[player] + player * 220] = 0;
							fldt[i + (tmp + 1) * fldsizew[player] + player * 220] = j;
							j = fldi[i + tmp * fldsizew[player] + player * 220];
							fldi[i + tmp * fldsizew[player] + player * 220] = 0;
							fldi[i + (tmp + 1) * fldsizew[player] + player * 220] = j;
							j = flds[i + tmp * fldsizew[player] + player * 220];
							flds[i + tmp * fldsizew[player] + player * 220] = 0;
							flds[i + (tmp + 1) * fldsizew[player] + player * 220] = j;
							tmp++;
						}while(fld[i + (tmp + 1) * fldsizew[player] + player * 220] == 0);
					}
				}
			}
		}
	}
	if(statc[player * 10 + 0] == (wait1[player] * 2) + 30){	//��������i�Ȃ���Ύ��̃X�e�[�^�X�ցj
		if(blockEraseJudgeFf(player,0) == 0){	// �����Ȃ�
			statc[player * 10 + 0] = -100;
		} else {							// ��������
			statc[player * 10 + 2] = rand(10,player);
			statc[player * 10 + 3] = statc[player * 10 + 2];
			if(IsBigStart[player]) {
				statc[player * 10 + 2] = (statc[player * 10 + 2] / 2) * 2;
				statc[player * 10 + 3] = statc[player * 10 + 2] + 1;
			}

			for(i = 0; i <= fldsizeh[player]; i++) {
				if(erase[i + player * 22]) {
					Ff_rerise[player]++;
					y--;
					for(x = 0; x < fldsizew[player]; x++) { // #1.60c7b
						if(breakeffect) {
							// super_breakeffect��1�̏ꍇ�͑S�Ẵu���b�N�ɔj��G�t�F�N�g��K�p���� #1.60c7m9
							// �v���`�i�u���b�N��������ꍇ�͖�����
							if( (fld[x + i * fldsizew[player] + player * 220] >= 11) || (super_breakeffect == 1) ||
								( ((breaktype == 0)||((breaktype == 3)&&(gameMode[player] == 0))) && (super_breakeffect == 2) ) ||
								((heboGB[player]) && (super_breakeffect == 2)) ) {
								objectCreate(player, 1, (x + 15 + 24 * player - 12 * maxPlay) * 8, (i + 3) * 8, (x - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + Ff_rerise[player] * 250, fld[x + i * 10 + player * 220], 100);
							} else if(Ff_rerise[player] & 1) {
								if((x & 1) == 1) {
									objectCreate(player, 1 + (wait1[player] < 6) * 2, (x + 15 + 24 * player - 12 * maxPlay) * 8 + 4, (i + 3) * 8, (x - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + Ff_rerise[player] * 250, fld[x + i * 10 + player * 220], 100);
								}
							} else {
								if((x & 1) == 0) {
									objectCreate(player, 1 + (wait1[player] < 6) * 2, (x + 15 + 24 * player - 12 * maxPlay) * 8 + 4, (i + 3) * 8, (x - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150) + Ff_rerise[player] * 250, fld[x + i * 10 + player * 220], 100);
								}
							}
						}

						fld[x + i * fldsizew[player] + player * 220] = 0;
						fldt[x + i * fldsizew[player] + player * 220] = 0;	// #1.60c7j5
						fldi[x + i * fldsizew[player] + player * 220] = 0;	// #1.60c7n1
						grayoutLackedBlock(player, flds[x + i * 10 + player * 220]);
						flds[x + i * fldsizew[player] + player * 220] = 0;
					}
				}
			}
			if(gameMode[player] != 4)
				PlaySE(11);
			else if( Ff_rerise[player] >= 5 )
				PlaySE(10 + 4);		// 5���C���ȏ�̏ꍇ��4���C���̉����o��
			else
				PlaySE(10 + Ff_rerise[player]);
			if(gameMode[player] == 4){
				li[player] = li[player] + Ff_rerise[player];
				if(Ff_rerise[player] >= 2) blockEraseJudgeFf(player,1);
			}
		}
	}
	if(statc[player * 10 + 0] == (wait1[player] * 2) + 30 + wait2[player]) {	//�������肪�������ꍇ�̗�������
		y = fldsizeh[player];
		for(i = 0; i <= fldsizeh[player]; i++) {
			if(erase[y + player * 22]) {
				for(k = y; k > 0; k--) {
					for(l = 0; l < fldsizew[player]; l++) {
						fld[l + k * fldsizew[player] + player * 220] = fld[l + (k - 1) * fldsizew[player] + player * 220];
						// #1.60c7j5
						fldt[l + k * fldsizew[player] + player * 220] = fldt[l + (k - 1) * fldsizew[player] + player * 220];
						// #1.60c7n1
						if((gameMode[player] == 4) || (item_mode[player]))
						fldi[l + k * fldsizew[player] + player * 220] = fldi[l + (k - 1) * fldsizew[player] + player * 220];
					}
					erase[k + player * 22] = erase[(k - 1) + player * 22];
				}
				for(l = 0; l < fldsizew[player]; l++) {
					fld[l + player * 220] = 0;
					fldt[l + player * 220] = 0;		// #1.60c7j5
					if((gameMode[player] == 4) || (item_mode[player])) fldi[l + player * 220] = 0;		// #1.60c7n1
					erase[player * 22] = 0;
				}
			} else {
				y--;
			}
		}
		PlaySE(2);
		for(i = 0; i <= fldsizeh[player]; i++) erase[i + player * 22] = 0;
	}

	if(statc[player * 10 + 0] == (wait1[player] * 3) + 30 + wait2[player]) statc[player * 10 + 0] = -100;
	//novice���[�h��square���[�h���ƍĂ���オ��Ȃ��@�ΐ�ł͑��������グ��
	if(((gameMode[player] == 0) && (novice_mode[player]))||(squaremode[player])||(gameMode[player] == 4)) Ff_rerise[player] = 0;

//	if(statc[player * 10 + 0] >= 0)
	statc[player * 10 + 0]++;
	if(statc[player * 10 + 0] < 0){
		if(Ff_rerise[player] != 0){	//�Ă���オ��
			PlaySE(20);
			for(i = 1; i <= fldsizeh[player]; i++) {
				for(j = 0; j < fldsizew[player]; j++) {
					fld[j + (i - 1) * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
					fldt[j + (i - 1) * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
					flds[j + (i - 1) * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
					if((gameMode[player] == 4) || (item_mode[player]))
						fldi[j + (i - 1) * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
				}
				erase[(i - 1) + player * 22] = erase[i + player * 22];
			}

			for(j = 0; j < fldsizew[player]; j++) {
				fld[j + fldsizew[player] * fldsizeh[player] + player * 220] = ((j != statc[player * 10 + 2]) && (j != statc[player * 10 + 3])) * (rand(7,player) + 2);
				fldt[j + fldsizew[player] * fldsizeh[player] + player * 220] = (fld[j + fldsizew[player] * fldsizeh[player] + player * 220] != 0) * -1;
				// �A�C�e���𑝐B�����Ȃ� #1.60c7o6
				if((gameMode[player] == 4) || (item_mode[player])) fldi[j + fldsizew[player] * fldsizeh[player] + player * 220] = 0;
			}
			erase[fldsizeh[player] + player * 22] = 0;
			Ff_rerise[player]--;
			return;
		}else{
			isFreefall[player] = 0;
			stat[player] = statc[player * 10 + 1];
			statc[player * 10 + 1] = 0;
			if((repversw >= 48) && (statc[player * 10 + 0] == -99)){
				statc[player * 10 + 1] = stat[player];
				stat[player] = 22;
			}
			statc[player * 10] = 0;
			statc[player * 10 + 2] = 0;
			statc[player * 10 + 3] = 0;
		}
	}

}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.33 - �u���b�N��[�Ɋ񂹂�
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
void statMovfield(int player) {
	int i,j,x,y,l,k,tmp;

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if((statc[player * 10 + 0] >= wait1[player]) && (statc[player * 10 + 0] <= (wait1[player] * 2) + 40)){
		if(statc[player * 10 + 0] < wait1[player] + 25){
			ofs_x[player] = ofs_x[player] - 2 + (4 * isLmovfield[player]);
			ofs_x2[player] = ofs_x2[player] - 2 + (4 * isLmovfield[player]);
		}
		if((statc[player * 10 + 0] >= wait1[player] + 25) && (statc[player * 10 + 0] < wait1[player] + 30)){
			ofs_x[player] = ofs_x[player] + 10 - (10 * isLmovfield[player]);
			ofs_x2[player] = ofs_x2[player] + 10 - (10 * isLmovfield[player]);
		}
		if(statc[player * 10 + 0] == wait1[player] + 30){	//����
			ofs_x[player] = 0;
			ofs_x2[player] = 0;
			PlaySE(2);
			if(isLmovfield[player])	//��MOV FIELD
			for(i = 1;i < fldsizew[player];i++){
				for(y = 0;y <= fldsizeh[player];y++){
					if((fld[i + y * fldsizew[player] + player * 220] != 0) && (fld[(i - 1) + y * fldsizew[player] + player * 220] == 0)){
						tmp = i;
						do{
							if(tmp - 1 < 0) break;	//���[�ɓ��B
							j = fld[tmp + y * fldsizew[player] + player * 220];
							fld[tmp + y * fldsizew[player] + player * 220] = 0;
							fld[(tmp - 1) + y * fldsizew[player] + player * 220] = j;
							j = fldt[tmp + y * fldsizew[player] + player * 220];
							fldt[tmp + y * fldsizew[player] + player * 220] = 0;
							fldt[(tmp - 1) + y * fldsizew[player] + player * 220] = j;
							j = fldi[tmp + y * fldsizew[player] + player * 220];
							fldi[tmp + y * fldsizew[player] + player * 220] = 0;
							fldi[(tmp - 1) + y * fldsizew[player] + player * 220] = j;
							j = flds[tmp + y * fldsizew[player] + player * 220];
							flds[tmp + y * fldsizew[player] + player * 220] = 0;
							flds[(tmp - 1) + y * fldsizew[player] + player * 220] = j;
							tmp--;
						}while(fld[(tmp - 1) + y * fldsizew[player] + player * 220] == 0);
					}
				}
			}
			if(isRmovfield[player])	//��MOV FIELD
			for(i = fldsizew[player] - 2;i >= 0;i--){
				for(y = 0;y <= fldsizeh[player];y++){
					if((fld[i + y * fldsizew[player] + player * 220] != 0) && (fld[(i + 1) + y * fldsizew[player] + player * 220] == 0)){
						tmp = i;
						do{
							if(tmp + 1 >= fldsizew[player]) break;	//�E�[�ɓ��B
							j = fld[tmp + y * fldsizew[player] + player * 220];
							fld[tmp + y * fldsizew[player] + player * 220] = 0;
							fld[(tmp + 1) + y * fldsizew[player] + player * 220] = j;
							j = fldt[tmp + y * fldsizew[player] + player * 220];
							fldt[tmp + y * fldsizew[player] + player * 220] = 0;
							fldt[(tmp + 1) + y * fldsizew[player] + player * 220] = j;
							j = fldi[tmp + y * fldsizew[player] + player * 220];
							fldi[tmp + y * fldsizew[player] + player * 220] = 0;
							fldi[(tmp + 1) + y * fldsizew[player] + player * 220] = j;
							j = flds[tmp + y * fldsizew[player] + player * 220];
							flds[tmp + y * fldsizew[player] + player * 220] = 0;
							flds[(tmp + 1) + y * fldsizew[player] + player * 220] = j;
							tmp++;
						}while(fld[(tmp + 1) + y * fldsizew[player] + player * 220] == 0);
					}
				}
			}

		}
	}


	statc[player * 10 + 0]++;
	if(statc[player * 10 + 0] == (wait1[player] * 2) + 30){
		isLmovfield[player] = 0;
		isRmovfield[player] = 0;
		stat[player] = statc[player * 10 + 1];
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 2] = 0;
		if(repversw >= 48){
			statc[player * 10 + 1] = stat[player];
			stat[player] = 22;
		}
	}

}
//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.34 - �t�B�[���h��̃u���b�N���Ђ�����Ԃ�
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
void stat180field(int player) {
	int i,j,x,y,l,k,tmp,waitA;

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if(repversw < 63){
		waitA = wait1[player] + 40;
	}else if(repversw < 65){
		waitA = wait1[player] * 2;
	}else{
		waitA = 20 + wait1[player] + (wait1[player] / 2);
	}

//	do180field[player] = 0;

	if((statc[player * 10 + 0] >= waitA) && (statc[player * 10 + 0] <= waitA + 50 + 15)){
		if(statc[player * 10 + 0] < waitA + 25){
			ofs_y[player] = ofs_y[player] + 2;
			ofs_y2[player] = ofs_y2[player] + 2;
		}
		if((statc[player * 10 + 0] >= waitA + 25) && (statc[player * 10 + 0] <= waitA + 50)){
			if(ofs_y[player] > 0) ofs_y[player] = ofs_y[player] - 10;
			ofs_y2[player] = ofs_y2[player] - 10;
		}
		if(statc[player * 10 + 0] == waitA + 50){	//����
			ofs_y[player] = 0;
			statc[player * 10 + 2] = checkFieldTop(player);
			for(i = 0; i <= fldsizeh[player]; i++) {	// �o�b�t�@��
				for(j = 0; j < fldsizew[player]; j++) {
					fldbuf[j + i * fldsizew[player] + player * 220] = fld[j + i * fldsizew[player] + player * 220];
					fldtbuf[j + i * fldsizew[player] + player * 220] = fldt[j + i * fldsizew[player] + player * 220];
					fldibuf[j + i * fldsizew[player] + player * 220] = fldi[j + i * fldsizew[player] + player * 220];
					fldsbuf[j + i * fldsizew[player] + player * 220] = flds[j + i * fldsizew[player] + player * 220];
				}
			}
			for(i = 0; i <= fldsizeh[player]; i++) {	// �Ђ�����Ԃ�
				for(j = 0; j < fldsizew[player]; j++) {
					if(i + statc[player * 10 + 2] > fldsizeh[player]) break;
					fld[j + (i + statc[player * 10 + 2]) * fldsizew[player] + player * 220] = fldbuf[j + (fldsizeh[player] - i) * fldsizew[player] + player * 220];
					fldt[j + (i + statc[player * 10 + 2]) * fldsizew[player] + player * 220] = fldtbuf[j + (fldsizeh[player] - i) * fldsizew[player] + player * 220];
					fldi[j + (i + statc[player * 10 + 2]) * fldsizew[player] + player * 220] = fldibuf[j + (fldsizeh[player] - i) * fldsizew[player] + player * 220];
					flds[j + (i + statc[player * 10 + 2]) * fldsizew[player] + player * 220] = fldsbuf[j + (fldsizeh[player] - i) * fldsizew[player] + player * 220];

				}
			}
		}
		if((statc[player * 10 + 0] > waitA + 50) && (statc[player * 10 + 0] < waitA + 50 + 15)){
			ofs_y2[player] = ofs_y2[player] + 20;
			if(ofs_y2[player] > 0) ofs_y2[player] = 0;
		}
		if(statc[player * 10 + 0] == waitA + 50 + 15){
			ofs_y2[player] = 0;
			PlaySE(2);
		}
	}

	statc[player * 10 + 0]++;
	if(statc[player * 10 + 0] > wait1[player] + waitA + 50 + 15){
		stat[player] = statc[player * 10 + 1];
		statc[player * 10] = 0;
		statc[player * 10 + 1] = 0;
		statc[player * 10 + 2] = 0;
		if(repversw >= 48){
			statc[player * 10 + 1] = stat[player];
			stat[player] = 22;
		}
	}

}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.35 - �ォ��u���b�N������
//������������������������������������������������������������������������������
// statc[player * 10 + 0]�F�J�E���^
// statc[player * 10 + 1]�F�I����Ɉړ�����X�e�[�^�X
// statc[player * 10 + 2]�F�������C����
// statc[player * 10 + 3]�F�J�E���^2
void statDelfromUpper(int player) {
	int i, j, k, waitA;

	padRepeat(player);
	if(ace_irs) doIRS2(player);	// ACE��IRS C7U1.5

	if((repversw < 63) || (gameMode[player] == 8)){
		waitA = -160;
	}else{
		waitA = -100 - (wait1[player] * 2);
	}

	if((statc[player * 10] > -100 + wait1[player]) && (statc[player * 10] < 0)){
		statc[player * 10]++;
		return;
	}
	if(statc[player * 10] == 0) {
		// �ǂ�������������߂�
		statc[player * 10] = checkFieldTop(player) * 6;
		return;
	}

	// �u���b�N������
	if((statc[player * 10] % 6 == 0) && (statc[player * 10] >= 0)) {
		j = statc[player * 10] / 6;

		if((j >= 0) && (j < 22)) {
			for(i = 0; i < 10; i++) {
				if(fld[i + j * 10 + player * 220]) {
						objectCreate(player, 1, (i + 15 + 24 * player - 12 * maxPlay) * 8, (j + 3) * 8, (i - 5) * 120 + 20 - Rand(40), - 1900 + Rand(150), fld[i + j * 10 + player * 220], 100);

					fld[i + j * 10 + player * 220] = 0;
					fldt[i + j * 10 + player * 220] = 0;
					fldi[i + j * 10 + player * 220] = 0;
					flds[i + j * 10 + player * 220] = 0;
				}
			}
		}
		statc[player * 10 + 3]++;
	}
	if((statc[player * 10] >= 0) && ((statc[player * 10 + 3] >= statc[player * 10 + 2]) || ((statc[player * 10] / 6) >= 22)))
		statc[player * 10] = waitA;

	// �A�j���I��
	if(statc[player * 10] == -100) {
		pinchCheck(player);
		pinchCheck2(player);
		stat[player] = statc[player * 10 + 1];
		for(i = 0; i < 10; i++) statc[player * 10 + i] = 0;
		for(i = 0; i < 22; i++) erase[i + player * 22] = 0;
		return;
	}

	statc[player * 10]++;
}

//������������������������������������������������������������������������������
//  �X�e�[�^�XNo.EX - �V���b�t���t�B�[���h
//������������������������������������������������������������������������������
void statBanana(int player){
	int i,j,y,flag[10],tmp,chg[10],chgt[10],chgi[10],chgs[10];

	if(banana_c[player] == 0){	// �ŏ�
		for(i = 0; i < 10; i++) flag[i] = 0;
		for(i = 0; i < 10; i++){
			do{
				tmp = rand(10,player);
			}while(flag[tmp] == 1);
			flag[tmp] = 1;
			banana_pos[i + 10 * player] = tmp;
		}
		banana_c[player]++;
	}else{
		y = banana_c[player] - 1;
		if(banana_c[player] <= 22){
			for(j = 0; j < fldsizew[player]; j++){
				chg[j] = fld[j + y * fldsizew[player] + player * 220];
				chgt[j] = fldt[j + y * fldsizew[player] + player * 220];
				chgi[j] = fldi[j + y * fldsizew[player] + player * 220];
				chgs[j] = flds[j + y * fldsizew[player] + player * 220];
			}
			for(j = 0; j < fldsizew[player]; j++){
				fld[j + y * fldsizew[player] + player * 220] = chg[banana_pos[j + 10 * player]];
				fldt[j + y * fldsizew[player] + player * 220] = chgt[banana_pos[j + 10 * player]];
				fldi[j + y * fldsizew[player] + player * 220] = chgi[banana_pos[j + 10 * player]];
				flds[j + y * fldsizew[player] + player * 220] = chgs[banana_pos[j + 10 * player]];
			}
		}
		if((y > 1) && (y <= 7))
			ExBltRect(79, 120 + 192 * player - 96 * maxPlay, 32, 0 , 50 * (count % 4) + (50 - ((y - 1) * 8)), 80, (y - 1) * 8);
		else if((y > 21) && (y <= 27))
			ExBltRect(79, 120 + 192 * player - 96 * maxPlay, 26 + (y * 8) - 50, 0 , 50 * (count % 4), 80, ((28 - y) * 8));
		else if((y > 7) && (y <= 21))
			ExBltRect(79, 120 + 192 * player - 96 * maxPlay, 24 + (y * 8) - 50, 0 , 50 * (count % 4), 80, 50);
		banana_c[player]++;
	}
	if(banana_c[player] > 32){
		isbanana[player] = 0;
		banana_c[player] = 0;
	}
}

//������������������������������������������������������������������������������
//  �[�������̃V�[�h����
//������������������������������������������������������������������������������
void GiziSRand(int player){
	int seed;

	seed = Rand(65536);
	randseed[player] = seed;
	first_seed[player] = seed;
}

//������������������������������������������������������������������������������
//  �[����������
//������������������������������������������������������������������������������
int rand(int max,int player) {

		randseed[player] = ((randseed[player] * 673 + 994) / 10) % 100000;
		return abs_YGS2K(randseed[player]) % max;
}

// ��Βl�����߂�iYGS2K�ɂ̓f�t�H���g�ł͓����Ă��Ȃ��̂Łj
int abs_YGS2K(int i){
	if(i < 0)
		return -i;
	else
		return i;
}

// ����̍��W�Ƀu���b�N�����݂��邩���ׂ�
// ����������� 0
// �t�B�[���h�O�� -1
// �t�B�[���h����� -2
//�@opt:1�Ȃ猻�݂̃X�e�[�^�X�ُ���l���@���쒆�u���b�N����
//  fld[bx1 + by1 * fldsizew[player] + player * 220];
int getFieldBlock(int player, int bx1, int by1, int opt) {
	//�t�B�[���h�O�H
	if(((bx1 < 0) && (by1 > 0)) || ((bx1 > fldsizew[player] - 1) && (by1 > 0)) || (by1 > fldsizeh[player])) return -1;
	if(by1 < 0) return 0;

	if(opt){
		if(hidden[player] == 8) return 0;
		else if((isdark[player]) && (item_timer[player] <= 420)) return 0;
		else if(isblind[player]) return 0;
		else if((isxray[player]) && (xray_counter[player] % p_xray_frame != bx1)) return 0;
		else if((hidden[player] >= 9) && (fldt[bx1 + by1 * fldsizew[player] + player * 220] == 0)) return 0;
	}

	return (fld[bx1 + by1 * fldsizew[player] + player * 220]);
}

int getFieldBlock2(int player, int bx1, int by1) {
	if((bx1 < 0) || (bx1 > 10 - 1) || (by1 > fldsizeh[player])) return -1;
	else return (tomoyo_rise_fld[bx1 + by1 * 10 + player * 200]);
}

int getFieldBlock3(int player, int bx1, int by1) {
	if((bx1 < 0) || (bx1 > 10 - 1) || (by1 > fldsizeh[player])) return 0 - (1 * (gameMode[player] == 5));
	else return (fldu[bx1 + by1 * 10 + player * 220]);
}
// gamemodefont.png�p
int getModeAdd(int player){
	if(gameMode[player] == 0) return novice_mode[player];
	else if((gameMode[player] == 1) || (gameMode[player] == 2)) return enable_grade[player];
	else if(gameMode[player] == 3) return devil_minus[player];
	else if(gameMode[player] == 6) return (start_stage[player] >= 27)+(start_stage[player] >= 45)+(start_stage[player] >= 69)+(start_stage[player] >= 100);
	else if(gameMode[player] == 7) return anothermode[player];
	else if(gameMode[player] == 9){
		if(relaymode[player]) return 4;
		else return std_opt[player];
	}else if(gameMode[player] == 10) return ori_opt[player];
	else return 0;
}
// �t�B�[���h�̍ŏ�i��Ԃ�
int checkFieldTop(int player) {
	int i, j;

	for(i = 0; i <= fldsizeh[player]; i++)
		for(j = 0; j < fldsizew[player]; j++)
			if(fld[j + i * fldsizew[player] + player * 220])
				return i;

	// ����ۂ̏ꍇ
	return 22;
}

// �t�B�[���h�̍ŏ�i��Ԃ�
// x�����w��o����o�[�W����
int checkFieldTop2(int player,int x) {
	int i;

	for(i = 0; i <= fldsizeh[player]; i++)
		if(fld[x + i * fldsizew[player] + player * 220])
			return i;

	// ����ۂ̏ꍇ
	return 22;
}
//������������������������������������������������������������������������������
//   �\������A�C�e����������
//������������������������������������������������������������������������������
void scanItem(int player) {
	int i, j;

	item_name[player] = 0;

	// �t�B�[���h�𒲂ׂ�
	for(i = fldsizeh[player]; i >= 0; i--)
		for(j = 0; j < fldsizew[player]; j++)
			if((fldi[j + i * fldsizew[player] + player * 220] != 0) && (fldi[j + i * fldsizew[player] + player * 220] < fldihardno)) {
				item_name[player] = fldi[j + i * 10 + player * 220];
			}

	// NEXT�𒲂ׂ�
	for(i = 0; i < 6; i++)
		if((item_nblk[i + player * 6] != 0) && (item_nblk[i + player * 6] < fldihardno)) {
			item_name[player] = item_nblk[i + player * 6];
		}
}
//������������������������������������������������������������������������������
//  �p�b�h���s�[�g���͏���
//������������������������������������������������������������������������������
void padRepeat(int player) {
	if(getPressState(player, 2) && getPressState(player, 3)) {
		mp[player] = 0;
		mpc[player] = 0;
	} else if(getPressState(player, 2)) {
		if(mp[player] != 2) {
			mp[player] = 2;
			mpc[player] = 0;
		}
		mpc[player]++;
	} else if(getPressState(player, 3)) {
		if(mp[player] != 3) {
			mp[player] = 3;
			mpc[player] = 0;
		}
		mpc[player]++;
	} else {
		mp[player] = 0;
		mpc[player] = 0;
	}
}
void padRepeat2(int player) { // hoge �㉺���̓o�[�W����
	if(getPressState(player, 0) && getPressState(player, 1)) {
		mp2[player] = 0;
		mpc2[player] = 0;
	} else if(getPressState(player, 0)) {
		if(mp2[player] != 1) {
			mp2[player] = 1;
			mpc2[player] = 0;
		}
		mpc2[player]++;
	} else if(getPressState(player, 1)) {
		if(mp2[player] != 2) {
			mp2[player] = 2;
			mpc2[player] = 0;
		}
		mpc2[player]++;
	} else {
		mp2[player] = 0;
		mpc2[player] = 0;
	}
}

//������������������������������������������������������������������������������
//  �L�[��Ԃ̎擾
//������������������������������������������������������������������������������
// �W���C�X�e�B�b�N�����ύX #1.60c7
int getPressState(int player, int key) { // �p�b�h�{�^�����蓖�đΉ� #1.60c
	int jtmp;	// �W���C�X�e�B�b�N����
	int ktmp;	// �L�[�{�[�h����
	int pl;

	// �V���O�����[�h�ł�2P���̓��͂���ɃJ�b�g
	if(maxPlay < player) return 0;

	if((isremote[player]) && (gameMode[player] == 4)) {
		pl = 1 - player;	// �����R��
	} else {
		pl = player;	// �ʏ�
	}


	// ���v���C
	if(playback) {
		// ���͂����v���C�f�[�^����ǂݎ��
		ktmp = (replayData[time2[pl] + pl* 60 * 60 * 20] & (1 << key)) / (1 << key);

		if((!pl) || (gameMode[0] == 4))
			return ktmp;
		else
			return 0;
	}
	// �ʏ�v���C��
	else {
		SelectJoyStick(pl);

		// �W���C�X�e�B�b�N�̓��͂�ǂݎ��
		jtmp = IsPressJoyKey(joykeyAssign[key + 10 * pl]);

		// �L�[�{�[�h�̓��͂�ǂݎ��
		ktmp = IsPressKey(keyAssign[key + pl * 10]);

		if(cpu_flag[pl])
			return cp_input[key + pl * 10];
		else if(!keyAssign[key + pl * 10])
			return jtmp;
		else
			return (jtmp | ktmp);
	}
}

int getPushState(int player, int key) { // �p�b�h�{�^�����蓖�đΉ� #1.60c
	int jtmp;	// �W���C�X�e�B�b�N����
	int ktmp;	// �L�[�{�[�h����
	int pl;

	// �V���O�����[�h�ł�2P���̓��͂���ɃJ�b�g
	if(maxPlay < player) return 0;

	if((isremote[player]) && (gameMode[player] == 4)) {
		pl = 1 - player;	// �����R��
	} else {
		pl = player;	// �ʏ�
	}
	// ���v���C
	if(playback) {
		// ���͂����v���C�f�[�^����ǂݎ��
		ktmp = (replayData[time2[pl] + pl* 60 * 60 * 20] & (1 << (key + 8))) / (1 << (key + 8));

		if((!pl) || (gameMode[0] == 4))
			return ktmp;
		else
			return 0;
	}
	// �ʏ�v���C��
	else {
		SelectJoyStick(pl);

		// �W���C�X�e�B�b�N�̓��͂�ǂݎ��
		jtmp = IsPushJoyKey(joykeyAssign[key + 10 * pl]);

		// �L�[�{�[�h�̓��͂�ǂݎ��
		ktmp = IsPushKey(keyAssign[key + pl * 10]);

		if(cpu_flag[pl])
			return cp_input[key + pl * 10];
		else
			return (jtmp | ktmp);
	}
}

//������������������������������������������������������������������������������
//  �u���b�N�̂����蔻��
//������������������������������������������������������������������������������
int judgeBlock(int player, int bx1, int by1, int kind, int rotate) {
	int		i, bx2, by2; //, result

	if(IsBig[player]) {
		// BIG�̏ꍇ�͐�p�̔��菈�����s�� #1.60c7m6
		return judgeBigBlock(player, bx1, by1, kind, rotate);
	}

	for(i = 0; i < 4; i++) {
		if(rots[player] == 8) {
			bx2 = (bx1 + blkDDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkDDataY[kind * 16 + rotate * 4 + i]);
		}else if( isWRule(player) ) {
			bx2 = (bx1 + blkWDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkWDataY[kind * 16 + rotate * 4 + i]);
		} else {
			bx2 = (bx1 + blkDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkDataY[kind * 16 + rotate * 4 + i]);
		}
		if((by2 < 2) && (heboGB[player] == 2)) {
			return -1;
		}

		if(((bx2 < 0) || (bx2 >= fldsizew[player]) ||
			(by2 > fldsizeh[player])) || ((fld[bx2 + by2 * fldsizew[player] + player * 220] != 0) && (by2 >= 0))) {
			return -1;
		}
	}

	return 0;
}

//������������������������������������������������������������������������������
//  �u���b�N��ݒu���� fldsize�Ή� #1.60c7
//������������������������������������������������������������������������������
void setBlock(int player, int bx1, int by1, int kind, int rotate) {
	int		i, bx2, by2;
	int		puted;

	if(IsBig[player]) {
		// BIG�̏ꍇ�͐�p�̐ݒu�������s�� #1.60c7m6
		setBigBlock(player, bx1, by1, kind, rotate);
		return;
	}

	puted = 0;

	for(i = 0; i < 4; i++) {
		if(rots[player] == 8) {
			bx2 = (bx1 + blkDDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkDDataY[kind * 16 + rotate * 4 + i]);
		}else if( isWRule(player) ) {
			bx2 = (bx1 + blkWDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkWDataY[kind * 16 + rotate * 4 + i]);
		} else {
			bx2 = (bx1 + blkDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkDataY[kind * 16 + rotate * 4 + i]);
		}
		if((bx2 >= 0) && (bx2 < fldsizew[player]) && (by2 >= 0+(1*((repversw <= 27) || (!spawn_y_type)))) && (by2 <= fldsizeh[player])) {
			if((by2 >= 2) || (repversw <= 27))puted++;

			fld[bx2 + by2 * fldsizew[player] + player * 220] = c_cblk_r[player] + 1;
			if((c_cblk_r[player] + 1 == 9) && (heboGB[player] == 1))
				fld[bx2 + by2 * fldsizew[player] + player * 220] = 10;

			// �V���h�E�^�C�}�[�Z�b�g #1.60c7j5
			if((hidden[player] == 8) && (m_roll_blockframe))
				fldt[bx2 + by2 * fldsizew[player] + player * 220] = -60;
			else if(hidden[player] == 8)
				fldt[bx2 + by2 * fldsizew[player] + player * 220] = 0;
			else if(shadow_timer_flag[player])
				fldt[bx2 + by2 * fldsizew[player] + player * 220] = p_shadow_timer;
			else
				fldt[bx2 + by2 * fldsizew[player] + player * 220] = -1;

			// �A�C�e���ݒu #1.60c7n1
			fldi[bx2 + by2 * fldsizew[player] + player * 220] = item[player];
			flds[bx2 + by2 * fldsizew[player] + player * 220] = bdowncnt[player] + 1;
		}
	}

	// ���S�ɉ�ʊO�ɒu�����玀�S #1.60c7s2
	if(((spawn_y_type) || (repversw >= 57)) && (!puted)) {
		setGameOver(player);
	}
}

/* BIG�p�����蔻�� #1.60c7m6 */
int judgeBigBlock(int player, int bx1, int by1, int kind, int rotate) {
	int		i, bx2, by2; //, result
	int		k, l, bx3, by3;

	for(i = 0; i < 4; i++) {
		if(rots[player] == 8) {
			bx2 = (bx1 + blkDDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkDDataY[kind * 16 + rotate * 4 + i] * 2);
		}else if( isWRule(player) ) {
			bx2 = (bx1 + blkWDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkWDataY[kind * 16 + rotate * 4 + i] * 2);
		} else {
			bx2 = (bx1 + blkDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkDataY[kind * 16 + rotate * 4 + i] * 2);
		}

		/* 4�u���b�N�����ׂ� */
		for(k = 0; k < 2; k++)for(l = 0; l < 2; l++) {
			bx3 = bx2 + k;
			by3 = by2 + l;
			if((by3 < 2) && (heboGB[player] == 2)) {
				return -1;
			}
			if( ((bx3 < 0) || (bx3 >= fldsizew[player]) || (by3 > fldsizeh[player])) ||
			    ((fld[bx3 + by3 * fldsizew[player] + player * 220] != 0) && (by3 >= 0)) ) {
				return -1;
			}
		}
	}

	return 0;
}

/* BIG�p�ݒu���� #1.60c7m6 */
void setBigBlock(int player, int bx1, int by1, int kind, int rotate) {
	int		i, bx2, by2;
	int		k, l, bx3, by3;
	int		puted;

	puted = 0;

	for(i = 0; i < 4; i++) {
		if(rots[player] == 8) {
			bx2 = (bx1 + blkDDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkDDataY[kind * 16 + rotate * 4 + i] * 2);
		}else if( isWRule(player) ) {
			bx2 = (bx1 + blkWDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkWDataY[kind * 16 + rotate * 4 + i] * 2);
		} else {
			bx2 = (bx1 + blkDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkDataY[kind * 16 + rotate * 4 + i] * 2);
		}

		/* 4�u���b�N���ݒu���� */
		for(k = 0; k < 2; k++)for(l = 0; l < 2; l++) {
			bx3 = bx2 + k;
			by3 = by2 + l;

		if((bx3 >= 0) && (bx3 < fldsizew[player]) && (by3 >= 0+(1*((repversw <= 27) || (!spawn_y_type)))) && (by3 <= fldsizeh[player])) {
				if((repversw <= 2) || (by3 >= 2)) puted = 1;

				fld[bx3 + by3 * fldsizew[player] + player * 220] = c_cblk_r[player] + 1;
				if((c_cblk_r[player] + 1 == 9) && (heboGB[player] == 1))
					fld[bx3 + by3 * fldsizew[player] + player * 220] = 10;

				if((hidden[player] == 8) && (m_roll_blockframe))	//TI���������[���ɂ��g�p
					fldt[bx3 + by3 * fldsizew[player] + player * 220] = -60;
				else if(hidden[player] == 8)
					fldt[bx3 + by3 * fldsizew[player] + player * 220] = 0;
				else if(shadow_timer_flag[player])
					fldt[bx3 + by3 * fldsizew[player] + player * 220] = p_shadow_timer;
				else
					fldt[bx3 + by3 * fldsizew[player] + player * 220] = -1;

				// �A�C�e���ݒu #1.60c7n1
				fldi[bx3 + by3 * fldsizew[player] + player * 220] = item[player];
				flds[bx3 + by3 * fldsizew[player] + player * 220] = bdowncnt[player] + 1;
			}
		}
	}

	// ���S�ɉ�ʊO�ɒu�����玀�S #1.60c7s2
	if(((spawn_y_type) || (repversw >= 57)) && (!puted)) {
		setGameOver(player);
	}
}
// �u���b�N�������@MOVE ERASED ����オ��p
void removeBlock(int player, int bx1, int by1, int kind, int rotate) {
	int		i, bx2, by2;

	if(IsBig[player]) {
		// BIG�̏ꍇ�͐�p�������s�� #1.60c7m6
		removeBigBlock(player, bx1, by1, kind, rotate);
		return;
	}

	for(i = 0; i < 4; i++) {
		if(rots[player] == 8) {
			bx2 = (bx1 + blkDDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkDDataY[kind * 16 + rotate * 4 + i]);
		}else if( isWRule(player) ) {
			bx2 = (bx1 + blkWDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkWDataY[kind * 16 + rotate * 4 + i]);
		} else {
			bx2 = (bx1 + blkDataX[kind * 16 + rotate * 4 + i]);
			by2 = (by1 + blkDataY[kind * 16 + rotate * 4 + i]);
		}
		if( ( bx2 >= 0 ) && ( bx2 <= 9 ) && ( by2 >= 0 + (!spawn_y_type) ) && ( by2 <= fldsizeh[player] ) ) {
			fld[bx2 + by2 * fldsizew[player] + player * 220] = 0;
			fldt[bx2 + by2 * fldsizew[player] + player * 220] = 0;

		}
	}
}

// BIG�p
void removeBigBlock(int player, int bx1, int by1, int kind, int rotate) {
	int		i, bx2, by2;
	int		k, l, bx3, by3;

	for(i = 0 ; i < 4 ; i++) {
		if(rots[player] == 8) {
			bx2 = (bx1 + blkDDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkDDataY[kind * 16 + rotate * 4 + i] * 2);
		}else if( isWRule(player) ) {
			bx2 = (bx1 + blkWDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkWDataY[kind * 16 + rotate * 4 + i] * 2);
		} else {
			bx2 = (bx1 + blkDataX[kind * 16 + rotate * 4 + i] * 2);
			by2 = (by1 + blkDataY[kind * 16 + rotate * 4 + i] * 2);
		}

		/* 4�u���b�N������ */
		for(k = 0; k < 2; k++)for(l = 0; l < 2; l++) {
			bx3 = bx2 + k;
			by3 = by2 + l;

			if( ( bx3 >= 0 ) && ( bx3 <= 9 ) && ( by3 >= 0 + (!spawn_y_type) ) && ( by3 <= fldsizeh[player] ) ) {
				fld[bx3 + by3 * 10 + player * 220] = 0;
				fldt[bx3 + by3 * 10 + player * 220] = 0;
			}
		}
	}
}

//������������������������������������������������������������������������������
//  �e�X�g���j���[#1.60c7i4
//������������������������������������������������������������������������������
void testmenu(void) {
	int i, j, cursor, mode, param;
	cursor = 0;
	mode = 0;
	param = 0;

	loop {
		ClearSecondary();

		// ���C�����j���[
		if( mode == 0 ) {
			param = 0;

			// ���j���[�`��
			printFont(1, 1, "TEST MENU", 4);
			printFont(1, 3 + cursor, "b", fontc[rots[0]]);

			printFont(2, 3, "[GRAPHIC TEST]", (cursor == 0) * fontc[rots[0]]);
			printFont(2, 4, "[RANKING ERASE]",(cursor == 1) * fontc[rots[0]]);
			printFont(2, 5, "[RESET]",        (cursor == 2) * fontc[rots[0]]);

			// �L�[����
			KeyInput();

			padRepeat2(0);
			// ��
			if( (mpc2[0] == 1) || ((mpc2[0] > tame3) && (mpc2[0] % tame4 == 0)) )
			if( getPressState(0, 0) ) {
				PlaySE(5);
				cursor--;
				if(cursor < 0) cursor = 2;
			}
			// ��
			if( (mpc2[0] == 1) || ((mpc2[0] > tame3) && (mpc2[0] % tame4 == 0)) )
			if( getPressState(0, 1) ) {
				PlaySE(5);
				cursor++;
				if(cursor > 2) cursor = 0;
			}

			// A�Ō���
			if( getPushState(0, 4) ) {
				PlaySE(10);
				mode = cursor + 1;
			}

			// B�Ŗ߂�
			if( getPushState(0, 5) ) {
				return;
			}
		}
		// GRAPHIC TEST
		else if( mode == 1 ) {
			ExBltFast(param, 0, 0);

			// �L�[����
			KeyInput();

			padRepeat(0);
			// ��
			if((mpc[0] == 1) || ((mpc[0] > tame1) && (mpc[0] % tame2 == 0)) || (getPressState(0, 6)))
			if( getPressState(0, 2) ) {
				param--;

				// �ꎞ�o�b�t�@��`�悵�Ȃ�
				if( (param == 9) || (param == 23) ) param--;

				// ���g�p�v���[����`�悵�Ȃ�
				if( param == 30 ) param = 29;
				//if( (param == 26) || (param == 27) ) param = 25;

				// �}�C�i�X�ɂȂ��Ă�����79�ɂ���
				if( param < 0 ) param = 89;
			}
			// ��
			if((mpc[0] == 1) || ((mpc[0] > tame1) && (mpc[0] % tame2 == 0)) || (getPressState(0, 6)))
			if( getPressState(0, 3) ) {
				param++;

				// ���g�p�v���[����`�悵�Ȃ�
				//if( (param == 26) || (param == 27) ) param = 28;
				if( param == 30 ) param = 31;

				// �ꎞ�o�b�t�@��`�悵�Ȃ�
				if( (param == 9) || (param == 23) ) param++;

				// 79�ȏ�ɂȂ��Ă�����0�ɂ���
				if( param > 89 ) param = 0;
			}

			if( !getPressState(0, 7) ) {
				sprintf(string[0],"NO.%02d B:EXIT D:HIDE",param);
				printFont(0, 29, string[0], 0);
			}

			// B�Ŗ߂�
			if( getPushState(0, 5) ) {
				mode = 0;
			}
		}
		// RANKING ERASE
		else if( mode == 2 ) {
			if(param == 0) {
				// �m�F
				printFont(1, 1, "ERASE RANKING?", 4);

				printFont(1, 3, "A+C : YES", 2);
				printFont(1, 4, "B   : NO",  1);
			} else {
				// �����ς�
				printFont(1, 1, "ERASED", 4);

				printFont(1, 4, "B   : EXIT",1);
			}

			// �L�[����
			KeyInput();

			// A+C�Ō���
			if( (!param) && (getPressState(0, 4)) && (getPressState(0, 6)) ) {
				PlaySE(10);
				RankingInit();
				RankingInit2();
				RankingInit3();
				param = 1;
			}

			// B�Ŗ߂�
			if( getPushState(0, 5) ) {
				mode = 0;
			}
		}
		// RESET
		else if( mode == 3 ) {
			printFont(1, 1, "RESET GAME?", 4);

			printFont(1, 3, "A+C : YES", 2);
			printFont(1, 4, "B   : NO",  1);

			// �L�[����
			KeyInput();

			// A+C�Ō���
			if( (getPressState(0, 4)) && (getPressState(0, 6)) ) {
				PlaySE(10);
				ClearSecondary();
				printFont(1, 1, "PLEASE WAIT...", 2);
				restart = 1;
				return;
			}

			// B�Ŗ߂�
			if( getPushState(0, 5) ) {
				mode = 0;
			}
		}

		spriteTime();
	}/* loop */
}

//������������������������������������������������������������������������������
//  �����ݒ�
//������������������������������������������������������������������������������
void initialize(void) {
	int i, j;
	SetFillColor(0);
	ClearSecondary();
	halt;

	// SetConstParam("Caption", "Now Loading...");

	for ( int ii = 1 ; ii <= 5 ; ii ++ )
	{
		TextSize(ii, 12);
		TextBackColorDisable(ii);
	}

	TextLayerOn(1, 10, 220);
	TextOut(1, version);
	halt;


	//
	//TextLayerOn(2, 10, 75);
    //TextOut(2, "If you are English\nuser,please read\n[for_english_users.txt]\nwell.");
	//halt;


	TextLayerOn(3, 10, 10);
	TextOut(3, "Config Loading");
	halt;

	if(LoadConfig()) {	//CONFIG.SAV���ݒ�����[�h
		readdef::readdef();
		LoadConfig();
	}

	hnext[0] = dispnext;	// #1.60c7o8
	hnext[1] = dispnext;	// #1.60c7o8
	versus_rot[0] = rots[0];
	versus_rot[1] = rots[1];

	// ��ʔ䗦�ɉ����ĉ摜�𑜓x���ς��� #1.60c7p9ex
	if ( screenMode < 2 || screenMode > 6 ) {
		setDrawRate(1);
	} else {
		setDrawRate(2);
	}

	LoadGraphics("loading.png", 88, 0);		// Loading�\��
		i = Rand(5);
	if ( getDrawRate() != 1 )
		j = Rand(2);
	else
		j = 0;

	// �O���t�B�b�N�ǂݍ���
	TextLayerOn(4, 10, 23);
	TextOut(4, "Graphics Loading");
	ExBltFastRect(88, 160, 0,160 * i,240 * j,160,240);
	halt;
	loadGraphics(maxPlay);

	// ���ʉ��ǂݍ���
	if(se) {
		TextLayerOn(1, 10, 36);
		TextOut(1, "Sound Effect Loading");
		ExBltFastRect(88, 160, 0,160 * i,240 * j,160,240);
		halt;
		loadWaves();	// #1.60c7o5
	}

	for(i = 0; i < 50; i++) se_play[i] = 0;

	// BGM�ǂݍ���
	if(bgm) {
		TextLayerOn(5, 10, 49);
		TextOut(5, "BGM Loading");
		ExBltFastRect(88, 160, 0,160 * i,240 * j,160,240);
		halt;

		if(wavebgm != 0) {
			loadBGM();	// #1.60c7s6
		} else {
			LoadMIDI("bgm/bgm.mid");
			PlayMIDI();
		}
	}

	for ( int ii = 1 ; ii <= 5 ; ii ++ )
	{
		TextLayerOff(ii);
	}

	if(ranking_type==0){
		i = RankingLoad();
		if(i == 1) RankingInit();
		if(i == 2) RankingConvert();
	}else if(ranking_type==1){
		RankingAlloc();
		i = RankingLoad2();
		if(i == 1) RankingInit2();
	}else{
		RankingAlloc3();
		i = RankingLoad3();
		if(i == 1) RankingInit3();
	}
	// �W���C�X�e�B�b�N�̃{�^����3�ȏ�g���܂���[
	for(i = 0; i < 2; i++) {
		SelectJoyStick(i);
		SetJoyButtonMax(16);
	}

	// �A���X�i�b�v�擾�̈�ݒ�
	if((capx < 0) || (capx > 320)) capx = capx % 320;
	if((capy < 0) || (capy > 240)) capy = capy % 240;
	if(capw < 1) capw = 1;
	if(caph < 1) caph = 1;
	if(capx + capw > 320) capw = 320 - capx;
	if(capy + caph > 240) caph = 240 - capy;

	// �X�^�b�t���[���p�f�[�^��������
//	staffInit();

	// �Z�N�V�����^�C�������L���O�ǂݍ���
	if( ST_RankingLoad() ) {
		ST_RankingInit();
	}

	PlayerdataLoad();

	// SetConstParam("Caption", "HEBORIS C7-EX YGS2K+");
	/* ��������|�[�Y�L�� #1.60c7p9ex */
	// SetConstParam("EnablePause", 1);
}

/* �O���t�B�b�N�ǂݍ��� */
// initialize����Ɨ� #1.60c7o5
// players : �v���C����l��(maxPlay�̑���)
void LoadGraphics(char *nameStr, int p1, int p2) {
	if ( getDrawRate() == 1 )
		sprintf(string[0], "res/graphics/lowDetail%s", nameStr);
	else
		sprintf(string[0], "res/graphics/highDetail/%s", nameStr);

	LoadBitmap(string[0], p1, p2);
}

void LoadTitle(){
	if(!title_mov_f){		//�^�C�g���͐Î~��
		LoadGraphics("title.png", 8, 0);
		if ( getDrawRate() == 1 ){
			LoadBitmap("res/graphics/title/logo_low.png", 7,0);
		}else{
			LoadBitmap("res/graphics/title/logo_hi.png", 7,0);
		}
		SetColorKeyRGB(7,0,0,0);
	}else{					//����
		if ( getDrawRate() == 1 ){
			LoadBitmap("res/graphics/title/tmov_low.png", 8,0);
			LoadBitmap("res/graphics/title/logo_low.png", 7,0);
		}else{
			LoadBitmap("res/graphics/title/tmov_hi.png" , 8,0);
			LoadBitmap("res/graphics/title/logo_hi.png", 7,0);
		}
		SetColorKeyRGB(7,0,0,0);
	}
}

void LoadBackground(char *nameStr, int p1, int p2) {
	if(skip_viewbg) return;

	if ( getDrawRate() == 1 )
		sprintf(string[0], "res/bg/lowDetail/%s", nameStr);
	else
		sprintf(string[0], "res/bg/highDetail/%s", nameStr);

	LoadBitmap(string[0], p1, p2);
}

void loadGraphics(int players) {
	int i, j, k, tr;

	/* �v���[��0�Ƀ��_����ǂݍ��� #1.60c7m9 */
	LoadGraphics("medal.png", 0, 0);
	/* �v���[��56��TI���_����ǂݍ��� #1.60c7m9 */
	LoadGraphics("medal_ti.png", 56, 0);

	// �u���b�N�G�̓v���[��40�`43�Ɉړ]���܂��� #1.60c7o8

	/* �v���[��1�Ƀt�H���g��ǂݍ��� */
	LoadGraphics("hebofont.png", 1, 0);
	SetColorKeyPos(1, 0, 0);

	/* �v���[��2�Ƀt�B�[���h��ǂݍ��� */
	LoadGraphics("hebofld.png", 2, 0);
	SetColorKeyRGB(2,255,255,255);

	/* �v���[��3�Ɋe��X�v���C�g��ǂݍ��� */
	LoadGraphics("hebospr.png", 3, 0);
	SetColorKeyRGB(3,0,0,0);
//	SetColorKeyPos(3, 0, 0);
//	EnableBlendColorKey(3, 1);

	/* �v���[��4�`6, 24�Ƀt�B�[���h�w�i��ǂݍ��� */
	LoadGraphics("heboflb1.png", 4, 0);
	LoadGraphics("heboflb2.png", 5, 0);
	LoadGraphics("heboflb3.png", 6, 0);
	LoadGraphics("heboflb0.png", 24, 0);

	loadBG(players,0); //�w�i����є�������������Ɨ� C7T2.5EX
	/* �v���[��10�`�Ƀo�b�N��ǂݍ��� */

	/* �v���[��7�Ƀ^�C�g�����S��ǂݍ��� */
//	LoadGraphics("logo.png", 7, 0);
//	SetColorKeyPos(7, 0, 0);

//	/* �v���[��8�Ƀ^�C�g���w�i��ǂݍ��� */
	LoadTitle();
//	LoadGraphics("title.png", 8, 0);

	/* �v���[��22�ɏ������啶���t�H���g��ǂݍ��� #1.60c7o4 */
	LoadGraphics("hebofont4.png", 22, 0);

	/* �v���[��25�Ƀ��[�h�I�����̃��b�Z�[�W��ǂݍ���  */
	LoadGraphics("text.png", 25, 0);

	SetColorKeyRGB(25, 0, 0, 0);

	/* �v���[��26�ɒi�ʕ\���摜��ǂݍ��� #1.60c7t2.2 */
	LoadGraphics("grade.png", 26, 0);
	SetColorKeyRGB(26,255,0,255);

	/* �v���[��27�Ƀ~���[�G�t�F�N�g�摜��ǂݍ��� #1.60c7t2.2 */
	LoadGraphics("mirror_effect_TAP.png", 27, 0);
	//SetColorKeyRGB(27,255,0,255);

	/* �v���[��28�ɃA�C�e������ǂݍ��� #1.60c7o4 */
	LoadGraphics("item.png", 28, 0);
	SetColorKeyRGB(28,255,0,255);

	/* �v���[��29�ɑ��쒆�u���b�N�̎���g��ǂݍ��� #1.60c7o5 */
	LoadGraphics("guide.png", 29, 0);
	SetColorKeyRGB(29,0,0,0);

	/* �v���[��31�Ƀt�H���g(��)��ǂݍ��� */
	LoadGraphics("hebofont3.png", 31, 0);
	SetColorKeyRGB(31,0,0,0);

	/* �u���b�N�����G�t�F�N�g��ǂݍ��� */
	if(breakti) {
		LoadGraphics("break0.png", 32, 0);
		LoadGraphics("break1.png", 33, 0);
		LoadGraphics("break2.png", 34, 0);
		LoadGraphics("break3.png", 35, 0);
		LoadGraphics("break4.png", 36, 0);
		LoadGraphics("break5.png", 37, 0);
		LoadGraphics("break6.png", 38, 0);
		LoadGraphics("break7.png", 39, 0);
	SetColorKeyRGB(32,   0, 0,   0);
	SetColorKeyRGB(33,   0, 0,   0);
	SetColorKeyRGB(34,   0, 0,   0);
	SetColorKeyRGB(35,   0, 0,   0);
	SetColorKeyRGB(36,   0, 0,   0);
	SetColorKeyRGB(37,   0, 0,   0);
	SetColorKeyRGB(38,   0, 0,   0);
	SetColorKeyRGB(39,   0, 0,   0);
	} else {
		LoadGraphics("break0_tap.png", 32, 0); // ���u���b�N�ǉ� #1.60c7i5
		LoadGraphics("break1_tap.png", 33, 0);
		LoadGraphics("break2_tap.png", 34, 0);
		LoadGraphics("break3_tap.png", 35, 0);
		LoadGraphics("break4_tap.png", 36, 0);
		LoadGraphics("break5_tap.png", 37, 0);
		LoadGraphics("break6_tap.png", 38, 0);
		LoadGraphics("break7_tap.png", 39, 0);
	SetColorKeyRGB(32, 255, 0, 255);
	SetColorKeyRGB(33, 255, 0, 255);
	SetColorKeyRGB(34, 255, 0, 255);
	SetColorKeyRGB(35, 255, 0, 255);
	SetColorKeyRGB(36, 255, 0, 255);
	SetColorKeyRGB(37, 255, 0, 255);
	SetColorKeyRGB(38, 255, 0, 255);
	SetColorKeyRGB(39, 255, 0, 255);
	}

	/* �v���[��40�`46�Ƀu���b�N�G��ǂݍ��� #1.60c7o8 */
	LoadGraphics("heboblk0.png", 40, 0);	// TGM
	LoadGraphics("heboblk1.png", 41, 0);	// TI & ARS & ARS2
	LoadGraphics("heboblk2.png", 42, 0);	// WORLD & WORLD2
	LoadGraphics("heboblk3.png", 43, 0);	// WORLD3

	/* �v���[��44�Ƀ~�b�V�������[�h�p�摜��ǂݍ��� */
	LoadGraphics("heboris_road.png", 44, 0);
	SetColorKeyRGB(44, 0, 0, 0);

	/* �v���[��45�Ƀ��C�����������p�摜��ǂݍ��� */
	LoadGraphics("del_field.png", 45, 0);
	SetColorKeyRGB(45, 0, 0, 0);

	/* �v���[��46�Ƀv���`�i�u���b�N�ƃA�C�e���G��ǂݍ��� */
	LoadGraphics("heboblk_sp.png", 46, 0);

	/* �v���[��47�`53�ɉԉ΂�ǂݍ��� */
	LoadGraphics("hanabi_red.png",       47, 0);
	LoadGraphics("hanabi_orange.png",    48, 0);
	LoadGraphics("hanabi_yellow.png",    49, 0);
	LoadGraphics("hanabi_green.png",     50, 0);
	LoadGraphics("hanabi_waterblue.png", 51, 0);
	LoadGraphics("hanabi_blue.png",      52, 0);
	LoadGraphics("hanabi_purple.png",    53, 0);
	SetColorKeyRGB(47, 0, 0, 0);
	SetColorKeyRGB(48, 0, 0, 0);
	SetColorKeyRGB(49, 0, 0, 0);
	SetColorKeyRGB(50, 0, 0, 0);
	SetColorKeyRGB(51, 0, 0, 0);
	SetColorKeyRGB(52, 0, 0, 0);
	SetColorKeyRGB(53, 0, 0, 0);

	/* �v���[��54�ɃA�C�e���Q�[�W��ǂݍ��� */
	LoadGraphics("item_guage.png",       54, 0);
	SetColorKeyRGB(54, 255, 0, 255);

	/* �v���[��55�ɉ�]���[�����\�w�W��ǂݍ��� */
	LoadGraphics("rot.png",              55, 0);
	SetColorKeyRGB(55, 255, 0, 255);

	/* �v���`�i�u���b�N�����G�t�F�N�g��ǂݍ��� */
	LoadGraphics("perase1.png", 57, 0);
	LoadGraphics("perase2.png", 58, 0);
	LoadGraphics("perase3.png", 59, 0);
	LoadGraphics("perase4.png", 60, 0);
	LoadGraphics("perase5.png", 61, 0);
	LoadGraphics("perase6.png", 62, 0);
	LoadGraphics("perase7.png", 63, 0);

	SetColorKeyRGB(57, 0, 0, 0);
	SetColorKeyRGB(58, 0, 0, 0);
	SetColorKeyRGB(59, 0, 0, 0);
	SetColorKeyRGB(60, 0, 0, 0);
	SetColorKeyRGB(61, 0, 0, 0);
	SetColorKeyRGB(62, 0, 0, 0);
	SetColorKeyRGB(63, 0, 0, 0);

	LoadGraphics("heboblk0B.png", 64, 0);

	LoadGraphics("shootingstar.png", 65, 0);
	SetColorKeyRGB(65, 0, 0, 0);

	/* TI���~���[���o�摜��ǂݍ��� */
	LoadGraphics("fldmirror01.png", 66, 0);
	LoadGraphics("fldmirror02.png", 67, 0);
	LoadGraphics("fldmirror03.png", 68, 0);
	LoadGraphics("fldmirror04.png", 69, 0);

	SetColorKeyRGB(66, 0, 0, 0);
	SetColorKeyRGB(67, 0, 0, 0);
	SetColorKeyRGB(68, 0, 0, 0);
	SetColorKeyRGB(69, 0, 0, 0);

	/* �X�^�b�t���[���̉摜��ǂݍ��� */
	LoadGraphics("staffroll.png", 70, 0);
	SetColorKeyRGB(70, 0, 0, 0);

	LoadGraphics("heboblk4_5.png", 73, 0);

	LoadGraphics("fade.png", 72, 0);
	SetColorKeyRGB(72, 255, 255, 255);

	LoadGraphics("heboblk_old.png", 74, 0);

	LoadGraphics("tomoyo_eh_fade.png", 75, 0);
	SetColorKeyRGB(75, 255, 0, 255);

	LoadGraphics("heboblk_big.png", 76, 0);
	LoadGraphics("line.png", 77, 0);//�����L���O�̃��C��
	SetColorKeyRGB(77, 0, 0, 0);

	LoadGraphics("laser.png", 78, 0);
	SetColorKeyRGB(78, 255, 0, 255);

	LoadGraphics("shuffle_field_effect.png", 79, 0);
	SetColorKeyRGB(79, 255, 0, 255);

	LoadGraphics("heboblk6.png", 80, 0);

	LoadGraphics("text2.png", 81, 0);
	SetColorKeyRGB(81, 0, 0, 0);

	LoadGraphics("itemerase.png", 82, 0);
	SetColorKeyRGB(82,0,0,0);

	LoadGraphics("heboblk_sp2.png", 83, 0);

	LoadGraphics("rotstext.png", 84, 0);
	SetColorKeyRGB(84, 0, 0, 0);
	LoadGraphics("hebofont5.png", 85, 0);
	SetColorKeyRGB(85, 172, 136, 199);

	LoadGraphics("gamemodefont.png", 86, 0);
	SetColorKeyRGB(86, 0, 0, 0);

	LoadGraphics("rollmark.png", 87, 0);
	SetColorKeyRGB(87, 0, 0, 0);

	//�v���[��88�Ԏg�p���c

	LoadGraphics("itemGra.png", 89, 0);

//	EnableBlendColorKey(85, 1);
	/* 050825 ��ʃ��[�h�g����������-- �������� */
	/* x�{�g��p�T�[�t�F�X*/
	// snapshot�p�ɁA�g�債�Ȃ��ꍇ���_�~�[�v���[���쐬 #1.60c
	if((screenMode == 0) || (screenMode == 1)) { sw = 320; sh = 240; }
	else if(screenMode == 4) { sw = 800; sh = 600; }
	else if(screenMode == 5) { sw = 1024; sh = 768; }
	else if(screenMode == 6) { sw = 1280; sh = 960; }
	else if((screenMode == 2) || (screenMode == 3) || (screenMode > 6)) { sw = 640; sh = 480; }
	/* �����܂� */
	ExCreateSurface(9, sw, sh);

	/* �v���[��23�ɋ����̂��߂̃o�b�t�@ */
//	if(mirror) {
		ExCreateSurface(23, 320, 240);
//	}

	/* �w�i����������		�c��loadBG�ֈړ� C7T2.5EX */


	// �^�C�g���摜���Â����� #1.60c7o5
	if(background == 2) {
		ExCreateSurface(30, 320, 240);
		SwapToSecondary(30);
		ExBltFastRect(8, 0, 0,0,0,320,240);

		for(i = 0; i < 3; i++)
			BlendExBlt(24, (i % 3) * 120, 0, 256 - fldtr, 256 - fldtr, 256 - fldtr, fldtr, fldtr, fldtr);

		SwapToSecondary(30);
	}
}

/* �w�i�ǂݍ��݂Ɣ����������̖��ߍ��� C7T2.5EX */
//SINGLE-DUAL��̕ύX���ɓǂݒ����K�v��������̂̂�
void loadBG(int players,int vsmode){
		int i, j, k, tr,max;
		int movframe, framemax, tmp1, tmp2;

	/* �v���[��10�`�Ƀo�b�N��ǂݍ��� */
	LoadBackground("back01.png", 10, 0);
	LoadBackground("back02.png", 11, 0);
	LoadBackground("back03.png", 12, 0);
	LoadBackground("back04.png", 13, 0);
	LoadBackground("back05.png", 14, 0);
	LoadBackground("back06.png", 15, 0);
	LoadBackground("back07.png", 16, 0);
	LoadBackground("back08.png", 17, 0);
	LoadBackground("back09.png", 18, 0);
	LoadBackground("back10.png", 19, 0);
	LoadBackground("back11.png", 20, 0);
	LoadBackground("back12.png", 21, 0);

	if(vsbg == 1)
		LoadBackground("back_vs.png", 71, 0);
	else
		LoadBackground("back01.png", 71, 0);

	max = 22;
	EnableBlendColorKey(3, 1);

	/* �w�i���������� */
	if(!skip_viewbg) {
		for(i = 10; i < 72; i++) {
			if(i >= max){	//back12(21)�̎��͑ΐ�p�w�i(71)
				i = 71;
				players = 1;	//�ΐ�p�Ȃ̂�DUAL��
			}

			if(i <= 21) {
				// ���ʔw�i
				if(back_mov_f[i - 10] == 0)
					framemax = 1;
				else
					framemax = back_mov_f[i - 10];
			} else {
				// �ΐ�w�i
				if(back_mov_f[12] == 0)
					framemax = 1;
				else
					framemax = back_mov_f[12];
			}

			SwapToSecondary(i);

			for(movframe = 0; movframe < framemax; movframe++) {
				tmp1 = ((movframe / 10) * 320);
				tmp2 = ((movframe % 10) * 240);

				for(j = 0; j < 1 +players; j++) {
					if(background == 2) {
						BlendExBltRect(24, (120 + 192 * j - 96 * players) + tmp1, 40 + tmp2, 0, 0, 80, 160, 256 - fldtr, 256 - fldtr, 256 - fldtr, fldtr, fldtr, fldtr);
					}

					// �O���f�[�V�����������Ȃ߂炩��#1.60c7p9ex
					if(!top_frame){
						BlendExBltRect(3, (112 + 192 * j - 96 * players) + tmp1, tmp2, 101, 128, 100 - 20, 33, 256 - fldtr, 256 - fldtr, 256 - fldtr, fldtr, fldtr, fldtr);
						for(k = 0; k < 20; k++) {
							tr = (256 - fldtr) * (19 - k) / 20;
							tr = 256 - tr;
							BlendExBltRect(3, (112 + 192 * j - 96 * players) + (80 + k) + tmp1, tmp2, 101 + (80 + k), 128, 1, 33, 256 - tr, 256 - tr, 256 - tr, tr, tr, tr);
						}
					}
					else
					{
						BlendExBltRect(3, (97 + 192 * j - 96 * players) + tmp1, tmp2, 127, 423, 126, 35, 256 - fldtr, 256 - fldtr, 256 - fldtr, fldtr, fldtr, fldtr);
					}
				}
			}

			SwapToSecondary(i);
		}
	}
	EnableBlendColorKey(3, 0);
}

/* ���ʉ��ǂݍ��� */
// initialize����Ɨ� #1.60c7o5
void loadWaves(void) {
	/* ���ʉ���ǂݍ��� */
	LoadWave("res/se/shaki.wav", 0);
	LoadWave("res/se/kon.wav", 1);
	LoadWave("res/se/gon.wav", 2);
	LoadWave("res/se/kachi.wav", 3);
	LoadWave("res/se/rotate.wav", 4);
	LoadWave("res/se/move.wav", 5);
	LoadWave("res/se/hold.wav", 6);
	LoadWave("res/se/tumagari.wav", 7);
	LoadWave("res/se/gameover.wav", 8);
	LoadWave("res/se/lvstop.wav", 9);
	LoadWave("res/se/kettei.wav", 10);

	LoadWave("res/se/erase1.wav", 11);
	LoadWave("res/se/erase2.wav", 12);
	LoadWave("res/se/erase3.wav", 13);
	LoadWave("res/se/erase4.wav", 14);

	LoadWave("res/se/ready.wav", 15);
	LoadWave("res/se/go.wav", 16);

	LoadWave("res/se/applause.wav", 17);
	LoadWave("res/se/cheer.wav", 18);
	LoadWave("res/se/levelup.wav", 19);

	LoadWave("res/se/up.wav", 20);
	LoadWave("res/se/block1.wav", 21);
	LoadWave("res/se/block2.wav", 22);
	LoadWave("res/se/block3.wav", 23);
	LoadWave("res/se/block4.wav", 24);
	LoadWave("res/se/block5.wav", 25);
	LoadWave("res/se/block6.wav", 26);
	LoadWave("res/se/block7.wav", 27);

	LoadWave("res/se/ttclear.wav", 28);
	LoadWave("res/se/gm.wav", 29);
	LoadWave("res/se/rankup.wav", 30);
	LoadWave("res/se/stageclear.wav", 31);
	LoadWave("res/se/hurryup.wav", 32);
	LoadWave("res/se/timeover.wav", 33);
	LoadWave("res/se/tspin.wav", 34);
	LoadWave("res/se/hanabi.wav", 35);
	LoadWave("res/se/missionclr.wav", 36);

	LoadWave("res/se/thunder.wav", 37);

	LoadWave("res/se/warning.wav", 38);

	LoadWave("res/se/medal.wav", 39);
	LoadWave("res/se/pinch.wav", 40);

	LoadWave("res/se/platinaerase.wav",41);
	LoadWave("res/se/timeextend.wav",42);
	LoadWave("res/se/stgstar.wav",43);
	LoadWave("res/se/ace_sonic_lock.wav",44);
	LoadWave("res/se/regret.wav",45);
	LoadWave("res/se/cool.wav",46);

	LoadWave("res/se/timestop.wav",47);
	LoadWave("res/se/tserase.wav",48);
	//SetLoopModeWave(40, 1);	//#1.60c7l6
}

/* BGM�ǂݍ��� */
void loadBGM(void) {
	int i;

	StrCpy(string[0],  "res/bgm/bgm01");		// bgmlv 0 �v���C���iMASTER   0�`499�jplaywave(50)
	StrCpy(string[1],  "res/bgm/bgm02");		// bgmlv 1 �v���C���iMASTER 500�`899�j
	StrCpy(string[2],  "res/bgm/bgm03");		// bgmlv 2 �v���C���iMASTER 900�`998�ADEVIL 0�`499�j
	StrCpy(string[3],  "res/bgm/bgm04");		// bgmlv 3 �v���C���iDEVIL  500�`699�j
	StrCpy(string[4],  "res/bgm/bgm05");		// bgmlv 4 �v���C���iDEVIL  700�`999�j
	StrCpy(string[5],  "res/bgm/bgm06");		// bgmlv 5 �v���C���iDEVIL  1000�ȍ~�j
	StrCpy(string[6],  "res/bgm/ending");		// bgmlv 6 �v���C���i�G���f�B���O�j
	StrCpy(string[7],  "res/bgm/ending_b");		// bgmlv 7 �v���C���iBEGINNER�G���f�B���O�j
	StrCpy(string[8],  "res/bgm/tomoyo");		// bgmlv 8 �v���C�� �ʏ�iTOMOYO�j
	StrCpy(string[9],  "res/bgm/tomoyo_ex");	// bgmlv 9 �v���C�� EX�X�e�[�W�iTOMOYO�j
	StrCpy(string[10], "res/bgm/vsmode");		// bgmlv 10 �v���C���i�ΐ탂�[�h�jplaywave(60)
	StrCpy(string[11], "res/bgm/title");		// bgmlv 11 �^�C�g��
	StrCpy(string[12], "res/bgm/select");		// bgmlv 12 ���[�h�Z���N�g62
	StrCpy(string[13], "res/bgm/nameentry");	// bgmlv 13 �l�[���G���g���[
	StrCpy(string[14], "res/bgm/tomoyo_eh");	// bgmlv 14 �v���C�� E-Heart�iTOMOYO�j
	StrCpy(string[15], "res/bgm/fever");		// bgmlv 15 FEVER������
	StrCpy(string[16], "res/bgm/mission_ex01");	// bgmlv 16 �v���C�� �~�b�V��������1
	StrCpy(string[17], "res/bgm/mission_ex02");	// bgmlv 17 �v���C�� �~�b�V��������2
	StrCpy(string[18], "res/bgm/mission_ex03");	// bgmlv 18 �v���C�� �~�b�V��������3
	StrCpy(string[19], "res/bgm/tomoyo_eh_final");	// bgmlv 19 �v���C E-Heart���X�gplaywave(69)

	for(i = 0; i <= 19; i++) {
		if(bgmload[i] == 1){
			// �g���q�����߂�
			if(wavebgm == 1) StrCat(string[i], ".mid");				// MIDI
			else if(wavebgm == 3) StrCat(string[i], ".ogg");		// OGG
			else if(wavebgm == 4) StrCat(string[i], ".mp3");		// MP3
			else if(wavebgm == 5) StrCat(string[i], ".mod");		// MOD (.mod)
			else if(wavebgm == 6) StrCat(string[i], ".it");			// MOD (.it)
			else if(wavebgm >= 7) StrCat(string[i], ".xm");			// MOD (.xm)
			else StrCat(string[i], ".wav");							// WAV

			// �ǂݍ���
			LoadWave(string[i], 50 + i);

			// ���[�vON
			SetLoopModeWave(50 + i, 1);
		}
	}

	// �G���f�B���O�ȃ��[�v��
	//SetLoopModeWave(56, 0);
	//SetLoopModeWave(57, 0);
}

//������������������������������������������������������������������������������
//  �ݒ���e���o�b�N�A�b�v����
//������������������������������������������������������������������������������
void backupSetups() {
	setupBak[0]  = smooth;
	setupBak[1]  = nanameallow;
	setupBak[2]  = sonicdrop;
	setupBak[3]  = fastlrmove;
	setupBak[4]  = rots[0] +rots[1] * 10;	// ��]�����ݒ� #1.60c
	setupBak[5]  = item_interval;			// �A�C�e���o���Ԋu
	setupBak[6]  = w_reverse;				// ���[���h����]�����t�] #1.60c7f8
	setupBak[7]  = downtype;				// ������#1.60c7f9
	setupBak[8]  = lvupbonus;				// ���x���A�b�v�{�[�i�X #1.60c7g3
	setupBak[9]  = disable_hold;			// HOLD�֎~ #1.60c7n7
	setupBak[10] = disable_irs;				// IRS�֎~ #1.60c7n7
	setupBak[11] = disable_wallkick;		// �ǏR��֎~ #1.60c7q2ex
	setupBak[12] = r_irs;					// IRS� #1.60c7q6
	setupBak[13] = world_i_rot;				// ���[���h���[����I�^�̉�]�@�� #1.60c7r7
	setupBak[14] = spawn_y_type;			// �o���ʒu�^�C�v #1.60c7s2
	setupBak[15] = tspin_type;				// T-�X�s���̎�ށiDS���Ń{�[�i�X���ǉ����ꂽ���߁jC7T6.4
	setupBak[16] = b2bcheck;				// Back to Back
	setupBak[17] = nanamedown;
	setupBak[18] = ace_irs;
	setupBak[19] = ready_go_style;
	setupBak[20] = devil_randrise;			// DEVIL�̃����_������オ��
	setupBak[21] = ybigtype;				// BIG�̏c�ړ��P��
	setupBak[22] = vs_time;
	setupBak[23] = wintype;
	setupBak[24] = vs_goal;
	setupBak[25] = noitem;
	setupBak[26] = disrise;

}

//������������������������������������������������������������������������������
//  �ݒ���e���o�b�N�A�b�v����߂�
//������������������������������������������������������������������������������
void restoreSetups() {
	smooth        = setupBak[0];
	nanameallow   = setupBak[1];
	sonicdrop     = setupBak[2];
	fastlrmove    = setupBak[3];
	rots[0]       = setupBak[4] % 10; 	// ��]�����ݒ�1p #1.60c5
	rots[1]       = setupBak[4] / 10; 	// 2p
	item_interval = setupBak[5];		// �A�C�e���o���Ԋu
	w_reverse     = setupBak[6];		// ���[���h����]�����t�] #1.60c7f8
	downtype      = setupBak[7];		// ������^�C�v #1.60c7f9
	lvupbonus     = setupBak[8];		// ���x���A�b�v�{�[�i�X #1.60c7g3
	disable_hold  = setupBak[9];		// HOLD�֎~ #1.60c7n7
	disable_irs   = setupBak[10];		// IRS�֎~ #1.60c7n7
	disable_wallkick = setupBak[11];	// �ǏR��֎~ #1.60c7q2ex
	r_irs         = setupBak[12];		// IRS� #1.60c7q6
	world_i_rot   = setupBak[13];		// ���[���h���[����I�^�̉�]�@�� #1.60c7r7
	spawn_y_type  = setupBak[14];		// �o���ʒu�^�C�v #1.60c7s2
	tspin_type    = setupBak[15];		// T-�X�s���̎�ށiDS���Ń{�[�i�X���ǉ����ꂽ���߁jC7T6.4
	b2bcheck      = setupBak[16];		// b2b
	nanamedown    = setupBak[17];
	ace_irs       = setupBak[18];
	ready_go_style= setupBak[19];
	devil_randrise= setupBak[20];		// DEVIL�̃����_������オ��
	ybigtype      = setupBak[21];		// BIG�̏c�ړ��P��
	vs_time       = setupBak[22];
	wintype       = setupBak[23];
	vs_goal       = setupBak[24];
	noitem        = setupBak[25];
	disrise       = setupBak[26];
	use_item[0]   = 0;
	use_item[1]   = 0;
}

//������������������������������������������������������������������������������
//  �L�[�{�[�h���͊֘A
//������������������������������������������������������������������������������
#if		0
int getMaxKey()
{
	return 256;
}

int IsPushDeleteKey()
{
	return IsPushKey(0xD3);
}

int IsPushBSKey()
{
	return IsPushKey(0x0E);
}
#endif

//������������������������������������������������������������������������������
//  halt;
//������������������������������������������������������������������������������
void spriteTime() {
#if		0
	int ReSize, i, j;

	// ��������(�c�C����̂�)
	if(mirror && domirror && (maxPlay > 0) && !tomoyo_domirror[0] && !tomoyo_domirror[1]) {
		SwapToSecondary(23);
		// �t�����ɕ���
		// ygs2k��ExBltRect�ł́A�������w��ɂ�锽�]�͏o���Ȃ��炵���̂�for���[�v���g�p
		if(getDrawRate() == 1){
			for(i = 160; i < 320; i++) {
				BltFastRect(23, 319 - i, 0, i - 160, 0, 1, 240);
			}
		} else {
			for(i = 320; i < 640; i++) {
				BltFastRect(23, 639 - i, 0, i - 320, 0, 1, 480);
			}
		}
		SwapToSecondary(23);
		ExBltFast(23, 160, 0);	// �������E�����ɔ��f
	}

	if(IsPushKey(ssKey)) {			// �X�i�b�v�V���b�g #1.60c
		sprintf(string[0], "ss\\ss_%04d.png", ssc);
		if( screenMode < 4 ) {
			SwapToSecondary(9);
			SaveBitmap(string[0], 9, 0, 0, sw, sh);
			SwapToSecondary(9);
		} else {
			SaveBitmap(string[0], 9, 0, 0, sw, sh);
		}
		ssc++;
	}

	if(oncap && !(count % capi)) {	// �A���X�i�b�v
		sprintf(string[0], "cap\\hc%06d.png", capc);
		SwapToSecondary(9);
		SaveBitmap(string[0], 9, capx, capy, capw, caph);
		SwapToSecondary(9);
		capc++;
	}
	if(IsPushKey(capKey)) oncap = !oncap;

	if( screenMode >= 4 ) {
		if(screenMode == 4) { ReSize = 25; }
		else if(screenMode == 5) { ReSize = 32; }
		else if(screenMode == 6) { ReSize = 40; }
		else { ReSize = 10; }
		SwapToSecondary(9);		// �Z�J���_���v���[�����A�_�~�[�Ńv���[��9�Ɠ���ւ���
		ExBltFastRectR(9, 0, 0, 0, 0, 320, 240, (65536 * ReSize) / 10 / getDrawRate(), (65536 * ReSize) / 10 / getDrawRate());
		SwapToSecondary(9);
		ExBltFast(9, 0, 0);
	}

	// ESC�L�[�������ꂽ�瑦���I��
	if(IsPushEscKey()) {
		//RankingSave();
		//ST_RankingSave();
		maxPlay = tmp_maxPlay;
		if(playback){
			restoreSetups();
			if(!tmp_maxPlay)
				maxPlay = 0;
		}
		SaveConfig();
		Quit();
	}

	halt;

	PlayAllSE();

	ClearSecondary();
#endif

	if ( !YGS2kHalt() )
	{
		maxPlay = tmp_maxPlay;
		if(playback){
			restoreSetups();
			if(!tmp_maxPlay)
				maxPlay = 0;
		}
		SaveConfig();
		loopFlag = false;
	}

	PlayAllSE();
}
