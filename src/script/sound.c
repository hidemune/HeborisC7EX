//������������������������������������������������������������������������������
//  �S���ʉ���~ #1.60c7j6
//������������������������������������������������������������������������������
void StopAllWaves(void) {
	int i;
	for(i = 0; i <= 49; i++) {
		StopWave(i);
		SetVolumeWave(i, sevolume);	// #1.60c7o8
	}
}

//������������������������������������������������������������������������������
//  �SBGM��~ #1.60c7l1
//������������������������������������������������������������������������������
void StopAllBGM(void) {
	int i;
	for(i = 50; i <= 69; i++) {
		StopWave(i);
		SetVolumeWave(i, bgmvolume);	// #1.60c7o8
	}
}

//������������������������������������������������������������������������������
//  ���ʉ��Đ��i�̗\��j
//������������������������������������������������������������������������������
void PlaySE(int no) {
	if(no < 50) {
		se_play[no] = 1;
	}
}

void StopSE(int no) {
	if(no < 50) {
		se_play[no] = 2;
	}
}

// �\�񂳂ꂽ���ʉ���S�čĐ�
void PlayAllSE() {
	int i;

	for(i = 0; i < 50; i++) {
		if(se_play[i] == 1) {
			PlayWave(i);
			se_play[i] = 0;
		}else if(se_play[i] == 2){
			StopWave(i);
			se_play[i] = 0;
		}
	}
}


//������������������������������������������������������������������������������
//  �Q�[���J�n����BGM���x���ݒ�
//������������������������������������������������������������������������������
int setstartBGM(int mode, int pl) {
	int	i,bgmmode;

	i = 0;

	if(mode == 6) {
		// TOMOYO���[�h�ł͊J�n�X�e�[�W�Ō��܂�
		if(((start_stage[pl] <= 26) || (start_stage[pl] > 44)) && (start_stage[pl] < 100))
			i = 8 + ((start_stage[pl] >= 20) && (start_stage[pl] <= 26));	//TI & EX & ACE-TGT
		else if(start_stage[pl] == 44)
			i=19;
		else if(start_stage[pl] < 100)
			i = 14;		//E-Heart
		else{			//F-Point
			if(stage[pl] <= 129) i = 8;
			else if(stage[pl] <= 169) i = 14;
			else if(stage[pl] <= 189) i = 9;
			else i = 19;
		}
	} else if(mode == 7) {
		// ACE���[�h�ł̓A�i�U�[���ǂ����Ō��܂�
		i = ace_bgmlist[anothermode[pl] * 3];
	} else if(mode == 8) {
		// MISSION���[�h�ł�mission_bgm�Ō��܂�
		i = mission_bgm[c_mission];
	} else if((mode == 9) && (std_opt[pl] <= 1)){
		i = p_bgmlv;
	} else if(mode == 4){
		i = 10;
	} else {
		bgmmode = BgmModeDecide(pl,mode);
		// �ʏ탂�[�h
		if(((mode == 1) || (mode == 2)) && (enable_grade[pl] == 4))
				i = 0 + (mode == 2);
		else if(mode != 10) {
			// TGM
			while(1) {
				if(bgmfadestart[(bgmmode * 6) + i] < 0) {
					i++;
				} else {
					break;
				}
			}
		} else {
			// ORI
			while(1) {
				if(ori_bgmfadestart[std_opt[pl] * 4 + i] < 0) {
					i++;
				} else {
					break;
				}
			}
		}
	}

	return i;
}

// ���x���Z���N�g�p #1.60c7s6
int setstartBGM_debug(int mode, int pl) {
	int i,bgmmode;

	i = 0;

	if(mode != 10) {
		bgmmode = BgmModeDecide(pl,mode);
		// TGM
		while(1) {
			if(tc[pl] >= bgmfadestart[bgmmode * 6 + i]) {
				i++;
			} else {
				break;
			}
		}
	} else {
		// ORI
		while(1) {
			if(lv[pl] >= ori_bgmfadestart[std_opt[pl] * 4 + i]) {
				i++;
			} else {
				break;
			}
		}
	}

	return i;
}
int BgmModeDecide(int pl,int mode){
	if(mode==0){
		if(!novice_mode[pl]){//HANABI
			return 0;
		}else{
			return 1;//SCORE
		}
	}else if(mode==3){
		if(!devil_minus[pl]){
			return 5;
		}else{
			return 6;
		}
	}else{
		if(enable_grade[pl]==1){
			return 2;
		}else if(enable_grade[pl]==4){
			return 4;
		}else{
			return 3;
		}
	}
}
//������������������������������������������������������������������������������
//  ���v���C��p����BGM���x���ݒ�
//������������������������������������������������������������������������������
int ReplaysetstartBGM(int mode, int pl) {
	int	i,bgmmode;

	i = 0;

	if(mode == 6) {
		// TOMOYO���[�h�ł͊J�n�X�e�[�W�Ō��܂�
		if(((start_stage[pl] <= 26) || (start_stage[pl] > 44)) && (start_stage[pl] < 100))
			i = 8 + ((start_stage[pl] >= 20) && (start_stage[pl] <= 26));	//TI & EX & ACE-TGT
		else if(start_stage[pl] == 44)
			i=19;
		else if(start_stage[pl] < 100)
			i = 14;		//E-Heart
		else{			//F-Point
			if(stage[pl] <= 129) i = 8;
			else if(stage[pl] <= 169) i = 14;
			else if(stage[pl] <= 189) i = 9;
			else i = 19;
		}
	} else if(mode == 7) {
		// ACE���[�h�ł̓A�i�U�[���ǂ����Ō��܂�
		i = ace_bgmlist[anothermode[pl] * 3];
	} else if(mode == 8) {
		// MISSION���[�h�ł�mission_bgm�Ō��܂�
		i = mission_bgm[c_mission];
	} else {
		bgmmode = ReplayBgmModeDecide(0,gameMode[0], novice_mode[0],devil_minus[0],enable_grade[0]);
		if(((mode == 1) || (mode == 2)) && (enable_grade[pl] == 4))
				i = 0 + (mode == 2);
		// �ʏ탂�[�h
		if(mode != 10) {
			// TGM
			while(1) {
				if(Replaybgmfadestart[mode * 6 + i + 24] < 0) {
					i++;
				} else {
					break;
				}
			}
		} else {
			// ORI
			while(1) {
				if(ori_bgmfadestart[std_opt[pl] * 4 + i] < 0) {
					i++;
				} else {
					break;
				}
			}
		}
	}

	return i;
}

//������������������������������������������������������������������������������
//  BGM�t�F�[�h�A�E�g
//������������������������������������������������������������������������������
void bgmFadeout(void) {
	int player;

	if(wavebgm == 0) return;

	for( player = 0; player <= maxPlay; player++ ) {
		if((gameMode[player] <= 3) || (gameMode[player] == 7) || (gameMode[player] == 10)) {
			// BGM�t�F�[�h�J�n�̃`�F�b�N
			if(timeOn[player]) checkFadeout(player);
		}

		// BGM�t�F�[�h�A�E�g����
		if(fadelv[player] != 0) {
			fadelv[player] = fadelv[player] + (fadelv[player] < 10000) * fade_seed;

			if(-fadelv[player] < bgmvolume)
				SetVolumeWave(50 +bgmlv, -fadelv[player]);
		}
	}
}

//������������������������������������������������������������������������������
//  BGM�̃t�F�[�h�A�E�g�`�F�b�N
//������������������������������������������������������������������������������
void checkFadeout(int pl) {
	int	bgmmode[2];
		if((gameMode[pl] <= 3) && (fadelv[pl] == 0)) {
			if(((gameMode[pl] == 1) || (gameMode[pl] == 2)) && (enable_grade[pl] == 4)) {
				// MASTER�p
				checkMasterFadeout(pl);
				return;
			} else{
				bgmmode[pl] = BgmModeDecide(pl,gameMode[pl]);
				if(tc[pl] >= bgmfadestart[bgmmode[pl] * 6 + bgmlv ]) {
					fadelv[pl] = 50;
				}
			}
		}
		if((gameMode[pl] == 7) && (fadelv[pl] == 0)) {	//ACE & ANOTHER
			if(li[pl] >= ace_bgmfadestart[ace_bgmchange[pl] + (3 * anothermode[pl])]) {
				fadelv[pl] = 50;
			}
		}
		if((gameMode[pl] == 10) && (fadelv[pl] == 0)) {	//ori
			if((lv[pl] == ori_bgmfadestart[ori_opt[pl] * 4 + bgmlv]) && (lc[pl] > 50)){
				fadelv[pl] = 50;
			}
		}
}
// �i��4�ݒ莞��MASTER��20G�p
// ���x�X�L�b�v�ɑΉ����Ă��Ȃ������̂𑽕��C�� C7U3.0
void checkMasterFadeout(int player) {
	int secinlv[2];
	secinlv[player] = tc[player] - ((tc[player] / 100) * 100);		// ���x���̉�2��

	// ��2����85�ȏ�̏ꍇ
	if((secinlv[player] >= 85) && (fadelv[player] == 0)) {
		// 1�Ȗځ�2�Ȗڂ̔���
		if( (((gup3sp_adjust[player] == 2 ) && (tr2[player] + 2 >=40)) || (tr2[player] + 2 >= 50)) && (bgmlv == 0+(gameMode[player] == 2))) {
			fadelv[player] = 50;
//			bgmlv++;

			// 20G�ɂȂ�Ƃ���tr[player]�̐��l���o���Ă���
			if(tr2[player] + 1 == 50) tr_20g[player] = tr[player] + 1;
			else if(tr2[player] + 2 == 50) tr_20g[player] = tr[player] + 2;
			else if(tr2[player] + 11 == 50) tr_20g[player] = tr[player] + 11;	//���x�X�L�b�v��
			else tr_20g[player] = tr[player] + 12;

			regretcancel[player] = 1; //2�ȖڂɂȂ����̂�REGRET������20G�ɂȂ�Ȃ��̂�h��
		}

		// 2�Ȗځ�3�Ȗڂ̔���
		if((((gup3sp_adjust[player] == 2 ) && (tr[player] + 2 >= tr_20g[player] + 20)) || (tr[player] + 2 >= tr_20g[player] + 10)) && (bgmlv == 1+(gameMode[player] == 2))) {
			fadelv[player] = 50;
//			bgmlv++;
		}
		// 3�Ȗځ�4�Ȗڂ̔���
		if((((gup3sp_adjust[player] == 2 ) && (tr[player] + 2 >= tr_20g[player] + 60)) || (tr[player] + 2 >= tr_20g[player] + 70)) && (bgmlv == 2+(gameMode[player] == 2)) && (tc[player] < 900)) {
			fadelv[player] = 50;
//			bgmlv++;
		}
	}
}
//������������������������������������������������������������������������������
//  BGM�̐؂�ւ�
//������������������������������������������������������������������������������
void changeBGM(int player) {
	StopAllBGM();
	if((!isfever[0]) && (!isfever[1]))
		PlayWave(50 +bgmlv);
	fadelv[player] = 0;
	//if((wavebgm >= 1) && (gameMode[0] != 8)) bgmlv = 3;
}

//������������������������������������������������������������������������������
//  �T�E���h�e�X�g#1.60c7c
//������������������������������������������������������������������������������
void SoundTestProc(void) {
	int i;
	int snd;

	snd = 0;

	StopAllWaves();
	StopAllBGM();

	loop {
		count++;
		KeyInput();

		// �w�i�`�� #1.60c7o5
		if(background == 0) {
			for(i = 0; i <= 4; i++) {
				ExBltFastRect(4, 96 * i - (count % 96) / 3, 0, 0, 0, 96, 240);
			}
		} else if(background == 1) {
			for(i = 0; i <= 4; i++) {
				ExBltFastRect(4, 96 * i, 0, 0, 0, 96, 240);
			}
		} else {
			ExBltFast(30, 0, 0);
		}

		printFont(10, 3, "- SOUND TEST MODE -", 4);
		if(snd < 50){
		printFont(17, 6, "SE NO.", 1);
		sprintf(string[0], "%d", snd);
		printFont(23, 6, string[0], 2);
		}
		else{
		printFont(16, 6, "BGM NO.", 1);
		sprintf(string[0], "%d", snd-50);
		printFont(23, 6, string[0], 2);
		}

		printFont(10, 9,  "LEFT  : SOUND NO.-1", 0);
		printFont(10, 11, "RIGHT : SOUND NO.+1", 0);
		printFont(10, 13, "A     : PLAY",        0);
		printFont(10, 15, "B     : EXIT",        0);
		printFont(10, 17, "C     : STOP",        0);

		padRepeat(0);

		// ��
		if((mpc[0] == 1) || ((mpc[0] > tame1) && (mpc[0] % tame2 == 0)))
		if(getPressState(0, 2)) {
			snd--;
			if(snd < 0) snd = 69;
		}

		// ��
		if((mpc[0] == 1) || ((mpc[0] > tame1) && (mpc[0] % tame2 == 0)))
		if(getPressState(0, 3)) {
			snd++;
			if(snd > 69) snd = 0;
		}

		// A�{�^���ōĐ�
		if(getPushState(0, 4)) {
			StopAllWaves();
			StopAllBGM();
			PlayWave(snd);
		}

		// C�{�^���Œ�~
		if(getPushState(0, 6)) {
			StopAllWaves();
			StopAllBGM();
		}

		// B�{�^���Ń^�C�g��
		if(getPushState(0, 5)) {
			StopAllWaves();
			StopAllBGM();
			if(wavebgm == 0) {	// No.30��38�ɕύX #1.60c7i2
				if(IsPlayMIDI()) ReplayMIDI();
			} else if(wavebgm >= 1) PlayWave(61);//�^�C�g��BGM
			return;
		}
		spriteTime();
	}
}
