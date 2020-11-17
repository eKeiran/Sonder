function Initialize()
	print("Calendar Script running")
	local CurrentDayNumber = SKIN:GetVariable('CurrentDayMeter')
	--print(''..CurrentDayNumber..'')
	local LeapYear = SKIN:GetVariable('LeapYearAdj')
	local CurrentStreakTemp = 0
	local DayComplete = 1
	for i = CurrentDayNumber, 1, -1 do
		DayComplete = SKIN:GetVariable('Day'..i)
		if DayComplete == '0' then
			CurrentStreakTemp = CurrentStreakTemp + 1
			if CurrentDayNumber == ''..i  then
				SKIN:Bang('!WriteKeyValue', 'Variables', 'TodayComplete', 1, '#@#Variables.inc')
				SKIN:Bang('!SetVariable', 'TodayComplete', 1)
			end
		elseif CurrentDayNumber == ''..i  then
			CurrentStreakTemp = CurrentStreakTemp
			SKIN:Bang('!WriteKeyValue', 'Variables', 'TodayComplete', 0, '#@#Variables.inc')
			SKIN:Bang('!SetVariable', 'TodayComplete', 0)
		else
			if CurrentDayNumber == 60  and LeapYear == 1 then
				CurrentStreakTemp = CurrentStreakTemp
			else
				SKIN:Bang('!WriteKeyValue', 'Variables', 'CurrentStreak', CurrentStreakTemp, '#@#Variables.inc')
				SKIN:Bang('!SetVariable', 'CurrentStreak', CurrentStreakTemp)
				return CurrentStreakTemp
			end
		end
	end

end
	
function Update()

	return CurrentStreakTemp

end

function ResetDaystoZero()
		
	for i = 1, 366 do
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..i, '1', '#@#Calendar-Day-Variables.inc')
	end
	
end