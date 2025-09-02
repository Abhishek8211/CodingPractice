import matplotlib.pyplot as plt
import pandas as pd
import matplotlib.dates as mdates

# Define tasks and timeline for 3-year roadmap
data = {
    'Task': [
        'Core Machine Learning Algorithms',
        'Deep Learning (CNN, RNN, GANs)',
        'Advanced ML (Reinforcement Learning)',
        'Specializations (NLP, CV)',
        'MLOps & Deployment',
        'Capstone Projects & Research Papers'
    ],
    'Start': [
        '2025-01-01',
        '2025-09-01',
        '2026-07-01',
        '2027-01-01',
        '2027-07-01',
        '2028-01-01'
    ],
    'End': [
        '2025-08-31',
        '2026-06-30',
        '2026-12-31',
        '2027-06-30',
        '2027-12-31',
        '2028-06-30'
    ]
}

# Create DataFrame
df = pd.DataFrame(data)
df['Start'] = pd.to_datetime(df['Start'])
df['End'] = pd.to_datetime(df['End'])

# Stylish colors
colors = [
    '#6EC1E4', '#FDB813', '#E15F99', '#82C596',
    '#C38D9E', '#41B3A3'
]

# Plot
fig, ax = plt.subplots(figsize=(18, 10))  # Wider and bigger

for i, (task, color) in enumerate(zip(df['Task'], colors)):
    ax.barh(task, (df['End'][i] - df['Start'][i]).days, left=df['Start'][i],
            color=color, edgecolor='black', height=0.6)

# Milestone markers
for i in range(len(df)):
    ax.plot(df['End'][i], i, marker="o", color="black", markersize=8)

# X-axis formatting
ax.xaxis.set_major_locator(mdates.MonthLocator(bymonth=(1,7)))  # Show every January and July
ax.xaxis.set_major_formatter(mdates.DateFormatter('%b %Y'))
plt.xticks(rotation=45, ha='right')

# Labels and title
plt.xlabel('Timeline', fontsize=14, weight='bold')
plt.title('🚀 Machine Learning Journey (2025 - 2028)', fontsize=20, weight='bold', color='#222222')
plt.grid(axis='x', linestyle='--', alpha=0.5)
ax.invert_yaxis()

# Background and style
fig.patch.set_facecolor('#ffffff')
ax.set_facecolor('#f9f9f9')
for spine in ['top', 'right', 'left']:
    ax.spines[spine].set_visible(False)

plt.tight_layout()
plt.show()
